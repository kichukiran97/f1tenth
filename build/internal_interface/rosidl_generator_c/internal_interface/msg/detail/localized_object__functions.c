// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from internal_interface:msg/LocalizedObject.idl
// generated code does not contain a copyright notice
#include "internal_interface/msg/detail/localized_object__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `label`
#include "rosidl_runtime_c/string_functions.h"

bool
internal_interface__msg__LocalizedObject__init(internal_interface__msg__LocalizedObject * msg)
{
  if (!msg) {
    return false;
  }
  // local_x
  // local_y
  // map_x
  // map_y
  // label
  if (!rosidl_runtime_c__String__init(&msg->label)) {
    internal_interface__msg__LocalizedObject__fini(msg);
    return false;
  }
  return true;
}

void
internal_interface__msg__LocalizedObject__fini(internal_interface__msg__LocalizedObject * msg)
{
  if (!msg) {
    return;
  }
  // local_x
  // local_y
  // map_x
  // map_y
  // label
  rosidl_runtime_c__String__fini(&msg->label);
}

bool
internal_interface__msg__LocalizedObject__are_equal(const internal_interface__msg__LocalizedObject * lhs, const internal_interface__msg__LocalizedObject * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // local_x
  if (lhs->local_x != rhs->local_x) {
    return false;
  }
  // local_y
  if (lhs->local_y != rhs->local_y) {
    return false;
  }
  // map_x
  if (lhs->map_x != rhs->map_x) {
    return false;
  }
  // map_y
  if (lhs->map_y != rhs->map_y) {
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
internal_interface__msg__LocalizedObject__copy(
  const internal_interface__msg__LocalizedObject * input,
  internal_interface__msg__LocalizedObject * output)
{
  if (!input || !output) {
    return false;
  }
  // local_x
  output->local_x = input->local_x;
  // local_y
  output->local_y = input->local_y;
  // map_x
  output->map_x = input->map_x;
  // map_y
  output->map_y = input->map_y;
  // label
  if (!rosidl_runtime_c__String__copy(
      &(input->label), &(output->label)))
  {
    return false;
  }
  return true;
}

internal_interface__msg__LocalizedObject *
internal_interface__msg__LocalizedObject__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  internal_interface__msg__LocalizedObject * msg = (internal_interface__msg__LocalizedObject *)allocator.allocate(sizeof(internal_interface__msg__LocalizedObject), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(internal_interface__msg__LocalizedObject));
  bool success = internal_interface__msg__LocalizedObject__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
internal_interface__msg__LocalizedObject__destroy(internal_interface__msg__LocalizedObject * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    internal_interface__msg__LocalizedObject__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
internal_interface__msg__LocalizedObject__Sequence__init(internal_interface__msg__LocalizedObject__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  internal_interface__msg__LocalizedObject * data = NULL;

  if (size) {
    data = (internal_interface__msg__LocalizedObject *)allocator.zero_allocate(size, sizeof(internal_interface__msg__LocalizedObject), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = internal_interface__msg__LocalizedObject__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        internal_interface__msg__LocalizedObject__fini(&data[i - 1]);
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
internal_interface__msg__LocalizedObject__Sequence__fini(internal_interface__msg__LocalizedObject__Sequence * array)
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
      internal_interface__msg__LocalizedObject__fini(&array->data[i]);
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

internal_interface__msg__LocalizedObject__Sequence *
internal_interface__msg__LocalizedObject__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  internal_interface__msg__LocalizedObject__Sequence * array = (internal_interface__msg__LocalizedObject__Sequence *)allocator.allocate(sizeof(internal_interface__msg__LocalizedObject__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = internal_interface__msg__LocalizedObject__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
internal_interface__msg__LocalizedObject__Sequence__destroy(internal_interface__msg__LocalizedObject__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    internal_interface__msg__LocalizedObject__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
internal_interface__msg__LocalizedObject__Sequence__are_equal(const internal_interface__msg__LocalizedObject__Sequence * lhs, const internal_interface__msg__LocalizedObject__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!internal_interface__msg__LocalizedObject__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
internal_interface__msg__LocalizedObject__Sequence__copy(
  const internal_interface__msg__LocalizedObject__Sequence * input,
  internal_interface__msg__LocalizedObject__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(internal_interface__msg__LocalizedObject);
    internal_interface__msg__LocalizedObject * data =
      (internal_interface__msg__LocalizedObject *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!internal_interface__msg__LocalizedObject__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          internal_interface__msg__LocalizedObject__fini(&data[i]);
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
    if (!internal_interface__msg__LocalizedObject__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
