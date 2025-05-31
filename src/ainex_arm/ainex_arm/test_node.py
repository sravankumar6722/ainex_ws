import rclpy
from rclpy.node import Node
from rclpy.parameter import Parameter
from std_msgs.msg import String, Float32MultiArray
import time
import os
import pandas as pd
from robot_arm.scservo_sdk import *

# Servo Configuration
BAUDRATE = 1000000
DEVICENAME = '/dev/ttyACM0'
PROTOCOL_END = 1

# Control table addresses
ADDR_GOAL_POSITION = 42
ADDR_PRESENT_POSITION = 56  
ADDR_TORQUE_ENABLE = 40
ADDR_GOAL_ACC = 41
ADDR_GOAL_SPEED = 46

# Motion limits
MIN_RAW_POS = 100
MAX_RAW_POS = 1000
MIN_ANGLE = -90
MAX_ANGLE = 90

# Motion settings
SCS_MOVING_ACC = 240
SCS_MOVING_SPEED = 500

# Path to Excel folder
EXCEL_FOLDER = os.path.expanduser('~/ainex_sheets')

def angle_to_position(angle):
    angle = max(MIN_ANGLE, min(MAX_ANGLE, angle))
    scale = (MAX_RAW_POS - MIN_RAW_POS) / (MAX_ANGLE - MIN_ANGLE)
    return int(MIN_RAW_POS + (angle - MIN_ANGLE) * scale)

class HandNode(Node):
    def __init__(self):
        super().__init__('hand_node')

        # Declare and read 'hand' parameter
        self.declare_parameter('hand', 'right')
        self.hand = self.get_parameter('hand').get_parameter_value().string_value

        # Set IDs and topics based on hand
        if self.hand == 'left':
            self.SCS_IDs = [4, 5, 6]
            action_topic = 'left_hand_action'
            result_topic = 'left_hand_action_result'
            angles_topic = 'left_servo_angles'
        else:
            self.SCS_IDs = [1, 2, 3]
            action_topic = 'hand_action'
            result_topic = 'hand_action_result'
            angles_topic = 'servo_angles'

        self.publisher_ = self.create_publisher(Float32MultiArray, angles_topic, 10)
        self.result_publisher_ = self.create_publisher(String, result_topic, 10)
        self.subscription = self.create_subscription(String, action_topic, self.handle_action, 10)

        self.portHandler = PortHandler(DEVICENAME)
        self.packetHandler = PacketHandler(PROTOCOL_END)

        if not self.portHandler.openPort() or not self.portHandler.setBaudRate(BAUDRATE):
            self.get_logger().error("Failed to open port or set baudrate")
            exit()

        for sid in self.SCS_IDs:
            self.packetHandler.write1ByteTxRx(self.portHandler, sid, ADDR_TORQUE_ENABLE, 1)
            self.packetHandler.write1ByteTxRx(self.portHandler, sid, ADDR_GOAL_ACC, SCS_MOVING_ACC)
            self.packetHandler.write2ByteTxRx(self.portHandler, sid, ADDR_GOAL_SPEED, SCS_MOVING_SPEED)

        self.get_logger().info(f"{self.hand.capitalize()} hand node initialized. Ready to receive commands.")
        self.move_to_angles([0, 0, 0])  # Home position

# ...existing code...
    def handle_action(self, msg):
        action = msg.data.strip().lower()
        sheet_file = os.path.join(EXCEL_FOLDER, f'{action}_sheet.xlsx')
        if os.path.exists(sheet_file):
            if action == "salutesequence":
                self.get_logger().info("Executing the special 'salutesequence' gesture!")
            self.execute_gesture(sheet_file)
            self.publish_result(f'{action}_done')
        else:
            self.get_logger().warn(f"No gesture file found for action '{action}' at {sheet_file}")
# ...existing code...

    def move_to_angles(self, angles):
        # Mirror angles for left hand
        if self.hand == 'left':
            angles = [-angle for angle in angles]

        for sid, angle in zip(self.SCS_IDs, angles):
            pos = angle_to_position(angle)
            self.packetHandler.write2ByteTxRx(self.portHandler, sid, ADDR_GOAL_POSITION, pos)

    def execute_gesture(self, filepath):
        try:
            df = pd.read_excel(filepath)
            for _, row in df.iterrows():
                angles = [row['Servo1'], row['Servo2'], row['Servo3']]
                if self.hand == 'left':
                    angles = [-angle for angle in angles]
                delay = float(row['Delay']) if 'Delay' in row else 1.0
                self.move_to_angles(angles)
                time.sleep(delay)
                self.publish_angles()
        except Exception as e:
            self.get_logger().error(f"Failed to execute gesture from {filepath}: {e}")

    def publish_angles(self):
        msg = Float32MultiArray()
        msg.data = self.read_current_angles()
        self.publisher_.publish(msg)

    def read_current_angles(self):
        angles = []
        for sid in self.SCS_IDs:
            pos_speed, _, _ = self.packetHandler.read4ByteTxRx(self.portHandler, sid, ADDR_PRESENT_POSITION)
            raw_pos = SCS_LOWORD(pos_speed)
            angle = MIN_ANGLE + (raw_pos - MIN_RAW_POS) * (MAX_ANGLE - MIN_ANGLE) / (MAX_RAW_POS - MIN_RAW_POS)
            angles.append(round(angle, 2))
        return angles

    def publish_result(self, result):
        msg = String()
        msg.data = result
        self.result_publisher_.publish(msg)
        self.get_logger().info(f"Published Action Result: {result}")

    def cleanup(self):
        self.get_logger().info("Disabling torque and closing port.")
        for sid in self.SCS_IDs:
            self.packetHandler.write1ByteTxRx(self.portHandler, sid, ADDR_TORQUE_ENABLE, 0)
        self.portHandler.closePort()

def main(args=None):
    rclpy.init(args=args)
    node = HandNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.cleanup()
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
