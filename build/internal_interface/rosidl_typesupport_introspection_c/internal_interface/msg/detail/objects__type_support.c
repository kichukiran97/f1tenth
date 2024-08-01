// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from internal_interface:msg/Objects.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "internal_interface/msg/detail/objects__rosidl_typesupport_introspection_c.h"
#include "internal_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "internal_interface/msg/detail/objects__functions.h"
#include "internal_interface/msg/detail/objects__struct.h"


// Include directives for member types
// Member `objects`
#include "internal_interface/msg/object.h"
// Member `objects`
#include "internal_interface/msg/detail/object__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Objects__rosidl_typesupport_introspection_c__Objects_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  internal_interface__msg__Objects__init(message_memory);
}

void Objects__rosidl_typesupport_introspection_c__Objects_fini_function(void * message_memory)
{
  internal_interface__msg__Objects__fini(message_memory);
}

size_t Objects__rosidl_typesupport_introspection_c__size_function__Object__objects(
  const void * untyped_member)
{
  const internal_interface__msg__Object__Sequence * member =
    (const internal_interface__msg__Object__Sequence *)(untyped_member);
  return member->size;
}

const void * Objects__rosidl_typesupport_introspection_c__get_const_function__Object__objects(
  const void * untyped_member, size_t index)
{
  const internal_interface__msg__Object__Sequence * member =
    (const internal_interface__msg__Object__Sequence *)(untyped_member);
  return &member->data[index];
}

void * Objects__rosidl_typesupport_introspection_c__get_function__Object__objects(
  void * untyped_member, size_t index)
{
  internal_interface__msg__Object__Sequence * member =
    (internal_interface__msg__Object__Sequence *)(untyped_member);
  return &member->data[index];
}

bool Objects__rosidl_typesupport_introspection_c__resize_function__Object__objects(
  void * untyped_member, size_t size)
{
  internal_interface__msg__Object__Sequence * member =
    (internal_interface__msg__Object__Sequence *)(untyped_member);
  internal_interface__msg__Object__Sequence__fini(member);
  return internal_interface__msg__Object__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember Objects__rosidl_typesupport_introspection_c__Objects_message_member_array[1] = {
  {
    "objects",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(internal_interface__msg__Objects, objects),  // bytes offset in struct
    NULL,  // default value
    Objects__rosidl_typesupport_introspection_c__size_function__Object__objects,  // size() function pointer
    Objects__rosidl_typesupport_introspection_c__get_const_function__Object__objects,  // get_const(index) function pointer
    Objects__rosidl_typesupport_introspection_c__get_function__Object__objects,  // get(index) function pointer
    Objects__rosidl_typesupport_introspection_c__resize_function__Object__objects  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Objects__rosidl_typesupport_introspection_c__Objects_message_members = {
  "internal_interface__msg",  // message namespace
  "Objects",  // message name
  1,  // number of fields
  sizeof(internal_interface__msg__Objects),
  Objects__rosidl_typesupport_introspection_c__Objects_message_member_array,  // message members
  Objects__rosidl_typesupport_introspection_c__Objects_init_function,  // function to initialize message memory (memory has to be allocated)
  Objects__rosidl_typesupport_introspection_c__Objects_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Objects__rosidl_typesupport_introspection_c__Objects_message_type_support_handle = {
  0,
  &Objects__rosidl_typesupport_introspection_c__Objects_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_internal_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, internal_interface, msg, Objects)() {
  Objects__rosidl_typesupport_introspection_c__Objects_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, internal_interface, msg, Object)();
  if (!Objects__rosidl_typesupport_introspection_c__Objects_message_type_support_handle.typesupport_identifier) {
    Objects__rosidl_typesupport_introspection_c__Objects_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Objects__rosidl_typesupport_introspection_c__Objects_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
