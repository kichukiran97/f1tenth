// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from internal_interface:msg/ManueverDescription.idl
// generated code does not contain a copyright notice

#ifndef INTERNAL_INTERFACE__MSG__DETAIL__MANUEVER_DESCRIPTION__STRUCT_H_
#define INTERNAL_INTERFACE__MSG__DETAIL__MANUEVER_DESCRIPTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'parts'
#include "internal_interface/msg/detail/manuever_part__struct.h"
// Member 'name'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/ManueverDescription in the package internal_interface.
typedef struct internal_interface__msg__ManueverDescription
{
  internal_interface__msg__ManueverPart__Sequence parts;
  rosidl_runtime_c__String name;
} internal_interface__msg__ManueverDescription;

// Struct for a sequence of internal_interface__msg__ManueverDescription.
typedef struct internal_interface__msg__ManueverDescription__Sequence
{
  internal_interface__msg__ManueverDescription * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} internal_interface__msg__ManueverDescription__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERNAL_INTERFACE__MSG__DETAIL__MANUEVER_DESCRIPTION__STRUCT_H_
