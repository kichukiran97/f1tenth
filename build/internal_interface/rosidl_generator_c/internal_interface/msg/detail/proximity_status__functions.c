// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from internal_interface:msg/ProximityStatus.idl
// generated code does not contain a copyright notice
#include "internal_interface/msg/detail/proximity_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
internal_interface__msg__ProximityStatus__init(internal_interface__msg__ProximityStatus * msg)
{
  if (!msg) {
    return false;
  }
  // front_is_clear
  // left_is_clear
  // right_is_clear
  // front_very_close
  // left_very_close
  // right_very_close
  // front_cm
  // left_cm
  // right_cm
  return true;
}

void
internal_interface__msg__ProximityStatus__fini(internal_interface__msg__ProximityStatus * msg)
{
  if (!msg) {
    return;
  }
  // front_is_clear
  // left_is_clear
  // right_is_clear
  // front_very_close
  // left_very_close
  // right_very_close
  // front_cm
  // left_cm
  // right_cm
}

bool
internal_interface__msg__ProximityStatus__are_equal(const internal_interface__msg__ProximityStatus * lhs, const internal_interface__msg__ProximityStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // front_is_clear
  if (lhs->front_is_clear != rhs->front_is_clear) {
    return false;
  }
  // left_is_clear
  if (lhs->left_is_clear != rhs->left_is_clear) {
    return false;
  }
  // right_is_clear
  if (lhs->right_is_clear != rhs->right_is_clear) {
    return false;
  }
  // front_very_close
  if (lhs->front_very_close != rhs->front_very_close) {
    return false;
  }
  // left_very_close
  if (lhs->left_very_close != rhs->left_very_close) {
    return false;
  }
  // right_very_close
  if (lhs->right_very_close != rhs->right_very_close) {
    return false;
  }
  // front_cm
  if (lhs->front_cm != rhs->front_cm) {
    return false;
  }
  // left_cm
  if (lhs->left_cm != rhs->left_cm) {
    return false;
  }
  // right_cm
  if (lhs->right_cm != rhs->right_cm) {
    return false;
  }
  return true;
}

bool
internal_interface__msg__ProximityStatus__copy(
  const internal_interface__msg__ProximityStatus * input,
  internal_interface__msg__ProximityStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // front_is_clear
  output->front_is_clear = input->front_is_clear;
  // left_is_clear
  output->left_is_clear = input->left_is_clear;
  // right_is_clear
  output->right_is_clear = input->right_is_clear;
  // front_very_close
  output->front_very_close = input->front_very_close;
  // left_very_close
  output->left_very_close = input->left_very_close;
  // right_very_close
  output->right_very_close = input->right_very_close;
  // front_cm
  output->front_cm = input->front_cm;
  // left_cm
  output->left_cm = input->left_cm;
  // right_cm
  output->right_cm = input->right_cm;
  return true;
}

internal_interface__msg__ProximityStatus *
internal_interface__msg__ProximityStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  internal_interface__msg__ProximityStatus * msg = (internal_interface__msg__ProximityStatus *)allocator.allocate(sizeof(internal_interface__msg__ProximityStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(internal_interface__msg__ProximityStatus));
  bool success = internal_interface__msg__ProximityStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
internal_interface__msg__ProximityStatus__destroy(internal_interface__msg__ProximityStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    internal_interface__msg__ProximityStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
internal_interface__msg__ProximityStatus__Sequence__init(internal_interface__msg__ProximityStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  internal_interface__msg__ProximityStatus * data = NULL;

  if (size) {
    data = (internal_interface__msg__ProximityStatus *)allocator.zero_allocate(size, sizeof(internal_interface__msg__ProximityStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = internal_interface__msg__ProximityStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        internal_interface__msg__ProximityStatus__fini(&data[i - 1]);
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
internal_interface__msg__ProximityStatus__Sequence__fini(internal_interface__msg__ProximityStatus__Sequence * array)
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
      internal_interface__msg__ProximityStatus__fini(&array->data[i]);
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

internal_interface__msg__ProximityStatus__Sequence *
internal_interface__msg__ProximityStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  internal_interface__msg__ProximityStatus__Sequence * array = (internal_interface__msg__ProximityStatus__Sequence *)allocator.allocate(sizeof(internal_interface__msg__ProximityStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = internal_interface__msg__ProximityStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
internal_interface__msg__ProximityStatus__Sequence__destroy(internal_interface__msg__ProximityStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    internal_interface__msg__ProximityStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
internal_interface__msg__ProximityStatus__Sequence__are_equal(const internal_interface__msg__ProximityStatus__Sequence * lhs, const internal_interface__msg__ProximityStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!internal_interface__msg__ProximityStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
internal_interface__msg__ProximityStatus__Sequence__copy(
  const internal_interface__msg__ProximityStatus__Sequence * input,
  internal_interface__msg__ProximityStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(internal_interface__msg__ProximityStatus);
    internal_interface__msg__ProximityStatus * data =
      (internal_interface__msg__ProximityStatus *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!internal_interface__msg__ProximityStatus__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          internal_interface__msg__ProximityStatus__fini(&data[i]);
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
    if (!internal_interface__msg__ProximityStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
