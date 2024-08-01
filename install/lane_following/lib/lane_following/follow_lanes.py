#!/bin/python3
import rclpy
from rclpy.node import Node
from lane_following_pkg.lane_following import LaneFollowing

def main(args = None):
    rclpy.init(args=args)
    try:
        lane_following = LaneFollowing()
        rclpy.spin(lane_following)
    except KeyboardInterrupt:
        lane_following.exit()
    except Exception as e:
        try:
            lane_following.exit()
            lane_following.destroy_node()
        except NameError:
            pass
        print(e)
        rclpy.shutdown()

if __name__ == '__main__':
    main()
