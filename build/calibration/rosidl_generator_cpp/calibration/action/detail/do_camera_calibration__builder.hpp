// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from calibration:action/DoCameraCalibration.idl
// generated code does not contain a copyright notice

#ifndef CALIBRATION__ACTION__DETAIL__DO_CAMERA_CALIBRATION__BUILDER_HPP_
#define CALIBRATION__ACTION__DETAIL__DO_CAMERA_CALIBRATION__BUILDER_HPP_

#include "calibration/action/detail/do_camera_calibration__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace calibration
{

namespace action
{


}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::calibration::action::DoCameraCalibration_Goal>()
{
  return ::calibration::action::DoCameraCalibration_Goal(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace calibration


namespace calibration
{

namespace action
{

namespace builder
{

class Init_DoCameraCalibration_Result_success
{
public:
  Init_DoCameraCalibration_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::calibration::action::DoCameraCalibration_Result success(::calibration::action::DoCameraCalibration_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::calibration::action::DoCameraCalibration_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::calibration::action::DoCameraCalibration_Result>()
{
  return calibration::action::builder::Init_DoCameraCalibration_Result_success();
}

}  // namespace calibration


namespace calibration
{

namespace action
{


}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::calibration::action::DoCameraCalibration_Feedback>()
{
  return ::calibration::action::DoCameraCalibration_Feedback(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace calibration


namespace calibration
{

namespace action
{

namespace builder
{

class Init_DoCameraCalibration_SendGoal_Request_goal
{
public:
  explicit Init_DoCameraCalibration_SendGoal_Request_goal(::calibration::action::DoCameraCalibration_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::calibration::action::DoCameraCalibration_SendGoal_Request goal(::calibration::action::DoCameraCalibration_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::calibration::action::DoCameraCalibration_SendGoal_Request msg_;
};

class Init_DoCameraCalibration_SendGoal_Request_goal_id
{
public:
  Init_DoCameraCalibration_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DoCameraCalibration_SendGoal_Request_goal goal_id(::calibration::action::DoCameraCalibration_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_DoCameraCalibration_SendGoal_Request_goal(msg_);
  }

private:
  ::calibration::action::DoCameraCalibration_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::calibration::action::DoCameraCalibration_SendGoal_Request>()
{
  return calibration::action::builder::Init_DoCameraCalibration_SendGoal_Request_goal_id();
}

}  // namespace calibration


namespace calibration
{

namespace action
{

namespace builder
{

class Init_DoCameraCalibration_SendGoal_Response_stamp
{
public:
  explicit Init_DoCameraCalibration_SendGoal_Response_stamp(::calibration::action::DoCameraCalibration_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::calibration::action::DoCameraCalibration_SendGoal_Response stamp(::calibration::action::DoCameraCalibration_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::calibration::action::DoCameraCalibration_SendGoal_Response msg_;
};

class Init_DoCameraCalibration_SendGoal_Response_accepted
{
public:
  Init_DoCameraCalibration_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DoCameraCalibration_SendGoal_Response_stamp accepted(::calibration::action::DoCameraCalibration_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_DoCameraCalibration_SendGoal_Response_stamp(msg_);
  }

private:
  ::calibration::action::DoCameraCalibration_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::calibration::action::DoCameraCalibration_SendGoal_Response>()
{
  return calibration::action::builder::Init_DoCameraCalibration_SendGoal_Response_accepted();
}

}  // namespace calibration


namespace calibration
{

namespace action
{

namespace builder
{

class Init_DoCameraCalibration_GetResult_Request_goal_id
{
public:
  Init_DoCameraCalibration_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::calibration::action::DoCameraCalibration_GetResult_Request goal_id(::calibration::action::DoCameraCalibration_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::calibration::action::DoCameraCalibration_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::calibration::action::DoCameraCalibration_GetResult_Request>()
{
  return calibration::action::builder::Init_DoCameraCalibration_GetResult_Request_goal_id();
}

}  // namespace calibration


namespace calibration
{

namespace action
{

namespace builder
{

class Init_DoCameraCalibration_GetResult_Response_result
{
public:
  explicit Init_DoCameraCalibration_GetResult_Response_result(::calibration::action::DoCameraCalibration_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::calibration::action::DoCameraCalibration_GetResult_Response result(::calibration::action::DoCameraCalibration_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::calibration::action::DoCameraCalibration_GetResult_Response msg_;
};

class Init_DoCameraCalibration_GetResult_Response_status
{
public:
  Init_DoCameraCalibration_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DoCameraCalibration_GetResult_Response_result status(::calibration::action::DoCameraCalibration_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_DoCameraCalibration_GetResult_Response_result(msg_);
  }

private:
  ::calibration::action::DoCameraCalibration_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::calibration::action::DoCameraCalibration_GetResult_Response>()
{
  return calibration::action::builder::Init_DoCameraCalibration_GetResult_Response_status();
}

}  // namespace calibration


namespace calibration
{

namespace action
{

namespace builder
{

class Init_DoCameraCalibration_FeedbackMessage_feedback
{
public:
  explicit Init_DoCameraCalibration_FeedbackMessage_feedback(::calibration::action::DoCameraCalibration_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::calibration::action::DoCameraCalibration_FeedbackMessage feedback(::calibration::action::DoCameraCalibration_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::calibration::action::DoCameraCalibration_FeedbackMessage msg_;
};

class Init_DoCameraCalibration_FeedbackMessage_goal_id
{
public:
  Init_DoCameraCalibration_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DoCameraCalibration_FeedbackMessage_feedback goal_id(::calibration::action::DoCameraCalibration_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_DoCameraCalibration_FeedbackMessage_feedback(msg_);
  }

private:
  ::calibration::action::DoCameraCalibration_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::calibration::action::DoCameraCalibration_FeedbackMessage>()
{
  return calibration::action::builder::Init_DoCameraCalibration_FeedbackMessage_goal_id();
}

}  // namespace calibration

#endif  // CALIBRATION__ACTION__DETAIL__DO_CAMERA_CALIBRATION__BUILDER_HPP_