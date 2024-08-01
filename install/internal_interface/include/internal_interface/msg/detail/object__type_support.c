// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from internal_interface:msg/Object.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "internal_interface/msg/detail/object__rosidl_typesupport_introspection_c.h"
#include "internal_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "internal_interface/msg/detail/object__functions.h"
#include "internal_interface/msg/detail/object__struct.h"


// Include directives for member types
// Member `label`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Object__rosidl_typesupport_introspection_c__Object_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  internal_interface__msg__Object__init(message_memory);
}

void Object__rosidl_typesupport_introspection_c__Object_fini_function(void * message_memory)
{
  internal_interface__msg__Object__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Object__rosidl_typesupport_introspection_c__Object_message_member_array[5] = {
  {
    "x1",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(internal_interface__msg__Object, x1),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y1",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(internal_interface__msg__Object, y1),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "x2",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(internal_interface__msg__Object, x2),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y2",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(internal_interface__msg__Object, y2),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "label",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(internal_interface__msg__Object, label),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Object__rosidl_typesupport_introspection_c__Object_message_members = {
  "internal_interface__msg",  // message namespace
  "Object",  // message name
  5,  // number of fields
  sizeof(internal_interface__msg__Object),
  Object__rosidl_typesupport_introspection_c__Object_message_member_array,  // message members
  Object__rosidl_typesupport_introspection_c__Object_init_function,  // function to initialize message memory (memory has to be allocated)
  Object__rosidl_typesupport_introspection_c__Object_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Object__rosidl_typesupport_introspection_c__Object_message_type_support_handle = {
  0,
  &Object__rosidl_typesupport_introspection_c__Object_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_internal_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, internal_interface, msg, Object)() {
  if (!Object__rosidl_typesupport_introspection_c__Object_message_type_support_handle.typesupport_identifier) {
    Object__rosidl_typesupport_introspection_c__Object_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Object__rosidl_typesupport_introspection_c__Object_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
