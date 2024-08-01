cmake_minimum_required(VERSION 3.8)
project(internal_interface)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

find_package(ament_cmake REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(std_msgs REQUIRED)
# find_package(ament_cmake_python REQUIRED)
# find_package(rclpy REQUIRED)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  set(ament_cmake_copyright_FOUND TRUE)
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

rosidl_generate_interfaces(${PROJECT_NAME}
  "msg/GoalState.msg"
  "msg/LocalizedObject.msg"
  "msg/Object.msg"
  "msg/StopSignal.msg"
  "msg/CarState.msg"
  "msg/Node.msg"
  "msg/Path.msg"
  "msg/LocalizedObjects.msg"
  "msg/DetectedLanes.msg"
  "msg/RawBattery.msg"
  "msg/ControlInput.msg"
  "msg/EncodedImage.msg"
  "msg/ProximityStatus.msg"
  "msg/ManueverPart.msg"
  "msg/RawDistanceSensor.msg"
  "msg/WheelEncoders.msg"
  "msg/ManueverDescription.msg"
  "msg/RealControlInput.msg"
  "msg/RawImu.msg"
  "msg/Objects.msg"
  "msg/RawGps.msg"
  "msg/LookAheadPoint.msg"
  "msg/GpsNode.msg"
  "msg/GpsCurve.msg"
  "msg/Semaphore.msg"
  "msg/Intersection.msg"
  "msg/PurePursuitParams.msg"
  DEPENDENCIES std_msgs
)

# install(PROGRAMS
#   DESTINATION lib/${PROJECT_NAME}
# )

ament_package()
