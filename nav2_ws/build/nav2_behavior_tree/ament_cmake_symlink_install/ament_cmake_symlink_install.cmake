# generated from
# ament_cmake_core/cmake/symlink_install/ament_cmake_symlink_install.cmake.in

# create empty symlink install manifest before starting install step
file(WRITE "${CMAKE_CURRENT_BINARY_DIR}/symlink_install_manifest.txt")

#
# Reimplement CMake install(DIRECTORY) command to use symlinks instead of
# copying resources.
#
# :param cmake_current_source_dir: The CMAKE_CURRENT_SOURCE_DIR when install
#   was invoked
# :type cmake_current_source_dir: string
# :param ARGN: the same arguments as the CMake install command.
# :type ARGN: various
#
function(ament_cmake_symlink_install_directory cmake_current_source_dir)
  cmake_parse_arguments(ARG "OPTIONAL" "DESTINATION" "DIRECTORY;PATTERN;PATTERN_EXCLUDE" ${ARGN})
  if(ARG_UNPARSED_ARGUMENTS)
    message(FATAL_ERROR "ament_cmake_symlink_install_directory() called with "
      "unused/unsupported arguments: ${ARG_UNPARSED_ARGUMENTS}")
  endif()

  # make destination absolute path and ensure that it exists
  if(NOT IS_ABSOLUTE "${ARG_DESTINATION}")
    set(ARG_DESTINATION "/home/matthew/nav2_ws/install/nav2_behavior_tree/${ARG_DESTINATION}")
  endif()
  if(NOT EXISTS "${ARG_DESTINATION}")
    file(MAKE_DIRECTORY "${ARG_DESTINATION}")
  endif()

  # default pattern to include
  if(NOT ARG_PATTERN)
    set(ARG_PATTERN "*")
  endif()

  # iterate over directories
  foreach(dir ${ARG_DIRECTORY})
    # make dir an absolute path
    if(NOT IS_ABSOLUTE "${dir}")
      set(dir "${cmake_current_source_dir}/${dir}")
    endif()

    if(EXISTS "${dir}")
      # if directory has no trailing slash
      # append folder name to destination
      set(destination "${ARG_DESTINATION}")
      string(LENGTH "${dir}" length)
      math(EXPR offset "${length} - 1")
      string(SUBSTRING "${dir}" ${offset} 1 dir_last_char)
      if(NOT dir_last_char STREQUAL "/")
        get_filename_component(destination_name "${dir}" NAME)
        set(destination "${destination}/${destination_name}")
      else()
        # remove trailing slash
        string(SUBSTRING "${dir}" 0 ${offset} dir)
      endif()

      # glob recursive files
      set(relative_files "")
      foreach(pattern ${ARG_PATTERN})
        file(
          GLOB_RECURSE
          include_files
          RELATIVE "${dir}"
          "${dir}/${pattern}"
        )
        if(NOT include_files STREQUAL "")
          list(APPEND relative_files ${include_files})
        endif()
      endforeach()
      foreach(pattern ${ARG_PATTERN_EXCLUDE})
        file(
          GLOB_RECURSE
          exclude_files
          RELATIVE "${dir}"
          "${dir}/${pattern}"
        )
        if(NOT exclude_files STREQUAL "")
          list(REMOVE_ITEM relative_files ${exclude_files})
        endif()
      endforeach()
      list(SORT relative_files)

      foreach(relative_file ${relative_files})
        set(absolute_file "${dir}/${relative_file}")
        # determine link name for file including destination path
        set(symlink "${destination}/${relative_file}")

        # ensure that destination exists
        get_filename_component(symlink_dir "${symlink}" PATH)
        if(NOT EXISTS "${symlink_dir}")
          file(MAKE_DIRECTORY "${symlink_dir}")
        endif()

        _ament_cmake_symlink_install_create_symlink("${absolute_file}" "${symlink}")
      endforeach()
    else()
      if(NOT ARG_OPTIONAL)
        message(FATAL_ERROR
          "ament_cmake_symlink_install_directory() can't find '${dir}'")
      endif()
    endif()
  endforeach()
