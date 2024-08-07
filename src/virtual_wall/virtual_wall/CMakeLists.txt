cmake_minimum_required(VERSION 3.8)
project(virtual_wall)

set(lib_name ${PROJECT_NAME}_core)


if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(nav2_costmap_2d REQUIRED)
find_package(pluginlib REQUIRED)
find_package(std_msgs REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(tutorial_interfaces REQUIRED)
find_package(Boost REQUIRED COMPONENTS thread system)
include_directories(${Boost_INCLUDE_DIRS})
# find_package(virtual_wall REQUIRED)


# We set a list of dependencies to make it more compact
set(dep_pkgs
    rclcpp
    nav2_costmap_2d
    pluginlib
    std_msgs
    geometry_msgs
    tutorial_interfaces
    # virtual_wall
    )

rosidl_generate_interfaces(${PROJECT_NAME}
  "msg/Wall.msg"
  DEPENDENCIES geometry_msgs)

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

# === Build ===
add_library(${lib_name} SHARED
            src/virtual_wall.cpp)


include_directories(include)
include_directories(${CMAKE_CURRENT_BINARY_DIR})
# include_directories(${CMAKE_INSTALL_PREFIX}/include) # Thêm dòng này để bao gồm đường dẫn đúng

ament_target_dependencies(${lib_name} ${dep_pkgs})

# === Installation ===
install(TARGETS ${lib_name}
        DESTINATION lib)

install(DIRECTORY include/
  DESTINATION include/
)


pluginlib_export_plugin_description_file(nav2_costmap_2d virtual_wall.xml)


ament_package()
