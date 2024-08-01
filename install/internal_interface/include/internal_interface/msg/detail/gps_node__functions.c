// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from internal_interface:msg/GpsNode.idl
// generated code does not contain a copyright notice
#include "internal_interface/msg/detail/gps_node__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
internal_interface__msg__GpsNode__init(internal_interface__msg__GpsNode * msg)
{
  if (!msg) {
    return false;
  }
  // x
  // y
  return true;
}

void
internal_interface__msg__GpsNode__fini(internal_interface__msg__GpsNode * msg)
{
  if (!msg) {
    return;
  }
  // x
  // y
}

bool
internal_interface__msg__GpsNode__are_equal(const internal_interface__msg__GpsNode * lhs, const internal_interface__msg__GpsNode * rhs)
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
  return true;
}

bool
internal_interface__msg__GpsNode__copy(
  const internal_interface__msg__GpsNode * input,
  internal_interface__msg__GpsNode * output)
{
  if (!input || !output) {
    return false;
  }
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  return true;
}

internal_interface__msg__GpsNode *
internal_interface__msg__GpsNode__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  internal_interface__msg__GpsNode * msg = (internal_interface__msg__GpsNode *)allocator.allocate(sizeof(internal_interface__msg__GpsNode), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(internal_interface__msg__GpsNode));
  bool success = internal_interface__msg__GpsNode__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
internal_interface__msg__GpsNode__destroy(internal_interface__msg__GpsNode * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    internal_interface__msg__GpsNode__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
internal_interface__msg__GpsNode__Sequence__init(internal_interface__msg__GpsNode__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  internal_interface__msg__GpsNode * data = NULL;

  if (size) {
    data = (internal_interface__msg__GpsNode *)allocator.zero_allocate(size, sizeof(internal_interface__msg__GpsNode), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = internal_interface__msg__GpsNode__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        internal_interface__msg__GpsNode__fini(&data[i - 1]);
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
internal_interface__msg__GpsNode__Sequence__fini(internal_interface__msg__GpsNode__Sequence * array)
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
      internal_interface__msg__GpsNode__fini(&array->data[i]);
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

internal_interface__msg__GpsNode__Sequence *
internal_interface__msg__GpsNode__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  internal_interface__msg__GpsNode__Sequence * array = (internal_interface__msg__GpsNode__Sequence *)allocator.allocate(sizeof(internal_interface__msg__GpsNode__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = internal_interface__msg__GpsNode__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
internal_interface__msg__GpsNode__Sequence__destroy(internal_interface__msg__GpsNode__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    internal_interface__msg__GpsNode__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
internal_interface__msg__GpsNode__Sequence__are_equal(const internal_interface__msg__GpsNode__Sequence * lhs, const internal_interface__msg__GpsNode__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!internal_interface__msg__GpsNode__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
internal_interface__msg__GpsNode__Sequence__copy(
  const internal_interface__msg__GpsNode__Sequence * input,
  internal_interface__msg__GpsNode__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(internal_interface__msg__GpsNode);
    internal_interface__msg__GpsNode * data =
      (internal_interface__msg__GpsNode *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!internal_interface__msg__GpsNode__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          internal_interface__msg__GpsNode__fini(&data[i]);
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
    if (!internal_interface__msg__GpsNode__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
