import rclpy
from rclpy.node import Node

import asyncio
import websockets.server
import threading

class ApiListener(Node):
    def __init__(self):
        super().__init__('api_listener')
        self.get_logger().info('ApiListener node started')
        self.messages = 0
        self.server = None
    
    async def spin(self):
        self.get_logger().info('Starting API')
        self.server = await websockets.serve(self.api_handler, 'localhost', 9001)
        self.get_logger().info('API started')
        await self.server.wait_closed()
    
    async def api_handler(self, websocket):
        try:
            while rclpy.ok():
                rclpy.spin_once(self, timeout_sec=0.1)
                message = await websocket.recv()
                self.get_logger().info('Received message: {0}'.format(message))
                self.messages = self.messages + 1
                await websocket.send("You sent " + str(self.messages) + " messages")
        except websockets.exceptions.ConnectionClosed:
            self.get_logger().info('Connection closed')


async def main(args=None):
    rclpy.init(args=args)

    api_listener = ApiListener()

    await api_listener.spin()

    api_listener.destroy_node()
    rclpy.shutdown()

asyncio.run(main())