endfunction()

#
# Reimplement CMake install(FILES) command to use symlinks instead of copying
# resources.
#
# :param cmake_current_source_dir: The CMAKE_CURRENT_SOURCE_DIR when install
#   was invoked
# :type cmake_current_source_dir: string
# :param ARGN: the same arguments as the CMake install command.
# :type ARGN: various
#
function(ament_cmake_symlink_install_files cmake_current_source_dir)
  cmake_parse_arguments(ARG "OPTIONAL" "DESTINATION;RENAME" "FILES" ${ARGN})
  if(ARG_UNPARSED_ARGUMENTS)
    message(FATAL_ERROR "ament_cmake_symlink_install_files() called with "
      "unused/unsupported arguments: ${ARG_UNPARSED_ARGUMENTS}")
  endif()

  # make destination an absolute path and ensure that it exists
  if(NOT IS_ABSOLUTE "${ARG_DESTINATION}")
    set(ARG_DESTINATION "/home/matthew/nav2_ws/install/nav2_behavior_tree/${ARG_DESTINATION}")
  endif()
  if(NOT EXISTS "${ARG_DESTINATION}")
    file(MAKE_DIRECTORY "${ARG_DESTINATION}")
  endif()

  if(ARG_RENAME)
    list(LENGTH ARG_FILES file_count)
    if(NOT file_count EQUAL 1)
    message(FATAL_ERROR "ament_cmake_symlink_install_files() called with "
      "RENAME argument but not with a single file")
    endif()
  endif()

  # iterate over files
  foreach(file ${ARG_FILES})
    # make file an absolute path
    if(NOT IS_ABSOLUTE "${file}")
      set(file "${cmake_current_source_dir}/${file}")
    endif()

    if(EXISTS "${file}")
      # determine link name for file including destination path
      get_filename_component(filename "${file}" NAME)
      if(NOT ARG_RENAME)
        set(symlink "${ARG_DESTINATION}/${filename}")
      else()
        set(symlink "${ARG_DESTINATION}/${ARG_RENAME}")
      endif()
      _ament_cmake_symlink_install_create_symlink("${file}" "${symlink}")
    else()
      if(NOT ARG_OPTIONAL)
        message(FATAL_ERROR
          "ament_cmake_symlink_install_files() can't find '${file}'")
      endif()
    endif()
  endforeach()
endfunction()

#
# Reimplement CMake install(PROGRAMS) command to use symlinks instead of copying
# resources.
#
# :param cmake_current_source_dir: The CMAKE_CURRENT_SOURCE_DIR when install
#   was invoked
# :type cmake_current_source_dir: string
# :param ARGN: the same arguments as the CMake install command.
# :type ARGN: various
#
function(ament_cmake_symlink_install_programs cmake_current_source_dir)
  cmake_parse_arguments(ARG "OPTIONAL" "DESTINATION" "PROGRAMS" ${ARGN})
  if(ARG_UNPARSED_ARGUMENTS)
    message(FATAL_ERROR "ament_cmake_symlink_install_programs() called with "
      "unused/unsupported arguments: ${ARG_UNPARSED_ARGUMENTS}")
  endif()

  # make destination an absolute path and ensure that it exists
  if(NOT IS_ABSOLUTE "${ARG_DESTINATION}")
    set(ARG_DESTINATION "/home/matthew/nav2_ws/install/nav2_behavior_tree/${ARG_DESTINATION}")
  endif()
  if(NOT EXISTS "${ARG_DESTINATION}")
    file(MAKE_DIRECTORY "${ARG_DESTINATION}")
  endif()

  # iterate over programs
  foreach(file ${ARG_PROGRAMS})
    # make file an absolute path
    if(NOT IS_ABSOLUTE "${file}")
      set(file "${cmake_current_source_dir}/${file}")
    endif()

    if(EXISTS "${file}")
      # determine link name for file including destination path
      get_filename_component(filename "${file}" NAME)
      set(symlink "${ARG_DESTINATION}/${filename}")
      _ament_cmake_symlink_install_create_symlink("${file}" "${symlink}")
    else()
      if(NOT ARG_OPTIONAL)
        message(FATAL_ERROR
          "ament_cmake_symlink_install_programs() can't find '${file}'")
      endif()
    endif()
  endforeach()
