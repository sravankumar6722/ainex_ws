// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ainex_interfaces:srv/MoveHand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ainex_interfaces/srv/move_hand.hpp"


#ifndef AINEX_INTERFACES__SRV__DETAIL__MOVE_HAND__STRUCT_HPP_
#define AINEX_INTERFACES__SRV__DETAIL__MOVE_HAND__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ainex_interfaces__srv__MoveHand_Request __attribute__((deprecated))
#else
# define DEPRECATED__ainex_interfaces__srv__MoveHand_Request __declspec(deprecated)
#endif

namespace ainex_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct MoveHand_Request_
{
  using Type = MoveHand_Request_<ContainerAllocator>;

  explicit MoveHand_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit MoveHand_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _angles_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _angles_type angles;

  // setters for named parameter idiom
  Type & set__angles(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->angles = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ainex_interfaces::srv::MoveHand_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const ainex_interfaces::srv::MoveHand_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ainex_interfaces::srv::MoveHand_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ainex_interfaces::srv::MoveHand_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ainex_interfaces::srv::MoveHand_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ainex_interfaces::srv::MoveHand_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ainex_interfaces::srv::MoveHand_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ainex_interfaces::srv::MoveHand_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ainex_interfaces::srv::MoveHand_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ainex_interfaces::srv::MoveHand_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ainex_interfaces__srv__MoveHand_Request
    std::shared_ptr<ainex_interfaces::srv::MoveHand_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ainex_interfaces__srv__MoveHand_Request
    std::shared_ptr<ainex_interfaces::srv::MoveHand_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveHand_Request_ & other) const
  {
    if (this->angles != other.angles) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveHand_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveHand_Request_

// alias to use template instance with default allocator
using MoveHand_Request =
  ainex_interfaces::srv::MoveHand_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ainex_interfaces


#ifndef _WIN32
# define DEPRECATED__ainex_interfaces__srv__MoveHand_Response __attribute__((deprecated))
#else
# define DEPRECATED__ainex_interfaces__srv__MoveHand_Response __declspec(deprecated)
#endif

namespace ainex_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct MoveHand_Response_
{
  using Type = MoveHand_Response_<ContainerAllocator>;

  explicit MoveHand_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  explicit MoveHand_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ainex_interfaces::srv::MoveHand_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const ainex_interfaces::srv::MoveHand_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ainex_interfaces::srv::MoveHand_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ainex_interfaces::srv::MoveHand_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ainex_interfaces::srv::MoveHand_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ainex_interfaces::srv::MoveHand_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ainex_interfaces::srv::MoveHand_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ainex_interfaces::srv::MoveHand_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ainex_interfaces::srv::MoveHand_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ainex_interfaces::srv::MoveHand_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ainex_interfaces__srv__MoveHand_Response
    std::shared_ptr<ainex_interfaces::srv::MoveHand_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ainex_interfaces__srv__MoveHand_Response
    std::shared_ptr<ainex_interfaces::srv::MoveHand_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveHand_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveHand_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveHand_Response_

// alias to use template instance with default allocator
using MoveHand_Response =
  ainex_interfaces::srv::MoveHand_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ainex_interfaces


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ainex_interfaces__srv__MoveHand_Event __attribute__((deprecated))
#else
# define DEPRECATED__ainex_interfaces__srv__MoveHand_Event __declspec(deprecated)
#endif

namespace ainex_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct MoveHand_Event_
{
  using Type = MoveHand_Event_<ContainerAllocator>;

  explicit MoveHand_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit MoveHand_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<ainex_interfaces::srv::MoveHand_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ainex_interfaces::srv::MoveHand_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<ainex_interfaces::srv::MoveHand_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ainex_interfaces::srv::MoveHand_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<ainex_interfaces::srv::MoveHand_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ainex_interfaces::srv::MoveHand_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<ainex_interfaces::srv::MoveHand_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ainex_interfaces::srv::MoveHand_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ainex_interfaces::srv::MoveHand_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const ainex_interfaces::srv::MoveHand_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ainex_interfaces::srv::MoveHand_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ainex_interfaces::srv::MoveHand_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ainex_interfaces::srv::MoveHand_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ainex_interfaces::srv::MoveHand_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ainex_interfaces::srv::MoveHand_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ainex_interfaces::srv::MoveHand_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ainex_interfaces::srv::MoveHand_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ainex_interfaces::srv::MoveHand_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ainex_interfaces__srv__MoveHand_Event
    std::shared_ptr<ainex_interfaces::srv::MoveHand_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ainex_interfaces__srv__MoveHand_Event
    std::shared_ptr<ainex_interfaces::srv::MoveHand_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveHand_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveHand_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveHand_Event_

// alias to use template instance with default allocator
using MoveHand_Event =
  ainex_interfaces::srv::MoveHand_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ainex_interfaces

namespace ainex_interfaces
{

namespace srv
{

struct MoveHand
{
  using Request = ainex_interfaces::srv::MoveHand_Request;
  using Response = ainex_interfaces::srv::MoveHand_Response;
  using Event = ainex_interfaces::srv::MoveHand_Event;
};

}  // namespace srv

}  // namespace ainex_interfaces

#endif  // AINEX_INTERFACES__SRV__DETAIL__MOVE_HAND__STRUCT_HPP_
