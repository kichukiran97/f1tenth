from multiprocessing.managers import BaseManager
from multiprocessing import managers, shared_memory, resource_tracker

def fix_register(name, rtype):
    if rtype == "shared_memory":
        return
    return resource_tracker._resource_tracker.register(name, rtype)
resource_tracker.register = fix_register

def fix_unregister(name, rtype):
    if rtype == "shared_memory":
        return
    return resource_tracker._resource_tracker.unregister(name, rtype)
resource_tracker.unregister = fix_unregister

if "shared_memory" in resource_tracker._CLEANUP_FUNCS:
    del resource_tracker._CLEANUP_FUNCS["shared_memory"]

class SharedMemoryClient(BaseManager):
    pass