endfunction()

#
# Reimplement CMake install(TARGETS) command to use symlinks instead of copying
# resources.
#
# :param TARGET_FILES: the absolute files, replacing the name of targets passed
#   in as TARGETS
# :type TARGET_FILES: list of files
# :param ARGN: the same arguments as the CMake install command except that
#   keywords identifying the kind of type and the DESTINATION keyword must be
#   joined with an underscore, e.g. ARCHIVE_DESTINATION.
# :type ARGN: various
#
function(ament_cmake_symlink_install_targets)
  cmake_parse_arguments(ARG "OPTIONAL" "ARCHIVE_DESTINATION;DESTINATION;LIBRARY_DESTINATION;RUNTIME_DESTINATION"
    "TARGETS;TARGET_FILES" ${ARGN})
  if(ARG_UNPARSED_ARGUMENTS)
    message(FATAL_ERROR "ament_cmake_symlink_install_targets() called with "
      "unused/unsupported arguments: ${ARG_UNPARSED_ARGUMENTS}")
  endif()

  # iterate over target files
  foreach(file ${ARG_TARGET_FILES})
    if(NOT IS_ABSOLUTE "${file}")
      message(FATAL_ERROR "ament_cmake_symlink_install_targets() target file "
        "'${file}' must be an absolute path")
    endif()

    # determine destination of file based on extension
    set(destination "")
    get_filename_component(fileext "${file}" EXT)
    if(fileext STREQUAL ".a" OR fileext STREQUAL ".lib")
      set(destination "${ARG_ARCHIVE_DESTINATION}")
    elseif(fileext STREQUAL ".dylib" OR fileext MATCHES "\\.so(\\.[0-9]+)?(\\.[0-9]+)?(\\.[0-9]+)?$")
      set(destination "${ARG_LIBRARY_DESTINATION}")
    elseif(fileext STREQUAL "" OR fileext STREQUAL ".dll" OR fileext STREQUAL ".exe")
      set(destination "${ARG_RUNTIME_DESTINATION}")
    endif()
    if(destination STREQUAL "")
      set(destination "${ARG_DESTINATION}")
    endif()

    # make destination an absolute path and ensure that it exists
    if(NOT IS_ABSOLUTE "${destination}")
      set(destination "/home/matthew/nav2_ws/install/nav2_behavior_tree/${destination}")
    endif()
    if(NOT EXISTS "${destination}")
      file(MAKE_DIRECTORY "${destination}")
    endif()

    if(EXISTS "${file}")
      # determine link name for file including destination path
      get_filename_component(filename "${file}" NAME)
      set(symlink "${destination}/${filename}")
      _ament_cmake_symlink_install_create_symlink("${file}" "${symlink}")
    else()
      if(NOT ARG_OPTIONAL)
        message(FATAL_ERROR
          "ament_cmake_symlink_install_targets() can't find '${file}'")
      endif()
    endif()
  endforeach()
endfunction()

