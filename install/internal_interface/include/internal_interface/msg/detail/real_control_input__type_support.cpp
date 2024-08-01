// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from internal_interface:msg/RealControlInput.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "internal_interface/msg/detail/real_control_input__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace internal_interface
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void RealControlInput_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) internal_interface::msg::RealControlInput(_init);
}

void RealControlInput_fini_function(void * message_memory)
{
  auto typed_message = static_cast<internal_interface::msg::RealControlInput *>(message_memory);
  typed_message->~RealControlInput();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember RealControlInput_message_member_array[2] = {
  {
    "speed",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(internal_interface::msg::RealControlInput, speed),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "steer",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(internal_interface::msg::RealControlInput, steer),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers RealControlInput_message_members = {
  "internal_interface::msg",  // message namespace
  "RealControlInput",  // message name
  2,  // number of fields
  sizeof(internal_interface::msg::RealControlInput),
  RealControlInput_message_member_array,  // message members
  RealControlInput_init_function,  // function to initialize message memory (memory has to be allocated)
  RealControlInput_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t RealControlInput_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &RealControlInput_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace internal_interface


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<internal_interface::msg::RealControlInput>()
{
  return &::internal_interface::msg::rosidl_typesupport_introspection_cpp::RealControlInput_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, internal_interface, msg, RealControlInput)() {
  return &::internal_interface::msg::rosidl_typesupport_introspection_cpp::RealControlInput_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
