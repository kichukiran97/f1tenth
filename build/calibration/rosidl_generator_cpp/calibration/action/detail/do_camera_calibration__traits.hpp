// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from calibration:action/DoCameraCalibration.idl
// generated code does not contain a copyright notice

#ifndef CALIBRATION__ACTION__DETAIL__DO_CAMERA_CALIBRATION__TRAITS_HPP_
#define CALIBRATION__ACTION__DETAIL__DO_CAMERA_CALIBRATION__TRAITS_HPP_

#include "calibration/action/detail/do_camera_calibration__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<calibration::action::DoCameraCalibration_Goal>()
{
  return "calibration::action::DoCameraCalibration_Goal";
}

template<>
inline const char * name<calibration::action::DoCameraCalibration_Goal>()
{
  return "calibration/action/DoCameraCalibration_Goal";
}

template<>
struct has_fixed_size<calibration::action::DoCameraCalibration_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<calibration::action::DoCameraCalibration_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<calibration::action::DoCameraCalibration_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<calibration::action::DoCameraCalibration_Result>()
{
  return "calibration::action::DoCameraCalibration_Result";
}

template<>
inline const char * name<calibration::action::DoCameraCalibration_Result>()
{
  return "calibration/action/DoCameraCalibration_Result";
}

template<>
struct has_fixed_size<calibration::action::DoCameraCalibration_Result>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<calibration::action::DoCameraCalibration_Result>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<calibration::action::DoCameraCalibration_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<calibration::action::DoCameraCalibration_Feedback>()
{
  return "calibration::action::DoCameraCalibration_Feedback";
}

template<>
inline const char * name<calibration::action::DoCameraCalibration_Feedback>()
{
  return "calibration/action/DoCameraCalibration_Feedback";
}

template<>
struct has_fixed_size<calibration::action::DoCameraCalibration_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<calibration::action::DoCameraCalibration_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<calibration::action::DoCameraCalibration_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "calibration/action/detail/do_camera_calibration__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<calibration::action::DoCameraCalibration_SendGoal_Request>()
{
  return "calibration::action::DoCameraCalibration_SendGoal_Request";
}

template<>
inline const char * name<calibration::action::DoCameraCalibration_SendGoal_Request>()
{
  return "calibration/action/DoCameraCalibration_SendGoal_Request";
}

template<>
struct has_fixed_size<calibration::action::DoCameraCalibration_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<calibration::action::DoCameraCalibration_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<calibration::action::DoCameraCalibration_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<calibration::action::DoCameraCalibration_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<calibration::action::DoCameraCalibration_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<calibration::action::DoCameraCalibration_SendGoal_Response>()
{
  return "calibration::action::DoCameraCalibration_SendGoal_Response";
}

template<>
inline const char * name<calibration::action::DoCameraCalibration_SendGoal_Response>()
{
  return "calibration/action/DoCameraCalibration_SendGoal_Response";
}

template<>
struct has_fixed_size<calibration::action::DoCameraCalibration_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<calibration::action::DoCameraCalibration_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<calibration::action::DoCameraCalibration_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<calibration::action::DoCameraCalibration_SendGoal>()
{
  return "calibration::action::DoCameraCalibration_SendGoal";
}

template<>
inline const char * name<calibration::action::DoCameraCalibration_SendGoal>()
{
  return "calibration/action/DoCameraCalibration_SendGoal";
}

template<>
struct has_fixed_size<calibration::action::DoCameraCalibration_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<calibration::action::DoCameraCalibration_SendGoal_Request>::value &&
    has_fixed_size<calibration::action::DoCameraCalibration_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<calibration::action::DoCameraCalibration_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<calibration::action::DoCameraCalibration_SendGoal_Request>::value &&
    has_bounded_size<calibration::action::DoCameraCalibration_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<calibration::action::DoCameraCalibration_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<calibration::action::DoCameraCalibration_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<calibration::action::DoCameraCalibration_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<calibration::action::DoCameraCalibration_GetResult_Request>()
{
  return "calibration::action::DoCameraCalibration_GetResult_Request";
}

template<>
inline const char * name<calibration::action::DoCameraCalibration_GetResult_Request>()
{
  return "calibration/action/DoCameraCalibration_GetResult_Request";
}

template<>
struct has_fixed_size<calibration::action::DoCameraCalibration_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<calibration::action::DoCameraCalibration_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<calibration::action::DoCameraCalibration_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "calibration/action/detail/do_camera_calibration__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<calibration::action::DoCameraCalibration_GetResult_Response>()
{
  return "calibration::action::DoCameraCalibration_GetResult_Response";
}

template<>
inline const char * name<calibration::action::DoCameraCalibration_GetResult_Response>()
{
  return "calibration/action/DoCameraCalibration_GetResult_Response";
}

template<>
struct has_fixed_size<calibration::action::DoCameraCalibration_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<calibration::action::DoCameraCalibration_Result>::value> {};

template<>
struct has_bounded_size<calibration::action::DoCameraCalibration_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<calibration::action::DoCameraCalibration_Result>::value> {};

template<>
struct is_message<calibration::action::DoCameraCalibration_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<calibration::action::DoCameraCalibration_GetResult>()
{
  return "calibration::action::DoCameraCalibration_GetResult";
}

template<>
inline const char * name<calibration::action::DoCameraCalibration_GetResult>()
{
  return "calibration/action/DoCameraCalibration_GetResult";
}

template<>
struct has_fixed_size<calibration::action::DoCameraCalibration_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<calibration::action::DoCameraCalibration_GetResult_Request>::value &&
    has_fixed_size<calibration::action::DoCameraCalibration_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<calibration::action::DoCameraCalibration_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<calibration::action::DoCameraCalibration_GetResult_Request>::value &&
    has_bounded_size<calibration::action::DoCameraCalibration_GetResult_Response>::value
  >
{
};

template<>
struct is_service<calibration::action::DoCameraCalibration_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<calibration::action::DoCameraCalibration_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<calibration::action::DoCameraCalibration_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "calibration/action/detail/do_camera_calibration__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<calibration::action::DoCameraCalibration_FeedbackMessage>()
{
  return "calibration::action::DoCameraCalibration_FeedbackMessage";
}

template<>
inline const char * name<calibration::action::DoCameraCalibration_FeedbackMessage>()
{
  return "calibration/action/DoCameraCalibration_FeedbackMessage";
}

template<>
struct has_fixed_size<calibration::action::DoCameraCalibration_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<calibration::action::DoCameraCalibration_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<calibration::action::DoCameraCalibration_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<calibration::action::DoCameraCalibration_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<calibration::action::DoCameraCalibration_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<calibration::action::DoCameraCalibration>
  : std::true_type
{
};

template<>
struct is_action_goal<calibration::action::DoCameraCalibration_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<calibration::action::DoCameraCalibration_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<calibration::action::DoCameraCalibration_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // CALIBRATION__ACTION__DETAIL__DO_CAMERA_CALIBRATION__TRAITS_HPP_
