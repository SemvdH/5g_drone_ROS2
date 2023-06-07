cmake_minimum_required(VERSION 3.8)
project(drone_controls)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
    add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)

# uncomment the following section in order to fill in
# further dependencies manually.
# find_package(<dependency> REQUIRED)
find_package(rclcpp REQUIRED)
find_package(px4_msgs REQUIRED)
find_package(drone_services REQUIRED)

add_executable(position_changer src/PositionChanger.cpp)
ament_target_dependencies(position_changer rclcpp px4_msgs drone_services)

target_include_directories(position_changer PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

install(TARGETS position_changer
    DESTINATION lib/${PROJECT_NAME})

if(BUILD_TESTING)
    # find_package(ament_lint_auto REQUIRED)

    # the following line skips the linter which checks for copyrights
    # comment the line when a copyright and license is added to all source files
    # set(ament_cmake_copyright_FOUND TRUE)
    # the following line skips cpplint (only works in a git repo)
    # comment the line when this package is in a git repo and when
    # a copyright and license is added to all source files
    # set(ament_cmake_cpplint_FOUND TRUE)
    # ament_lint_auto_find_test_dependencies()
    find_package(launch_testing_ament_cmake REQUIRED)
    add_launch_test(test/test_failsafe_enabled.py)
endif()

ament_package()
