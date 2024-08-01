// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from internal_interface:msg/CarState.idl
// generated code does not contain a copyright notice
#include "internal_interface/msg/detail/car_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
internal_interface__msg__CarState__init(internal_interface__msg__CarState * msg)
{
  if (!msg) {
    return false;
  }
  // x
  // y
  // z
  // vel_x
  // vel_y
  // vel_z
  // accel_x
  // accel_y
  // accel_z
  // yaw
  // roll
  // pitch
  return true;
}

void
internal_interface__msg__CarState__fini(internal_interface__msg__CarState * msg)
{
  if (!msg) {
    return;
  }
  // x
  // y
  // z
  // vel_x
  // vel_y
  // vel_z
  // accel_x
  // accel_y
  // accel_z
  // yaw
  // roll
  // pitch
}

bool
internal_interface__msg__CarState__are_equal(const internal_interface__msg__CarState * lhs, const internal_interface__msg__CarState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  // z
  if (lhs->z != rhs->z) {
    return false;
  }
  // vel_x
  if (lhs->vel_x != rhs->vel_x) {
    return false;
  }
  // vel_y
  if (lhs->vel_y != rhs->vel_y) {
    return false;
  }
  // vel_z
  if (lhs->vel_z != rhs->vel_z) {
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
  return true;
}

bool
internal_interface__msg__CarState__copy(
  const internal_interface__msg__CarState * input,
  internal_interface__msg__CarState * output)
{
  if (!input || !output) {
    return false;
  }
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  // z
  output->z = input->z;
  // vel_x
  output->vel_x = input->vel_x;
  // vel_y
  output->vel_y = input->vel_y;
  // vel_z
  output->vel_z = input->vel_z;
  // accel_x
  output->accel_x = input->accel_x;
  // accel_y
  output->accel_y = input->accel_y;
  // accel_z
  output->accel_z = input->accel_z;
  // yaw
  output->yaw = input->yaw;
  // roll
  output->roll = input->roll;
  // pitch
  output->pitch = input->pitch;
  return true;
}

internal_interface__msg__CarState *
internal_interface__msg__CarState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  internal_interface__msg__CarState * msg = (internal_interface__msg__CarState *)allocator.allocate(sizeof(internal_interface__msg__CarState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(internal_interface__msg__CarState));
  bool success = internal_interface__msg__CarState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
internal_interface__msg__CarState__destroy(internal_interface__msg__CarState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    internal_interface__msg__CarState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
internal_interface__msg__CarState__Sequence__init(internal_interface__msg__CarState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  internal_interface__msg__CarState * data = NULL;

  if (size) {
    data = (internal_interface__msg__CarState *)allocator.zero_allocate(size, sizeof(internal_interface__msg__CarState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = internal_interface__msg__CarState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        internal_interface__msg__CarState__fini(&data[i - 1]);
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
internal_interface__msg__CarState__Sequence__fini(internal_interface__msg__CarState__Sequence * array)
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
      internal_interface__msg__CarState__fini(&array->data[i]);
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

internal_interface__msg__CarState__Sequence *
internal_interface__msg__CarState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  internal_interface__msg__CarState__Sequence * array = (internal_interface__msg__CarState__Sequence *)allocator.allocate(sizeof(internal_interface__msg__CarState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = internal_interface__msg__CarState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
internal_interface__msg__CarState__Sequence__destroy(internal_interface__msg__CarState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    internal_interface__msg__CarState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
internal_interface__msg__CarState__Sequence__are_equal(const internal_interface__msg__CarState__Sequence * lhs, const internal_interface__msg__CarState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!internal_interface__msg__CarState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
internal_interface__msg__CarState__Sequence__copy(
  const internal_interface__msg__CarState__Sequence * input,
  internal_interface__msg__CarState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(internal_interface__msg__CarState);
    internal_interface__msg__CarState * data =
      (internal_interface__msg__CarState *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!internal_interface__msg__CarState__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          internal_interface__msg__CarState__fini(&data[i]);
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
    if (!internal_interface__msg__CarState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
