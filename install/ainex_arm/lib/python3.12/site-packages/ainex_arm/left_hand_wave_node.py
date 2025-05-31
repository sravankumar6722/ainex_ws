import rclpy
from rclpy.node import Node
from std_msgs.msg import String

class LeftHandWaveNode(Node):
    def __init__(self):
        super().__init__('left_hand_wave_node')

        # Publisher to left_hand_action topic
        self.publisher_ = self.create_publisher(String, 'left_hand_action', 10)

        # Create a one-shot timer (delayed to give time for hand_node to start)
        self.timer = self.create_timer(1.0, self.send_wave_command)

    def send_wave_command(self):
        msg = String()
        msg.data = 'wave'
        self.publisher_.publish(msg)
        self.get_logger().info('Sent "wave" command to left_hand_action')

        # Cancel the timer so it doesn't send again
        self.timer.cancel()
        self.get_logger().info('Timer canceled. Node will remain alive.')

def main(args=None):
    rclpy.init(args=args)
    node = LeftHandWaveNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