function(_ament_cmake_symlink_install_create_symlink absolute_file symlink)
  # register symlink for being removed during install step
  file(APPEND "${CMAKE_CURRENT_BINARY_DIR}/symlink_install_manifest.txt"
    "${symlink}\n")

  # avoid any work if correct symlink is already in place
  if(EXISTS "${symlink}" AND IS_SYMLINK "${symlink}")
    get_filename_component(destination "${symlink}" REALPATH)
    get_filename_component(real_absolute_file "${absolute_file}" REALPATH)
    if(destination STREQUAL real_absolute_file)
      message(STATUS "Up-to-date symlink: ${symlink}")
      return()
    endif()
  endif()

  message(STATUS "Symlinking: ${symlink}")
  if(EXISTS "${symlink}" OR IS_SYMLINK "${symlink}")
    file(REMOVE "${symlink}")
  endif()

  execute_process(
    COMMAND "/usr/bin/cmake" "-E" "create_symlink"
      "${absolute_file}"
      "${symlink}"
  )
  # the CMake command does not provide a return code so check manually
  if(NOT EXISTS "${symlink}" OR NOT IS_SYMLINK "${symlink}")
    get_filename_component(destination "${symlink}" REALPATH)
    message(FATAL_ERROR
      "Could not create symlink '${symlink}' pointing to '${absolute_file}'")
  endif()
endfunction()

# end of template

message(STATUS "Execute custom install script")

# begin of custom install code

# install("TARGETS" "nav2_behavior_tree" "nav2_compute_path_to_pose_action_bt_node" "nav2_compute_path_through_poses_action_bt_node" "nav2_controller_cancel_bt_node" "nav2_wait_cancel_bt_node" "nav2_spin_cancel_bt_node" "nav2_back_up_cancel_bt_node" "nav2_assisted_teleop_cancel_bt_node" "nav2_drive_on_heading_cancel_bt_node" "nav2_smooth_path_action_bt_node" "nav2_follow_path_action_bt_node" "nav2_back_up_action_bt_node" "nav2_drive_on_heading_bt_node" "nav2_spin_action_bt_node" "nav2_wait_action_bt_node" "nav2_assisted_teleop_action_bt_node" "nav2_clear_costmap_service_bt_node" "nav2_is_stuck_condition_bt_node" "nav2_transform_available_condition_bt_node" "nav2_goal_reached_condition_bt_node" "nav2_globally_updated_goal_condition_bt_node" "nav2_goal_updated_condition_bt_node" "nav2_is_path_valid_condition_bt_node" "nav2_time_expired_condition_bt_node" "nav2_path_expiring_timer_condition" "nav2_distance_traveled_condition_bt_node" "nav2_initial_pose_received_condition_bt_node" "nav2_is_battery_charging_condition_bt_node" "nav2_is_battery_low_condition_bt_node" "nav2_are_error_codes_active_condition_bt_node" "nav2_would_a_controller_recovery_help_condition_bt_node" "nav2_would_a_planner_recovery_help_condition_bt_node" "nav2_would_a_smoother_recovery_help_condition_bt_node" "nav2_reinitialize_global_localization_service_bt_node" "nav2_rate_controller_bt_node" "nav2_distance_controller_bt_node" "nav2_speed_controller_bt_node" "nav2_truncate_path_action_bt_node" "nav2_truncate_path_local_action_bt_node" "nav2_goal_updater_node_bt_node" "nav2_path_longer_on_approach_bt_node" "nav2_recovery_node_bt_node" "nav2_navigate_to_pose_action_bt_node" "nav2_navigate_through_poses_action_bt_node" "nav2_remove_passed_goals_action_bt_node" "nav2_get_pose_from_path_action_bt_node" "nav2_pipeline_sequence_bt_node" "nav2_round_robin_node_bt_node" "nav2_single_trigger_bt_node" "nav2_planner_selector_bt_node" "nav2_controller_selector_bt_node" "nav2_smoother_selector_bt_node" "nav2_goal_checker_selector_bt_node" "nav2_progress_checker_selector_bt_node" "nav2_goal_updated_controller_bt_node" "ARCHIVE_DESTINATION" "lib" "LIBRARY_DESTINATION" "lib" "RUNTIME_DESTINATION" "bin")
include("/home/matthew/nav2_ws/build/nav2_behavior_tree/ament_cmake_symlink_install_targets_0_${CMAKE_INSTALL_CONFIG_NAME}.cmake")

