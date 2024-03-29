cmake_minimum_required(VERSION 3.5)
project(px4_connection)

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
find_package(px4_ros_com REQUIRED)
find_package(px4_msgs REQUIRED)
find_package(drone_services REQUIRED)
find_package(std_srvs REQUIRED)

include_directories(include)
add_executable(heartbeat src/heartbeat.cpp)
ament_target_dependencies(
    heartbeat
    rclcpp
    drone_services
    px4_ros_com
    px4_msgs
    drone_services
)

add_executable(px4_controller src/px4_controller.cpp)
ament_target_dependencies(
    px4_controller
    rclcpp
    px4_ros_com
    px4_msgs
    drone_services
    std_srvs
)

target_include_directories(heartbeat PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_include_directories(px4_controller PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

install(TARGETS heartbeat px4_controller
    DESTINATION lib/${PROJECT_NAME})

install(
    DIRECTORY launch
    DESTINATION share/${PROJECT_NAME}
)

install(FILES
    test/test_failsafe_enabled.py
    DESTINATION lib/${PROJECT_NAME})

if(BUILD_TESTING)
    # find_package(ament_lint_auto REQUIRED)

    # the following line skips the linter which checks for copyrights
    # uncomment the line when a copyright and license is not present in all source files
    # set(ament_cmake_copyright_FOUND TRUE)
    # the following line skips cpplint (only works in a git repo)
    # uncomment the line when this package is not in a git repo
    # set(ament_cmake_cpplint_FOUND TRUE)
    # ament_lint_auto_find_test_dependencies()
    find_package(launch_testing_ament_cmake REQUIRED)
    add_launch_test(test/test_failsafe_enabled.py)
endif()

ament_package()
