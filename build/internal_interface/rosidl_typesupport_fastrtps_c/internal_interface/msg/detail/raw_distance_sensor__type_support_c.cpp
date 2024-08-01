// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from internal_interface:msg/RawDistanceSensor.idl
// generated code does not contain a copyright notice
#include "internal_interface/msg/detail/raw_distance_sensor__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "internal_interface/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "internal_interface/msg/detail/raw_distance_sensor__struct.h"
#include "internal_interface/msg/detail/raw_distance_sensor__functions.h"
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


using _RawDistanceSensor__ros_msg_type = internal_interface__msg__RawDistanceSensor;

static bool _RawDistanceSensor__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _RawDistanceSensor__ros_msg_type * ros_message = static_cast<const _RawDistanceSensor__ros_msg_type *>(untyped_ros_message);
  // Field name: distances
  {
    size_t size = 4;
    auto array_ptr = ros_message->distances;
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _RawDistanceSensor__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _RawDistanceSensor__ros_msg_type * ros_message = static_cast<_RawDistanceSensor__ros_msg_type *>(untyped_ros_message);
  // Field name: distances
  {
    size_t size = 4;
    auto array_ptr = ros_message->distances;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_internal_interface
size_t get_serialized_size_internal_interface__msg__RawDistanceSensor(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RawDistanceSensor__ros_msg_type * ros_message = static_cast<const _RawDistanceSensor__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name distances
  {
    size_t array_size = 4;
    auto array_ptr = ros_message->distances;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _RawDistanceSensor__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_internal_interface__msg__RawDistanceSensor(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_internal_interface
size_t max_serialized_size_internal_interface__msg__RawDistanceSensor(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: distances
  {
    size_t array_size = 4;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _RawDistanceSensor__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_internal_interface__msg__RawDistanceSensor(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_RawDistanceSensor = {
  "internal_interface::msg",
  "RawDistanceSensor",
  _RawDistanceSensor__cdr_serialize,
  _RawDistanceSensor__cdr_deserialize,
  _RawDistanceSensor__get_serialized_size,
  _RawDistanceSensor__max_serialized_size
};

static rosidl_message_type_support_t _RawDistanceSensor__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RawDistanceSensor,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, internal_interface, msg, RawDistanceSensor)() {
  return &_RawDistanceSensor__type_support;
}

#if defined(__cplusplus)
}
#endif
