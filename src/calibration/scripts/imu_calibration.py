#!/bin/python3
import rclpy
from rclpy.executors import MultiThreadedExecutor
from rclpy.node import Node
from threading import Thread
import time
import numpy as np

from internal_interface.msg import RawImu
# depends on embedded_communication.scripts.nucleo_manager.py

class ImuSubscriber(Node):
    def __init__(self):
        super().__init__("calibration_imu_subscriber")
        self.imu_subscriber = self.create_subscription(RawImu, "nucleo/raw_imu", self.imu_callback, 1)
        self.imu_history = list() 
        self.is_done = False

    def imu_callback(self, msg):
        self.imu_history.append(msg)

    def calculate_offset(self):
        try:
            return np.mean(np.array([imu.yaw for imu in self.imu_history]))
        except Exception as e:
            print(e)
            return 0.0
    
keep_going = True
def calculate_offset_loop(imu_sub):
    global keep_going
    while keep_going:
        print(imu_sub.calculate_offset())
        time.sleep(0.5)

def main(args=None):
    rclpy.init(args=args)

    imu_sub = ImuSubscriber()

    executor = MultiThreadedExecutor(num_threads=4)
    executor.add_node(imu_sub)

    global keep_going
    offset_thread = Thread(target = calculate_offset_loop, args = (imu_sub,))
    keep_going = True
    offset_thread.start()

    try:
        executor.spin()
    except KeyboardInterrupt:
        keep_going = False
        offset_thread.join()
        executor.shutdown()
        imu_sub.destroy()
        rclpy.shutdown()
    except Exception as e:
        print(e)
        keep_going = False
        offset_thread.join()
        executor.shutdown()
        imu_sub.destroy()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
