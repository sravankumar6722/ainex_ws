import rclpy
from rclpy.node import Node
from std_msgs.msg import String

class WaveNode(Node):
    def __init__(self):
        super().__init__('wave_node')

        # Publisher: send 'wave' command
        self.cmd_pub = self.create_publisher(String, 'hand_action', 10)

        # Subscriber: get confirmation when done
        self.result_sub = self.create_subscription(
            String,
            'hand_action_result',
            self.result_callback,
            10
        )

        # Timer: send wave command once after 2 seconds
        self.timer = self.create_timer(2.0, self.send_wave_command)
        self.command_sent = False

    def send_wave_command(self):
        if not self.command_sent:
            msg = String()
            msg.data = 'wave'
            self.cmd_pub.publish(msg)
            self.get_logger().info('Sent wave command to hand_node.')
            self.command_sent = True  # Only send once

    def result_callback(self, msg):
        if msg.data == 'wave_done':
            self.get_logger().info('WaveNode received confirmation: Wave completed!')

def main(args=None):
    rclpy.init(args=args)
    node = WaveNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
