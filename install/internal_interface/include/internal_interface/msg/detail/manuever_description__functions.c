// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from internal_interface:msg/ManueverDescription.idl
// generated code does not contain a copyright notice
#include "internal_interface/msg/detail/manuever_description__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `parts`
#include "internal_interface/msg/detail/manuever_part__functions.h"
// Member `name`
#include "rosidl_runtime_c/string_functions.h"

bool
internal_interface__msg__ManueverDescription__init(internal_interface__msg__ManueverDescription * msg)
{
  if (!msg) {
    return false;
  }
  // parts
  if (!internal_interface__msg__ManueverPart__Sequence__init(&msg->parts, 0)) {
    internal_interface__msg__ManueverDescription__fini(msg);
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    internal_interface__msg__ManueverDescription__fini(msg);
    return false;
  }
  return true;
}

void
internal_interface__msg__ManueverDescription__fini(internal_interface__msg__ManueverDescription * msg)
{
  if (!msg) {
    return;
  }
  // parts
  internal_interface__msg__ManueverPart__Sequence__fini(&msg->parts);
  // name
  rosidl_runtime_c__String__fini(&msg->name);
}

bool
internal_interface__msg__ManueverDescription__are_equal(const internal_interface__msg__ManueverDescription * lhs, const internal_interface__msg__ManueverDescription * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // parts
  if (!internal_interface__msg__ManueverPart__Sequence__are_equal(
      &(lhs->parts), &(rhs->parts)))
  {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  return true;
}

bool
internal_interface__msg__ManueverDescription__copy(
  const internal_interface__msg__ManueverDescription * input,
  internal_interface__msg__ManueverDescription * output)
{
  if (!input || !output) {
    return false;
  }
  // parts
  if (!internal_interface__msg__ManueverPart__Sequence__copy(
      &(input->parts), &(output->parts)))
  {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  return true;
}

internal_interface__msg__ManueverDescription *
internal_interface__msg__ManueverDescription__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  internal_interface__msg__ManueverDescription * msg = (internal_interface__msg__ManueverDescription *)allocator.allocate(sizeof(internal_interface__msg__ManueverDescription), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(internal_interface__msg__ManueverDescription));
  bool success = internal_interface__msg__ManueverDescription__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
internal_interface__msg__ManueverDescription__destroy(internal_interface__msg__ManueverDescription * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    internal_interface__msg__ManueverDescription__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
internal_interface__msg__ManueverDescription__Sequence__init(internal_interface__msg__ManueverDescription__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  internal_interface__msg__ManueverDescription * data = NULL;

  if (size) {
    data = (internal_interface__msg__ManueverDescription *)allocator.zero_allocate(size, sizeof(internal_interface__msg__ManueverDescription), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = internal_interface__msg__ManueverDescription__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        internal_interface__msg__ManueverDescription__fini(&data[i - 1]);
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
internal_interface__msg__ManueverDescription__Sequence__fini(internal_interface__msg__ManueverDescription__Sequence * array)
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
      internal_interface__msg__ManueverDescription__fini(&array->data[i]);
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

internal_interface__msg__ManueverDescription__Sequence *
internal_interface__msg__ManueverDescription__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  internal_interface__msg__ManueverDescription__Sequence * array = (internal_interface__msg__ManueverDescription__Sequence *)allocator.allocate(sizeof(internal_interface__msg__ManueverDescription__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = internal_interface__msg__ManueverDescription__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
internal_interface__msg__ManueverDescription__Sequence__destroy(internal_interface__msg__ManueverDescription__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    internal_interface__msg__ManueverDescription__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
internal_interface__msg__ManueverDescription__Sequence__are_equal(const internal_interface__msg__ManueverDescription__Sequence * lhs, const internal_interface__msg__ManueverDescription__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!internal_interface__msg__ManueverDescription__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
internal_interface__msg__ManueverDescription__Sequence__copy(
  const internal_interface__msg__ManueverDescription__Sequence * input,
  internal_interface__msg__ManueverDescription__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(internal_interface__msg__ManueverDescription);
    internal_interface__msg__ManueverDescription * data =
      (internal_interface__msg__ManueverDescription *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!internal_interface__msg__ManueverDescription__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          internal_interface__msg__ManueverDescription__fini(&data[i]);
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
    if (!internal_interface__msg__ManueverDescription__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
