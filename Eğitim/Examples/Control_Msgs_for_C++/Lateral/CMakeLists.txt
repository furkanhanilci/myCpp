cmake_minimum_required(VERSION 3.8)
project(AW_Ros2_cpp)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
# uncomment the following section in order to fill in
# further dependencies manually.
# find_package(<dependency> REQUIRED)

find_package(rclcpp REQUIRED) # Ekleme 
find_package(turtlesim REQUIRED) # Ekleme
find_package(autoware_auto_control_msgs REQUIRED) # Ekleme

set(dependencies "turtlesim" "rclcpp" "autoware_auto_control_msgs") # Ekleme 
add_executable(my_publisher src/DenemeSub.cpp) # Ekleme
ament_target_dependencies(my_publisher ${dependencies}) # Ekleme
add_executable(AW_publisher src/AW_Ros2Can.cpp) # Ekleme
ament_target_dependencies(AW_publisher ${dependencies}) # Ekleme
add_executable(AW_Long src/AW_Longitudinal.cpp) # Ekleme
ament_target_dependencies(AW_Long ${dependencies}) # Ekleme
add_executable(AW_Lat src/AW_Lateral.cpp) # Ekleme
ament_target_dependencies(AW_Lat ${dependencies}) # Ekleme


# Ekleme: 
install(TARGETS
  my_publisher
  AW_publisher
  AW_Long
  AW_Lat
  DESTINATION lib/${PROJECT_NAME})




if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # comment the line when a copyright and license is added to all source files
  set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # comment the line when this package is in a git repo and when
  # a copyright and license is added to all source files
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
