import rclpy
from rclpy.node import Node

from drone_services.srv import TakePicture
import os
from datetime import datetime

# import cv2

RES_4K_H = 3496
RES_4K_W = 4656


class CameraController(Node):
    def __init__(self):
        super().__init__('camera_controller')
        # self.capture = cv2.VideoCapture(0,cv2.CAP_DSHOW)

        # CAMERA_PROP_WIDTH = 3
        # CAMERA_PROP_HEIGHT = 4
        # self.capture.set(CAMERA_PROP_WIDTH, RES_4K_W)
        # self.capture.set(CAMERA_PROP_HEIGHT, RES_4K_H)
        # self.get_logger().info("Camera resolution set to " + str(self.capture.get(CAMERA_PROP_WIDTH)) + "x" + str(self.capture.get(CAMERA_PROP_HEIGHT)))

        self.get_logger().info("Camera controller started. Waiting for service call...")
        self.srv = self.create_service(TakePicture, 'drone/picture', self.take_picture_callback)

    def take_picture_callback(self, request, response):
        # result, image = self.capture.read()
        # if (result):
            if (request.input_name == "default"):
                self.get_logger().info("Taking picture with default filename")
                now = datetime.now().strftime("droneimage_%Y-%m-%d_%H-%M-%S")
                imagename = "/home/ubuntu/drone_img" + now + ".jpg"
                # image = self.maintain_aspect_ratio_resize(image, width=RES_4K_W, height=RES_4K_H)
                # cv2.imwrite(imagename, image)
                response.filename = imagename
            else:
                # cv2.imwrite(request.input_name, image)
                response.filename = request.input_name
            os.system('fswebcam -r 4656x3496 ' + response.filename)
            self.get_logger().info("Picture saved as " + response.filename)
        # else:
        #     self.get_logger().error("Could not take picture")
        #     response.filename = "/dev/null"

            return response
    
    # def maintain_aspect_ratio_resize(self, image, width=None, height=None, inter=cv2.INTER_AREA):
    #     # Grab the image size and initialize dimensions
    #     dim = None
    #     (h, w) = image.shape[:2]

    #     # Return original image if no need to resize
    #     if width is None and height is None:
    #         return image

    #     # We are resizing height if width is none
    #     if width is None:
    #         # Calculate the ratio of the height and construct the dimensions
    #         r = height / float(h)
    #         dim = (int(w * r), height)
    #     # We are resizing width if height is none
    #     else:
    #         # Calculate the ratio of the 0idth and construct the dimensions
    #         r = width / float(w)
    #         dim = (width, int(h * r))

    #     # Return the resized image
    #     return cv2.resize(image, dim, interpolation=inter)
            

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