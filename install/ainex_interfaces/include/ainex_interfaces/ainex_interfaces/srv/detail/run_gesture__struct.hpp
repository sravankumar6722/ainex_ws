// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ainex_interfaces:srv/RunGesture.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ainex_interfaces/srv/run_gesture.hpp"


#ifndef AINEX_INTERFACES__SRV__DETAIL__RUN_GESTURE__STRUCT_HPP_
#define AINEX_INTERFACES__SRV__DETAIL__RUN_GESTURE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ainex_interfaces__srv__RunGesture_Request __attribute__((deprecated))
#else
# define DEPRECATED__ainex_interfaces__srv__RunGesture_Request __declspec(deprecated)
#endif

namespace ainex_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RunGesture_Request_
{
  using Type = RunGesture_Request_<ContainerAllocator>;

  explicit RunGesture_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->gesture_name = "";
    }
  }

  explicit RunGesture_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : gesture_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->gesture_name = "";
    }
  }

  // field types and members
  using _gesture_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _gesture_name_type gesture_name;

  // setters for named parameter idiom
  Type & set__gesture_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->gesture_name = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ainex_interfaces::srv::RunGesture_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const ainex_interfaces::srv::RunGesture_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ainex_interfaces::srv::RunGesture_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ainex_interfaces::srv::RunGesture_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ainex_interfaces::srv::RunGesture_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ainex_interfaces::srv::RunGesture_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ainex_interfaces::srv::RunGesture_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ainex_interfaces::srv::RunGesture_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ainex_interfaces::srv::RunGesture_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ainex_interfaces::srv::RunGesture_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ainex_interfaces__srv__RunGesture_Request
    std::shared_ptr<ainex_interfaces::srv::RunGesture_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ainex_interfaces__srv__RunGesture_Request
    std::shared_ptr<ainex_interfaces::srv::RunGesture_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RunGesture_Request_ & other) const
  {
    if (this->gesture_name != other.gesture_name) {
      return false;
    }
    return true;
  }
  bool operator!=(const RunGesture_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RunGesture_Request_

// alias to use template instance with default allocator
using RunGesture_Request =
  ainex_interfaces::srv::RunGesture_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ainex_interfaces


#ifndef _WIN32
# define DEPRECATED__ainex_interfaces__srv__RunGesture_Response __attribute__((deprecated))
#else
# define DEPRECATED__ainex_interfaces__srv__RunGesture_Response __declspec(deprecated)
#endif

namespace ainex_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RunGesture_Response_
{
  using Type = RunGesture_Response_<ContainerAllocator>;

  explicit RunGesture_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  explicit RunGesture_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    ainex_interfaces::srv::RunGesture_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const ainex_interfaces::srv::RunGesture_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ainex_interfaces::srv::RunGesture_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ainex_interfaces::srv::RunGesture_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ainex_interfaces::srv::RunGesture_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ainex_interfaces::srv::RunGesture_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ainex_interfaces::srv::RunGesture_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ainex_interfaces::srv::RunGesture_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ainex_interfaces::srv::RunGesture_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ainex_interfaces::srv::RunGesture_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ainex_interfaces__srv__RunGesture_Response
    std::shared_ptr<ainex_interfaces::srv::RunGesture_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ainex_interfaces__srv__RunGesture_Response
    std::shared_ptr<ainex_interfaces::srv::RunGesture_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RunGesture_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const RunGesture_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RunGesture_Response_

// alias to use template instance with default allocator
using RunGesture_Response =
  ainex_interfaces::srv::RunGesture_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ainex_interfaces


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ainex_interfaces__srv__RunGesture_Event __attribute__((deprecated))
#else
# define DEPRECATED__ainex_interfaces__srv__RunGesture_Event __declspec(deprecated)
#endif

namespace ainex_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RunGesture_Event_
{
  using Type = RunGesture_Event_<ContainerAllocator>;

  explicit RunGesture_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit RunGesture_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<ainex_interfaces::srv::RunGesture_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ainex_interfaces::srv::RunGesture_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<ainex_interfaces::srv::RunGesture_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ainex_interfaces::srv::RunGesture_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<ainex_interfaces::srv::RunGesture_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ainex_interfaces::srv::RunGesture_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<ainex_interfaces::srv::RunGesture_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ainex_interfaces::srv::RunGesture_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ainex_interfaces::srv::RunGesture_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const ainex_interfaces::srv::RunGesture_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ainex_interfaces::srv::RunGesture_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ainex_interfaces::srv::RunGesture_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ainex_interfaces::srv::RunGesture_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ainex_interfaces::srv::RunGesture_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ainex_interfaces::srv::RunGesture_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ainex_interfaces::srv::RunGesture_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ainex_interfaces::srv::RunGesture_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ainex_interfaces::srv::RunGesture_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ainex_interfaces__srv__RunGesture_Event
    std::shared_ptr<ainex_interfaces::srv::RunGesture_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ainex_interfaces__srv__RunGesture_Event
    std::shared_ptr<ainex_interfaces::srv::RunGesture_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RunGesture_Event_ & other) const
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
  bool operator!=(const RunGesture_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RunGesture_Event_

// alias to use template instance with default allocator
using RunGesture_Event =
  ainex_interfaces::srv::RunGesture_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ainex_interfaces

namespace ainex_interfaces
{

namespace srv
{

struct RunGesture
{
  using Request = ainex_interfaces::srv::RunGesture_Request;
  using Response = ainex_interfaces::srv::RunGesture_Response;
  using Event = ainex_interfaces::srv::RunGesture_Event;
};

}  // namespace srv

}  // namespace ainex_interfaces

#endif  // AINEX_INTERFACES__SRV__DETAIL__RUN_GESTURE__STRUCT_HPP_
