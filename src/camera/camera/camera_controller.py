import rclpy
from rclpy.node import Node

from drone_services.srv import TakePicture

import cv2
from datetime import datetime


class CameraController(Node):
    def __init__(self):
        super().__init__('camera_controller')
        self.cam = cv2.VideoCapture(0)
        self.get_logger().info("Camera controller started. Waiting for service call...")
        self.srv = self.create_service(TakePicture, 'drone/picture', self.take_picture_callback)

    def take_picture_callback(self, request, response):
        result, image = self.cam.read()
        if (result):
            if (request.input_name == "default"):
                self.get_logger().info("Taking picture with default filename")
                now = datetime.now().strftime("droneimage_%Y-%m-%d_%H-%M-%S")
                imagename = "/home/ubuntu/drone_img" + now + ".jpg"
                cv2.imwrite(imagename, image)
                response.filename = imagename
            else:
                cv2.imwrite(request.input_name, image)
                response.filename = request.input_name
            self.get_logger().info("Picture saved as " + response.filename)
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