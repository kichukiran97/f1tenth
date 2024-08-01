// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from internal_interface:msg/Objects.idl
// generated code does not contain a copyright notice

#ifndef INTERNAL_INTERFACE__MSG__DETAIL__OBJECTS__BUILDER_HPP_
#define INTERNAL_INTERFACE__MSG__DETAIL__OBJECTS__BUILDER_HPP_

#include "internal_interface/msg/detail/objects__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace internal_interface
{

namespace msg
{

namespace builder
{

class Init_Objects_objects
{
public:
  Init_Objects_objects()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::internal_interface::msg::Objects objects(::internal_interface::msg::Objects::_objects_type arg)
  {
    msg_.objects = std::move(arg);
    return std::move(msg_);
  }

private:
  ::internal_interface::msg::Objects msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::internal_interface::msg::Objects>()
{
  return internal_interface::msg::builder::Init_Objects_objects();
}

}  // namespace internal_interface

#endif  // INTERNAL_INTERFACE__MSG__DETAIL__OBJECTS__BUILDER_HPP_
