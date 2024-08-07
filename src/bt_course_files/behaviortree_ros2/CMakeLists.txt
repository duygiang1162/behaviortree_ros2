cmake_minimum_required(VERSION 3.8)
project(behaviortree_ros2)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

######################################################

set(THIS_PACKAGE_INCLUDE_DEPENDS
    rclcpp
    rclcpp_action
    ament_index_cpp
    behaviortree_cpp_v3)

find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED )
find_package(rclcpp_action REQUIRED )
find_package(behaviortree_cpp_v3 REQUIRED )
find_package(ament_index_cpp REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(geometry_msgs REQUIRED)
# find_package(bt_interfaces REQUIRED)         
find_package(nav2_msgs REQUIRED)
find_package(tf2 REQUIRED)
find_package(tf2_geometry_msgs REQUIRED)


find_package(cv_bridge REQUIRED)
find_package(OpenCV REQUIRED)
find_package(image_transport REQUIRED)



find_package(rosidl_default_generators REQUIRED)

rosidl_generate_interfaces(${PROJECT_NAME}
  "action/Sleep.action"
)


######################################################
# Course

add_executable(test_unit1 test/test_unit1.cpp)
target_include_directories(test_unit1 PRIVATE
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>)
ament_target_dependencies(test_unit1 rclcpp geometry_msgs tf2_geometry_msgs sensor_msgs nav2_msgs tf2_ros sensor_msgs image_transport cv_bridge OpenCV
  ${THIS_PACKAGE_INCLUDE_DEPENDS}
)


# add_executable(test_unit2 test/test_unit2.cpp)
# target_include_directories(test_unit2 PRIVATE
#   $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
#   $<INSTALL_INTERFACE:include>)
# ament_target_dependencies(test_unit2 rclcpp geometry_msgs sensor_msgs nav2_msgs tf2_ros bt_interfaces
#   ${THIS_PACKAGE_INCLUDE_DEPENDS}
# )


add_executable(test_unit3 test/test_unit3.cpp)
target_include_directories(test_unit3 PRIVATE
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>)
ament_target_dependencies(test_unit3 rclcpp geometry_msgs sensor_msgs nav2_msgs
  ${THIS_PACKAGE_INCLUDE_DEPENDS}
)


add_executable(test_unit4 test/test_unit4.cpp)
target_include_directories(test_unit4 PRIVATE
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>)
ament_target_dependencies(test_unit4 rclcpp geometry_msgs sensor_msgs tf2_geometry_msgs nav2_msgs
  ${THIS_PACKAGE_INCLUDE_DEPENDS}
)


add_executable(test_unit5 test/test_unit5.cpp)
target_include_directories(test_unit5 PRIVATE
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>)
ament_target_dependencies(test_unit5 rclcpp geometry_msgs sensor_msgs tf2_geometry_msgs nav2_msgs
  ${THIS_PACKAGE_INCLUDE_DEPENDS}
)



## project
add_executable(solution_test_project test/solution_test_project.cpp)
target_include_directories(solution_test_project PRIVATE
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>)
ament_target_dependencies(solution_test_project rclcpp geometry_msgs tf2_geometry_msgs sensor_msgs nav2_msgs tf2_ros sensor_msgs image_transport cv_bridge OpenCV
  ${THIS_PACKAGE_INCLUDE_DEPENDS}
)

add_executable(re_solution_test_project test/re_solution.cpp)
target_include_directories(re_solution_test_project PRIVATE
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>)
ament_target_dependencies(re_solution_test_project rclcpp geometry_msgs tf2_geometry_msgs sensor_msgs nav2_msgs tf2_ros sensor_msgs image_transport cv_bridge OpenCV
  ${THIS_PACKAGE_INCLUDE_DEPENDS}
)



######################################################
# INSTALL

install(TARGETS
  test_unit1
  # test_unit2
  test_unit3
  test_unit4
  test_unit5
 solution_test_project
 re_solution_test_project


  RUNTIME DESTINATION bin
  ARCHIVE DESTINATION lib
  LIBRARY DESTINATION lib
  )

install(
  DIRECTORY include/
  DESTINATION include
)

######################################################

ament_export_include_directories(include)

ament_package()


