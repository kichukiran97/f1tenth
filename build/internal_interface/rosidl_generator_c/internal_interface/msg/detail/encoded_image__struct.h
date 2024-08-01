// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from internal_interface:msg/EncodedImage.idl
// generated code does not contain a copyright notice

#ifndef INTERNAL_INTERFACE__MSG__DETAIL__ENCODED_IMAGE__STRUCT_H_
#define INTERNAL_INTERFACE__MSG__DETAIL__ENCODED_IMAGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'data'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in msg/EncodedImage in the package internal_interface.
typedef struct internal_interface__msg__EncodedImage
{
  double capture_ts;
  double publish_ts;
  rosidl_runtime_c__octet__Sequence data;
} internal_interface__msg__EncodedImage;

// Struct for a sequence of internal_interface__msg__EncodedImage.
typedef struct internal_interface__msg__EncodedImage__Sequence
{
  internal_interface__msg__EncodedImage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} internal_interface__msg__EncodedImage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERNAL_INTERFACE__MSG__DETAIL__ENCODED_IMAGE__STRUCT_H_
