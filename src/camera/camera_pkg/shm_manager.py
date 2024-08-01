import multiprocessing as mp
from multiprocessing import managers, shared_memory
import numpy as np
import time
import pickle
from dataclasses import dataclass

class CameraSharedMemoryManager(managers.BaseManager):
    def __init__(self, *args, **kwargs):
        super().__init__(*args, **kwargs)
        self.shm_blocks = {}

    def exit(self):
        for name, _ in self.shm_blocks:
            self.delete_shared_memory(name)

    def create_shared_memory(self, name, size):
        try:
            shm = shared_memory.SharedMemory(create=True, name=name, size=size)
        except Exception as e:
            if not "File exists:" in str(e):
                raise e
            else:
                shm = shared_memory.SharedMemory(create=False, name=name)
                shm.close()
                shm.unlink()
                shm = shared_memory.SharedMemory(create=True, name=name, size=size)

        shm_info = [shm, size]
        self.shm_blocks[name] = shm_info
        return f"Shared memory block '{name}' created with size {size}."

    def write_image(self, name, data):
        if not name in self.shm_blocks:
            return f"Shared memory block '{name}' not found."

        shm_info = self.shm_blocks[name]
        buf = np.ndarray((np.prod(data.shape),), dtype=np.uint8, buffer=shm_info[0].buf)
        buf[:] = data.view().reshape(-1)
        return f"Data written to shared memory block '{name}'."

    def get_image_from_buffer(self, name):
        if not name in self.shm_blocks:
            return f"Shared memory block '{name}' not found."

        buf = np.ndarray((640*480*3,), dtype=np.uint8, buffer=self.shm_blocks[name][0].buf)
        return buf

    def delete_shared_memory(self, name):
        if not name in self.shm_blocks:
            return f"Shared memory block '{name}' not found."

        shm_info = self.shm_blocks[name]
        shm_info[0].close()
        shm_info[0].unlink()
        del self.shm_blocks[name]
        return f"Shared memory block '{name}' deleted."
