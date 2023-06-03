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

import requests

#resolution of the camera
RES_4K_H = 3496
RES_4K_W = 4656

video_url = "http://10.1.1.41:8080/video"
# Set the headers for the POST request
headers = {'Content-Type': 'application/octet-stream'}

#TODO change to serve video stream through websockets connection

class CameraController(Node):
    def __init__(self):
        super().__init__('camera_controller')

        self.get_logger().info("Camera controller started. Waiting for service call...")
        self.srv = self.create_service(
            TakePicture, 'drone/picture', self.take_picture_callback)
        
        self.websocket = None
        self.server = None
        self.event_loop = None

        self.websocket_thread = threading.Thread(target=self.start_listening)
        self.websocket_thread.start()

        self.video_thread = threading.Thread(target=self.setup_websocket)
        self.video_thread.start()




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

    def setup_websocket(self):
        start_server = websockets.serve(self.websocket_video, "0.0.0.0", 9002)
        asyncio.get_event_loop().run_until_complete(start_server)
        asyncio.get_event_loop().run_forever()
    
    async def websocket_video(self,websocket,path):
        vid = cv2.VideoCapture(0,cv2.CAP_V4L)

        vid.set(cv2.CAP_PROP_FRAME_WIDTH, 1920)
        vid.set(cv2.CAP_PROP_FRAME_HEIGHT, 1080)
        while True:
            try:
                while(vid.isOpened()):
                    img, frame = vid.read()
                    self.get_logger().info("frame before: " + str(frame.shape))
                    #frame = cv2.resize(frame,(RES_4K_W,RES_4K_H))
                    #print("frame after: " + str(frame.shape))
                    encode_param = [int(cv2.IMWRITE_JPEG_QUALITY), 100]
                    man = cv2.imencode('.jpg', frame)[1]
                    #sender(man)
                    await websocket.send(man.tobytes())
                self.get_logger.error("Not opened")
            except Exception as e:
                self.get_logger.error("error " + str(e))


    def handle_video_connection(self):
        self.get_logger().info('Starting sending video')
        vid = cv2.VideoCapture(0, cv2.CAP_DSHOW)

        vid.set(cv2.CAP_PROP_FRAME_WIDTH, RES_4K_W)
        vid.set(cv2.CAP_PROP_FRAME_HEIGHT, RES_4K_H)
        while True:
            try:
                while vid.isOpened():
                    pass
                    ret, frame = vid.read()

                    if not ret:
                        # If reading the frame failed, break the loop
                        break

                    # Convert the frame to bytes
                    _, img_encoded = cv2.imencode('.jpg', frame)
                    frame_data = img_encoded.tobytes()

                    # Send the frame data as the request body
                    response = requests.post(video_url, data=frame_data, headers=headers)

                    # Check the response status
                    if response.status_code == 200:
                        print('Frame sent successfully.')
                    else:
                        print('Failed to send frame.')
                    # if self.websocket is not None:
                    #     img,frame = vid.read()
                    #     frame = cv2.resize(frame,(640,480))
                    #     encode_param = [int(cv2.IMWRITE_JPEG_QUALITY), 65]
                    #     man = cv2.imencode('.jpg', frame, encode_param)[1]
                    #     self.get_logger().info('Sending video')
                    #     asyncio.ensure_future(self.websocket.send(man.tobytes()),loop=self.event_loop)
                    #     await asyncio.sleep(1)
                    # else:
                    #     self.get_logger().info('No websocket connection')

            except Exception as e:
                self.get_logger().error('Something went wrong while reading and sending video: ' + str(e))

    def start_listening(self):
        self.get_logger().info('Starting listening for websocket connections')
        asyncio.run(self.start_websocket_server())

    async def start_websocket_server(self):
        self.get_logger().info('Starting websocket server for video')
        self.event_loop = asyncio.get_event_loop()
        self.server = await websockets.server.serve(self.websocket_handler, '0.0.0.0', 9002)
        await self.server.wait_closed()
    
    async def websocket_handler(self,websocket):
        self.get_logger().info('New connection')

        self.websocket = websocket
        try:
            async for message in websocket:
                self.get_logger().info(f"Received message: {message}")

        except websockets.exceptions.ConnectionClosed:
            self.get_logger().info('Connection closed')
            self.websocket = None
        except Exception as e:
            self.get_logger().error('Something went wrong!')
            self.get_logger().error(str(e))
            self.websocket = None

       
def main(args=None):
    rclpy.init(args=args)

    test_controller = CameraController()
    rclpy.spin(test_controller)

    test_controller.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
