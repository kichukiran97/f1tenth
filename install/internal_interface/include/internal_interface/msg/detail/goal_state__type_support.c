// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from internal_interface:msg/GoalState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "internal_interface/msg/detail/goal_state__rosidl_typesupport_introspection_c.h"
#include "internal_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "internal_interface/msg/detail/goal_state__functions.h"
#include "internal_interface/msg/detail/goal_state__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void GoalState__rosidl_typesupport_introspection_c__GoalState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  internal_interface__msg__GoalState__init(message_memory);
}

void GoalState__rosidl_typesupport_introspection_c__GoalState_fini_function(void * message_memory)
{
  internal_interface__msg__GoalState__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember GoalState__rosidl_typesupport_introspection_c__GoalState_message_member_array[1] = {
  {
    "goal_node_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(internal_interface__msg__GoalState, goal_node_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GoalState__rosidl_typesupport_introspection_c__GoalState_message_members = {
  "internal_interface__msg",  // message namespace
  "GoalState",  // message name
  1,  // number of fields
  sizeof(internal_interface__msg__GoalState),
  GoalState__rosidl_typesupport_introspection_c__GoalState_message_member_array,  // message members
  GoalState__rosidl_typesupport_introspection_c__GoalState_init_function,  // function to initialize message memory (memory has to be allocated)
  GoalState__rosidl_typesupport_introspection_c__GoalState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GoalState__rosidl_typesupport_introspection_c__GoalState_message_type_support_handle = {
  0,
  &GoalState__rosidl_typesupport_introspection_c__GoalState_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_internal_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, internal_interface, msg, GoalState)() {
  if (!GoalState__rosidl_typesupport_introspection_c__GoalState_message_type_support_handle.typesupport_identifier) {
    GoalState__rosidl_typesupport_introspection_c__GoalState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GoalState__rosidl_typesupport_introspection_c__GoalState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
