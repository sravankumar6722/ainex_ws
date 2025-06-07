import rclpy
from rclpy.node import Node
from rclpy.parameter import Parameter
from std_msgs.msg import String, Float32MultiArray
from sensor_msgs.msg import JointState
import time
import os
import pandas as pd
import numpy as np
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
SCS_MOVING_SPEED = 1000

# Path to Excel folder
EXCEL_FOLDER = os.path.expanduser('~/ainex_sheets')

def angle_to_position(angle):
    angle = max(MIN_ANGLE, min(MAX_ANGLE, angle))
    scale = (MAX_RAW_POS - MIN_RAW_POS) / (MAX_ANGLE - MIN_ANGLE)
    return int(MIN_RAW_POS + (angle - MIN_ANGLE) * scale)

class HandNode(Node):
    def __init__(self):
        super().__init__('hand_node')

        self.declare_parameter('hand', 'right')
        self.hand = self.get_parameter('hand').get_parameter_value().string_value

        self.left_angles = [0.0, 0.0, 0.0]
        self.right_angles = [0.0, 0.0, 0.0]
        self.last_servo_update = time.time()
        self.servo_update_threshold = 0.1
        self.external_control_active = False

        # Centralized IDs and joint names for both hands
        if self.hand == 'left':
            self.SCS_IDs = [4, 5, 6]
            action_topic = 'left_hand_action'
            result_topic = 'left_hand_action_result'
            angles_topic = 'left_servo_angles'
            self.default_step_delay = 0.0001
            self.joint_names = [
                'base_to_base_servo_joint',
                'shoulder_to_shoulder_servo_joint',
                'elbow_to_elbow_servo_joint'
            ]
        elif self.hand == 'right':
            self.SCS_IDs = [1, 2, 3]
            action_topic = 'hand_action'
            result_topic = 'hand_action_result'
            angles_topic = 'servo_angles'
            self.default_step_delay = 0.01
            self.joint_names = [
                'base_to_right_base_servo_joint',
                'right_shoulder_to_right_shoulder_servo_joint',
                'right_elbow_to_right_elbow_servo_joint'
            ]
        elif self.hand == 'both':
            self.SCS_IDs = [1, 2, 3, 4, 5, 6]
            action_topic = 'both_hands_action'
            result_topic = 'both_hands_action_result'
            angles_topic = 'both_servo_angles'
            self.default_step_delay = 0.01
            self.joint_names = [
                'base_to_right_base_servo_joint',
                'right_shoulder_to_right_shoulder_servo_joint',
                'right_elbow_to_right_elbow_servo_joint',
                'base_to_base_servo_joint',
                'shoulder_to_shoulder_servo_joint',
                'elbow_to_elbow_servo_joint'
            ]
        else:
            self.get_logger().error("Invalid hand parameter! Use right, left, or both.")
            exit()

        self.publisher_ = self.create_publisher(Float32MultiArray, angles_topic, 10)
        self.result_publisher_ = self.create_publisher(String, result_topic, 10)
        self.subscription = self.create_subscription(String, action_topic, self.handle_action, 10)
        self.joint_state_pub = self.create_publisher(JointState, 'joint_states', 10)
        self.joint_state_degrees_pub = self.create_publisher(JointState, 'joint_states_degrees', 10)
        self.joint_state_sub = self.create_subscription(JointState, 'joint_states', self.joint_state_callback, 10)
        self.timer = self.create_timer(0.1, self.timer_callback)

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
        if self.hand == 'both':
            self.move_both_hands_to_angles([0,0,0,0,0,0], step_delay=self.default_step_delay)
        else:
            self.move_to_angles([0, 0, 0], step_delay=self.default_step_delay)

    def joint_state_callback(self, msg):
        try:
            if self.external_control_active:
                return

            if time.time() - self.last_servo_update < self.servo_update_threshold:
                return

            indices = []
            current_positions = []
            for name in self.joint_names:
                if name in msg.name:
                    idx = msg.name.index(name)
                    indices.append(idx)
                    current_positions.append(msg.position[idx])

            if self.hand == 'both':
                if len(indices) != 6:
                    return
                current_angles = [pos * 180.0 / 3.14159265 for pos in current_positions]
                self.external_control_active = True
                self.move_both_hands_to_angles(current_angles, step_delay=0.001)
                self.external_control_active = False
            else:
                if len(indices) != 3:
                    return
                current_angles = [pos * 180.0 / 3.14159265 for pos in current_positions]
                if self.hand == 'left':
                    current_angles[0] = -current_angles[0]
                self.external_control_active = True
                self.move_to_angles(current_angles, step_delay=0.001)
                self.external_control_active = False

            self.last_servo_update = time.time()
        except Exception as e:
            self.get_logger().error(f"Error in joint state callback: {e}")
            self.external_control_active = False

    def handle_action(self, msg):
        action = msg.data.strip().lower()
        if self.hand == 'both':
            sheet_file = os.path.join(EXCEL_FOLDER, f'{action}_sheet.xlsx')
            if os.path.exists(sheet_file):
                self.execute_both_hands_gesture(sheet_file)
                self.publish_result(f'{action}_done')
            else:
                self.get_logger().warn(f"No gesture file found for action '{action}' at {sheet_file}")
        else:
            sheet_file = os.path.join(EXCEL_FOLDER, f'{action}_sheet.xlsx')
            if os.path.exists(sheet_file):
                if action == "salutesequence":
                    self.get_logger().info("Executing the special 'salutesequence' gesture!")
                self.execute_gesture(sheet_file)
                self.publish_result(f'{action}_done')
            else:
                self.get_logger().warn(f"No gesture file found for action '{action}' at {sheet_file}")

    def move_to_angles(self, target_angles, step_deg=2, step_delay=0.01):
        if self.hand == 'left':
            target_angles = [-angle for angle in target_angles]

        current_angles = self.read_current_angles()
        steps = int(max(abs(t - c) for t, c in zip(target_angles, current_angles)) // step_deg) + 1

        for i in range(1, steps + 1):
            intermediate_angles = [
                c + (t - c) * i / steps for c, t in zip(current_angles, target_angles)
            ]
            for sid, angle in zip(self.SCS_IDs, intermediate_angles):
                pos = angle_to_position(angle)
                self.packetHandler.write2ByteTxRx(self.portHandler, sid, ADDR_GOAL_POSITION, pos)
            self.update_and_publish_joint_states(intermediate_angles)
            time.sleep(step_delay)

        for sid, angle in zip(self.SCS_IDs, target_angles):
            pos = angle_to_position(angle)
            self.packetHandler.write2ByteTxRx(self.portHandler, sid, ADDR_GOAL_POSITION, pos)
        self.update_and_publish_joint_states(target_angles)

    def move_both_hands_to_angles(self, angles, step_deg=2, step_delay=0.01):
        # angles: [right1, right2, right3, left1, left2, left3]
        current_angles = self.read_current_angles_both()
        steps = int(max(abs(t - c) for t, c in zip(angles, current_angles)) // step_deg) + 1
        for i in range(1, steps + 1):
            intermediate_angles = [
                c + (t - c) * i / steps for c, t in zip(current_angles, angles)
            ]
            for sid, angle in zip(self.SCS_IDs, intermediate_angles):
                pos = angle_to_position(angle)
                self.packetHandler.write2ByteTxRx(self.portHandler, sid, ADDR_GOAL_POSITION, pos)
            self.update_and_publish_joint_states_both(intermediate_angles)
            time.sleep(step_delay)
        # Final position
        for sid, angle in zip(self.SCS_IDs, angles):
            pos = angle_to_position(angle)
            self.packetHandler.write2ByteTxRx(self.portHandler, sid, ADDR_GOAL_POSITION, pos)
        self.update_and_publish_joint_states_both(angles)

    def update_and_publish_joint_states(self, angles):
        if self.hand == 'left':
            self.left_angles = angles
        else:
            self.right_angles = angles
        self.publish_joint_states(self.left_angles, self.right_angles)
        self.publish_joint_states_degrees(self.left_angles, self.right_angles)

    def update_and_publish_joint_states_both(self, angles):
        # angles: [right1, right2, right3, left1, left2, left3]
        self.right_angles = angles[:3]
        self.left_angles = angles[3:]
        self.publish_joint_states(self.left_angles, self.right_angles)
        self.publish_joint_states_degrees(self.left_angles, self.right_angles)

    def publish_joint_states(self, left_angles, right_angles):
        js = JointState()
        js.header.stamp = self.get_clock().now().to_msg()
        js.name = [
            'base_to_base_servo_joint',
            'shoulder_to_shoulder_servo_joint',
            'elbow_to_elbow_servo_joint',
            'base_to_right_base_servo_joint',
            'right_shoulder_to_right_shoulder_servo_joint',
            'right_elbow_to_right_elbow_servo_joint'
        ]
        # Convert degrees to radians for ROS standard topic
        js.position = [a * 3.14159265 / 180.0 for a in left_angles + right_angles]
        self.joint_state_pub.publish(js)

    def publish_joint_states_degrees(self, left_angles, right_angles):
        js = JointState()
        js.header.stamp = self.get_clock().now().to_msg()
        js.name = [
            'base_to_base_servo_joint',
            'shoulder_to_shoulder_servo_joint',
            'elbow_to_elbow_servo_joint',
            'base_to_right_base_servo_joint',
            'right_shoulder_to_right_shoulder_servo_joint',
            'right_elbow_to_right_elbow_servo_joint'
        ]
        # Publish degrees directly for easier debugging/custom tools
        js.position = left_angles + right_angles
        self.joint_state_degrees_pub.publish(js)

    def execute_gesture(self, filepath):
        try:
            df = pd.read_excel(filepath)
            for _, row in df.iterrows():
                angles = [row['Servo1'], row['Servo2'], row['Servo3']]
                if self.hand == 'left':
                    angles = [-angle for angle in angles]
                delay = float(row['Delay']) if 'Delay' in row else 1.0
                self.move_to_angles(angles, step_delay=self.default_step_delay)
                time.sleep(delay)
                self.publish_angles()
        except Exception as e:
            self.get_logger().error(f"Failed to execute gesture from {filepath}: {e}")

    def execute_both_hands_gesture(self, filepath):
        try:
            df = pd.read_excel(filepath)
            for _, row in df.iterrows():
                angles = [row[f'Servo{i}'] for i in range(1, 7)]
                delay = float(row['Delay']) if 'Delay' in row else 1.0
                self.move_both_hands_to_angles(angles, step_delay=self.default_step_delay)
                time.sleep(delay)
                self.publish_angles_both()
        except Exception as e:
            self.get_logger().error(f"Failed to execute both hands gesture from {filepath}: {e}")

    def publish_angles(self):
        msg = Float32MultiArray()
        msg.data = self.read_current_angles()
        self.publisher_.publish(msg)

    def publish_angles_both(self):
        msg = Float32MultiArray()
        msg.data = self.read_current_angles_both()
        self.publisher_.publish(msg)

    def read_current_angles(self):
        angles = []
        for sid in self.SCS_IDs:
            raw_pos, _, _ = self.packetHandler.read2ByteTxRx(self.portHandler, sid, ADDR_PRESENT_POSITION)
            angle = MIN_ANGLE + (raw_pos - MIN_RAW_POS) * (MAX_ANGLE - MIN_ANGLE) / (MAX_RAW_POS - MIN_RAW_POS)
            angles.append(round(angle, 1))  # Rounded for stability
        return angles

    def read_current_angles_both(self):
        angles = []
        for sid in [1, 2, 3, 4, 5, 6]:
            raw_pos, _, _ = self.packetHandler.read2ByteTxRx(self.portHandler, sid, ADDR_PRESENT_POSITION)
            angle = MIN_ANGLE + (raw_pos - MIN_RAW_POS) * (MAX_ANGLE - MIN_ANGLE) / (MAX_RAW_POS - MIN_RAW_POS)
            angles.append(round(angle, 1))
        return angles

    def publish_result(self, result):
        msg = String()
        msg.data = result
        self.result_publisher_.publish(msg)
        self.get_logger().info(f"Published Action Result: {result}")

    def timer_callback(self):
        if self.hand == 'both':
            angles = self.read_current_angles_both()
            self.update_and_publish_joint_states_both(angles)
        else:
            angles = self.read_current_angles()
            self.update_and_publish_joint_states(angles)

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