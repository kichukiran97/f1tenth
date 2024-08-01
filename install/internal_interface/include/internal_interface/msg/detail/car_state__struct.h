// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from internal_interface:msg/CarState.idl
// generated code does not contain a copyright notice

#ifndef INTERNAL_INTERFACE__MSG__DETAIL__CAR_STATE__STRUCT_H_
#define INTERNAL_INTERFACE__MSG__DETAIL__CAR_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/CarState in the package internal_interface.
typedef struct internal_interface__msg__CarState
{
  double x;
  double y;
  double z;
  double vel_x;
  double vel_y;
  double vel_z;
  double accel_x;
  double accel_y;
  double accel_z;
  float yaw;
  float roll;
  float pitch;
} internal_interface__msg__CarState;

// Struct for a sequence of internal_interface__msg__CarState.
typedef struct internal_interface__msg__CarState__Sequence
{
  internal_interface__msg__CarState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} internal_interface__msg__CarState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERNAL_INTERFACE__MSG__DETAIL__CAR_STATE__STRUCT_H_
