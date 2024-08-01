// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from internal_interface:msg/WheelEncoders.idl
// generated code does not contain a copyright notice

#ifndef INTERNAL_INTERFACE__MSG__DETAIL__WHEEL_ENCODERS__BUILDER_HPP_
#define INTERNAL_INTERFACE__MSG__DETAIL__WHEEL_ENCODERS__BUILDER_HPP_

#include "internal_interface/msg/detail/wheel_encoders__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace internal_interface
{

namespace msg
{

namespace builder
{

class Init_WheelEncoders_right_wheel_count
{
public:
  explicit Init_WheelEncoders_right_wheel_count(::internal_interface::msg::WheelEncoders & msg)
  : msg_(msg)
  {}
  ::internal_interface::msg::WheelEncoders right_wheel_count(::internal_interface::msg::WheelEncoders::_right_wheel_count_type arg)
  {
    msg_.right_wheel_count = std::move(arg);
    return std::move(msg_);
  }

private:
  ::internal_interface::msg::WheelEncoders msg_;
};

class Init_WheelEncoders_left_wheel_count
{
public:
  Init_WheelEncoders_left_wheel_count()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WheelEncoders_right_wheel_count left_wheel_count(::internal_interface::msg::WheelEncoders::_left_wheel_count_type arg)
  {
    msg_.left_wheel_count = std::move(arg);
    return Init_WheelEncoders_right_wheel_count(msg_);
  }

private:
  ::internal_interface::msg::WheelEncoders msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::internal_interface::msg::WheelEncoders>()
{
  return internal_interface::msg::builder::Init_WheelEncoders_left_wheel_count();
}

}  // namespace internal_interface

#endif  // INTERNAL_INTERFACE__MSG__DETAIL__WHEEL_ENCODERS__BUILDER_HPP_
