set(_AMENT_PACKAGE_NAME "nav2_core")
set(nav2_core_VERSION "1.2.10")
set(nav2_core_MAINTAINER "Steve Macenski <stevenmacenski@gmail.com>, Carl Delsey <carl.r.delsey@intel.com>")
set(nav2_core_BUILD_DEPENDS "nav2_common" "rclcpp" "rclcpp_lifecycle" "std_msgs" "geometry_msgs" "nav2_costmap_2d" "pluginlib" "nav_msgs" "tf2_ros" "nav2_util" "nav2_behavior_tree")
set(nav2_core_BUILDTOOL_DEPENDS "ament_cmake")
set(nav2_core_BUILD_EXPORT_DEPENDS "rclcpp" "rclcpp_lifecycle" "std_msgs" "geometry_msgs" "nav2_costmap_2d" "pluginlib" "nav_msgs" "tf2_ros" "nav2_util" "nav2_behavior_tree")
set(nav2_core_BUILDTOOL_EXPORT_DEPENDS )
set(nav2_core_EXEC_DEPENDS "rclcpp" "rclcpp_lifecycle" "std_msgs" "geometry_msgs" "nav2_costmap_2d" "pluginlib" "nav_msgs" "tf2_ros" "nav2_util" "nav2_behavior_tree")
set(nav2_core_TEST_DEPENDS "ament_lint_common" "ament_lint_auto" "ament_cmake_gtest" "ament_cmake_pytest" "launch" "launch_testing")
set(nav2_core_GROUP_DEPENDS )
set(nav2_core_MEMBER_OF_GROUPS )
set(nav2_core_DEPRECATED "")
set(nav2_core_EXPORT_TAGS)
list(APPEND nav2_core_EXPORT_TAGS "<build_type>ament_cmake</build_type>")
