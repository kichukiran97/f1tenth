// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from internal_interface:msg/Object.idl
// generated code does not contain a copyright notice
#include "internal_interface/msg/detail/object__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `label`
#include "rosidl_runtime_c/string_functions.h"

bool
internal_interface__msg__Object__init(internal_interface__msg__Object * msg)
{
  if (!msg) {
    return false;
  }
  // x1
  // y1
  // x2
  // y2
  // label
  if (!rosidl_runtime_c__String__init(&msg->label)) {
    internal_interface__msg__Object__fini(msg);
    return false;
  }
  return true;
}

void
internal_interface__msg__Object__fini(internal_interface__msg__Object * msg)
{
  if (!msg) {
    return;
  }
  // x1
  // y1
  // x2
  // y2
  // label
  rosidl_runtime_c__String__fini(&msg->label);
}

bool
internal_interface__msg__Object__are_equal(const internal_interface__msg__Object * lhs, const internal_interface__msg__Object * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // x1
  if (lhs->x1 != rhs->x1) {
    return false;
  }
  // y1
  if (lhs->y1 != rhs->y1) {
    return false;
  }
  // x2
  if (lhs->x2 != rhs->x2) {
    return false;
  }
  // y2
  if (lhs->y2 != rhs->y2) {
    return false;
  }
  // label
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->label), &(rhs->label)))
  {
    return false;
  }
  return true;
}

bool
internal_interface__msg__Object__copy(
  const internal_interface__msg__Object * input,
  internal_interface__msg__Object * output)
{
  if (!input || !output) {
    return false;
  }
  // x1
  output->x1 = input->x1;
  // y1
  output->y1 = input->y1;
  // x2
  output->x2 = input->x2;
  // y2
  output->y2 = input->y2;
  // label
  if (!rosidl_runtime_c__String__copy(
      &(input->label), &(output->label)))
  {
    return false;
  }
  return true;
}

internal_interface__msg__Object *
internal_interface__msg__Object__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  internal_interface__msg__Object * msg = (internal_interface__msg__Object *)allocator.allocate(sizeof(internal_interface__msg__Object), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(internal_interface__msg__Object));
  bool success = internal_interface__msg__Object__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
internal_interface__msg__Object__destroy(internal_interface__msg__Object * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    internal_interface__msg__Object__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
internal_interface__msg__Object__Sequence__init(internal_interface__msg__Object__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  internal_interface__msg__Object * data = NULL;

  if (size) {
    data = (internal_interface__msg__Object *)allocator.zero_allocate(size, sizeof(internal_interface__msg__Object), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = internal_interface__msg__Object__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        internal_interface__msg__Object__fini(&data[i - 1]);
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
internal_interface__msg__Object__Sequence__fini(internal_interface__msg__Object__Sequence * array)
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
      internal_interface__msg__Object__fini(&array->data[i]);
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

internal_interface__msg__Object__Sequence *
internal_interface__msg__Object__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  internal_interface__msg__Object__Sequence * array = (internal_interface__msg__Object__Sequence *)allocator.allocate(sizeof(internal_interface__msg__Object__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = internal_interface__msg__Object__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
internal_interface__msg__Object__Sequence__destroy(internal_interface__msg__Object__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    internal_interface__msg__Object__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
internal_interface__msg__Object__Sequence__are_equal(const internal_interface__msg__Object__Sequence * lhs, const internal_interface__msg__Object__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!internal_interface__msg__Object__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
internal_interface__msg__Object__Sequence__copy(
  const internal_interface__msg__Object__Sequence * input,
  internal_interface__msg__Object__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(internal_interface__msg__Object);
    internal_interface__msg__Object * data =
      (internal_interface__msg__Object *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!internal_interface__msg__Object__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          internal_interface__msg__Object__fini(&data[i]);
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
    if (!internal_interface__msg__Object__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
