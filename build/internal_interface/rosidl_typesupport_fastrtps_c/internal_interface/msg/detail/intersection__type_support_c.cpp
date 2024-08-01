// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from internal_interface:msg/Intersection.idl
// generated code does not contain a copyright notice
#include "internal_interface/msg/detail/intersection__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "internal_interface/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "internal_interface/msg/detail/intersection__struct.h"
#include "internal_interface/msg/detail/intersection__functions.h"
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


// forward declare type support functions


using _Intersection__ros_msg_type = internal_interface__msg__Intersection;

static bool _Intersection__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Intersection__ros_msg_type * ros_message = static_cast<const _Intersection__ros_msg_type *>(untyped_ros_message);
  // Field name: intersection_distance
  {
    cdr << ros_message->intersection_distance;
  }

  // Field name: intersection_angle
  {
    cdr << ros_message->intersection_angle;
  }

  // Field name: is_detected
  {
    cdr << (ros_message->is_detected ? true : false);
  }

  return true;
}

static bool _Intersection__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Intersection__ros_msg_type * ros_message = static_cast<_Intersection__ros_msg_type *>(untyped_ros_message);
  // Field name: intersection_distance
  {
    cdr >> ros_message->intersection_distance;
  }

  // Field name: intersection_angle
  {
    cdr >> ros_message->intersection_angle;
  }

  // Field name: is_detected
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->is_detected = tmp ? true : false;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_internal_interface
size_t get_serialized_size_internal_interface__msg__Intersection(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Intersection__ros_msg_type * ros_message = static_cast<const _Intersection__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name intersection_distance
  {
    size_t item_size = sizeof(ros_message->intersection_distance);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name intersection_angle
  {
    size_t item_size = sizeof(ros_message->intersection_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name is_detected
  {
    size_t item_size = sizeof(ros_message->is_detected);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Intersection__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_internal_interface__msg__Intersection(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_internal_interface
size_t max_serialized_size_internal_interface__msg__Intersection(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: intersection_distance
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: intersection_angle
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: is_detected
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _Intersection__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_internal_interface__msg__Intersection(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Intersection = {
  "internal_interface::msg",
  "Intersection",
  _Intersection__cdr_serialize,
  _Intersection__cdr_deserialize,
  _Intersection__get_serialized_size,
  _Intersection__max_serialized_size
};

static rosidl_message_type_support_t _Intersection__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Intersection,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, internal_interface, msg, Intersection)() {
  return &_Intersection__type_support;
}

#if defined(__cplusplus)
}
#endif
