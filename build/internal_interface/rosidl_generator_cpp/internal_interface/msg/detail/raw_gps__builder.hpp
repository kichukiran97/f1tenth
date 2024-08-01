// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from internal_interface:msg/RawGps.idl
// generated code does not contain a copyright notice

#ifndef INTERNAL_INTERFACE__MSG__DETAIL__RAW_GPS__BUILDER_HPP_
#define INTERNAL_INTERFACE__MSG__DETAIL__RAW_GPS__BUILDER_HPP_

#include "internal_interface/msg/detail/raw_gps__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace internal_interface
{

namespace msg
{

namespace builder
{

class Init_RawGps_confidence
{
public:
  explicit Init_RawGps_confidence(::internal_interface::msg::RawGps & msg)
  : msg_(msg)
  {}
  ::internal_interface::msg::RawGps confidence(::internal_interface::msg::RawGps::_confidence_type arg)
  {
    msg_.confidence = std::move(arg);
    return std::move(msg_);
  }

private:
  ::internal_interface::msg::RawGps msg_;
};

class Init_RawGps_z
{
public:
  explicit Init_RawGps_z(::internal_interface::msg::RawGps & msg)
  : msg_(msg)
  {}
  Init_RawGps_confidence z(::internal_interface::msg::RawGps::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_RawGps_confidence(msg_);
  }

private:
  ::internal_interface::msg::RawGps msg_;
};

class Init_RawGps_y
{
public:
  explicit Init_RawGps_y(::internal_interface::msg::RawGps & msg)
  : msg_(msg)
  {}
  Init_RawGps_z y(::internal_interface::msg::RawGps::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_RawGps_z(msg_);
  }

private:
  ::internal_interface::msg::RawGps msg_;
};

class Init_RawGps_x
{
public:
  Init_RawGps_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RawGps_y x(::internal_interface::msg::RawGps::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_RawGps_y(msg_);
  }

private:
  ::internal_interface::msg::RawGps msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::internal_interface::msg::RawGps>()
{
  return internal_interface::msg::builder::Init_RawGps_x();
}

}  // namespace internal_interface

#endif  // INTERNAL_INTERFACE__MSG__DETAIL__RAW_GPS__BUILDER_HPP_
