// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from internal_interface:msg/RawImu.idl
// generated code does not contain a copyright notice

#ifndef INTERNAL_INTERFACE__MSG__DETAIL__RAW_IMU__BUILDER_HPP_
#define INTERNAL_INTERFACE__MSG__DETAIL__RAW_IMU__BUILDER_HPP_

#include "internal_interface/msg/detail/raw_imu__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace internal_interface
{

namespace msg
{

namespace builder
{

class Init_RawImu_accel_z
{
public:
  explicit Init_RawImu_accel_z(::internal_interface::msg::RawImu & msg)
  : msg_(msg)
  {}
  ::internal_interface::msg::RawImu accel_z(::internal_interface::msg::RawImu::_accel_z_type arg)
  {
    msg_.accel_z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::internal_interface::msg::RawImu msg_;
};

class Init_RawImu_accel_y
{
public:
  explicit Init_RawImu_accel_y(::internal_interface::msg::RawImu & msg)
  : msg_(msg)
  {}
  Init_RawImu_accel_z accel_y(::internal_interface::msg::RawImu::_accel_y_type arg)
  {
    msg_.accel_y = std::move(arg);
    return Init_RawImu_accel_z(msg_);
  }

private:
  ::internal_interface::msg::RawImu msg_;
};

class Init_RawImu_accel_x
{
public:
  explicit Init_RawImu_accel_x(::internal_interface::msg::RawImu & msg)
  : msg_(msg)
  {}
  Init_RawImu_accel_y accel_x(::internal_interface::msg::RawImu::_accel_x_type arg)
  {
    msg_.accel_x = std::move(arg);
    return Init_RawImu_accel_y(msg_);
  }

private:
  ::internal_interface::msg::RawImu msg_;
};

class Init_RawImu_pitch
{
public:
  explicit Init_RawImu_pitch(::internal_interface::msg::RawImu & msg)
  : msg_(msg)
  {}
  Init_RawImu_accel_x pitch(::internal_interface::msg::RawImu::_pitch_type arg)
  {
    msg_.pitch = std::move(arg);
    return Init_RawImu_accel_x(msg_);
  }

private:
  ::internal_interface::msg::RawImu msg_;
};

class Init_RawImu_roll
{
public:
  explicit Init_RawImu_roll(::internal_interface::msg::RawImu & msg)
  : msg_(msg)
  {}
  Init_RawImu_pitch roll(::internal_interface::msg::RawImu::_roll_type arg)
  {
    msg_.roll = std::move(arg);
    return Init_RawImu_pitch(msg_);
  }

private:
  ::internal_interface::msg::RawImu msg_;
};

class Init_RawImu_yaw
{
public:
  Init_RawImu_yaw()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RawImu_roll yaw(::internal_interface::msg::RawImu::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return Init_RawImu_roll(msg_);
  }

private:
  ::internal_interface::msg::RawImu msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::internal_interface::msg::RawImu>()
{
  return internal_interface::msg::builder::Init_RawImu_yaw();
}

}  // namespace internal_interface

#endif  // INTERNAL_INTERFACE__MSG__DETAIL__RAW_IMU__BUILDER_HPP_
