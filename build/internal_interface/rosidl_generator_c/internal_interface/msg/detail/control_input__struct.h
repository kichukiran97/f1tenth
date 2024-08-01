// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from internal_interface:msg/ControlInput.idl
// generated code does not contain a copyright notice

#ifndef INTERNAL_INTERFACE__MSG__DETAIL__CONTROL_INPUT__STRUCT_H_
#define INTERNAL_INTERFACE__MSG__DETAIL__CONTROL_INPUT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'source'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/ControlInput in the package internal_interface.
typedef struct internal_interface__msg__ControlInput
{
  double speed;
  double steer;
  double speed_confidence;
  double steer_confidence;
  rosidl_runtime_c__String source;
} internal_interface__msg__ControlInput;

// Struct for a sequence of internal_interface__msg__ControlInput.
typedef struct internal_interface__msg__ControlInput__Sequence
{
  internal_interface__msg__ControlInput * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} internal_interface__msg__ControlInput__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERNAL_INTERFACE__MSG__DETAIL__CONTROL_INPUT__STRUCT_H_
