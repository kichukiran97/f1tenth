from camera_pkg.camera_realtime_stream import CameraRealtimeStream
from camera_pkg.camera_playback_stream import CameraPlaybackStream

def get_playback_camera_device():
    video_file = "resource/full_run.mp4"
    camera_stream_object = CameraPlaybackStream(video_file, fps_limit = 15)
    return camera_stream_object

def get_udp_camera_device():
    camera_udp_url = "udp://192.168.10.11:1234"
    camera_stream_object = CameraRealtimeStream(camera_udp_url)
    return camera_stream_object

def get_native_camera_device():
    import cv2
    camera_device = "nvarguscamerasrc sensor-id=0 ! video/x-raw(memory:NVMM), width=(int)3280, height=(int)1848, format=(string)NV12, framerate=(fraction)28/1 ! nvvidconv flip-method=2 ! videoconvert ! video/x-raw, format=(string)BGR ! appsink"
    # camera_device = "/dev/video0"
    camera_stream_object = CameraRealtimeStream(camera_device, cv2_options=cv2.CAP_GSTREAMER)
    return camera_stream_object
