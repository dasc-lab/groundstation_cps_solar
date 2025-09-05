// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/SimpleBatteryStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__SIMPLE_BATTERY_STATUS__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__SIMPLE_BATTERY_STATUS__BUILDER_HPP_

#include "px4_msgs/msg/detail/simple_battery_status__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_SimpleBatteryStatus_cell_count
{
public:
  explicit Init_SimpleBatteryStatus_cell_count(::px4_msgs::msg::SimpleBatteryStatus & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::SimpleBatteryStatus cell_count(::px4_msgs::msg::SimpleBatteryStatus::_cell_count_type arg)
  {
    msg_.cell_count = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::SimpleBatteryStatus msg_;
};

class Init_SimpleBatteryStatus_time_remaining_s
{
public:
  explicit Init_SimpleBatteryStatus_time_remaining_s(::px4_msgs::msg::SimpleBatteryStatus & msg)
  : msg_(msg)
  {}
  Init_SimpleBatteryStatus_cell_count time_remaining_s(::px4_msgs::msg::SimpleBatteryStatus::_time_remaining_s_type arg)
  {
    msg_.time_remaining_s = std::move(arg);
    return Init_SimpleBatteryStatus_cell_count(msg_);
  }

private:
  ::px4_msgs::msg::SimpleBatteryStatus msg_;
};

class Init_SimpleBatteryStatus_scale
{
public:
  explicit Init_SimpleBatteryStatus_scale(::px4_msgs::msg::SimpleBatteryStatus & msg)
  : msg_(msg)
  {}
  Init_SimpleBatteryStatus_time_remaining_s scale(::px4_msgs::msg::SimpleBatteryStatus::_scale_type arg)
  {
    msg_.scale = std::move(arg);
    return Init_SimpleBatteryStatus_time_remaining_s(msg_);
  }

private:
  ::px4_msgs::msg::SimpleBatteryStatus msg_;
};

class Init_SimpleBatteryStatus_remaining
{
public:
  explicit Init_SimpleBatteryStatus_remaining(::px4_msgs::msg::SimpleBatteryStatus & msg)
  : msg_(msg)
  {}
  Init_SimpleBatteryStatus_scale remaining(::px4_msgs::msg::SimpleBatteryStatus::_remaining_type arg)
  {
    msg_.remaining = std::move(arg);
    return Init_SimpleBatteryStatus_scale(msg_);
  }

private:
  ::px4_msgs::msg::SimpleBatteryStatus msg_;
};

class Init_SimpleBatteryStatus_discharged_mah
{
public:
  explicit Init_SimpleBatteryStatus_discharged_mah(::px4_msgs::msg::SimpleBatteryStatus & msg)
  : msg_(msg)
  {}
  Init_SimpleBatteryStatus_remaining discharged_mah(::px4_msgs::msg::SimpleBatteryStatus::_discharged_mah_type arg)
  {
    msg_.discharged_mah = std::move(arg);
    return Init_SimpleBatteryStatus_remaining(msg_);
  }

private:
  ::px4_msgs::msg::SimpleBatteryStatus msg_;
};

class Init_SimpleBatteryStatus_current_average_a
{
public:
  explicit Init_SimpleBatteryStatus_current_average_a(::px4_msgs::msg::SimpleBatteryStatus & msg)
  : msg_(msg)
  {}
  Init_SimpleBatteryStatus_discharged_mah current_average_a(::px4_msgs::msg::SimpleBatteryStatus::_current_average_a_type arg)
  {
    msg_.current_average_a = std::move(arg);
    return Init_SimpleBatteryStatus_discharged_mah(msg_);
  }

private:
  ::px4_msgs::msg::SimpleBatteryStatus msg_;
};

class Init_SimpleBatteryStatus_current_filtered_a
{
public:
  explicit Init_SimpleBatteryStatus_current_filtered_a(::px4_msgs::msg::SimpleBatteryStatus & msg)
  : msg_(msg)
  {}
  Init_SimpleBatteryStatus_current_average_a current_filtered_a(::px4_msgs::msg::SimpleBatteryStatus::_current_filtered_a_type arg)
  {
    msg_.current_filtered_a = std::move(arg);
    return Init_SimpleBatteryStatus_current_average_a(msg_);
  }

private:
  ::px4_msgs::msg::SimpleBatteryStatus msg_;
};

class Init_SimpleBatteryStatus_current_a
{
public:
  explicit Init_SimpleBatteryStatus_current_a(::px4_msgs::msg::SimpleBatteryStatus & msg)
  : msg_(msg)
  {}
  Init_SimpleBatteryStatus_current_filtered_a current_a(::px4_msgs::msg::SimpleBatteryStatus::_current_a_type arg)
  {
    msg_.current_a = std::move(arg);
    return Init_SimpleBatteryStatus_current_filtered_a(msg_);
  }

private:
  ::px4_msgs::msg::SimpleBatteryStatus msg_;
};

class Init_SimpleBatteryStatus_voltage_filtered_v
{
public:
  explicit Init_SimpleBatteryStatus_voltage_filtered_v(::px4_msgs::msg::SimpleBatteryStatus & msg)
  : msg_(msg)
  {}
  Init_SimpleBatteryStatus_current_a voltage_filtered_v(::px4_msgs::msg::SimpleBatteryStatus::_voltage_filtered_v_type arg)
  {
    msg_.voltage_filtered_v = std::move(arg);
    return Init_SimpleBatteryStatus_current_a(msg_);
  }

private:
  ::px4_msgs::msg::SimpleBatteryStatus msg_;
};

class Init_SimpleBatteryStatus_voltage_v
{
public:
  explicit Init_SimpleBatteryStatus_voltage_v(::px4_msgs::msg::SimpleBatteryStatus & msg)
  : msg_(msg)
  {}
  Init_SimpleBatteryStatus_voltage_filtered_v voltage_v(::px4_msgs::msg::SimpleBatteryStatus::_voltage_v_type arg)
  {
    msg_.voltage_v = std::move(arg);
    return Init_SimpleBatteryStatus_voltage_filtered_v(msg_);
  }

private:
  ::px4_msgs::msg::SimpleBatteryStatus msg_;
};

class Init_SimpleBatteryStatus_timestamp
{
public:
  Init_SimpleBatteryStatus_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SimpleBatteryStatus_voltage_v timestamp(::px4_msgs::msg::SimpleBatteryStatus::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_SimpleBatteryStatus_voltage_v(msg_);
  }

private:
  ::px4_msgs::msg::SimpleBatteryStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::SimpleBatteryStatus>()
{
  return px4_msgs::msg::builder::Init_SimpleBatteryStatus_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__SIMPLE_BATTERY_STATUS__BUILDER_HPP_
