// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mqtt_client_interfaces:msg/RosMsgType.idl
// generated code does not contain a copyright notice

#ifndef MQTT_CLIENT_INTERFACES__MSG__DETAIL__ROS_MSG_TYPE__STRUCT_HPP_
#define MQTT_CLIENT_INTERFACES__MSG__DETAIL__ROS_MSG_TYPE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__mqtt_client_interfaces__msg__RosMsgType __attribute__((deprecated))
#else
# define DEPRECATED__mqtt_client_interfaces__msg__RosMsgType __declspec(deprecated)
#endif

namespace mqtt_client_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RosMsgType_
{
  using Type = RosMsgType_<ContainerAllocator>;

  explicit RosMsgType_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->md5 = "";
      this->name = "";
      this->definition = "";
      this->stamped = false;
    }
  }

  explicit RosMsgType_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : md5(_alloc),
    name(_alloc),
    definition(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->md5 = "";
      this->name = "";
      this->definition = "";
      this->stamped = false;
    }
  }

  // field types and members
  using _md5_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _md5_type md5;
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _definition_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _definition_type definition;
  using _stamped_type =
    bool;
  _stamped_type stamped;

  // setters for named parameter idiom
  Type & set__md5(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->md5 = _arg;
    return *this;
  }
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__definition(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->definition = _arg;
    return *this;
  }
  Type & set__stamped(
    const bool & _arg)
  {
    this->stamped = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mqtt_client_interfaces::msg::RosMsgType_<ContainerAllocator> *;
  using ConstRawPtr =
    const mqtt_client_interfaces::msg::RosMsgType_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mqtt_client_interfaces::msg::RosMsgType_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mqtt_client_interfaces::msg::RosMsgType_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mqtt_client_interfaces::msg::RosMsgType_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mqtt_client_interfaces::msg::RosMsgType_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mqtt_client_interfaces::msg::RosMsgType_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mqtt_client_interfaces::msg::RosMsgType_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mqtt_client_interfaces::msg::RosMsgType_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mqtt_client_interfaces::msg::RosMsgType_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mqtt_client_interfaces__msg__RosMsgType
    std::shared_ptr<mqtt_client_interfaces::msg::RosMsgType_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mqtt_client_interfaces__msg__RosMsgType
    std::shared_ptr<mqtt_client_interfaces::msg::RosMsgType_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RosMsgType_ & other) const
  {
    if (this->md5 != other.md5) {
      return false;
    }
    if (this->name != other.name) {
      return false;
    }
    if (this->definition != other.definition) {
      return false;
    }
    if (this->stamped != other.stamped) {
      return false;
    }
    return true;
  }
  bool operator!=(const RosMsgType_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RosMsgType_

// alias to use template instance with default allocator
using RosMsgType =
  mqtt_client_interfaces::msg::RosMsgType_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mqtt_client_interfaces

#endif  // MQTT_CLIENT_INTERFACES__MSG__DETAIL__ROS_MSG_TYPE__STRUCT_HPP_
