// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from internal_interface:msg/RawImu.idl
// generated code does not contain a copyright notice

#ifndef INTERNAL_INTERFACE__MSG__DETAIL__RAW_IMU__STRUCT_H_
#define INTERNAL_INTERFACE__MSG__DETAIL__RAW_IMU__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/RawImu in the package internal_interface.
typedef struct internal_interface__msg__RawImu
{
  float yaw;
  float roll;
  float pitch;
  float accel_x;
  float accel_y;
  float accel_z;
} internal_interface__msg__RawImu;

// Struct for a sequence of internal_interface__msg__RawImu.
typedef struct internal_interface__msg__RawImu__Sequence
{
  internal_interface__msg__RawImu * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} internal_interface__msg__RawImu__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERNAL_INTERFACE__MSG__DETAIL__RAW_IMU__STRUCT_H_
