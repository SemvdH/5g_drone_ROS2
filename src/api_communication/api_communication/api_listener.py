import rclpy
from rclpy.node import Node

from drone_services.msg import DroneStatus
from drone_services.msg import FailsafeMsg
from drone_services.srv import TakePicture
from drone_services.srv import MovePosition

import asyncio
import websockets.server
import threading
import json
from enum import Enum
from functools import partial
import base64
import cv2

# communication: client always sends commands that have a command id.
# server always sends messages back that have a message type

# TODO send video https://github.com/Jatin1o1/Python-Javascript-Websocket-Video-Streaming-/tree/main

RES_4K_H = 3496
RES_4K_W = 4656

# TODO change video to be handled by camera controller through websocket with different port

class RequestCommand(Enum):
    GET_COMMANDS_TYPES = -1  # to get the available commands and types
    TAKEOFF = 0
    LAND = 1
    MOVE_POSITION = 2
    MOVE_DIRECTION = 3
    TAKE_PICTURE = 5
    EMERGENCY_STOP = 6


class ResponseMessage(Enum):
    ALL_REQUESTS_RESPONSES = -1
    STATUS = 0
    IMAGE = 1
    MOVE_DIRECTION_RESULT = 2
    FAILSAFE = 3


class ApiListener(Node):
    def __init__(self):
        super().__init__('api_listener')
        self.get_logger().info('ApiListener node started')
        self.drone_status_subscriber = self.create_subscription(
            DroneStatus, '/drone/status', self.drone_status_callback, 10)
        self.failsafe_subscriber = self.create_subscription(FailsafeMsg, "/drone/failsafe", self.failsafe_callback, 10)

        self.timer = self.create_timer(1, self.publish_status)
        waiting = 0
        self.take_picture_client = self.create_client(
            TakePicture, '/drone/picture')
        while not self.take_picture_client.wait_for_service(timeout_sec=1.0):
            if (waiting > 10):
                self.get_logger().error(
                    'Take picture service not available, exiting...')
                exit(-1)
            self.get_logger().info('Take picture service not available, waiting again...')
            waiting = waiting + 1
        self.take_picture_request = TakePicture.Request()
        self.move_position_client = self.create_client(
            MovePosition, '/drone/move_position')
        waiting = 0
        while not self.move_position_client.wait_for_service(timeout_sec=1.0):
            if (waiting > 10):
                self.get_logger().error(
                    'Move position service not available, exiting...')
                exit(-1)
            self.get_logger().info('Move position service not available, waiting again...')
            waiting = waiting + 1
        self.move_position_request = MovePosition.Request()

        self.status_data = {}
        self.status_data_received = False
        self.last_message = ""
        self.message_queue = []
        self.checking_for_message = False

        self.websocket = None
        self.server = None
        self.server_thread = threading.Thread(
            target=self.start_api_thread, daemon=True)
        self.server_thread.start()
        self.response_thread = threading.Thread(
            target=self.handle_responses, daemon=True)
        self.response_thread.start()

        self.event_loop = None

    def drone_status_callback(self, msg):
        self.status_data_received = True
        self.status_data['battery_percentage'] = msg.battery_percentage
        self.status_data['cpu_usage'] = msg.cpu_usage
        self.status_data['armed'] = msg.armed
        self.status_data['control_mode'] = msg.control_mode
        self.status_data['route_setpoint'] = msg.route_setpoint
        self.status_data['velocity'] = msg.velocity
        self.status_data['position'] = msg.position
        self.status_data['failsafe'] = msg.failsafe

    def failsafe_callback(self, msg):
        self.status_data['failsafe'] = msg.enabled
        self.message_queue.append(json.dumps(
                    {'type': ResponseMessage.FAILSAFE.name, 'message': msg.msg}))
    # def send_video(self):
    #     self.get_logger().info('Starting video thread')
    #     vid = cv2.VideoCapture(0)

    #     # vid.set(cv2.CAP_PROP_FRAME_WIDTH, RES_4K_W)
    #     # vid.set(cv2.CAP_PROP_FRAME_HEIGHT, RES_4K_H)
    #     while True:
    #         try:
    #             while vid.isOpened():
    #                 img,frame = vid.read()
    #                 frame = cv2.resize(frame,(640,480))
    #                 encode_param = [int(cv2.IMWRITE_JPEG_QUALITY), 65]
    #                 man = cv2.imencode('.jpg', frame, encode_param)[1]
    #                 self.get_logger().info('Sending video')
    #                 self.message_queue.append(man.tobytes())

    #         except Exception as e:
    #             self.get_logger().error('Something went wrong while reading video: ' + str(e))

    async def publish_message(self, message):
        # self.get_logger().info(f'Publishing message: {message}')
        if self.websocket is not None:
            try:
                await self.websocket.send(message)
            except Exception as e:
                self.get_logger().error(
                    'Something went wrong while sending a message to the websocket: ' + str(e))
        else:
            self.get_logger().error('Trying to publish message but no websocket connection')

    def publish_status(self):
        if self.status_data_received:
            self.status_data_received = False
            if self.websocket is not None:
                self.message_queue.append(json.dumps(
                    {'type': ResponseMessage.STATUS.name, 'data': self.status_data}))

    def handle_responses(self):
        while True:
            if len(self.message_queue) > 0 and self.websocket is not None and self.event_loop is not None:
                # self.get_logger().info("sending message")
                asyncio.run(self.publish_message(self.message_queue.pop(0)))

    def start_api_thread(self):
        asyncio.run(self.handle_api())

    async def handle_api(self):
        self.get_logger().info('Starting API')
        self.event_loop = asyncio.get_event_loop()
        self.server = await websockets.serve(self.api_handler, '0.0.0.0', 9001)
        self.get_logger().info('API started on port 9001')
        await self.server.wait_closed()

    def process_image_request(self, message_json):
        self.get_logger().info('Processing image request')
        if 'filename' in message_json:
            self.get_logger().info(
                f'Filename: {message_json["filename"]}')
            self.take_picture_request.input_name = message_json['filename']
        self.get_logger().info('Calling take picture service')
        future = self.take_picture_client.call_async(self.take_picture_request)
        future.add_done_callback(partial(self.image_request_callback))
        
    
    def image_request_callback(self, future):
        try:
            result_filename = future.result().filename
            self.get_logger().info("Received result filename: " + result_filename)
            with open(result_filename, 'rb') as f:
                self.get_logger().info('Reading image')
                read_file = f.read()
                base64_img = base64.b64encode(read_file)
                self.message_queue.append(json.dumps(
                    {'type': ResponseMessage.IMAGE.name, 'image': base64_img.decode('utf-8')}))
                
                # send image as binary file
                # self.message_queue.append(read_file)
        except Exception as e:
            self.get_logger().error('Something went wrong while sending a take picture request and waiting for the response: %r' % (e))
            

    def send_available_commands(self):
        print('Sending available commands')
        requestcommands = {}
        messagetypes = {}
        result = {}
        for command in RequestCommand:
            requestcommands[command.name] = command.value
        for message_type in ResponseMessage:
            messagetypes[message_type.name] = message_type.value
        result['request_commands'] = requestcommands
        result['response_messages'] = messagetypes
        self.message_queue.append(json.dumps(
            {'type': ResponseMessage.ALL_REQUESTS_RESPONSES.name, 'data': result}))

    def handle_direction_message(self, message):
        self.move_position_request.up_down = float(message['up_down'])
        self.move_position_request.left_right = float(message['left_right'])
        self.move_position_request.front_back = float(
            message['forward_backward'])
        self.move_position_request.angle = float(message['yaw'])
        self.get_logger().info(
            f'Calling move position service with request: {str(self.move_position_request)}')

        self.send_move_position_request()

    def send_move_position_request(self):
        try:
            self.future = self.move_position_client.call_async(
                self.move_position_request)
            rclpy.spin_until_future_complete(self, self.future)
            result = self.future.result()
            message_result = {}
            message_result['type'] = ResponseMessage.MOVE_DIRECTION_RESULT.name
            self.get_logger().info(
                f'Move position service call result: {str(result)}')
            if result.success == True:
                self.get_logger().info('Move position service call success')
                message_result['success'] = True
            else:
                self.get_logger().error('Move position service call failed')
                message_result['success'] = False
            self.message_queue.append(json.dumps(message_result))
        except Exception as e:
            self.get_logger().error(
                'Something went wrong while sending a move position request!\n' + str(e))

    def takeoff(self):
        self.get_logger().info('Takeoff command received')
        self.move_position_request.up_down = 0.1
        self.move_position_request.left_right = 0.0
        self.move_position_request.front_back = 0.0
        self.move_position_request.angle = 0.0
        self.send_move_position_request()

    def land(self):
        self.get_logger().info('Land command received')
        self.move_position_request.up_down = -0.1
        self.move_position_request.left_right = 0.0
        self.move_position_request.front_back = 0.0
        self.move_position_request.angle = 0.0
        self.send_move_position_request()

    def consume_message(self, message):
        self.get_logger().info(f'Consuming message: {message}')
        try:
            message_json = json.loads(str(message))
            # self.get_logger().info(f'JSON: {str(message_json)}, type:{type(message_json)}')
            # self.get_logger().info(f'JSON CMD: {str(message_json["command"])}, type:{type(message_json["command"])}')
            if not "command" in message_json:
                self.get_logger().error('Received message without command')
                self.send_available_commands()
            else:
                self.get_logger().info(
                    f'Received command: {message_json["command"]}')
                if message_json['command'] == RequestCommand.TAKEOFF.value:
                    self.get_logger().info('Takeoff command received')
                    self.takeoff()
                elif message_json['command'] == RequestCommand.LAND.value:
                    self.get_logger().info('Land command received')
                    self.land()
                elif message_json['command'] == RequestCommand.MOVE_POSITION.value:
                    self.get_logger().info('Move position command received')
                elif message_json['command'] == RequestCommand.MOVE_DIRECTION.value:
                    self.get_logger().info('Move direction command received')
                    self.handle_direction_message(message_json)
                elif message_json['command'] == RequestCommand.TAKE_PICTURE.value:
                    self.get_logger().info('Take picture command received')
                    self.process_image_request(message_json)
                elif message_json['command'] == RequestCommand.GET.value:
                    self.get_logger().info('Get command received')
                    self.send_available_commands()
                elif message_json['command'] == RequestCommand.EMERGENCY_STOP.value:
                    self.get_logger().info('Emergency stop command received')
                    # emergency stop: set to attitude mode and stop, also disarm
                else:
                    self.get_logger().error('Received unknown command ' + str(message_json['command']) )
                    self.send_available_commands()
        except TypeError:
            self.get_logger().error('Received unknown type: ' +str(type(message)) + " " + str(message))
            self.send_available_commands()
        except json.JSONDecodeError:
            self.get_logger().error('Received invalid JSON')
            self.send_available_commands()
        except Exception as e:
            self.get_logger().error('Something went wrong!')
            self.get_logger().error(str(e))

    async def api_handler(self, websocket):
        self.get_logger().info('New connection')
        # if self.websocket is not None:
        #     self.get_logger().error('Got a new websocket connection but I am already connected!')
        #     return

        self.websocket = websocket
        try:
            async for message in websocket:
                self.get_logger().info(f"Received message: {message}")
                self.consume_message(message)

        except websockets.exceptions.ConnectionClosed:
            self.get_logger().info('Connection closed')
            self.websocket = None
        except Exception as e:
            self.get_logger().error('Something went wrong!')
            self.get_logger().error(str(e))
            self.websocket = None


def main(args=None):
    rclpy.init(args=args)

    api_listener = ApiListener()
    multithreaded_executor = rclpy.executors.MultiThreadedExecutor()
    multithreaded_executor.add_node(api_listener)
    multithreaded_executor.spin()

    api_listener.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
