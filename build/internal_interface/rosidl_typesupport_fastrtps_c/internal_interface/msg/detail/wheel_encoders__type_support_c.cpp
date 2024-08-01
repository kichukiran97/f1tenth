// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from internal_interface:msg/WheelEncoders.idl
// generated code does not contain a copyright notice
#include "internal_interface/msg/detail/wheel_encoders__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "internal_interface/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "internal_interface/msg/detail/wheel_encoders__struct.h"
#include "internal_interface/msg/detail/wheel_encoders__functions.h"
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


using _WheelEncoders__ros_msg_type = internal_interface__msg__WheelEncoders;

static bool _WheelEncoders__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _WheelEncoders__ros_msg_type * ros_message = static_cast<const _WheelEncoders__ros_msg_type *>(untyped_ros_message);
  // Field name: left_wheel_count
  {
    cdr << ros_message->left_wheel_count;
  }

  // Field name: right_wheel_count
  {
    cdr << ros_message->right_wheel_count;
  }

  return true;
}

static bool _WheelEncoders__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _WheelEncoders__ros_msg_type * ros_message = static_cast<_WheelEncoders__ros_msg_type *>(untyped_ros_message);
  // Field name: left_wheel_count
  {
    cdr >> ros_message->left_wheel_count;
  }

  // Field name: right_wheel_count
  {
    cdr >> ros_message->right_wheel_count;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_internal_interface
size_t get_serialized_size_internal_interface__msg__WheelEncoders(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _WheelEncoders__ros_msg_type * ros_message = static_cast<const _WheelEncoders__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name left_wheel_count
  {
    size_t item_size = sizeof(ros_message->left_wheel_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name right_wheel_count
  {
    size_t item_size = sizeof(ros_message->right_wheel_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _WheelEncoders__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_internal_interface__msg__WheelEncoders(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_internal_interface
size_t max_serialized_size_internal_interface__msg__WheelEncoders(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: left_wheel_count
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: right_wheel_count
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _WheelEncoders__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_internal_interface__msg__WheelEncoders(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_WheelEncoders = {
  "internal_interface::msg",
  "WheelEncoders",
  _WheelEncoders__cdr_serialize,
  _WheelEncoders__cdr_deserialize,
  _WheelEncoders__get_serialized_size,
  _WheelEncoders__max_serialized_size
};

static rosidl_message_type_support_t _WheelEncoders__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_WheelEncoders,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, internal_interface, msg, WheelEncoders)() {
  return &_WheelEncoders__type_support;
}

#if defined(__cplusplus)
}
#endif