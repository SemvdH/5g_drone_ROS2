import cv2
import requests

video_url = "http://10.1.1.41:8080/video"
# Set the headers for the POST request
headers = {'Content-Type': 'application/octet-stream'}

vid = cv2.VideoCapture(0)

# vid.set(cv2.CAP_PROP_FRAME_WIDTH, RES_4K_W)
# vid.set(cv2.CAP_PROP_FRAME_HEIGHT, RES_4K_H)
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
        print('Something went wrong while reading and sending video: ' + str(e))