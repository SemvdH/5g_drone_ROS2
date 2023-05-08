import rclpy
from rclpy.node import Node

from drone_services.srv import TakePicture

from picamera import PiCamera
from datetime import datetime

RES_4K_H = 2160
RES_4K_W = 3840


class CameraController(Node):
    def __init__(self):
        super().__init__('camera_controller')
        self.camera = PiCamera()
        self.get_logger().info("Camera controller started. Waiting for service call...")
        self.srv = self.create_service(TakePicture, 'drone/picture', self.take_picture_callback)

    def take_picture_callback(self, request, response):
        result, image = self.capture.read()
        if (result):
            if (request.input_name == "default"):
                self.get_logger().info("Taking picture with default filename")
                now = datetime.now().strftime("droneimage_%Y-%m-%d_%H-%M-%S")
                imagename = "/home/ubuntu/drone_img" + now + ".jpg"
                self.camera.capture(imagename)
                response.filename = imagename
            else:
                self.camera.capture(request.input_name)
                response.filename = request.input_name
            self.get_logger().info("Picture saved as " + response.filename)
        else:
            self.get_logger().error("Could not take picture")
            response.filename = "/dev/null"

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