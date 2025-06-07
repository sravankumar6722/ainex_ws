import rclpy
from rclpy.node import Node
from sensor_msgs.msg import JointState
import math

class JointStatesDegreesNode(Node):
    def __init__(self):
        super().__init__('joint_states_degrees_node')
        self.sub = self.create_subscription(
            JointState, 'joint_states', self.callback, 10)
        self.pub = self.create_publisher(
            JointState, 'joint_states_degrees', 10)
        self.get_logger().info("joint_states_degrees_node started.")

    def callback(self, msg):
        deg_msg = JointState()
        deg_msg.header = msg.header
        deg_msg.name = msg.name
        # Convert each position from radians to degrees
        deg_msg.position = [math.degrees(pos) for pos in msg.position]
        deg_msg.velocity = msg.velocity
        deg_msg.effort = msg.effort
        self.pub.publish(deg_msg)

def main(args=None):
    rclpy.init(args=args)
    node = JointStatesDegreesNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()