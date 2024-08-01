// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from internal_interface:msg/PurePursuitParams.idl
// generated code does not contain a copyright notice
#include "internal_interface/msg/detail/pure_pursuit_params__rosidl_typesupport_fastrtps_cpp.hpp"
#include "internal_interface/msg/detail/pure_pursuit_params__struct.hpp"

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
  const internal_interface::msg::PurePursuitParams & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: max_speed
  cdr << ros_message.max_speed;
  // Member: alpha_mul
  cdr << ros_message.alpha_mul;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_internal_interface
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  internal_interface::msg::PurePursuitParams & ros_message)
{
  // Member: max_speed
  cdr >> ros_message.max_speed;

  // Member: alpha_mul
  cdr >> ros_message.alpha_mul;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_internal_interface
get_serialized_size(
  const internal_interface::msg::PurePursuitParams & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: max_speed
  {
    size_t item_size = sizeof(ros_message.max_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: alpha_mul
  {
    size_t item_size = sizeof(ros_message.alpha_mul);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_internal_interface
max_serialized_size_PurePursuitParams(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: max_speed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: alpha_mul
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static bool _PurePursuitParams__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const internal_interface::msg::PurePursuitParams *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _PurePursuitParams__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<internal_interface::msg::PurePursuitParams *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _PurePursuitParams__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const internal_interface::msg::PurePursuitParams *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _PurePursuitParams__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_PurePursuitParams(full_bounded, 0);
}

static message_type_support_callbacks_t _PurePursuitParams__callbacks = {
  "internal_interface::msg",
  "PurePursuitParams",
  _PurePursuitParams__cdr_serialize,
  _PurePursuitParams__cdr_deserialize,
  _PurePursuitParams__get_serialized_size,
  _PurePursuitParams__max_serialized_size
};

static rosidl_message_type_support_t _PurePursuitParams__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_PurePursuitParams__callbacks,
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
get_message_type_support_handle<internal_interface::msg::PurePursuitParams>()
{
  return &internal_interface::msg::typesupport_fastrtps_cpp::_PurePursuitParams__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, internal_interface, msg, PurePursuitParams)() {
  return &internal_interface::msg::typesupport_fastrtps_cpp::_PurePursuitParams__handle;
}

#ifdef __cplusplus
}
#endif
