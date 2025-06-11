// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ainex_interfaces:srv/SetMotionParams.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ainex_interfaces/srv/set_motion_params.hpp"


#ifndef AINEX_INTERFACES__SRV__DETAIL__SET_MOTION_PARAMS__TRAITS_HPP_
#define AINEX_INTERFACES__SRV__DETAIL__SET_MOTION_PARAMS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ainex_interfaces/srv/detail/set_motion_params__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ainex_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetMotionParams_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: speed
  {
    out << "speed: ";
    rosidl_generator_traits::value_to_yaml(msg.speed, out);
    out << ", ";
  }

  // member: acceleration
  {
    out << "acceleration: ";
    rosidl_generator_traits::value_to_yaml(msg.acceleration, out);
    out << ", ";
  }

  // member: step_degree
  {
    out << "step_degree: ";
    rosidl_generator_traits::value_to_yaml(msg.step_degree, out);
    out << ", ";
  }

  // member: torque
  {
    out << "torque: ";
    rosidl_generator_traits::value_to_yaml(msg.torque, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetMotionParams_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed: ";
    rosidl_generator_traits::value_to_yaml(msg.speed, out);
    out << "\n";
  }

  // member: acceleration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acceleration: ";
    rosidl_generator_traits::value_to_yaml(msg.acceleration, out);
    out << "\n";
  }

  // member: step_degree
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "step_degree: ";
    rosidl_generator_traits::value_to_yaml(msg.step_degree, out);
    out << "\n";
  }

  // member: torque
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "torque: ";
    rosidl_generator_traits::value_to_yaml(msg.torque, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetMotionParams_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace ainex_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use ainex_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ainex_interfaces::srv::SetMotionParams_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  ainex_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ainex_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const ainex_interfaces::srv::SetMotionParams_Request & msg)
{
  return ainex_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ainex_interfaces::srv::SetMotionParams_Request>()
{
  return "ainex_interfaces::srv::SetMotionParams_Request";
}

template<>
inline const char * name<ainex_interfaces::srv::SetMotionParams_Request>()
{
  return "ainex_interfaces/srv/SetMotionParams_Request";
}

template<>
struct has_fixed_size<ainex_interfaces::srv::SetMotionParams_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ainex_interfaces::srv::SetMotionParams_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ainex_interfaces::srv::SetMotionParams_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace ainex_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetMotionParams_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetMotionParams_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetMotionParams_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace ainex_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use ainex_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ainex_interfaces::srv::SetMotionParams_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  ainex_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ainex_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const ainex_interfaces::srv::SetMotionParams_Response & msg)
{
  return ainex_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ainex_interfaces::srv::SetMotionParams_Response>()
{
  return "ainex_interfaces::srv::SetMotionParams_Response";
}

template<>
inline const char * name<ainex_interfaces::srv::SetMotionParams_Response>()
{
  return "ainex_interfaces/srv/SetMotionParams_Response";
}

template<>
struct has_fixed_size<ainex_interfaces::srv::SetMotionParams_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ainex_interfaces::srv::SetMotionParams_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ainex_interfaces::srv::SetMotionParams_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace ainex_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetMotionParams_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetMotionParams_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetMotionParams_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace ainex_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use ainex_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ainex_interfaces::srv::SetMotionParams_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  ainex_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ainex_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const ainex_interfaces::srv::SetMotionParams_Event & msg)
{
  return ainex_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ainex_interfaces::srv::SetMotionParams_Event>()
{
  return "ainex_interfaces::srv::SetMotionParams_Event";
}

template<>
inline const char * name<ainex_interfaces::srv::SetMotionParams_Event>()
{
  return "ainex_interfaces/srv/SetMotionParams_Event";
}

template<>
struct has_fixed_size<ainex_interfaces::srv::SetMotionParams_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ainex_interfaces::srv::SetMotionParams_Event>
  : std::integral_constant<bool, has_bounded_size<ainex_interfaces::srv::SetMotionParams_Request>::value && has_bounded_size<ainex_interfaces::srv::SetMotionParams_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<ainex_interfaces::srv::SetMotionParams_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ainex_interfaces::srv::SetMotionParams>()
{
  return "ainex_interfaces::srv::SetMotionParams";
}

template<>
inline const char * name<ainex_interfaces::srv::SetMotionParams>()
{
  return "ainex_interfaces/srv/SetMotionParams";
}

template<>
struct has_fixed_size<ainex_interfaces::srv::SetMotionParams>
  : std::integral_constant<
    bool,
    has_fixed_size<ainex_interfaces::srv::SetMotionParams_Request>::value &&
    has_fixed_size<ainex_interfaces::srv::SetMotionParams_Response>::value
  >
{
};

template<>
struct has_bounded_size<ainex_interfaces::srv::SetMotionParams>
  : std::integral_constant<
    bool,
    has_bounded_size<ainex_interfaces::srv::SetMotionParams_Request>::value &&
    has_bounded_size<ainex_interfaces::srv::SetMotionParams_Response>::value
  >
{
};

template<>
struct is_service<ainex_interfaces::srv::SetMotionParams>
  : std::true_type
{
};

template<>
struct is_service_request<ainex_interfaces::srv::SetMotionParams_Request>
  : std::true_type
{
};

template<>
struct is_service_response<ainex_interfaces::srv::SetMotionParams_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // AINEX_INTERFACES__SRV__DETAIL__SET_MOTION_PARAMS__TRAITS_HPP_
