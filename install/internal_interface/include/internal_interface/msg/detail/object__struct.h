// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from internal_interface:msg/Object.idl
// generated code does not contain a copyright notice

#ifndef INTERNAL_INTERFACE__MSG__DETAIL__OBJECT__STRUCT_H_
#define INTERNAL_INTERFACE__MSG__DETAIL__OBJECT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'label'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/Object in the package internal_interface.
typedef struct internal_interface__msg__Object
{
  double x1;
  double y1;
  double x2;
  double y2;
  rosidl_runtime_c__String label;
} internal_interface__msg__Object;

// Struct for a sequence of internal_interface__msg__Object.
typedef struct internal_interface__msg__Object__Sequence
{
  internal_interface__msg__Object * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} internal_interface__msg__Object__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERNAL_INTERFACE__MSG__DETAIL__OBJECT__STRUCT_H_
