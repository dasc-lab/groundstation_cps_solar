// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/CommanderSetState.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__COMMANDER_SET_STATE__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__COMMANDER_SET_STATE__BUILDER_HPP_

#include "px4_msgs/msg/detail/commander_set_state__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_CommanderSetState_new_state
{
public:
  explicit Init_CommanderSetState_new_state(::px4_msgs::msg::CommanderSetState & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::CommanderSetState new_state(::px4_msgs::msg::CommanderSetState::_new_state_type arg)
  {
    msg_.new_state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::CommanderSetState msg_;
};

class Init_CommanderSetState_timestamp
{
public:
  Init_CommanderSetState_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CommanderSetState_new_state timestamp(::px4_msgs::msg::CommanderSetState::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_CommanderSetState_new_state(msg_);
  }

private:
  ::px4_msgs::msg::CommanderSetState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::CommanderSetState>()
{
  return px4_msgs::msg::builder::Init_CommanderSetState_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__COMMANDER_SET_STATE__BUILDER_HPP_
