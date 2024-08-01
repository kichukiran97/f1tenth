// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from internal_interface:msg/WheelEncoders.idl
// generated code does not contain a copyright notice

#ifndef INTERNAL_INTERFACE__MSG__DETAIL__WHEEL_ENCODERS__STRUCT_H_
#define INTERNAL_INTERFACE__MSG__DETAIL__WHEEL_ENCODERS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/WheelEncoders in the package internal_interface.
typedef struct internal_interface__msg__WheelEncoders
{
  int64_t left_wheel_count;
  int64_t right_wheel_count;
} internal_interface__msg__WheelEncoders;

// Struct for a sequence of internal_interface__msg__WheelEncoders.
typedef struct internal_interface__msg__WheelEncoders__Sequence
{
  internal_interface__msg__WheelEncoders * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} internal_interface__msg__WheelEncoders__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERNAL_INTERFACE__MSG__DETAIL__WHEEL_ENCODERS__STRUCT_H_
