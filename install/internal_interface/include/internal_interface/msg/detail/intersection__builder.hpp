// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from internal_interface:msg/Intersection.idl
// generated code does not contain a copyright notice

#ifndef INTERNAL_INTERFACE__MSG__DETAIL__INTERSECTION__BUILDER_HPP_
#define INTERNAL_INTERFACE__MSG__DETAIL__INTERSECTION__BUILDER_HPP_

#include "internal_interface/msg/detail/intersection__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace internal_interface
{

namespace msg
{

namespace builder
{

class Init_Intersection_is_detected
{
public:
  explicit Init_Intersection_is_detected(::internal_interface::msg::Intersection & msg)
  : msg_(msg)
  {}
  ::internal_interface::msg::Intersection is_detected(::internal_interface::msg::Intersection::_is_detected_type arg)
  {
    msg_.is_detected = std::move(arg);
    return std::move(msg_);
  }

private:
  ::internal_interface::msg::Intersection msg_;
};

class Init_Intersection_intersection_angle
{
public:
  explicit Init_Intersection_intersection_angle(::internal_interface::msg::Intersection & msg)
  : msg_(msg)
  {}
  Init_Intersection_is_detected intersection_angle(::internal_interface::msg::Intersection::_intersection_angle_type arg)
  {
    msg_.intersection_angle = std::move(arg);
    return Init_Intersection_is_detected(msg_);
  }

private:
  ::internal_interface::msg::Intersection msg_;
};

class Init_Intersection_intersection_distance
{
public:
  Init_Intersection_intersection_distance()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Intersection_intersection_angle intersection_distance(::internal_interface::msg::Intersection::_intersection_distance_type arg)
  {
    msg_.intersection_distance = std::move(arg);
    return Init_Intersection_intersection_angle(msg_);
  }

private:
  ::internal_interface::msg::Intersection msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::internal_interface::msg::Intersection>()
{
  return internal_interface::msg::builder::Init_Intersection_intersection_distance();
}

}  // namespace internal_interface

#endif  // INTERNAL_INTERFACE__MSG__DETAIL__INTERSECTION__BUILDER_HPP_
