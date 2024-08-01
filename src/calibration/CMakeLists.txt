cmake_minimum_required(VERSION 3.8)
project(calibration)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

find_package(ament_cmake REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(std_msgs REQUIRED)
find_package(ament_cmake_python REQUIRED)
find_package(rclpy REQUIRED)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  set(ament_cmake_copyright_FOUND TRUE)
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_python_install_package(${PROJECT_NAME}_pkg)

rosidl_generate_interfaces(${PROJECT_NAME}
  "action/TakeImage.action"
  "action/DoCameraCalibration.action"
)

install(PROGRAMS
  scripts/camera_calibration.py
  scripts/imu_calibration.py
  DESTINATION lib/${PROJECT_NAME}
)

ament_package()
