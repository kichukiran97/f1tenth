// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from internal_interface:msg/RealControlInput.idl
// generated code does not contain a copyright notice

#ifndef INTERNAL_INTERFACE__MSG__DETAIL__REAL_CONTROL_INPUT__BUILDER_HPP_
#define INTERNAL_INTERFACE__MSG__DETAIL__REAL_CONTROL_INPUT__BUILDER_HPP_

#include "internal_interface/msg/detail/real_control_input__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace internal_interface
{

namespace msg
{

namespace builder
{

class Init_RealControlInput_steer
{
public:
  explicit Init_RealControlInput_steer(::internal_interface::msg::RealControlInput & msg)
  : msg_(msg)
  {}
  ::internal_interface::msg::RealControlInput steer(::internal_interface::msg::RealControlInput::_steer_type arg)
  {
    msg_.steer = std::move(arg);
    return std::move(msg_);
  }

private:
  ::internal_interface::msg::RealControlInput msg_;
};

class Init_RealControlInput_speed
{
public:
  Init_RealControlInput_speed()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RealControlInput_steer speed(::internal_interface::msg::RealControlInput::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return Init_RealControlInput_steer(msg_);
  }

private:
  ::internal_interface::msg::RealControlInput msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::internal_interface::msg::RealControlInput>()
{
  return internal_interface::msg::builder::Init_RealControlInput_speed();
}

}  // namespace internal_interface

#endif  // INTERNAL_INTERFACE__MSG__DETAIL__REAL_CONTROL_INPUT__BUILDER_HPP_
