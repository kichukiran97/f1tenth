// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from internal_interface:msg/RawDistanceSensor.idl
// generated code does not contain a copyright notice

#ifndef INTERNAL_INTERFACE__MSG__DETAIL__RAW_DISTANCE_SENSOR__BUILDER_HPP_
#define INTERNAL_INTERFACE__MSG__DETAIL__RAW_DISTANCE_SENSOR__BUILDER_HPP_

#include "internal_interface/msg/detail/raw_distance_sensor__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace internal_interface
{

namespace msg
{

namespace builder
{

class Init_RawDistanceSensor_distances
{
public:
  Init_RawDistanceSensor_distances()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::internal_interface::msg::RawDistanceSensor distances(::internal_interface::msg::RawDistanceSensor::_distances_type arg)
  {
    msg_.distances = std::move(arg);
    return std::move(msg_);
  }

private:
  ::internal_interface::msg::RawDistanceSensor msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::internal_interface::msg::RawDistanceSensor>()
{
  return internal_interface::msg::builder::Init_RawDistanceSensor_distances();
}

}  // namespace internal_interface

#endif  // INTERNAL_INTERFACE__MSG__DETAIL__RAW_DISTANCE_SENSOR__BUILDER_HPP_
