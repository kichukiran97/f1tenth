// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from internal_interface:msg/ManueverPart.idl
// generated code does not contain a copyright notice

#ifndef INTERNAL_INTERFACE__MSG__DETAIL__MANUEVER_PART__BUILDER_HPP_
#define INTERNAL_INTERFACE__MSG__DETAIL__MANUEVER_PART__BUILDER_HPP_

#include "internal_interface/msg/detail/manuever_part__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace internal_interface
{

namespace msg
{

namespace builder
{

class Init_ManueverPart_duration_seconds
{
public:
  explicit Init_ManueverPart_duration_seconds(::internal_interface::msg::ManueverPart & msg)
  : msg_(msg)
  {}
  ::internal_interface::msg::ManueverPart duration_seconds(::internal_interface::msg::ManueverPart::_duration_seconds_type arg)
  {
    msg_.duration_seconds = std::move(arg);
    return std::move(msg_);
  }

private:
  ::internal_interface::msg::ManueverPart msg_;
};

class Init_ManueverPart_control
{
public:
  Init_ManueverPart_control()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ManueverPart_duration_seconds control(::internal_interface::msg::ManueverPart::_control_type arg)
  {
    msg_.control = std::move(arg);
    return Init_ManueverPart_duration_seconds(msg_);
  }

private:
  ::internal_interface::msg::ManueverPart msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::internal_interface::msg::ManueverPart>()
{
  return internal_interface::msg::builder::Init_ManueverPart_control();
}

}  // namespace internal_interface

#endif  // INTERNAL_INTERFACE__MSG__DETAIL__MANUEVER_PART__BUILDER_HPP_
