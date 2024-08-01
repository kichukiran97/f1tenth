// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from internal_interface:msg/ManueverPart.idl
// generated code does not contain a copyright notice

#ifndef INTERNAL_INTERFACE__MSG__DETAIL__MANUEVER_PART__STRUCT_H_
#define INTERNAL_INTERFACE__MSG__DETAIL__MANUEVER_PART__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'control'
#include "internal_interface/msg/detail/control_input__struct.h"

// Struct defined in msg/ManueverPart in the package internal_interface.
typedef struct internal_interface__msg__ManueverPart
{
  internal_interface__msg__ControlInput control;
  double duration_seconds;
} internal_interface__msg__ManueverPart;

// Struct for a sequence of internal_interface__msg__ManueverPart.
typedef struct internal_interface__msg__ManueverPart__Sequence
{
  internal_interface__msg__ManueverPart * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} internal_interface__msg__ManueverPart__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERNAL_INTERFACE__MSG__DETAIL__MANUEVER_PART__STRUCT_H_
