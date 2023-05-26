import rclpy
from rclpy.node import Node

class FailSafe(Node):
    def __init__(self):
        super().init("failsafe")


def main(args=None):
    rclpy.init(args=args)
    failsafe_node = FailSafe()
    failsafe_node.spin()
    failsafe_node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
