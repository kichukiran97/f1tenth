// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from internal_interface:msg/GpsCurve.idl
// generated code does not contain a copyright notice
#include "internal_interface/msg/detail/gps_curve__rosidl_typesupport_fastrtps_cpp.hpp"
#include "internal_interface/msg/detail/gps_curve__struct.hpp"

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
bool cdr_serialize(
  const internal_interface::msg::GpsNode &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  internal_interface::msg::GpsNode &);
size_t get_serialized_size(
  const internal_interface::msg::GpsNode &,
  size_t current_alignment);
size_t
max_serialized_size_GpsNode(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace internal_interface

namespace internal_interface
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const internal_interface::msg::GpsNode &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  internal_interface::msg::GpsNode &);
size_t get_serialized_size(
  const internal_interface::msg::GpsNode &,
  size_t current_alignment);
size_t
max_serialized_size_GpsNode(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace internal_interface

namespace internal_interface
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const internal_interface::msg::GpsNode &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  internal_interface::msg::GpsNode &);
size_t get_serialized_size(
  const internal_interface::msg::GpsNode &,
  size_t current_alignment);
size_t
max_serialized_size_GpsNode(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace internal_interface


namespace internal_interface
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_internal_interface
cdr_serialize(
  const internal_interface::msg::GpsCurve & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: nodes
  {
    size_t size = ros_message.nodes.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      internal_interface::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.nodes[i],
        cdr);
    }
  }
  // Member: car
  internal_interface::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.car,
    cdr);
  // Member: target
  internal_interface::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.target,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_internal_interface
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  internal_interface::msg::GpsCurve & ros_message)
{
  // Member: nodes
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.nodes.resize(size);
    for (size_t i = 0; i < size; i++) {
      internal_interface::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.nodes[i]);
    }
  }

  // Member: car
  internal_interface::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.car);

  // Member: target
  internal_interface::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.target);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_internal_interface
get_serialized_size(
  const internal_interface::msg::GpsCurve & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: nodes
  {
    size_t array_size = ros_message.nodes.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        internal_interface::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.nodes[index], current_alignment);
    }
  }
  // Member: car

  current_alignment +=
    internal_interface::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.car, current_alignment);
  // Member: target

  current_alignment +=
    internal_interface::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.target, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_internal_interface
max_serialized_size_GpsCurve(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: nodes
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        internal_interface::msg::typesupport_fastrtps_cpp::max_serialized_size_GpsNode(
        full_bounded, current_alignment);
    }
  }

  // Member: car
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        internal_interface::msg::typesupport_fastrtps_cpp::max_serialized_size_GpsNode(
        full_bounded, current_alignment);
    }
  }

  // Member: target
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        internal_interface::msg::typesupport_fastrtps_cpp::max_serialized_size_GpsNode(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _GpsCurve__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const internal_interface::msg::GpsCurve *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _GpsCurve__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<internal_interface::msg::GpsCurve *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _GpsCurve__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const internal_interface::msg::GpsCurve *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _GpsCurve__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_GpsCurve(full_bounded, 0);
}

static message_type_support_callbacks_t _GpsCurve__callbacks = {
  "internal_interface::msg",
  "GpsCurve",
  _GpsCurve__cdr_serialize,
  _GpsCurve__cdr_deserialize,
  _GpsCurve__get_serialized_size,
  _GpsCurve__max_serialized_size
};

static rosidl_message_type_support_t _GpsCurve__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_GpsCurve__callbacks,
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
get_message_type_support_handle<internal_interface::msg::GpsCurve>()
{
  return &internal_interface::msg::typesupport_fastrtps_cpp::_GpsCurve__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, internal_interface, msg, GpsCurve)() {
  return &internal_interface::msg::typesupport_fastrtps_cpp::_GpsCurve__handle;
}

#ifdef __cplusplus
}
#endif
