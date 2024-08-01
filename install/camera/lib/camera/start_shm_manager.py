#!/bin/python3
import multiprocessing as mp
from multiprocessing import managers, shared_memory
import numpy as np
from camera_pkg.shm_manager import CameraSharedMemoryManager

# mp.set_start_method('spawn', force=True)

def start_manager():
    print("Starting SMO server...")
    manager = CameraSharedMemoryManager(address=('', 50000), authkey=b'secret')
    CameraSharedMemoryManager.register('create_shared_memory', manager.create_shared_memory)
    CameraSharedMemoryManager.register("write_image", manager.write_image)
    CameraSharedMemoryManager.register("get_image_from_buffer", manager.get_image_from_buffer)
    CameraSharedMemoryManager.register('delete_shared_memory', manager.delete_shared_memory)
    
    server = manager.get_server()
    print("SMO server running.")
    try:
        server.serve_forever()
    except KeyboardInterrupt:
        pass
    finally:
        print("SMO server closed.")

if __name__ == "__main__":
    start_manager()