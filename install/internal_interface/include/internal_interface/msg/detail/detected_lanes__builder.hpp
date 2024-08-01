// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from internal_interface:msg/DetectedLanes.idl
// generated code does not contain a copyright notice

#ifndef INTERNAL_INTERFACE__MSG__DETAIL__DETECTED_LANES__BUILDER_HPP_
#define INTERNAL_INTERFACE__MSG__DETAIL__DETECTED_LANES__BUILDER_HPP_

#include "internal_interface/msg/detail/detected_lanes__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace internal_interface
{

namespace msg
{

namespace builder
{

class Init_DetectedLanes_angle
{
public:
  explicit Init_DetectedLanes_angle(::internal_interface::msg::DetectedLanes & msg)
  : msg_(msg)
  {}
  ::internal_interface::msg::DetectedLanes angle(::internal_interface::msg::DetectedLanes::_angle_type arg)
  {
    msg_.angle = std::move(arg);
    return std::move(msg_);
  }

private:
  ::internal_interface::msg::DetectedLanes msg_;
};

class Init_DetectedLanes_speed
{
public:
  explicit Init_DetectedLanes_speed(::internal_interface::msg::DetectedLanes & msg)
  : msg_(msg)
  {}
  Init_DetectedLanes_angle speed(::internal_interface::msg::DetectedLanes::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return Init_DetectedLanes_angle(msg_);
  }

private:
  ::internal_interface::msg::DetectedLanes msg_;
};

class Init_DetectedLanes_distance
{
public:
  Init_DetectedLanes_distance()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DetectedLanes_speed distance(::internal_interface::msg::DetectedLanes::_distance_type arg)
  {
    msg_.distance = std::move(arg);
    return Init_DetectedLanes_speed(msg_);
  }

private:
  ::internal_interface::msg::DetectedLanes msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::internal_interface::msg::DetectedLanes>()
{
  return internal_interface::msg::builder::Init_DetectedLanes_distance();
}

}  // namespace internal_interface

#endif  // INTERNAL_INTERFACE__MSG__DETAIL__DETECTED_LANES__BUILDER_HPP_
