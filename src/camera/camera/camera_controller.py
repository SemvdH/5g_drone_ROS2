import rclpy
from rclpy.node import Node
from drone_services.srv import TakePicture
from sensor_msgs.msg import Image
import os
from datetime import datetime

#resolution of the camera
RES_4K_H = 3496
RES_4K_W = 4656

class CameraController(Node):
    def __init__(self):
        super().__init__('camera_controller')

        self.get_logger().info("Camera controller started. Waiting for service call...")
        self.srv = self.create_service(
            TakePicture, 'drone/picture', self.take_picture_callback)

    def take_picture_callback(self, request, response):
        if (request.input_name == "default"):
            self.get_logger().info("Taking picture with default filename")
            now = datetime.now().strftime("droneimage_%Y-%m-%d_%H-%M-%S")
            imagename = "/home/ubuntu/drone_img/" + now + ".jpg"
            response.filename = imagename
        else:
            response.filename = request.input_name
        os.system('fswebcam -r ' + str(RES_4K_W) + 'x' + str(RES_4K_H) + ' ' + response.filename)
        self.get_logger().info("Picture saved as " + response.filename)

        return response

def main(args=None):
    rclpy.init(args=args)

    test_controller = CameraController()
    rclpy.spin(test_controller)

    test_controller.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
