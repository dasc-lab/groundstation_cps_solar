// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/CommanderStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__COMMANDER_STATUS__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__COMMANDER_STATUS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__CommanderStatus __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__CommanderStatus __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CommanderStatus_
{
  using Type = CommanderStatus_<ContainerAllocator>;

  explicit CommanderStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->state = 0;
    }
  }

  explicit CommanderStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->state = 0;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _state_type =
    uint8_t;
  _state_type state;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__state(
    const uint8_t & _arg)
  {
    this->state = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t STATE_DISARMED =
    0u;
  static constexpr uint8_t STATE_ARMED =
    1u;
  static constexpr uint8_t STATE_OFFBOARD =
    2u;
  static constexpr uint8_t STATE_LAND =
    3u;

  // pointer types
  using RawPtr =
    px4_msgs::msg::CommanderStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::CommanderStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::CommanderStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::CommanderStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::CommanderStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::CommanderStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::CommanderStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::CommanderStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::CommanderStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::CommanderStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__CommanderStatus
    std::shared_ptr<px4_msgs::msg::CommanderStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__CommanderStatus
    std::shared_ptr<px4_msgs::msg::CommanderStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CommanderStatus_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->state != other.state) {
      return false;
    }
    return true;
  }
  bool operator!=(const CommanderStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CommanderStatus_

// alias to use template instance with default allocator
using CommanderStatus =
  px4_msgs::msg::CommanderStatus_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t CommanderStatus_<ContainerAllocator>::STATE_DISARMED;
template<typename ContainerAllocator>
constexpr uint8_t CommanderStatus_<ContainerAllocator>::STATE_ARMED;
template<typename ContainerAllocator>
constexpr uint8_t CommanderStatus_<ContainerAllocator>::STATE_OFFBOARD;
template<typename ContainerAllocator>
constexpr uint8_t CommanderStatus_<ContainerAllocator>::STATE_LAND;

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__COMMANDER_STATUS__STRUCT_HPP_
