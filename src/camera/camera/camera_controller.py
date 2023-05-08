import rclpy
from rclpy.node import Node

from drone_services.srv import TakePicture

from picamera2 import Picamera2


class CameraController(Node):
    def __init__(self):
        super().__init__('camera_controller')
        self.picam2 = Picamera2()
        self.srv = self.create_service(TakePicture, 'drone/picture', self.take_picture_callback)

    def take_picture_callback(self, request, response):
        if (request.input_name == "default"):
            self.get_logger().info("Taking picture with default filename")
            self.picam2.start_and_capture_file("/home/ubuntu/image.jpg")
            response.filename = "/home/ubuntu/image.jpg"
        else:
            self.picam2.start_and_capture_file(request.input_name)
            response.filename = request.input_name
        return response

def main(args=None):
    rclpy.init(args=args)

    test_controller = CameraController()
    rclpy.spin(test_controller)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    test_controller.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()