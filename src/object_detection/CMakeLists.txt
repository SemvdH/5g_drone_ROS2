cmake_minimum_required(VERSION 3.5)
project(object_detection)

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
# uncomment the following section in order to fill in
# further dependencies manually.
# find_package(<dependency> REQUIRED)
find_package(rclcpp REQUIRED)
find_package(TerabeeApi REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(object_detection REQUIRED)

rosidl_generate_interfaces(${PROJECT_NAME}
  "msg/LidarReading.msg"
  "msg/MultiflexReading.msg"
 )

add_executable(lidar_reader src/lidar_reader.cpp)
ament_target_dependencies(lidar_reader rclcpp 
	object_detection
)

target_link_libraries(lidar_reader ${TerabeeApi_LIBRARIES})
target_include_directories(lidar_reader PUBLIC ${TerabeeApi_INCLUDE_DIRS})

add_executable(multiflex_reader src/multiflex_reader.cpp)
ament_target_dependencies(multiflex_reader rclcpp 
	object_detection
)

target_link_libraries(multiflex_reader ${TerabeeApi_LIBRARIES})
target_include_directories(multiflex_reader PUBLIC ${TerabeeApi_INCLUDE_DIRS})

install(TARGETS
  lidar_reader
  multiflex_reader
  DESTINATION lib/${PROJECT_NAME}
)

install(
  DIRECTORY launch
  DESTINATION share/${PROJECT_NAME}
)

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
