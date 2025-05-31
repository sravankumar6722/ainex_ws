import rclpy
from rclpy.node import Node
from std_msgs.msg import String

class SaluteNode(Node):
    def __init__(self):
        super().__init__('salute_node')
        self.publisher_ = self.create_publisher(String, 'hand_action', 10)
        self.subscription = self.create_subscription(String, 'hand_action_result', self.result_callback, 10)

        self.timer = self.create_timer(2.0, self.send_salute_command)
        self.sent = False

    def send_salute_command(self):
        if not self.sent:
            msg = String()
            msg.data = 'salute'
            self.publisher_.publish(msg)
            self.get_logger().info('Sent salute command to hand_node.')
            self.sent = True

    def result_callback(self, msg):
        if msg.data == 'salute_done':
            self.get_logger().info('Salute completed successfully.')
        elif msg.data == 'salute_not_implemented':
            self.get_logger().warn('Salute gesture not implemented in hand_node.')
        else:
            self.get_logger().info(f'Received result: {msg.data}')

def main(args=None):
    rclpy.init(args=args)
    node = SaluteNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
