// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from internal_interface:msg/Path.idl
// generated code does not contain a copyright notice

#ifndef INTERNAL_INTERFACE__MSG__DETAIL__PATH__STRUCT_H_
#define INTERNAL_INTERFACE__MSG__DETAIL__PATH__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'nodes'
#include "internal_interface/msg/detail/node__struct.h"

// Struct defined in msg/Path in the package internal_interface.
typedef struct internal_interface__msg__Path
{
  internal_interface__msg__Node__Sequence nodes;
} internal_interface__msg__Path;

// Struct for a sequence of internal_interface__msg__Path.
typedef struct internal_interface__msg__Path__Sequence
{
  internal_interface__msg__Path * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} internal_interface__msg__Path__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERNAL_INTERFACE__MSG__DETAIL__PATH__STRUCT_H_
