// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from internal_interface:msg/Path.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "internal_interface/msg/detail/path__rosidl_typesupport_introspection_c.h"
#include "internal_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "internal_interface/msg/detail/path__functions.h"
#include "internal_interface/msg/detail/path__struct.h"


// Include directives for member types
// Member `nodes`
#include "internal_interface/msg/node.h"
// Member `nodes`
#include "internal_interface/msg/detail/node__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Path__rosidl_typesupport_introspection_c__Path_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  internal_interface__msg__Path__init(message_memory);
}

void Path__rosidl_typesupport_introspection_c__Path_fini_function(void * message_memory)
{
  internal_interface__msg__Path__fini(message_memory);
}

size_t Path__rosidl_typesupport_introspection_c__size_function__Node__nodes(
  const void * untyped_member)
{
  const internal_interface__msg__Node__Sequence * member =
    (const internal_interface__msg__Node__Sequence *)(untyped_member);
  return member->size;
}

const void * Path__rosidl_typesupport_introspection_c__get_const_function__Node__nodes(
  const void * untyped_member, size_t index)
{
  const internal_interface__msg__Node__Sequence * member =
    (const internal_interface__msg__Node__Sequence *)(untyped_member);
  return &member->data[index];
}

void * Path__rosidl_typesupport_introspection_c__get_function__Node__nodes(
  void * untyped_member, size_t index)
{
  internal_interface__msg__Node__Sequence * member =
    (internal_interface__msg__Node__Sequence *)(untyped_member);
  return &member->data[index];
}

bool Path__rosidl_typesupport_introspection_c__resize_function__Node__nodes(
  void * untyped_member, size_t size)
{
  internal_interface__msg__Node__Sequence * member =
    (internal_interface__msg__Node__Sequence *)(untyped_member);
  internal_interface__msg__Node__Sequence__fini(member);
  return internal_interface__msg__Node__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember Path__rosidl_typesupport_introspection_c__Path_message_member_array[1] = {
  {
    "nodes",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(internal_interface__msg__Path, nodes),  // bytes offset in struct
    NULL,  // default value
    Path__rosidl_typesupport_introspection_c__size_function__Node__nodes,  // size() function pointer
    Path__rosidl_typesupport_introspection_c__get_const_function__Node__nodes,  // get_const(index) function pointer
    Path__rosidl_typesupport_introspection_c__get_function__Node__nodes,  // get(index) function pointer
    Path__rosidl_typesupport_introspection_c__resize_function__Node__nodes  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Path__rosidl_typesupport_introspection_c__Path_message_members = {
  "internal_interface__msg",  // message namespace
  "Path",  // message name
  1,  // number of fields
  sizeof(internal_interface__msg__Path),
  Path__rosidl_typesupport_introspection_c__Path_message_member_array,  // message members
  Path__rosidl_typesupport_introspection_c__Path_init_function,  // function to initialize message memory (memory has to be allocated)
  Path__rosidl_typesupport_introspection_c__Path_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Path__rosidl_typesupport_introspection_c__Path_message_type_support_handle = {
  0,
  &Path__rosidl_typesupport_introspection_c__Path_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_internal_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, internal_interface, msg, Path)() {
  Path__rosidl_typesupport_introspection_c__Path_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, internal_interface, msg, Node)();
  if (!Path__rosidl_typesupport_introspection_c__Path_message_type_support_handle.typesupport_identifier) {
    Path__rosidl_typesupport_introspection_c__Path_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Path__rosidl_typesupport_introspection_c__Path_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
