// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mqtt_client_interfaces:srv/IsConnected.idl
// generated code does not contain a copyright notice

#ifndef MQTT_CLIENT_INTERFACES__SRV__DETAIL__IS_CONNECTED__STRUCT_HPP_
#define MQTT_CLIENT_INTERFACES__SRV__DETAIL__IS_CONNECTED__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__mqtt_client_interfaces__srv__IsConnected_Request __attribute__((deprecated))
#else
# define DEPRECATED__mqtt_client_interfaces__srv__IsConnected_Request __declspec(deprecated)
#endif

namespace mqtt_client_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct IsConnected_Request_
{
  using Type = IsConnected_Request_<ContainerAllocator>;

  explicit IsConnected_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit IsConnected_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    mqtt_client_interfaces::srv::IsConnected_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const mqtt_client_interfaces::srv::IsConnected_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mqtt_client_interfaces::srv::IsConnected_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mqtt_client_interfaces::srv::IsConnected_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mqtt_client_interfaces::srv::IsConnected_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mqtt_client_interfaces::srv::IsConnected_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mqtt_client_interfaces::srv::IsConnected_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mqtt_client_interfaces::srv::IsConnected_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mqtt_client_interfaces::srv::IsConnected_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mqtt_client_interfaces::srv::IsConnected_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mqtt_client_interfaces__srv__IsConnected_Request
    std::shared_ptr<mqtt_client_interfaces::srv::IsConnected_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mqtt_client_interfaces__srv__IsConnected_Request
    std::shared_ptr<mqtt_client_interfaces::srv::IsConnected_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const IsConnected_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const IsConnected_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct IsConnected_Request_

// alias to use template instance with default allocator
using IsConnected_Request =
  mqtt_client_interfaces::srv::IsConnected_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace mqtt_client_interfaces


#ifndef _WIN32
# define DEPRECATED__mqtt_client_interfaces__srv__IsConnected_Response __attribute__((deprecated))
#else
# define DEPRECATED__mqtt_client_interfaces__srv__IsConnected_Response __declspec(deprecated)
#endif

namespace mqtt_client_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct IsConnected_Response_
{
  using Type = IsConnected_Response_<ContainerAllocator>;

  explicit IsConnected_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->connected = false;
    }
  }

  explicit IsConnected_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->connected = false;
    }
  }

  // field types and members
  using _connected_type =
    bool;
  _connected_type connected;

  // setters for named parameter idiom
  Type & set__connected(
    const bool & _arg)
  {
    this->connected = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mqtt_client_interfaces::srv::IsConnected_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const mqtt_client_interfaces::srv::IsConnected_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mqtt_client_interfaces::srv::IsConnected_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mqtt_client_interfaces::srv::IsConnected_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mqtt_client_interfaces::srv::IsConnected_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mqtt_client_interfaces::srv::IsConnected_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mqtt_client_interfaces::srv::IsConnected_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mqtt_client_interfaces::srv::IsConnected_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mqtt_client_interfaces::srv::IsConnected_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mqtt_client_interfaces::srv::IsConnected_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mqtt_client_interfaces__srv__IsConnected_Response
    std::shared_ptr<mqtt_client_interfaces::srv::IsConnected_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mqtt_client_interfaces__srv__IsConnected_Response
    std::shared_ptr<mqtt_client_interfaces::srv::IsConnected_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const IsConnected_Response_ & other) const
  {
    if (this->connected != other.connected) {
      return false;
    }
    return true;
  }
  bool operator!=(const IsConnected_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct IsConnected_Response_

// alias to use template instance with default allocator
using IsConnected_Response =
  mqtt_client_interfaces::srv::IsConnected_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace mqtt_client_interfaces

namespace mqtt_client_interfaces
{

namespace srv
{

struct IsConnected
{
  using Request = mqtt_client_interfaces::srv::IsConnected_Request;
  using Response = mqtt_client_interfaces::srv::IsConnected_Response;
};

}  // namespace srv

}  // namespace mqtt_client_interfaces

#endif  // MQTT_CLIENT_INTERFACES__SRV__DETAIL__IS_CONNECTED__STRUCT_HPP_
