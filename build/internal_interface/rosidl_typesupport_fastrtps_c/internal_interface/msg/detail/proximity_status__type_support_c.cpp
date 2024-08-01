// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from internal_interface:msg/ProximityStatus.idl
// generated code does not contain a copyright notice
#include "internal_interface/msg/detail/proximity_status__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "internal_interface/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "internal_interface/msg/detail/proximity_status__struct.h"
#include "internal_interface/msg/detail/proximity_status__functions.h"
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


using _ProximityStatus__ros_msg_type = internal_interface__msg__ProximityStatus;

static bool _ProximityStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ProximityStatus__ros_msg_type * ros_message = static_cast<const _ProximityStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: front_is_clear
  {
    cdr << (ros_message->front_is_clear ? true : false);
  }

  // Field name: left_is_clear
  {
    cdr << (ros_message->left_is_clear ? true : false);
  }

  // Field name: right_is_clear
  {
    cdr << (ros_message->right_is_clear ? true : false);
  }

  // Field name: front_very_close
  {
    cdr << (ros_message->front_very_close ? true : false);
  }

  // Field name: left_very_close
  {
    cdr << (ros_message->left_very_close ? true : false);
  }

  // Field name: right_very_close
  {
    cdr << (ros_message->right_very_close ? true : false);
  }

  // Field name: front_cm
  {
    cdr << ros_message->front_cm;
  }

  // Field name: left_cm
  {
    cdr << ros_message->left_cm;
  }

  // Field name: right_cm
  {
    cdr << ros_message->right_cm;
  }

  return true;
}

static bool _ProximityStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ProximityStatus__ros_msg_type * ros_message = static_cast<_ProximityStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: front_is_clear
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->front_is_clear = tmp ? true : false;
  }

  // Field name: left_is_clear
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->left_is_clear = tmp ? true : false;
  }

  // Field name: right_is_clear
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->right_is_clear = tmp ? true : false;
  }

  // Field name: front_very_close
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->front_very_close = tmp ? true : false;
  }

  // Field name: left_very_close
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->left_very_close = tmp ? true : false;
  }

  // Field name: right_very_close
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->right_very_close = tmp ? true : false;
  }

  // Field name: front_cm
  {
    cdr >> ros_message->front_cm;
  }

  // Field name: left_cm
  {
    cdr >> ros_message->left_cm;
  }

  // Field name: right_cm
  {
    cdr >> ros_message->right_cm;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_internal_interface
size_t get_serialized_size_internal_interface__msg__ProximityStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ProximityStatus__ros_msg_type * ros_message = static_cast<const _ProximityStatus__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name front_is_clear
  {
    size_t item_size = sizeof(ros_message->front_is_clear);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name left_is_clear
  {
    size_t item_size = sizeof(ros_message->left_is_clear);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name right_is_clear
  {
    size_t item_size = sizeof(ros_message->right_is_clear);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name front_very_close
  {
    size_t item_size = sizeof(ros_message->front_very_close);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name left_very_close
  {
    size_t item_size = sizeof(ros_message->left_very_close);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name right_very_close
  {
    size_t item_size = sizeof(ros_message->right_very_close);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name front_cm
  {
    size_t item_size = sizeof(ros_message->front_cm);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name left_cm
  {
    size_t item_size = sizeof(ros_message->left_cm);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name right_cm
  {
    size_t item_size = sizeof(ros_message->right_cm);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ProximityStatus__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_internal_interface__msg__ProximityStatus(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_internal_interface
size_t max_serialized_size_internal_interface__msg__ProximityStatus(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: front_is_clear
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: left_is_clear
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: right_is_clear
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: front_very_close
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: left_very_close
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: right_very_close
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: front_cm
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: left_cm
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: right_cm
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _ProximityStatus__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_internal_interface__msg__ProximityStatus(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_ProximityStatus = {
  "internal_interface::msg",
  "ProximityStatus",
  _ProximityStatus__cdr_serialize,
  _ProximityStatus__cdr_deserialize,
  _ProximityStatus__get_serialized_size,
  _ProximityStatus__max_serialized_size
};

static rosidl_message_type_support_t _ProximityStatus__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ProximityStatus,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, internal_interface, msg, ProximityStatus)() {
  return &_ProximityStatus__type_support;
}

#if defined(__cplusplus)
}
#endif