# install(DIRECTORY "include/" "DESTINATION" "include/")
ament_cmake_symlink_install_directory("/home/matthew/nav2_ws/src/navigation2/nav2_behavior_tree" DIRECTORY "include/" "DESTINATION" "include/")

# install(DIRECTORY "test/utils/" "DESTINATION" "include/nav2_behavior_tree/utils/")
ament_cmake_symlink_install_directory("/home/matthew/nav2_ws/src/navigation2/nav2_behavior_tree" DIRECTORY "test/utils/" "DESTINATION" "include/nav2_behavior_tree/utils/")

# install(FILES "nav2_tree_nodes.xml" "DESTINATION" "share/nav2_behavior_tree")
ament_cmake_symlink_install_files("/home/matthew/nav2_ws/src/navigation2/nav2_behavior_tree" FILES "nav2_tree_nodes.xml" "DESTINATION" "share/nav2_behavior_tree")

# install(FILES "/opt/ros/iron/lib/python3.10/site-packages/ament_package/template/environment_hook/library_path.sh" "DESTINATION" "share/nav2_behavior_tree/environment")
ament_cmake_symlink_install_files("/home/matthew/nav2_ws/src/navigation2/nav2_behavior_tree" FILES "/opt/ros/iron/lib/python3.10/site-packages/ament_package/template/environment_hook/library_path.sh" "DESTINATION" "share/nav2_behavior_tree/environment")

# install(FILES "/home/matthew/nav2_ws/build/nav2_behavior_tree/ament_cmake_environment_hooks/library_path.dsv" "DESTINATION" "share/nav2_behavior_tree/environment")
ament_cmake_symlink_install_files("/home/matthew/nav2_ws/src/navigation2/nav2_behavior_tree" FILES "/home/matthew/nav2_ws/build/nav2_behavior_tree/ament_cmake_environment_hooks/library_path.dsv" "DESTINATION" "share/nav2_behavior_tree/environment")

# install(FILES "/home/matthew/nav2_ws/build/nav2_behavior_tree/ament_cmake_index/share/ament_index/resource_index/package_run_dependencies/nav2_behavior_tree" "DESTINATION" "share/ament_index/resource_index/package_run_dependencies")
ament_cmake_symlink_install_files("/home/matthew/nav2_ws/src/navigation2/nav2_behavior_tree" FILES "/home/matthew/nav2_ws/build/nav2_behavior_tree/ament_cmake_index/share/ament_index/resource_index/package_run_dependencies/nav2_behavior_tree" "DESTINATION" "share/ament_index/resource_index/package_run_dependencies")

# install(FILES "/home/matthew/nav2_ws/build/nav2_behavior_tree/ament_cmake_index/share/ament_index/resource_index/parent_prefix_path/nav2_behavior_tree" "DESTINATION" "share/ament_index/resource_index/parent_prefix_path")
ament_cmake_symlink_install_files("/home/matthew/nav2_ws/src/navigation2/nav2_behavior_tree" FILES "/home/matthew/nav2_ws/build/nav2_behavior_tree/ament_cmake_index/share/ament_index/resource_index/parent_prefix_path/nav2_behavior_tree" "DESTINATION" "share/ament_index/resource_index/parent_prefix_path")

# install(FILES "/opt/ros/iron/share/ament_cmake_core/cmake/environment_hooks/environment/ament_prefix_path.sh" "DESTINATION" "share/nav2_behavior_tree/environment")
ament_cmake_symlink_install_files("/home/matthew/nav2_ws/src/navigation2/nav2_behavior_tree" FILES "/opt/ros/iron/share/ament_cmake_core/cmake/environment_hooks/environment/ament_prefix_path.sh" "DESTINATION" "share/nav2_behavior_tree/environment")

