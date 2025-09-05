// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/ParameterRes.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__PARAMETER_RES__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__PARAMETER_RES__BUILDER_HPP_

#include "px4_msgs/msg/detail/parameter_res__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_ParameterRes_value
{
public:
  explicit Init_ParameterRes_value(::px4_msgs::msg::ParameterRes & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::ParameterRes value(::px4_msgs::msg::ParameterRes::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::ParameterRes msg_;
};

class Init_ParameterRes_is_int32
{
public:
  explicit Init_ParameterRes_is_int32(::px4_msgs::msg::ParameterRes & msg)
  : msg_(msg)
  {}
  Init_ParameterRes_value is_int32(::px4_msgs::msg::ParameterRes::_is_int32_type arg)
  {
    msg_.is_int32 = std::move(arg);
    return Init_ParameterRes_value(msg_);
  }

private:
  ::px4_msgs::msg::ParameterRes msg_;
};

class Init_ParameterRes_param_name
{
public:
  explicit Init_ParameterRes_param_name(::px4_msgs::msg::ParameterRes & msg)
  : msg_(msg)
  {}
  Init_ParameterRes_is_int32 param_name(::px4_msgs::msg::ParameterRes::_param_name_type arg)
  {
    msg_.param_name = std::move(arg);
    return Init_ParameterRes_is_int32(msg_);
  }

private:
  ::px4_msgs::msg::ParameterRes msg_;
};

class Init_ParameterRes_timestamp
{
public:
  Init_ParameterRes_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ParameterRes_param_name timestamp(::px4_msgs::msg::ParameterRes::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_ParameterRes_param_name(msg_);
  }

private:
  ::px4_msgs::msg::ParameterRes msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::ParameterRes>()
{
  return px4_msgs::msg::builder::Init_ParameterRes_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__PARAMETER_RES__BUILDER_HPP_
