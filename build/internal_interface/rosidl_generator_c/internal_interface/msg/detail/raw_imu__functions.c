// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from internal_interface:msg/RawImu.idl
// generated code does not contain a copyright notice
#include "internal_interface/msg/detail/raw_imu__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
internal_interface__msg__RawImu__init(internal_interface__msg__RawImu * msg)
{
  if (!msg) {
    return false;
  }
  // yaw
  // roll
  // pitch
  // accel_x
  // accel_y
  // accel_z
  return true;
}

void
internal_interface__msg__RawImu__fini(internal_interface__msg__RawImu * msg)
{
  if (!msg) {
    return;
  }
  // yaw
  // roll
  // pitch
  // accel_x
  // accel_y
  // accel_z
}

bool
internal_interface__msg__RawImu__are_equal(const internal_interface__msg__RawImu * lhs, const internal_interface__msg__RawImu * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // yaw
  if (lhs->yaw != rhs->yaw) {
    return false;
  }
  // roll
  if (lhs->roll != rhs->roll) {
    return false;
  }
  // pitch
  if (lhs->pitch != rhs->pitch) {
    return false;
  }
  // accel_x
  if (lhs->accel_x != rhs->accel_x) {
    return false;
  }
  // accel_y
  if (lhs->accel_y != rhs->accel_y) {
    return false;
  }
  // accel_z
  if (lhs->accel_z != rhs->accel_z) {
    return false;
  }
  return true;
}

bool
internal_interface__msg__RawImu__copy(
  const internal_interface__msg__RawImu * input,
  internal_interface__msg__RawImu * output)
{
  if (!input || !output) {
    return false;
  }
  // yaw
  output->yaw = input->yaw;
  // roll
  output->roll = input->roll;
  // pitch
  output->pitch = input->pitch;
  // accel_x
  output->accel_x = input->accel_x;
  // accel_y
  output->accel_y = input->accel_y;
  // accel_z
  output->accel_z = input->accel_z;
  return true;
}

internal_interface__msg__RawImu *
internal_interface__msg__RawImu__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  internal_interface__msg__RawImu * msg = (internal_interface__msg__RawImu *)allocator.allocate(sizeof(internal_interface__msg__RawImu), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(internal_interface__msg__RawImu));
  bool success = internal_interface__msg__RawImu__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
internal_interface__msg__RawImu__destroy(internal_interface__msg__RawImu * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    internal_interface__msg__RawImu__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
internal_interface__msg__RawImu__Sequence__init(internal_interface__msg__RawImu__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  internal_interface__msg__RawImu * data = NULL;

  if (size) {
    data = (internal_interface__msg__RawImu *)allocator.zero_allocate(size, sizeof(internal_interface__msg__RawImu), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = internal_interface__msg__RawImu__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        internal_interface__msg__RawImu__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
internal_interface__msg__RawImu__Sequence__fini(internal_interface__msg__RawImu__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      internal_interface__msg__RawImu__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

internal_interface__msg__RawImu__Sequence *
internal_interface__msg__RawImu__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  internal_interface__msg__RawImu__Sequence * array = (internal_interface__msg__RawImu__Sequence *)allocator.allocate(sizeof(internal_interface__msg__RawImu__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = internal_interface__msg__RawImu__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
internal_interface__msg__RawImu__Sequence__destroy(internal_interface__msg__RawImu__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    internal_interface__msg__RawImu__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
internal_interface__msg__RawImu__Sequence__are_equal(const internal_interface__msg__RawImu__Sequence * lhs, const internal_interface__msg__RawImu__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!internal_interface__msg__RawImu__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
internal_interface__msg__RawImu__Sequence__copy(
  const internal_interface__msg__RawImu__Sequence * input,
  internal_interface__msg__RawImu__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(internal_interface__msg__RawImu);
    internal_interface__msg__RawImu * data =
      (internal_interface__msg__RawImu *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!internal_interface__msg__RawImu__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          internal_interface__msg__RawImu__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!internal_interface__msg__RawImu__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
