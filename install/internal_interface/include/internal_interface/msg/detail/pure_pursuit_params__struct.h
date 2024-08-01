// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from internal_interface:msg/PurePursuitParams.idl
// generated code does not contain a copyright notice

#ifndef INTERNAL_INTERFACE__MSG__DETAIL__PURE_PURSUIT_PARAMS__STRUCT_H_
#define INTERNAL_INTERFACE__MSG__DETAIL__PURE_PURSUIT_PARAMS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/PurePursuitParams in the package internal_interface.
typedef struct internal_interface__msg__PurePursuitParams
{
  double max_speed;
  double alpha_mul;
} internal_interface__msg__PurePursuitParams;

// Struct for a sequence of internal_interface__msg__PurePursuitParams.
typedef struct internal_interface__msg__PurePursuitParams__Sequence
{
  internal_interface__msg__PurePursuitParams * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} internal_interface__msg__PurePursuitParams__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERNAL_INTERFACE__MSG__DETAIL__PURE_PURSUIT_PARAMS__STRUCT_H_