# install(FILES "/home/matthew/nav2_ws/build/nav2_behavior_tree/ament_cmake_environment_hooks/ament_prefix_path.dsv" "DESTINATION" "share/nav2_behavior_tree/environment")
ament_cmake_symlink_install_files("/home/matthew/nav2_ws/src/navigation2/nav2_behavior_tree" FILES "/home/matthew/nav2_ws/build/nav2_behavior_tree/ament_cmake_environment_hooks/ament_prefix_path.dsv" "DESTINATION" "share/nav2_behavior_tree/environment")

# install(FILES "/opt/ros/iron/share/ament_cmake_core/cmake/environment_hooks/environment/path.sh" "DESTINATION" "share/nav2_behavior_tree/environment")
ament_cmake_symlink_install_files("/home/matthew/nav2_ws/src/navigation2/nav2_behavior_tree" FILES "/opt/ros/iron/share/ament_cmake_core/cmake/environment_hooks/environment/path.sh" "DESTINATION" "share/nav2_behavior_tree/environment")

# install(FILES "/home/matthew/nav2_ws/build/nav2_behavior_tree/ament_cmake_environment_hooks/path.dsv" "DESTINATION" "share/nav2_behavior_tree/environment")
ament_cmake_symlink_install_files("/home/matthew/nav2_ws/src/navigation2/nav2_behavior_tree" FILES "/home/matthew/nav2_ws/build/nav2_behavior_tree/ament_cmake_environment_hooks/path.dsv" "DESTINATION" "share/nav2_behavior_tree/environment")

# install(FILES "/home/matthew/nav2_ws/build/nav2_behavior_tree/ament_cmake_environment_hooks/local_setup.bash" "DESTINATION" "share/nav2_behavior_tree")
ament_cmake_symlink_install_files("/home/matthew/nav2_ws/src/navigation2/nav2_behavior_tree" FILES "/home/matthew/nav2_ws/build/nav2_behavior_tree/ament_cmake_environment_hooks/local_setup.bash" "DESTINATION" "share/nav2_behavior_tree")

# install(FILES "/home/matthew/nav2_ws/build/nav2_behavior_tree/ament_cmake_environment_hooks/local_setup.sh" "DESTINATION" "share/nav2_behavior_tree")
ament_cmake_symlink_install_files("/home/matthew/nav2_ws/src/navigation2/nav2_behavior_tree" FILES "/home/matthew/nav2_ws/build/nav2_behavior_tree/ament_cmake_environment_hooks/local_setup.sh" "DESTINATION" "share/nav2_behavior_tree")

# install(FILES "/home/matthew/nav2_ws/build/nav2_behavior_tree/ament_cmake_environment_hooks/local_setup.zsh" "DESTINATION" "share/nav2_behavior_tree")
ament_cmake_symlink_install_files("/home/matthew/nav2_ws/src/navigation2/nav2_behavior_tree" FILES "/home/matthew/nav2_ws/build/nav2_behavior_tree/ament_cmake_environment_hooks/local_setup.zsh" "DESTINATION" "share/nav2_behavior_tree")

# install(FILES "/home/matthew/nav2_ws/build/nav2_behavior_tree/ament_cmake_environment_hooks/local_setup.dsv" "DESTINATION" "share/nav2_behavior_tree")
ament_cmake_symlink_install_files("/home/matthew/nav2_ws/src/navigation2/nav2_behavior_tree" FILES "/home/matthew/nav2_ws/build/nav2_behavior_tree/ament_cmake_environment_hooks/local_setup.dsv" "DESTINATION" "share/nav2_behavior_tree")

# install(FILES "/home/matthew/nav2_ws/build/nav2_behavior_tree/ament_cmake_environment_hooks/package.dsv" "DESTINATION" "share/nav2_behavior_tree")
ament_cmake_symlink_install_files("/home/matthew/nav2_ws/src/navigation2/nav2_behavior_tree" FILES "/home/matthew/nav2_ws/build/nav2_behavior_tree/ament_cmake_environment_hooks/package.dsv" "DESTINATION" "share/nav2_behavior_tree")

