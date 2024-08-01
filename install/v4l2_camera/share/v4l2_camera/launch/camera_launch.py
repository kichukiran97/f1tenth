from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='v4l2_camera',
            executable='v4l2_camera_node',
            name='v4l2_camera',
            parameters=[{
                'video_device': '/dev/video0',  # Ensure this is the correct video device
                'pixel_format': 'YUYV',  # Use the pixel format supported by your camera
                'image_width': 1280,  # Adjust width as needed
                'image_height': 720,  # Adjust height as needed
                'frame_rate': 60.0,  # Adjust frame rate as needed
            }],
        ),
    ])
