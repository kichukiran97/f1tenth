// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from internal_interface:msg/Objects.idl
// generated code does not contain a copyright notice

#ifndef INTERNAL_INTERFACE__MSG__DETAIL__OBJECTS__STRUCT_H_
#define INTERNAL_INTERFACE__MSG__DETAIL__OBJECTS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'objects'
#include "internal_interface/msg/detail/object__struct.h"

// Struct defined in msg/Objects in the package internal_interface.
typedef struct internal_interface__msg__Objects
{
  internal_interface__msg__Object__Sequence objects;
} internal_interface__msg__Objects;

// Struct for a sequence of internal_interface__msg__Objects.
typedef struct internal_interface__msg__Objects__Sequence
{
  internal_interface__msg__Objects * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} internal_interface__msg__Objects__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERNAL_INTERFACE__MSG__DETAIL__OBJECTS__STRUCT_H_
