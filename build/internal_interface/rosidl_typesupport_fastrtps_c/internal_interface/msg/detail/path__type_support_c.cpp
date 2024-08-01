// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from internal_interface:msg/Path.idl
// generated code does not contain a copyright notice
#include "internal_interface/msg/detail/path__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "internal_interface/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "internal_interface/msg/detail/path__struct.h"
#include "internal_interface/msg/detail/path__functions.h"
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

#include "internal_interface/msg/detail/node__functions.h"  // nodes

// forward declare type support functions
size_t get_serialized_size_internal_interface__msg__Node(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_internal_interface__msg__Node(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, internal_interface, msg, Node)();


using _Path__ros_msg_type = internal_interface__msg__Path;

static bool _Path__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Path__ros_msg_type * ros_message = static_cast<const _Path__ros_msg_type *>(untyped_ros_message);
  // Field name: nodes
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, internal_interface, msg, Node
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

  return true;
}

static bool _Path__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Path__ros_msg_type * ros_message = static_cast<_Path__ros_msg_type *>(untyped_ros_message);
  // Field name: nodes
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, internal_interface, msg, Node
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->nodes.data) {
      internal_interface__msg__Node__Sequence__fini(&ros_message->nodes);
    }
    if (!internal_interface__msg__Node__Sequence__init(&ros_message->nodes, size)) {
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

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_internal_interface
size_t get_serialized_size_internal_interface__msg__Path(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Path__ros_msg_type * ros_message = static_cast<const _Path__ros_msg_type *>(untyped_ros_message);
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
      current_alignment += get_serialized_size_internal_interface__msg__Node(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Path__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_internal_interface__msg__Path(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_internal_interface
size_t max_serialized_size_internal_interface__msg__Path(
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
        max_serialized_size_internal_interface__msg__Node(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _Path__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_internal_interface__msg__Path(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Path = {
  "internal_interface::msg",
  "Path",
  _Path__cdr_serialize,
  _Path__cdr_deserialize,
  _Path__get_serialized_size,
  _Path__max_serialized_size
};

static rosidl_message_type_support_t _Path__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Path,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, internal_interface, msg, Path)() {
  return &_Path__type_support;
}

#if defined(__cplusplus)
}
#endif
