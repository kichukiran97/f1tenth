// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from internal_interface:msg/LocalizedObjects.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "internal_interface/msg/detail/localized_objects__rosidl_typesupport_introspection_c.h"
#include "internal_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "internal_interface/msg/detail/localized_objects__functions.h"
#include "internal_interface/msg/detail/localized_objects__struct.h"


// Include directives for member types
// Member `objects`
#include "internal_interface/msg/localized_object.h"
// Member `objects`
#include "internal_interface/msg/detail/localized_object__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void LocalizedObjects__rosidl_typesupport_introspection_c__LocalizedObjects_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  internal_interface__msg__LocalizedObjects__init(message_memory);
}

void LocalizedObjects__rosidl_typesupport_introspection_c__LocalizedObjects_fini_function(void * message_memory)
{
  internal_interface__msg__LocalizedObjects__fini(message_memory);
}

size_t LocalizedObjects__rosidl_typesupport_introspection_c__size_function__LocalizedObject__objects(
  const void * untyped_member)
{
  const internal_interface__msg__LocalizedObject__Sequence * member =
    (const internal_interface__msg__LocalizedObject__Sequence *)(untyped_member);
  return member->size;
}

const void * LocalizedObjects__rosidl_typesupport_introspection_c__get_const_function__LocalizedObject__objects(
  const void * untyped_member, size_t index)
{
  const internal_interface__msg__LocalizedObject__Sequence * member =
    (const internal_interface__msg__LocalizedObject__Sequence *)(untyped_member);
  return &member->data[index];
}

void * LocalizedObjects__rosidl_typesupport_introspection_c__get_function__LocalizedObject__objects(
  void * untyped_member, size_t index)
{
  internal_interface__msg__LocalizedObject__Sequence * member =
    (internal_interface__msg__LocalizedObject__Sequence *)(untyped_member);
  return &member->data[index];
}

bool LocalizedObjects__rosidl_typesupport_introspection_c__resize_function__LocalizedObject__objects(
  void * untyped_member, size_t size)
{
  internal_interface__msg__LocalizedObject__Sequence * member =
    (internal_interface__msg__LocalizedObject__Sequence *)(untyped_member);
  internal_interface__msg__LocalizedObject__Sequence__fini(member);
  return internal_interface__msg__LocalizedObject__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember LocalizedObjects__rosidl_typesupport_introspection_c__LocalizedObjects_message_member_array[1] = {
  {
    "objects",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(internal_interface__msg__LocalizedObjects, objects),  // bytes offset in struct
    NULL,  // default value
    LocalizedObjects__rosidl_typesupport_introspection_c__size_function__LocalizedObject__objects,  // size() function pointer
    LocalizedObjects__rosidl_typesupport_introspection_c__get_const_function__LocalizedObject__objects,  // get_const(index) function pointer
    LocalizedObjects__rosidl_typesupport_introspection_c__get_function__LocalizedObject__objects,  // get(index) function pointer
    LocalizedObjects__rosidl_typesupport_introspection_c__resize_function__LocalizedObject__objects  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers LocalizedObjects__rosidl_typesupport_introspection_c__LocalizedObjects_message_members = {
  "internal_interface__msg",  // message namespace
  "LocalizedObjects",  // message name
  1,  // number of fields
  sizeof(internal_interface__msg__LocalizedObjects),
  LocalizedObjects__rosidl_typesupport_introspection_c__LocalizedObjects_message_member_array,  // message members
  LocalizedObjects__rosidl_typesupport_introspection_c__LocalizedObjects_init_function,  // function to initialize message memory (memory has to be allocated)
  LocalizedObjects__rosidl_typesupport_introspection_c__LocalizedObjects_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t LocalizedObjects__rosidl_typesupport_introspection_c__LocalizedObjects_message_type_support_handle = {
  0,
  &LocalizedObjects__rosidl_typesupport_introspection_c__LocalizedObjects_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_internal_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, internal_interface, msg, LocalizedObjects)() {
  LocalizedObjects__rosidl_typesupport_introspection_c__LocalizedObjects_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, internal_interface, msg, LocalizedObject)();
  if (!LocalizedObjects__rosidl_typesupport_introspection_c__LocalizedObjects_message_type_support_handle.typesupport_identifier) {
    LocalizedObjects__rosidl_typesupport_introspection_c__LocalizedObjects_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &LocalizedObjects__rosidl_typesupport_introspection_c__LocalizedObjects_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
