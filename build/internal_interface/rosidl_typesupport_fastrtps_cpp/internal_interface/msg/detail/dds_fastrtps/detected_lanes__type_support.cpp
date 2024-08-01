// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from internal_interface:msg/DetectedLanes.idl
// generated code does not contain a copyright notice
#include "internal_interface/msg/detail/detected_lanes__rosidl_typesupport_fastrtps_cpp.hpp"
#include "internal_interface/msg/detail/detected_lanes__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace internal_interface
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_internal_interface
cdr_serialize(
  const internal_interface::msg::DetectedLanes & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: distance
  cdr << ros_message.distance;
  // Member: speed
  cdr << ros_message.speed;
  // Member: angle
  cdr << ros_message.angle;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_internal_interface
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  internal_interface::msg::DetectedLanes & ros_message)
{
  // Member: distance
  cdr >> ros_message.distance;

  // Member: speed
  cdr >> ros_message.speed;

  // Member: angle
  cdr >> ros_message.angle;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_internal_interface
get_serialized_size(
  const internal_interface::msg::DetectedLanes & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: distance
  {
    size_t item_size = sizeof(ros_message.distance);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: speed
  {
    size_t item_size = sizeof(ros_message.speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: angle
  {
    size_t item_size = sizeof(ros_message.angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_internal_interface
max_serialized_size_DetectedLanes(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: distance
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: speed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: angle
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _DetectedLanes__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const internal_interface::msg::DetectedLanes *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _DetectedLanes__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<internal_interface::msg::DetectedLanes *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _DetectedLanes__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const internal_interface::msg::DetectedLanes *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _DetectedLanes__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_DetectedLanes(full_bounded, 0);
}

static message_type_support_callbacks_t _DetectedLanes__callbacks = {
  "internal_interface::msg",
  "DetectedLanes",
  _DetectedLanes__cdr_serialize,
  _DetectedLanes__cdr_deserialize,
  _DetectedLanes__get_serialized_size,
  _DetectedLanes__max_serialized_size
};

static rosidl_message_type_support_t _DetectedLanes__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_DetectedLanes__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace internal_interface

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_internal_interface
const rosidl_message_type_support_t *
get_message_type_support_handle<internal_interface::msg::DetectedLanes>()
{
  return &internal_interface::msg::typesupport_fastrtps_cpp::_DetectedLanes__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, internal_interface, msg, DetectedLanes)() {
  return &internal_interface::msg::typesupport_fastrtps_cpp::_DetectedLanes__handle;
}

#ifdef __cplusplus
}
#endif
