// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from internal_interface:msg/LocalizedObject.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "internal_interface/msg/detail/localized_object__rosidl_typesupport_introspection_c.h"
#include "internal_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "internal_interface/msg/detail/localized_object__functions.h"
#include "internal_interface/msg/detail/localized_object__struct.h"


// Include directives for member types
// Member `label`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void LocalizedObject__rosidl_typesupport_introspection_c__LocalizedObject_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  internal_interface__msg__LocalizedObject__init(message_memory);
}

void LocalizedObject__rosidl_typesupport_introspection_c__LocalizedObject_fini_function(void * message_memory)
{
  internal_interface__msg__LocalizedObject__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember LocalizedObject__rosidl_typesupport_introspection_c__LocalizedObject_message_member_array[5] = {
  {
    "local_x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(internal_interface__msg__LocalizedObject, local_x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "local_y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(internal_interface__msg__LocalizedObject, local_y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "map_x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(internal_interface__msg__LocalizedObject, map_x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "map_y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(internal_interface__msg__LocalizedObject, map_y),  // bytes offset in struct
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
    offsetof(internal_interface__msg__LocalizedObject, label),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers LocalizedObject__rosidl_typesupport_introspection_c__LocalizedObject_message_members = {
  "internal_interface__msg",  // message namespace
  "LocalizedObject",  // message name
  5,  // number of fields
  sizeof(internal_interface__msg__LocalizedObject),
  LocalizedObject__rosidl_typesupport_introspection_c__LocalizedObject_message_member_array,  // message members
  LocalizedObject__rosidl_typesupport_introspection_c__LocalizedObject_init_function,  // function to initialize message memory (memory has to be allocated)
  LocalizedObject__rosidl_typesupport_introspection_c__LocalizedObject_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t LocalizedObject__rosidl_typesupport_introspection_c__LocalizedObject_message_type_support_handle = {
  0,
  &LocalizedObject__rosidl_typesupport_introspection_c__LocalizedObject_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_internal_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, internal_interface, msg, LocalizedObject)() {
  if (!LocalizedObject__rosidl_typesupport_introspection_c__LocalizedObject_message_type_support_handle.typesupport_identifier) {
    LocalizedObject__rosidl_typesupport_introspection_c__LocalizedObject_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &LocalizedObject__rosidl_typesupport_introspection_c__LocalizedObject_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
