import pickle
import time
import sys
import numpy as np
from multiprocessing import managers, shared_memory
from camera_pkg.shm_client import *

class CameraSharedObject:
    def __init__(self, do_create, shared_memory_name, image_shape):
        SharedMemoryClient.register('create_shared_memory')
        SharedMemoryClient.register("write_image")
        SharedMemoryClient.register("get_image_from_buffer")
        SharedMemoryClient.register('delete_shared_memory')

        self.manager = SharedMemoryClient(address=('', 50000), authkey=b'secret')
        self.manager.connect()

        self.shared_memory_name = shared_memory_name
        self.shared_image_shape = image_shape
        self.shared_memory_size = np.prod(image_shape) + (8 + 3*8)
        self.do_create = do_create

        if self.do_create:
            try:
                result = self.manager.create_shared_memory(self.shared_memory_name, self.shared_memory_size)
                print(result)
            except Exception as e:
                print(e)

    def exit(self):
        if self.do_create:
            shm = shared_memory.SharedMemory(create=False, name=self.shared_memory_name)
            shm.close()
            shm.unlink()
        else:
            resource_tracker.unregister(self.shared_memory_name, 'shared_memory')

    def get_buffer_size(self):
        return self.shared_memory_size
    
    def get_image_shape(self):
        return self.shared_image_shape

    def save_frame(self, rgb, *, image_shape = None):
        if not self.do_create:
            raise Exception("CameraSharedObject was not created by this instance. Cannot write to object.")
        if image_shape is None:
            image_shape = self.shared_image_shape

        try:
            shm = shared_memory.SharedMemory(create=False, name=self.shared_memory_name)
            buf = shm.buf
            npbuf = np.ndarray((self.shared_memory_size,), dtype=np.uint8, buffer=buf)
            npbuf[:8] = np.frombuffer(np.float64(time.time()).tobytes(), dtype=np.uint8)
            npbuf[8+0*8:8+1*8] = np.frombuffer(np.uint64(image_shape[0]).tobytes(), dtype=np.uint8)
            npbuf[8+1*8:8+2*8] = np.frombuffer(np.uint64(image_shape[1]).tobytes(), dtype=np.uint8)
            npbuf[8+2*8:8+3*8] = np.frombuffer(np.uint64(image_shape[2]).tobytes(), dtype=np.uint8)
            npbuf[8+3*8:8+3*8+np.prod(image_shape)] = rgb.flatten()
        except Exception as e:
            print(e)
            return None
        finally:
            try:
                shm.close()
            except NameError:
                pass

    def get_timestamp_and_frame(self):
        try:
            # image_shape = self.shared_image_shape
            shm = shared_memory.SharedMemory(create=False, name=self.shared_memory_name)
            npbuf = np.ndarray((self.shared_memory_size,), dtype=np.uint8, buffer=shm.buf)
            timestamp = np.frombuffer(npbuf[:8], dtype=np.float64)[0]
            image_shape = np.frombuffer(npbuf[8+0*8:8+3*8], dtype=np.uint64)
            # image_shape = (npbuf[8+0], npbuf[8+1], npbuf[8+2])
            frame = np.frombuffer(npbuf[int(8+3*8):int(8+3*8+np.prod(image_shape))], dtype=np.uint8).reshape(image_shape[1], image_shape[0], -1)

            return timestamp, frame.copy()
        except Exception as e:
            print(e)
            return None, None
        finally:
            try:
                shm.close()
            except NameError:
                pass
