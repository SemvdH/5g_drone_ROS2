import rclpy
from rclpy.node import Node
from drone_services.srv import TakePicture
from sensor_msgs.msg import Image
import os
from datetime import datetime

import asyncio
import websockets.server
import threading
import cv2
import sys
import requests

#resolution of the camera
RES_4K_H = 3496
RES_4K_W = 4656

class CameraController(Node):
    def __init__(self):
        """Initialize the camera controller node.

        Initializes the service and the video stream for the websocket connection.
        
        """
        super().__init__('camera_controller')

        self.get_logger().info("Camera controller started. Waiting for service call...")
        self.srv = self.create_service(
            TakePicture, '/drone/picture', self.take_picture_callback)
        
        self.websocket = None
        self.server = None
        self.event_loop = None        
        self.should_exit = False

        self.timer = self.create_timer(1, self.timer_callback)

        self.video_thread = threading.Thread(target=self.setup_websocket)
        self.video_thread.start()



    def timer_callback(self):
        """Callback function for shutting down if an error occurred from a different thread."""
        if self.should_exit:
            self.get_logger().info("Shutting down...")
            self.destroy_node()
            sys.exit(-1)

    def take_picture_callback(self, request, response):
        """Callback function for the service call to the /drone/picture service.
            takes a picture with the given filename and saves it to the drone_img folder.
            Sends the filename back to the caller.
        """
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

    def setup_websocket(self):
        """Sets up the websocket connection for the video stream on port 9002."""
        loop = asyncio.new_event_loop()
        connected = False
        while not connected:
            try:
                start_server = websockets.serve(self.websocket_video, "0.0.0.0", 9002,loop=loop)
                connected = True
            except Exception as e:
                self.get_logger().error("error " + str(e))
                connected = False 
        loop.run_until_complete(start_server)
        loop.run_forever()
        try:
            self.destroy_node()
        except Exception as e:
            self.get_logger().error("error " + str(e))
            sys.exit(-1)
    
    async def websocket_video(self,websocket,path):
        """Function for the websocket connection on port 9002.
        This continuously captures frames from the video and sends them to the websocket client.
        A resolution of 1920x1080 is chosen for performance reasons."""
        vid = cv2.VideoCapture(0,cv2.CAP_V4L)

        vid.set(cv2.CAP_PROP_FRAME_WIDTH, 1920)
        vid.set(cv2.CAP_PROP_FRAME_HEIGHT, 1080)
        error_amount = 0
        while True:
            try:
                while(vid.isOpened()):
                    img, frame = vid.read()
                    encode_param = [int(cv2.IMWRITE_JPEG_QUALITY), 100]
                    man = cv2.imencode('.jpg', frame)[1]
                    await websocket.send(man.tobytes())
                self.get_logger().error("Not opened")
                error_amount += 1
            except Exception as e:
                self.get_logger().error("error " + str(e))
                error_amount += 1
            if error_amount > 20:
                self.get_logger().error("Too many errors, closing node")
                self.should_exit = True
                sys.exit(-1)

       
def main(args=None):
    rclpy.init(args=args)

    test_controller = CameraController()
    rclpy.spin(test_controller)

    test_controller.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
