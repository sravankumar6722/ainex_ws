import rclpy
from rclpy.node import Node
from std_msgs.msg import String

class LeftHandSaluteNode(Node):
    def __init__(self):
        super().__init__('left_hand_salute_node')

        # Publisher to left_hand_action topic
        self.publisher_ = self.create_publisher(String, 'left_hand_action', 10)

        # Create a one-shot timer (delayed to ensure hand_node is ready)
        self.timer = self.create_timer(1.0, self.send_salute_command)

    def send_salute_command(self):
        msg = String()
        msg.data = 'salute'
        self.publisher_.publish(msg)
        self.get_logger().info('Sent "salute" command to left_hand_action')

        # Cancel the timer after one send
        self.timer.cancel()
        self.get_logger().info('Timer canceled. Node will remain alive.')

def main(args=None):
    rclpy.init(args=args)
    node = LeftHandSaluteNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
