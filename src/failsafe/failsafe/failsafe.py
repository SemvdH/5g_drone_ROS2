import rclpy
from rclpy.node import Node

from drone_services.srv import EnableFailsafe
from drone_services.msg import FailsafeMsg
class FailSafe(Node):
    def __init__(self):
        super().__init__("failsafe")
        self.failsafe_enabled = False
        self.failsafe_msg = ""
        self.get_logger().info("Failsafe node started")
        self.service = self.create_service(
            EnableFailsafe, "/drone/enable_failsafe", self.failsafe_callback)
        self.failsafe_publisher = self.create_publisher(FailsafeMsg, "/drone/failsafe", 10)
    
    def failsafe_callback(self, request, response):
        self.failsafe_enabled = True
        self.failsafe_msg = request.message
        response.enabled = self.failsafe_enabled
        response.message = self.failsafe_msg
        self.get_logger().info("Failsafe triggered")
        self.publish_failsafe()
        return response
    
    def publish_failsafe(self):
        msg = FailsafeMsg()
        msg.enabled = self.failsafe_enabled
        msg.msg = self.failsafe_msg
        self.failsafe_publisher.publish(msg)
        self.get_logger().info("Publishing failsafe message")


def main(args=None):
    rclpy.init(args=args)
    failsafe_node = FailSafe()
    rclpy.spin(failsafe_node)
    failsafe_node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
