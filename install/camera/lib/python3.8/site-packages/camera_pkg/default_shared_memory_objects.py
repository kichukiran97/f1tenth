from camera_pkg.camera_shared_object import CameraSharedObject
import time

def connect_to_shm(is_publisher, shared_memory_name, shared_image_shape):
    while True:
        try:
            camera_stream_object = CameraSharedObject(do_create=is_publisher, shared_memory_name=shared_memory_name, image_shape=shared_image_shape)
            print("Connected to SHM")
            break
        except Exception as e:
            print("Connection to shared object failed. Attempting again in 1 second...", e)
            time.sleep(1.0)
    return camera_stream_object

def get_raw_camera_shared_object(*, is_publisher=False):
    shared_memory_name="shared_camera_raw"
    shared_image_shape=(640, 480, 3)
    # shared_memory_size=4194304
    return connect_to_shm(is_publisher, shared_memory_name, shared_image_shape)

def get_birds_eye_camera_shared_object(*, is_publisher=False):
    shared_memory_name="shared_camera_birds_eye"
    shared_image_shape=(640, 480, 3)
    # shared_memory_size=4194304
    return connect_to_shm(is_publisher, shared_memory_name, shared_image_shape)
