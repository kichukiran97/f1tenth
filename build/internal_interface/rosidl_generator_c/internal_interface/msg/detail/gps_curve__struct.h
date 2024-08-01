// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from internal_interface:msg/GpsCurve.idl
// generated code does not contain a copyright notice

#ifndef INTERNAL_INTERFACE__MSG__DETAIL__GPS_CURVE__STRUCT_H_
#define INTERNAL_INTERFACE__MSG__DETAIL__GPS_CURVE__STRUCT_H_

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
// Member 'car'
// Member 'target'
#include "internal_interface/msg/detail/gps_node__struct.h"

// Struct defined in msg/GpsCurve in the package internal_interface.
typedef struct internal_interface__msg__GpsCurve
{
  internal_interface__msg__GpsNode__Sequence nodes;
  internal_interface__msg__GpsNode car;
  internal_interface__msg__GpsNode target;
} internal_interface__msg__GpsCurve;

// Struct for a sequence of internal_interface__msg__GpsCurve.
typedef struct internal_interface__msg__GpsCurve__Sequence
{
  internal_interface__msg__GpsCurve * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} internal_interface__msg__GpsCurve__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERNAL_INTERFACE__MSG__DETAIL__GPS_CURVE__STRUCT_H_
