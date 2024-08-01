// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from internal_interface:msg/GpsCurve.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "internal_interface/msg/detail/gps_curve__rosidl_typesupport_introspection_c.h"
#include "internal_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "internal_interface/msg/detail/gps_curve__functions.h"
#include "internal_interface/msg/detail/gps_curve__struct.h"


// Include directives for member types
// Member `nodes`
// Member `car`
// Member `target`
#include "internal_interface/msg/gps_node.h"
// Member `nodes`
// Member `car`
// Member `target`
#include "internal_interface/msg/detail/gps_node__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void GpsCurve__rosidl_typesupport_introspection_c__GpsCurve_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  internal_interface__msg__GpsCurve__init(message_memory);
}

void GpsCurve__rosidl_typesupport_introspection_c__GpsCurve_fini_function(void * message_memory)
{
  internal_interface__msg__GpsCurve__fini(message_memory);
}

size_t GpsCurve__rosidl_typesupport_introspection_c__size_function__GpsNode__nodes(
  const void * untyped_member)
{
  const internal_interface__msg__GpsNode__Sequence * member =
    (const internal_interface__msg__GpsNode__Sequence *)(untyped_member);
  return member->size;
}

const void * GpsCurve__rosidl_typesupport_introspection_c__get_const_function__GpsNode__nodes(
  const void * untyped_member, size_t index)
{
  const internal_interface__msg__GpsNode__Sequence * member =
    (const internal_interface__msg__GpsNode__Sequence *)(untyped_member);
  return &member->data[index];
}

void * GpsCurve__rosidl_typesupport_introspection_c__get_function__GpsNode__nodes(
  void * untyped_member, size_t index)
{
  internal_interface__msg__GpsNode__Sequence * member =
    (internal_interface__msg__GpsNode__Sequence *)(untyped_member);
  return &member->data[index];
}

bool GpsCurve__rosidl_typesupport_introspection_c__resize_function__GpsNode__nodes(
  void * untyped_member, size_t size)
{
  internal_interface__msg__GpsNode__Sequence * member =
    (internal_interface__msg__GpsNode__Sequence *)(untyped_member);
  internal_interface__msg__GpsNode__Sequence__fini(member);
  return internal_interface__msg__GpsNode__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember GpsCurve__rosidl_typesupport_introspection_c__GpsCurve_message_member_array[3] = {
  {
    "nodes",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(internal_interface__msg__GpsCurve, nodes),  // bytes offset in struct
    NULL,  // default value
    GpsCurve__rosidl_typesupport_introspection_c__size_function__GpsNode__nodes,  // size() function pointer
    GpsCurve__rosidl_typesupport_introspection_c__get_const_function__GpsNode__nodes,  // get_const(index) function pointer
    GpsCurve__rosidl_typesupport_introspection_c__get_function__GpsNode__nodes,  // get(index) function pointer
    GpsCurve__rosidl_typesupport_introspection_c__resize_function__GpsNode__nodes  // resize(index) function pointer
  },
  {
    "car",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(internal_interface__msg__GpsCurve, car),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "target",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(internal_interface__msg__GpsCurve, target),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GpsCurve__rosidl_typesupport_introspection_c__GpsCurve_message_members = {
  "internal_interface__msg",  // message namespace
  "GpsCurve",  // message name
  3,  // number of fields
  sizeof(internal_interface__msg__GpsCurve),
  GpsCurve__rosidl_typesupport_introspection_c__GpsCurve_message_member_array,  // message members
  GpsCurve__rosidl_typesupport_introspection_c__GpsCurve_init_function,  // function to initialize message memory (memory has to be allocated)
  GpsCurve__rosidl_typesupport_introspection_c__GpsCurve_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GpsCurve__rosidl_typesupport_introspection_c__GpsCurve_message_type_support_handle = {
  0,
  &GpsCurve__rosidl_typesupport_introspection_c__GpsCurve_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_internal_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, internal_interface, msg, GpsCurve)() {
  GpsCurve__rosidl_typesupport_introspection_c__GpsCurve_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, internal_interface, msg, GpsNode)();
  GpsCurve__rosidl_typesupport_introspection_c__GpsCurve_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, internal_interface, msg, GpsNode)();
  GpsCurve__rosidl_typesupport_introspection_c__GpsCurve_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, internal_interface, msg, GpsNode)();
  if (!GpsCurve__rosidl_typesupport_introspection_c__GpsCurve_message_type_support_handle.typesupport_identifier) {
    GpsCurve__rosidl_typesupport_introspection_c__GpsCurve_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GpsCurve__rosidl_typesupport_introspection_c__GpsCurve_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
