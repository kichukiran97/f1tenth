// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from internal_interface:msg/ManueverPart.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "internal_interface/msg/detail/manuever_part__rosidl_typesupport_introspection_c.h"
#include "internal_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "internal_interface/msg/detail/manuever_part__functions.h"
#include "internal_interface/msg/detail/manuever_part__struct.h"


// Include directives for member types
// Member `control`
#include "internal_interface/msg/control_input.h"
// Member `control`
#include "internal_interface/msg/detail/control_input__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ManueverPart__rosidl_typesupport_introspection_c__ManueverPart_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  internal_interface__msg__ManueverPart__init(message_memory);
}

void ManueverPart__rosidl_typesupport_introspection_c__ManueverPart_fini_function(void * message_memory)
{
  internal_interface__msg__ManueverPart__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ManueverPart__rosidl_typesupport_introspection_c__ManueverPart_message_member_array[2] = {
  {
    "control",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(internal_interface__msg__ManueverPart, control),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "duration_seconds",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(internal_interface__msg__ManueverPart, duration_seconds),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ManueverPart__rosidl_typesupport_introspection_c__ManueverPart_message_members = {
  "internal_interface__msg",  // message namespace
  "ManueverPart",  // message name
  2,  // number of fields
  sizeof(internal_interface__msg__ManueverPart),
  ManueverPart__rosidl_typesupport_introspection_c__ManueverPart_message_member_array,  // message members
  ManueverPart__rosidl_typesupport_introspection_c__ManueverPart_init_function,  // function to initialize message memory (memory has to be allocated)
  ManueverPart__rosidl_typesupport_introspection_c__ManueverPart_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ManueverPart__rosidl_typesupport_introspection_c__ManueverPart_message_type_support_handle = {
  0,
  &ManueverPart__rosidl_typesupport_introspection_c__ManueverPart_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_internal_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, internal_interface, msg, ManueverPart)() {
  ManueverPart__rosidl_typesupport_introspection_c__ManueverPart_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, internal_interface, msg, ControlInput)();
  if (!ManueverPart__rosidl_typesupport_introspection_c__ManueverPart_message_type_support_handle.typesupport_identifier) {
    ManueverPart__rosidl_typesupport_introspection_c__ManueverPart_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ManueverPart__rosidl_typesupport_introspection_c__ManueverPart_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
