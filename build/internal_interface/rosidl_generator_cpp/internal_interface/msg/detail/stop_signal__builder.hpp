// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from internal_interface:msg/StopSignal.idl
// generated code does not contain a copyright notice

#ifndef INTERNAL_INTERFACE__MSG__DETAIL__STOP_SIGNAL__BUILDER_HPP_
#define INTERNAL_INTERFACE__MSG__DETAIL__STOP_SIGNAL__BUILDER_HPP_

#include "internal_interface/msg/detail/stop_signal__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace internal_interface
{

namespace msg
{

namespace builder
{

class Init_StopSignal_delay
{
public:
  explicit Init_StopSignal_delay(::internal_interface::msg::StopSignal & msg)
  : msg_(msg)
  {}
  ::internal_interface::msg::StopSignal delay(::internal_interface::msg::StopSignal::_delay_type arg)
  {
    msg_.delay = std::move(arg);
    return std::move(msg_);
  }

private:
  ::internal_interface::msg::StopSignal msg_;
};

class Init_StopSignal_should_stop
{
public:
  Init_StopSignal_should_stop()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StopSignal_delay should_stop(::internal_interface::msg::StopSignal::_should_stop_type arg)
  {
    msg_.should_stop = std::move(arg);
    return Init_StopSignal_delay(msg_);
  }

private:
  ::internal_interface::msg::StopSignal msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::internal_interface::msg::StopSignal>()
{
  return internal_interface::msg::builder::Init_StopSignal_should_stop();
}

}  // namespace internal_interface

#endif  // INTERNAL_INTERFACE__MSG__DETAIL__STOP_SIGNAL__BUILDER_HPP_
