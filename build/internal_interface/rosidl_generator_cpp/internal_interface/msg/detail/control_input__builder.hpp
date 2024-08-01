// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from internal_interface:msg/ControlInput.idl
// generated code does not contain a copyright notice

#ifndef INTERNAL_INTERFACE__MSG__DETAIL__CONTROL_INPUT__BUILDER_HPP_
#define INTERNAL_INTERFACE__MSG__DETAIL__CONTROL_INPUT__BUILDER_HPP_

#include "internal_interface/msg/detail/control_input__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace internal_interface
{

namespace msg
{

namespace builder
{

class Init_ControlInput_source
{
public:
  explicit Init_ControlInput_source(::internal_interface::msg::ControlInput & msg)
  : msg_(msg)
  {}
  ::internal_interface::msg::ControlInput source(::internal_interface::msg::ControlInput::_source_type arg)
  {
    msg_.source = std::move(arg);
    return std::move(msg_);
  }

private:
  ::internal_interface::msg::ControlInput msg_;
};

class Init_ControlInput_steer_confidence
{
public:
  explicit Init_ControlInput_steer_confidence(::internal_interface::msg::ControlInput & msg)
  : msg_(msg)
  {}
  Init_ControlInput_source steer_confidence(::internal_interface::msg::ControlInput::_steer_confidence_type arg)
  {
    msg_.steer_confidence = std::move(arg);
    return Init_ControlInput_source(msg_);
  }

private:
  ::internal_interface::msg::ControlInput msg_;
};

class Init_ControlInput_speed_confidence
{
public:
  explicit Init_ControlInput_speed_confidence(::internal_interface::msg::ControlInput & msg)
  : msg_(msg)
  {}
  Init_ControlInput_steer_confidence speed_confidence(::internal_interface::msg::ControlInput::_speed_confidence_type arg)
  {
    msg_.speed_confidence = std::move(arg);
    return Init_ControlInput_steer_confidence(msg_);
  }

private:
  ::internal_interface::msg::ControlInput msg_;
};

class Init_ControlInput_steer
{
public:
  explicit Init_ControlInput_steer(::internal_interface::msg::ControlInput & msg)
  : msg_(msg)
  {}
  Init_ControlInput_speed_confidence steer(::internal_interface::msg::ControlInput::_steer_type arg)
  {
    msg_.steer = std::move(arg);
    return Init_ControlInput_speed_confidence(msg_);
  }

private:
  ::internal_interface::msg::ControlInput msg_;
};

class Init_ControlInput_speed
{
public:
  Init_ControlInput_speed()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ControlInput_steer speed(::internal_interface::msg::ControlInput::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return Init_ControlInput_steer(msg_);
  }

private:
  ::internal_interface::msg::ControlInput msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::internal_interface::msg::ControlInput>()
{
  return internal_interface::msg::builder::Init_ControlInput_speed();
}

}  // namespace internal_interface

#endif  // INTERNAL_INTERFACE__MSG__DETAIL__CONTROL_INPUT__BUILDER_HPP_
