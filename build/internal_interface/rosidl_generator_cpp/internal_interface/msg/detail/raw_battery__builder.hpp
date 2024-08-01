// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from internal_interface:msg/RawBattery.idl
// generated code does not contain a copyright notice

#ifndef INTERNAL_INTERFACE__MSG__DETAIL__RAW_BATTERY__BUILDER_HPP_
#define INTERNAL_INTERFACE__MSG__DETAIL__RAW_BATTERY__BUILDER_HPP_

#include "internal_interface/msg/detail/raw_battery__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace internal_interface
{

namespace msg
{

namespace builder
{

class Init_RawBattery_instant_consumption
{
public:
  explicit Init_RawBattery_instant_consumption(::internal_interface::msg::RawBattery & msg)
  : msg_(msg)
  {}
  ::internal_interface::msg::RawBattery instant_consumption(::internal_interface::msg::RawBattery::_instant_consumption_type arg)
  {
    msg_.instant_consumption = std::move(arg);
    return std::move(msg_);
  }

private:
  ::internal_interface::msg::RawBattery msg_;
};

class Init_RawBattery_voltage
{
public:
  Init_RawBattery_voltage()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RawBattery_instant_consumption voltage(::internal_interface::msg::RawBattery::_voltage_type arg)
  {
    msg_.voltage = std::move(arg);
    return Init_RawBattery_instant_consumption(msg_);
  }

private:
  ::internal_interface::msg::RawBattery msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::internal_interface::msg::RawBattery>()
{
  return internal_interface::msg::builder::Init_RawBattery_voltage();
}

}  // namespace internal_interface

#endif  // INTERNAL_INTERFACE__MSG__DETAIL__RAW_BATTERY__BUILDER_HPP_
