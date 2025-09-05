// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/SimpleBatteryStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__SIMPLE_BATTERY_STATUS__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__SIMPLE_BATTERY_STATUS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__SimpleBatteryStatus __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__SimpleBatteryStatus __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SimpleBatteryStatus_
{
  using Type = SimpleBatteryStatus_<ContainerAllocator>;

  explicit SimpleBatteryStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->voltage_v = 0.0f;
      this->voltage_filtered_v = 0.0f;
      this->current_a = 0.0f;
      this->current_filtered_a = 0.0f;
      this->current_average_a = 0.0f;
      this->discharged_mah = 0.0f;
      this->remaining = 0.0f;
      this->scale = 0.0f;
      this->time_remaining_s = 0.0f;
      this->cell_count = 0;
    }
  }

  explicit SimpleBatteryStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->voltage_v = 0.0f;
      this->voltage_filtered_v = 0.0f;
      this->current_a = 0.0f;
      this->current_filtered_a = 0.0f;
      this->current_average_a = 0.0f;
      this->discharged_mah = 0.0f;
      this->remaining = 0.0f;
      this->scale = 0.0f;
      this->time_remaining_s = 0.0f;
      this->cell_count = 0;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _voltage_v_type =
    float;
  _voltage_v_type voltage_v;
  using _voltage_filtered_v_type =
    float;
  _voltage_filtered_v_type voltage_filtered_v;
  using _current_a_type =
    float;
  _current_a_type current_a;
  using _current_filtered_a_type =
    float;
  _current_filtered_a_type current_filtered_a;
  using _current_average_a_type =
    float;
  _current_average_a_type current_average_a;
  using _discharged_mah_type =
    float;
  _discharged_mah_type discharged_mah;
  using _remaining_type =
    float;
  _remaining_type remaining;
  using _scale_type =
    float;
  _scale_type scale;
  using _time_remaining_s_type =
    float;
  _time_remaining_s_type time_remaining_s;
  using _cell_count_type =
    uint8_t;
  _cell_count_type cell_count;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__voltage_v(
    const float & _arg)
  {
    this->voltage_v = _arg;
    return *this;
  }
  Type & set__voltage_filtered_v(
    const float & _arg)
  {
    this->voltage_filtered_v = _arg;
    return *this;
  }
  Type & set__current_a(
    const float & _arg)
  {
    this->current_a = _arg;
    return *this;
  }
  Type & set__current_filtered_a(
    const float & _arg)
  {
    this->current_filtered_a = _arg;
    return *this;
  }
  Type & set__current_average_a(
    const float & _arg)
  {
    this->current_average_a = _arg;
    return *this;
  }
  Type & set__discharged_mah(
    const float & _arg)
  {
    this->discharged_mah = _arg;
    return *this;
  }
  Type & set__remaining(
    const float & _arg)
  {
    this->remaining = _arg;
    return *this;
  }
  Type & set__scale(
    const float & _arg)
  {
    this->scale = _arg;
    return *this;
  }
  Type & set__time_remaining_s(
    const float & _arg)
  {
    this->time_remaining_s = _arg;
    return *this;
  }
  Type & set__cell_count(
    const uint8_t & _arg)
  {
    this->cell_count = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    px4_msgs::msg::SimpleBatteryStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::SimpleBatteryStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::SimpleBatteryStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::SimpleBatteryStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::SimpleBatteryStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::SimpleBatteryStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::SimpleBatteryStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::SimpleBatteryStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::SimpleBatteryStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::SimpleBatteryStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__SimpleBatteryStatus
    std::shared_ptr<px4_msgs::msg::SimpleBatteryStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__SimpleBatteryStatus
    std::shared_ptr<px4_msgs::msg::SimpleBatteryStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SimpleBatteryStatus_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->voltage_v != other.voltage_v) {
      return false;
    }
    if (this->voltage_filtered_v != other.voltage_filtered_v) {
      return false;
    }
    if (this->current_a != other.current_a) {
      return false;
    }
    if (this->current_filtered_a != other.current_filtered_a) {
      return false;
    }
    if (this->current_average_a != other.current_average_a) {
      return false;
    }
    if (this->discharged_mah != other.discharged_mah) {
      return false;
    }
    if (this->remaining != other.remaining) {
      return false;
    }
    if (this->scale != other.scale) {
      return false;
    }
    if (this->time_remaining_s != other.time_remaining_s) {
      return false;
    }
    if (this->cell_count != other.cell_count) {
      return false;
    }
    return true;
  }
  bool operator!=(const SimpleBatteryStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SimpleBatteryStatus_

// alias to use template instance with default allocator
using SimpleBatteryStatus =
  px4_msgs::msg::SimpleBatteryStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__SIMPLE_BATTERY_STATUS__STRUCT_HPP_
