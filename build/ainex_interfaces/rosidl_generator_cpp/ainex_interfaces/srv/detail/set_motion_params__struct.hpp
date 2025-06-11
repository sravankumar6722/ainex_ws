// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ainex_interfaces:srv/SetMotionParams.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ainex_interfaces/srv/set_motion_params.hpp"


#ifndef AINEX_INTERFACES__SRV__DETAIL__SET_MOTION_PARAMS__STRUCT_HPP_
#define AINEX_INTERFACES__SRV__DETAIL__SET_MOTION_PARAMS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ainex_interfaces__srv__SetMotionParams_Request __attribute__((deprecated))
#else
# define DEPRECATED__ainex_interfaces__srv__SetMotionParams_Request __declspec(deprecated)
#endif

namespace ainex_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetMotionParams_Request_
{
  using Type = SetMotionParams_Request_<ContainerAllocator>;

  explicit SetMotionParams_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->speed = 0l;
      this->acceleration = 0l;
      this->step_degree = 0.0f;
    }
  }

  explicit SetMotionParams_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->speed = 0l;
      this->acceleration = 0l;
      this->step_degree = 0.0f;
    }
  }

  // field types and members
  using _speed_type =
    int32_t;
  _speed_type speed;
  using _acceleration_type =
    int32_t;
  _acceleration_type acceleration;
  using _step_degree_type =
    float;
  _step_degree_type step_degree;

  // setters for named parameter idiom
  Type & set__speed(
    const int32_t & _arg)
  {
    this->speed = _arg;
    return *this;
  }
  Type & set__acceleration(
    const int32_t & _arg)
  {
    this->acceleration = _arg;
    return *this;
  }
  Type & set__step_degree(
    const float & _arg)
  {
    this->step_degree = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ainex_interfaces::srv::SetMotionParams_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const ainex_interfaces::srv::SetMotionParams_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ainex_interfaces::srv::SetMotionParams_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ainex_interfaces::srv::SetMotionParams_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ainex_interfaces::srv::SetMotionParams_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ainex_interfaces::srv::SetMotionParams_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ainex_interfaces::srv::SetMotionParams_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ainex_interfaces::srv::SetMotionParams_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ainex_interfaces::srv::SetMotionParams_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ainex_interfaces::srv::SetMotionParams_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ainex_interfaces__srv__SetMotionParams_Request
    std::shared_ptr<ainex_interfaces::srv::SetMotionParams_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ainex_interfaces__srv__SetMotionParams_Request
    std::shared_ptr<ainex_interfaces::srv::SetMotionParams_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetMotionParams_Request_ & other) const
  {
    if (this->speed != other.speed) {
      return false;
    }
    if (this->acceleration != other.acceleration) {
      return false;
    }
    if (this->step_degree != other.step_degree) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetMotionParams_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetMotionParams_Request_

// alias to use template instance with default allocator
using SetMotionParams_Request =
  ainex_interfaces::srv::SetMotionParams_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ainex_interfaces


#ifndef _WIN32
# define DEPRECATED__ainex_interfaces__srv__SetMotionParams_Response __attribute__((deprecated))
#else
# define DEPRECATED__ainex_interfaces__srv__SetMotionParams_Response __declspec(deprecated)
#endif

namespace ainex_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetMotionParams_Response_
{
  using Type = SetMotionParams_Response_<ContainerAllocator>;

  explicit SetMotionParams_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  explicit SetMotionParams_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    ainex_interfaces::srv::SetMotionParams_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const ainex_interfaces::srv::SetMotionParams_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ainex_interfaces::srv::SetMotionParams_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ainex_interfaces::srv::SetMotionParams_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ainex_interfaces::srv::SetMotionParams_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ainex_interfaces::srv::SetMotionParams_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ainex_interfaces::srv::SetMotionParams_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ainex_interfaces::srv::SetMotionParams_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ainex_interfaces::srv::SetMotionParams_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ainex_interfaces::srv::SetMotionParams_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ainex_interfaces__srv__SetMotionParams_Response
    std::shared_ptr<ainex_interfaces::srv::SetMotionParams_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ainex_interfaces__srv__SetMotionParams_Response
    std::shared_ptr<ainex_interfaces::srv::SetMotionParams_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetMotionParams_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetMotionParams_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetMotionParams_Response_

// alias to use template instance with default allocator
using SetMotionParams_Response =
  ainex_interfaces::srv::SetMotionParams_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ainex_interfaces


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ainex_interfaces__srv__SetMotionParams_Event __attribute__((deprecated))
#else
# define DEPRECATED__ainex_interfaces__srv__SetMotionParams_Event __declspec(deprecated)
#endif

namespace ainex_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetMotionParams_Event_
{
  using Type = SetMotionParams_Event_<ContainerAllocator>;

  explicit SetMotionParams_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit SetMotionParams_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<ainex_interfaces::srv::SetMotionParams_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ainex_interfaces::srv::SetMotionParams_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<ainex_interfaces::srv::SetMotionParams_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ainex_interfaces::srv::SetMotionParams_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<ainex_interfaces::srv::SetMotionParams_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ainex_interfaces::srv::SetMotionParams_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<ainex_interfaces::srv::SetMotionParams_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ainex_interfaces::srv::SetMotionParams_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ainex_interfaces::srv::SetMotionParams_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const ainex_interfaces::srv::SetMotionParams_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ainex_interfaces::srv::SetMotionParams_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ainex_interfaces::srv::SetMotionParams_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ainex_interfaces::srv::SetMotionParams_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ainex_interfaces::srv::SetMotionParams_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ainex_interfaces::srv::SetMotionParams_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ainex_interfaces::srv::SetMotionParams_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ainex_interfaces::srv::SetMotionParams_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ainex_interfaces::srv::SetMotionParams_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ainex_interfaces__srv__SetMotionParams_Event
    std::shared_ptr<ainex_interfaces::srv::SetMotionParams_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ainex_interfaces__srv__SetMotionParams_Event
    std::shared_ptr<ainex_interfaces::srv::SetMotionParams_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetMotionParams_Event_ & other) const
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
  bool operator!=(const SetMotionParams_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetMotionParams_Event_

// alias to use template instance with default allocator
using SetMotionParams_Event =
  ainex_interfaces::srv::SetMotionParams_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ainex_interfaces

namespace ainex_interfaces
{

namespace srv
{

struct SetMotionParams
{
  using Request = ainex_interfaces::srv::SetMotionParams_Request;
  using Response = ainex_interfaces::srv::SetMotionParams_Response;
  using Event = ainex_interfaces::srv::SetMotionParams_Event;
};

}  // namespace srv

}  // namespace ainex_interfaces

#endif  // AINEX_INTERFACES__SRV__DETAIL__SET_MOTION_PARAMS__STRUCT_HPP_