# install(FILES "/home/matthew/nav2_ws/build/nav2_behavior_tree/ament_cmake_index/share/ament_index/resource_index/packages/nav2_behavior_tree" "DESTINATION" "share/ament_index/resource_index/packages")
ament_cmake_symlink_install_files("/home/matthew/nav2_ws/src/navigation2/nav2_behavior_tree" FILES "/home/matthew/nav2_ws/build/nav2_behavior_tree/ament_cmake_index/share/ament_index/resource_index/packages/nav2_behavior_tree" "DESTINATION" "share/ament_index/resource_index/packages")

# install(FILES "/home/matthew/nav2_ws/build/nav2_behavior_tree/ament_cmake_export_include_directories/ament_cmake_export_include_directories-extras.cmake" "DESTINATION" "share/nav2_behavior_tree/cmake")
ament_cmake_symlink_install_files("/home/matthew/nav2_ws/src/navigation2/nav2_behavior_tree" FILES "/home/matthew/nav2_ws/build/nav2_behavior_tree/ament_cmake_export_include_directories/ament_cmake_export_include_directories-extras.cmake" "DESTINATION" "share/nav2_behavior_tree/cmake")

# install(FILES "/home/matthew/nav2_ws/build/nav2_behavior_tree/ament_cmake_export_libraries/ament_cmake_export_libraries-extras.cmake" "DESTINATION" "share/nav2_behavior_tree/cmake")
ament_cmake_symlink_install_files("/home/matthew/nav2_ws/src/navigation2/nav2_behavior_tree" FILES "/home/matthew/nav2_ws/build/nav2_behavior_tree/ament_cmake_export_libraries/ament_cmake_export_libraries-extras.cmake" "DESTINATION" "share/nav2_behavior_tree/cmake")

# install(FILES "/home/matthew/nav2_ws/build/nav2_behavior_tree/ament_cmake_export_dependencies/ament_cmake_export_dependencies-extras.cmake" "DESTINATION" "share/nav2_behavior_tree/cmake")
ament_cmake_symlink_install_files("/home/matthew/nav2_ws/src/navigation2/nav2_behavior_tree" FILES "/home/matthew/nav2_ws/build/nav2_behavior_tree/ament_cmake_export_dependencies/ament_cmake_export_dependencies-extras.cmake" "DESTINATION" "share/nav2_behavior_tree/cmake")

# install(FILES "/home/matthew/nav2_ws/build/nav2_behavior_tree/ament_cmake_core/nav2_behavior_treeConfig.cmake" "/home/matthew/nav2_ws/build/nav2_behavior_tree/ament_cmake_core/nav2_behavior_treeConfig-version.cmake" "DESTINATION" "share/nav2_behavior_tree/cmake")
ament_cmake_symlink_install_files("/home/matthew/nav2_ws/src/navigation2/nav2_behavior_tree" FILES "/home/matthew/nav2_ws/build/nav2_behavior_tree/ament_cmake_core/nav2_behavior_treeConfig.cmake" "/home/matthew/nav2_ws/build/nav2_behavior_tree/ament_cmake_core/nav2_behavior_treeConfig-version.cmake" "DESTINATION" "share/nav2_behavior_tree/cmake")

# install(FILES "/home/matthew/nav2_ws/src/navigation2/nav2_behavior_tree/package.xml" "DESTINATION" "share/nav2_behavior_tree")
ament_cmake_symlink_install_files("/home/matthew/nav2_ws/src/navigation2/nav2_behavior_tree" FILES "/home/matthew/nav2_ws/src/navigation2/nav2_behavior_tree/package.xml" "DESTINATION" "share/nav2_behavior_tree")
