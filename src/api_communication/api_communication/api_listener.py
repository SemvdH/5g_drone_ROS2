import rclpy
from rclpy.node import Node

from drone_services.msg import DroneStatus

import asyncio
import websockets.server
import threading
import json


class ApiListener(Node):
    def __init__(self):
        super().__init__('api_listener')
        self.get_logger().info('ApiListener node started')
        self.drone_status_subscriber = self.create_subscription(DroneStatus, '/drone/status', self.drone_status_callback, 10)

        self.last_battery_percentage = 0
        self.last_cpu_usage = 0

        self.last_message = ""
        self.message_queue = []
        self.checking_for_message = False

        self.server = None
        self.server_thread = threading.Thread(target=self.start_api_thread,daemon=True)
        self.server_thread.start()
    
    def drone_status_callback(self, msg):
        self.last_battery_percentage = msg.battery_percentage
        self.last_cpu_usage = msg.cpu_usage
    
    def start_api_thread(self):
        asyncio.run(self.handle_api())

    async def handle_api(self):
        self.get_logger().info('Starting API')
        self.server = await websockets.serve(self.api_handler, '0.0.0.0', 9001)
        self.get_logger().info('API started')
        await self.server.wait_closed()
    
    async def handle_message_receive(self,websocket):
        self.get_logger().info(f"Received message callback: {self.last_message}")
        self.last_message = await websocket.recv()
        
    def message_received_callback(self):
        self.get_logger().info(f"Received message callback: {self.last_message}")
        self.message_queue.append(self.last_message)
        self.checking_for_message = False

    # def handle_message(self, message):
    #     deserialized_msg = json.loads(message)
    
    async def api_handler(self, websocket):
        try:
            async for message in websocket:
                self.get_logger().info(f"Received message: {message}")
                await websocket.send(message)
            # while True:
            #     if not self.checking_for_message:
            #         self.get_logger().info('Waiting for message')
            #         self.checking_for_message = True
            #         task = asyncio.create_task(self.handle_message_receive(websocket))
            #         task.add_done_callback(self.message_received_callback)
            #     if len(self.message_queue) > 0:
            #         websocket.send(self.message_queue.pop(0))

        except websockets.exceptions.ConnectionClosed:
            self.get_logger().info('Connection closed')


def main(args=None):
    rclpy.init(args=args)

    api_listener = ApiListener()

    rclpy.spin(api_listener)

    api_listener.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()