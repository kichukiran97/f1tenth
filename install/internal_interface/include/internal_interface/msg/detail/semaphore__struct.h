// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from internal_interface:msg/Semaphore.idl
// generated code does not contain a copyright notice

#ifndef INTERNAL_INTERFACE__MSG__DETAIL__SEMAPHORE__STRUCT_H_
#define INTERNAL_INTERFACE__MSG__DETAIL__SEMAPHORE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'device'
// Member 'state'
// Member 'name'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/Semaphore in the package internal_interface.
typedef struct internal_interface__msg__Semaphore
{
  double x;
  double y;
  uint64_t id;
  rosidl_runtime_c__String device;
  rosidl_runtime_c__String state;
  rosidl_runtime_c__String name;
} internal_interface__msg__Semaphore;

// Struct for a sequence of internal_interface__msg__Semaphore.
typedef struct internal_interface__msg__Semaphore__Sequence
{
  internal_interface__msg__Semaphore * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} internal_interface__msg__Semaphore__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERNAL_INTERFACE__MSG__DETAIL__SEMAPHORE__STRUCT_H_
