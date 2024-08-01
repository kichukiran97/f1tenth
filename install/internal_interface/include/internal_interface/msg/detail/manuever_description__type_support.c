// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from internal_interface:msg/ManueverDescription.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "internal_interface/msg/detail/manuever_description__rosidl_typesupport_introspection_c.h"
#include "internal_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "internal_interface/msg/detail/manuever_description__functions.h"
#include "internal_interface/msg/detail/manuever_description__struct.h"


// Include directives for member types
// Member `parts`
#include "internal_interface/msg/manuever_part.h"
// Member `parts`
#include "internal_interface/msg/detail/manuever_part__rosidl_typesupport_introspection_c.h"
// Member `name`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ManueverDescription__rosidl_typesupport_introspection_c__ManueverDescription_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  internal_interface__msg__ManueverDescription__init(message_memory);
}

void ManueverDescription__rosidl_typesupport_introspection_c__ManueverDescription_fini_function(void * message_memory)
{
  internal_interface__msg__ManueverDescription__fini(message_memory);
}

size_t ManueverDescription__rosidl_typesupport_introspection_c__size_function__ManueverPart__parts(
  const void * untyped_member)
{
  const internal_interface__msg__ManueverPart__Sequence * member =
    (const internal_interface__msg__ManueverPart__Sequence *)(untyped_member);
  return member->size;
}

const void * ManueverDescription__rosidl_typesupport_introspection_c__get_const_function__ManueverPart__parts(
  const void * untyped_member, size_t index)
{
  const internal_interface__msg__ManueverPart__Sequence * member =
    (const internal_interface__msg__ManueverPart__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ManueverDescription__rosidl_typesupport_introspection_c__get_function__ManueverPart__parts(
  void * untyped_member, size_t index)
{
  internal_interface__msg__ManueverPart__Sequence * member =
    (internal_interface__msg__ManueverPart__Sequence *)(untyped_member);
  return &member->data[index];
}

bool ManueverDescription__rosidl_typesupport_introspection_c__resize_function__ManueverPart__parts(
  void * untyped_member, size_t size)
{
  internal_interface__msg__ManueverPart__Sequence * member =
    (internal_interface__msg__ManueverPart__Sequence *)(untyped_member);
  internal_interface__msg__ManueverPart__Sequence__fini(member);
  return internal_interface__msg__ManueverPart__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ManueverDescription__rosidl_typesupport_introspection_c__ManueverDescription_message_member_array[2] = {
  {
    "parts",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(internal_interface__msg__ManueverDescription, parts),  // bytes offset in struct
    NULL,  // default value
    ManueverDescription__rosidl_typesupport_introspection_c__size_function__ManueverPart__parts,  // size() function pointer
    ManueverDescription__rosidl_typesupport_introspection_c__get_const_function__ManueverPart__parts,  // get_const(index) function pointer
    ManueverDescription__rosidl_typesupport_introspection_c__get_function__ManueverPart__parts,  // get(index) function pointer
    ManueverDescription__rosidl_typesupport_introspection_c__resize_function__ManueverPart__parts  // resize(index) function pointer
  },
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(internal_interface__msg__ManueverDescription, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ManueverDescription__rosidl_typesupport_introspection_c__ManueverDescription_message_members = {
  "internal_interface__msg",  // message namespace
  "ManueverDescription",  // message name
  2,  // number of fields
  sizeof(internal_interface__msg__ManueverDescription),
  ManueverDescription__rosidl_typesupport_introspection_c__ManueverDescription_message_member_array,  // message members
  ManueverDescription__rosidl_typesupport_introspection_c__ManueverDescription_init_function,  // function to initialize message memory (memory has to be allocated)
  ManueverDescription__rosidl_typesupport_introspection_c__ManueverDescription_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ManueverDescription__rosidl_typesupport_introspection_c__ManueverDescription_message_type_support_handle = {
  0,
  &ManueverDescription__rosidl_typesupport_introspection_c__ManueverDescription_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_internal_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, internal_interface, msg, ManueverDescription)() {
  ManueverDescription__rosidl_typesupport_introspection_c__ManueverDescription_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, internal_interface, msg, ManueverPart)();
  if (!ManueverDescription__rosidl_typesupport_introspection_c__ManueverDescription_message_type_support_handle.typesupport_identifier) {
    ManueverDescription__rosidl_typesupport_introspection_c__ManueverDescription_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ManueverDescription__rosidl_typesupport_introspection_c__ManueverDescription_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
