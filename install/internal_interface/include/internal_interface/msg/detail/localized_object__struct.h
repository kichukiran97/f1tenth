// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from internal_interface:msg/LocalizedObject.idl
// generated code does not contain a copyright notice

#ifndef INTERNAL_INTERFACE__MSG__DETAIL__LOCALIZED_OBJECT__STRUCT_H_
#define INTERNAL_INTERFACE__MSG__DETAIL__LOCALIZED_OBJECT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'label'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/LocalizedObject in the package internal_interface.
typedef struct internal_interface__msg__LocalizedObject
{
  double local_x;
  double local_y;
  double map_x;
  double map_y;
  rosidl_runtime_c__String label;
} internal_interface__msg__LocalizedObject;

// Struct for a sequence of internal_interface__msg__LocalizedObject.
typedef struct internal_interface__msg__LocalizedObject__Sequence
{
  internal_interface__msg__LocalizedObject * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} internal_interface__msg__LocalizedObject__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERNAL_INTERFACE__MSG__DETAIL__LOCALIZED_OBJECT__STRUCT_H_
