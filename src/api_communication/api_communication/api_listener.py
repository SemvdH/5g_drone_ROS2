import rclpy
from rclpy.node import Node

from drone_services.msg import DroneStatus

import asyncio
import websockets.server



class ApiListener(Node):
    def __init__(self):
        super().__init__('api_listener')
        self.get_logger().info('ApiListener node started')
        self.drone_status_subscriber = self.create_subscription(DroneStatus, '/drone/status', self.drone_status_callback, 10)
        self.last_battery_percentage = 0
        self.last_cpu_usage = 0
        self.server = None
    
    def drone_status_callback(self, msg):
        self.get_logger().info('Received drone battery and cpu: {0} {1}'.format(msg.battery_percentage,msg.cpu_usage))
        self.last_battery_percentage = msg.battery_percentage
        self.last_cpu_usage = msg.cpu_usage

    async def handle_api(self):
        self.get_logger().info('Starting API')
        self.server = await websockets.serve(self.api_handler, '0.0.0.0', 9001)
        self.get_logger().info('API started')
        await self.server.wait_closed()
    
    
    async def api_handler(self, websocket):
        try:
            while True:
                message = await websocket.recv()
                self.get_logger().info('Received message: {0}'.format(message))
                await websocket.send("Yeet ")
        except websockets.exceptions.ConnectionClosed:
            self.get_logger().info('Connection closed')


async def main(args=None):
    rclpy.init(args=args)

    api_listener = ApiListener()

    # start the websockets api in its own task wrapper
    asyncio.ensure_future(api_listener.handle_api())
    rclpy.spin(api_listener)

    api_listener.destroy_node()
    rclpy.shutdown()

print("running main")
asyncio.run(main())