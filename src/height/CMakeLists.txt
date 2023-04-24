cmake_minimum_required(VERSION 3.5)
project(height)

# Default to C99
if(NOT CMAKE_C_STANDARD)
  set(CMAKE_C_STANDARD 99)
endif()

# Default to C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(TerabeeApi REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(height REQUIRED)

rosidl_generate_interfaces(${PROJECT_NAME}
  "msg/HeightData.msg"
 )

add_executable(height_reader src/height_reader.cpp)
target_include_directories(height_reader PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>)

  target_link_libraries(height_reader ${TerabeeApi_LIBRARIES})
  target_include_directories(height_reader PUBLIC ${TerabeeApi_INCLUDE_DIRS})

ament_target_dependencies(
  height_reader
  rclcpp
  TerabeeApi
  height
)

install(TARGETS height_reader
  DESTINATION lib/${PROJECT_NAME})

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # uncomment the line when a copyright and license is not present in all source files
  #set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # uncomment the line when this package is not in a git repo
  #set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
