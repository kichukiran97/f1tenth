// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from internal_interface:msg/ProximityStatus.idl
// generated code does not contain a copyright notice

#ifndef INTERNAL_INTERFACE__MSG__DETAIL__PROXIMITY_STATUS__STRUCT_H_
#define INTERNAL_INTERFACE__MSG__DETAIL__PROXIMITY_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/ProximityStatus in the package internal_interface.
typedef struct internal_interface__msg__ProximityStatus
{
  bool front_is_clear;
  bool left_is_clear;
  bool right_is_clear;
  bool front_very_close;
  bool left_very_close;
  bool right_very_close;
  double front_cm;
  double left_cm;
  double right_cm;
} internal_interface__msg__ProximityStatus;

// Struct for a sequence of internal_interface__msg__ProximityStatus.
typedef struct internal_interface__msg__ProximityStatus__Sequence
{
  internal_interface__msg__ProximityStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} internal_interface__msg__ProximityStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERNAL_INTERFACE__MSG__DETAIL__PROXIMITY_STATUS__STRUCT_H_
