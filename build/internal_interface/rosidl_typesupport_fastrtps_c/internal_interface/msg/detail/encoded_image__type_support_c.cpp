// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from internal_interface:msg/EncodedImage.idl
// generated code does not contain a copyright notice
#include "internal_interface/msg/detail/encoded_image__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "internal_interface/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "internal_interface/msg/detail/encoded_image__struct.h"
#include "internal_interface/msg/detail/encoded_image__functions.h"
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

#include "rosidl_runtime_c/primitives_sequence.h"  // data
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // data

// forward declare type support functions


using _EncodedImage__ros_msg_type = internal_interface__msg__EncodedImage;

static bool _EncodedImage__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _EncodedImage__ros_msg_type * ros_message = static_cast<const _EncodedImage__ros_msg_type *>(untyped_ros_message);
  // Field name: capture_ts
  {
    cdr << ros_message->capture_ts;
  }

  // Field name: publish_ts
  {
    cdr << ros_message->publish_ts;
  }

  // Field name: data
  {
    size_t size = ros_message->data.size;
    auto array_ptr = ros_message->data.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _EncodedImage__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _EncodedImage__ros_msg_type * ros_message = static_cast<_EncodedImage__ros_msg_type *>(untyped_ros_message);
  // Field name: capture_ts
  {
    cdr >> ros_message->capture_ts;
  }

  // Field name: publish_ts
  {
    cdr >> ros_message->publish_ts;
  }

  // Field name: data
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->data.data) {
      rosidl_runtime_c__octet__Sequence__fini(&ros_message->data);
    }
    if (!rosidl_runtime_c__octet__Sequence__init(&ros_message->data, size)) {
      return "failed to create array for field 'data'";
    }
    auto array_ptr = ros_message->data.data;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_internal_interface
size_t get_serialized_size_internal_interface__msg__EncodedImage(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _EncodedImage__ros_msg_type * ros_message = static_cast<const _EncodedImage__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name capture_ts
  {
    size_t item_size = sizeof(ros_message->capture_ts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name publish_ts
  {
    size_t item_size = sizeof(ros_message->publish_ts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name data
  {
    size_t array_size = ros_message->data.size;
    auto array_ptr = ros_message->data.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _EncodedImage__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_internal_interface__msg__EncodedImage(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_internal_interface
size_t max_serialized_size_internal_interface__msg__EncodedImage(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: capture_ts
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: publish_ts
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: data
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _EncodedImage__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_internal_interface__msg__EncodedImage(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_EncodedImage = {
  "internal_interface::msg",
  "EncodedImage",
  _EncodedImage__cdr_serialize,
  _EncodedImage__cdr_deserialize,
  _EncodedImage__get_serialized_size,
  _EncodedImage__max_serialized_size
};

static rosidl_message_type_support_t _EncodedImage__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_EncodedImage,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, internal_interface, msg, EncodedImage)() {
  return &_EncodedImage__type_support;
}

#if defined(__cplusplus)
}
#endif
