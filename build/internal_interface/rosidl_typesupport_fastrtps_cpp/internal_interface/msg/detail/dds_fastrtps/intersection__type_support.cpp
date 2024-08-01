// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from internal_interface:msg/Intersection.idl
// generated code does not contain a copyright notice
#include "internal_interface/msg/detail/intersection__rosidl_typesupport_fastrtps_cpp.hpp"
#include "internal_interface/msg/detail/intersection__struct.hpp"

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
  const internal_interface::msg::Intersection & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: intersection_distance
  cdr << ros_message.intersection_distance;
  // Member: intersection_angle
  cdr << ros_message.intersection_angle;
  // Member: is_detected
  cdr << (ros_message.is_detected ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_internal_interface
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  internal_interface::msg::Intersection & ros_message)
{
  // Member: intersection_distance
  cdr >> ros_message.intersection_distance;

  // Member: intersection_angle
  cdr >> ros_message.intersection_angle;

  // Member: is_detected
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.is_detected = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_internal_interface
get_serialized_size(
  const internal_interface::msg::Intersection & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: intersection_distance
  {
    size_t item_size = sizeof(ros_message.intersection_distance);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: intersection_angle
  {
    size_t item_size = sizeof(ros_message.intersection_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: is_detected
  {
    size_t item_size = sizeof(ros_message.is_detected);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_internal_interface
max_serialized_size_Intersection(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: intersection_distance
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: intersection_angle
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: is_detected
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _Intersection__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const internal_interface::msg::Intersection *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Intersection__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<internal_interface::msg::Intersection *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Intersection__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const internal_interface::msg::Intersection *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Intersection__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_Intersection(full_bounded, 0);
}

static message_type_support_callbacks_t _Intersection__callbacks = {
  "internal_interface::msg",
  "Intersection",
  _Intersection__cdr_serialize,
  _Intersection__cdr_deserialize,
  _Intersection__get_serialized_size,
  _Intersection__max_serialized_size
};

static rosidl_message_type_support_t _Intersection__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Intersection__callbacks,
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
get_message_type_support_handle<internal_interface::msg::Intersection>()
{
  return &internal_interface::msg::typesupport_fastrtps_cpp::_Intersection__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, internal_interface, msg, Intersection)() {
  return &internal_interface::msg::typesupport_fastrtps_cpp::_Intersection__handle;
}

#ifdef __cplusplus
}
#endif
