// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from internal_interface:msg/RealControlInput.idl
// generated code does not contain a copyright notice

#ifndef INTERNAL_INTERFACE__MSG__DETAIL__REAL_CONTROL_INPUT__STRUCT_H_
#define INTERNAL_INTERFACE__MSG__DETAIL__REAL_CONTROL_INPUT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/RealControlInput in the package internal_interface.
typedef struct internal_interface__msg__RealControlInput
{
  float speed;
  float steer;
} internal_interface__msg__RealControlInput;

// Struct for a sequence of internal_interface__msg__RealControlInput.
typedef struct internal_interface__msg__RealControlInput__Sequence
{
  internal_interface__msg__RealControlInput * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} internal_interface__msg__RealControlInput__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERNAL_INTERFACE__MSG__DETAIL__REAL_CONTROL_INPUT__STRUCT_H_
