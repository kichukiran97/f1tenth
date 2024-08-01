// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from internal_interface:msg/GpsCurve.idl
// generated code does not contain a copyright notice
#include "internal_interface/msg/detail/gps_curve__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "internal_interface/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "internal_interface/msg/detail/gps_curve__struct.h"
#include "internal_interface/msg/detail/gps_curve__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "internal_interface/msg/detail/gps_node__functions.h"  // car, nodes, target

// forward declare type support functions
size_t get_serialized_size_internal_interface__msg__GpsNode(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_internal_interface__msg__GpsNode(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, internal_interface, msg, GpsNode)();


using _GpsCurve__ros_msg_type = internal_interface__msg__GpsCurve;

static bool _GpsCurve__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GpsCurve__ros_msg_type * ros_message = static_cast<const _GpsCurve__ros_msg_type *>(untyped_ros_message);
  // Field name: nodes
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, internal_interface, msg, GpsNode
      )()->data);
    size_t size = ros_message->nodes.size;
    auto array_ptr = ros_message->nodes.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: car
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, internal_interface, msg, GpsNode
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->car, cdr))
    {
      return false;
    }
  }

  // Field name: target
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, internal_interface, msg, GpsNode
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->target, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _GpsCurve__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GpsCurve__ros_msg_type * ros_message = static_cast<_GpsCurve__ros_msg_type *>(untyped_ros_message);
  // Field name: nodes
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, internal_interface, msg, GpsNode
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->nodes.data) {
      internal_interface__msg__GpsNode__Sequence__fini(&ros_message->nodes);
    }
    if (!internal_interface__msg__GpsNode__Sequence__init(&ros_message->nodes, size)) {
      return "failed to create array for field 'nodes'";
    }
    auto array_ptr = ros_message->nodes.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: car
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, internal_interface, msg, GpsNode
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->car))
    {
      return false;
    }
  }

  // Field name: target
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, internal_interface, msg, GpsNode
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->target))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_internal_interface
size_t get_serialized_size_internal_interface__msg__GpsCurve(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GpsCurve__ros_msg_type * ros_message = static_cast<const _GpsCurve__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name nodes
  {
    size_t array_size = ros_message->nodes.size;
    auto array_ptr = ros_message->nodes.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_internal_interface__msg__GpsNode(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name car

  current_alignment += get_serialized_size_internal_interface__msg__GpsNode(
    &(ros_message->car), current_alignment);
  // field.name target

  current_alignment += get_serialized_size_internal_interface__msg__GpsNode(
    &(ros_message->target), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _GpsCurve__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_internal_interface__msg__GpsCurve(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_internal_interface
size_t max_serialized_size_internal_interface__msg__GpsCurve(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: nodes
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_internal_interface__msg__GpsNode(
        full_bounded, current_alignment);
    }
  }
  // member: car
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_internal_interface__msg__GpsNode(
        full_bounded, current_alignment);
    }
  }
  // member: target
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_internal_interface__msg__GpsNode(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _GpsCurve__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_internal_interface__msg__GpsCurve(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_GpsCurve = {
  "internal_interface::msg",
  "GpsCurve",
  _GpsCurve__cdr_serialize,
  _GpsCurve__cdr_deserialize,
  _GpsCurve__get_serialized_size,
  _GpsCurve__max_serialized_size
};

static rosidl_message_type_support_t _GpsCurve__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GpsCurve,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, internal_interface, msg, GpsCurve)() {
  return &_GpsCurve__type_support;
}

#if defined(__cplusplus)
}
#endif
