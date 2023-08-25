# Install script for directory: /home/jqzhang/workspace/turtlebot_ws/src/mqtt_client/mqtt_client

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/jqzhang/workspace/turtlebot_ws/install/mqtt_client")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/mqtt_client/mqtt_client" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/mqtt_client/mqtt_client")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/mqtt_client/mqtt_client"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/mqtt_client" TYPE EXECUTABLE FILES "/home/jqzhang/workspace/turtlebot_ws/build/mqtt_client/mqtt_client")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/mqtt_client/mqtt_client" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/mqtt_client/mqtt_client")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/mqtt_client/mqtt_client"
         OLD_RPATH "/usr/local/lib:/home/jqzhang/workspace/turtlebot_ws/install/mqtt_client_interfaces/lib:/home/jqzhang/workspace/tracing_ws/install/rclcpp/lib:/home/jqzhang/workspace/tracing_ws/install/ament_index_cpp/lib:/home/jqzhang/workspace/tracing_ws/install/libstatistics_collector/lib:/home/jqzhang/workspace/tracing_ws/install/std_msgs/lib:/home/jqzhang/workspace/tracing_ws/install/rcl/lib:/home/jqzhang/workspace/tracing_ws/install/rcl_interfaces/lib:/home/jqzhang/workspace/tracing_ws/install/rmw_implementation/lib:/home/jqzhang/workspace/tracing_ws/install/rcl_logging_spdlog/lib:/home/jqzhang/workspace/tracing_ws/install/rcl_logging_interface/lib:/home/jqzhang/workspace/tracing_ws/install/rcl_yaml_param_parser/lib:/home/jqzhang/workspace/tracing_ws/install/rmw/lib:/home/jqzhang/workspace/tracing_ws/install/libyaml_vendor/lib:/home/jqzhang/workspace/tracing_ws/install/rosgraph_msgs/lib:/home/jqzhang/workspace/tracing_ws/install/statistics_msgs/lib:/home/jqzhang/workspace/tracing_ws/install/builtin_interfaces/lib:/home/jqzhang/workspace/tracing_ws/install/rosidl_typesupport_introspection_cpp/lib:/home/jqzhang/workspace/tracing_ws/install/rosidl_typesupport_introspection_c/lib:/home/jqzhang/workspace/tracing_ws/install/rosidl_typesupport_cpp/lib:/home/jqzhang/workspace/tracing_ws/install/rosidl_typesupport_c/lib:/home/jqzhang/workspace/tracing_ws/install/rosidl_runtime_c/lib:/home/jqzhang/workspace/tracing_ws/install/rcpputils/lib:/home/jqzhang/workspace/tracing_ws/install/rcutils/lib:/home/jqzhang/workspace/tracing_ws/install/tracetools/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/mqtt_client/mqtt_client")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/mqtt_client" TYPE DIRECTORY FILES "/home/jqzhang/workspace/turtlebot_ws/src/mqtt_client/mqtt_client/launch" FILES_MATCHING REGEX "/[^/]*ros2[^/]*$")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/mqtt_client" TYPE DIRECTORY FILES "/home/jqzhang/workspace/turtlebot_ws/src/mqtt_client/mqtt_client/config" FILES_MATCHING REGEX "/[^/]*ros2[^/]*$")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/package_run_dependencies" TYPE FILE FILES "/home/jqzhang/workspace/turtlebot_ws/build/mqtt_client/ament_cmake_index/share/ament_index/resource_index/package_run_dependencies/mqtt_client")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/parent_prefix_path" TYPE FILE FILES "/home/jqzhang/workspace/turtlebot_ws/build/mqtt_client/ament_cmake_index/share/ament_index/resource_index/parent_prefix_path/mqtt_client")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/mqtt_client/environment" TYPE FILE FILES "/home/jqzhang/workspace/tracing_ws/install/ament_cmake_core/share/ament_cmake_core/cmake/environment_hooks/environment/ament_prefix_path.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/mqtt_client/environment" TYPE FILE FILES "/home/jqzhang/workspace/turtlebot_ws/build/mqtt_client/ament_cmake_environment_hooks/ament_prefix_path.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/mqtt_client/environment" TYPE FILE FILES "/home/jqzhang/workspace/tracing_ws/install/ament_cmake_core/share/ament_cmake_core/cmake/environment_hooks/environment/path.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/mqtt_client/environment" TYPE FILE FILES "/home/jqzhang/workspace/turtlebot_ws/build/mqtt_client/ament_cmake_environment_hooks/path.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/mqtt_client" TYPE FILE FILES "/home/jqzhang/workspace/turtlebot_ws/build/mqtt_client/ament_cmake_environment_hooks/local_setup.bash")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/mqtt_client" TYPE FILE FILES "/home/jqzhang/workspace/turtlebot_ws/build/mqtt_client/ament_cmake_environment_hooks/local_setup.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/mqtt_client" TYPE FILE FILES "/home/jqzhang/workspace/turtlebot_ws/build/mqtt_client/ament_cmake_environment_hooks/local_setup.zsh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/mqtt_client" TYPE FILE FILES "/home/jqzhang/workspace/turtlebot_ws/build/mqtt_client/ament_cmake_environment_hooks/local_setup.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/mqtt_client" TYPE FILE FILES "/home/jqzhang/workspace/turtlebot_ws/build/mqtt_client/ament_cmake_environment_hooks/package.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/packages" TYPE FILE FILES "/home/jqzhang/workspace/turtlebot_ws/build/mqtt_client/ament_cmake_index/share/ament_index/resource_index/packages/mqtt_client")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/mqtt_client/cmake" TYPE FILE FILES
    "/home/jqzhang/workspace/turtlebot_ws/build/mqtt_client/ament_cmake_core/mqtt_clientConfig.cmake"
    "/home/jqzhang/workspace/turtlebot_ws/build/mqtt_client/ament_cmake_core/mqtt_clientConfig-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/mqtt_client" TYPE FILE FILES "/home/jqzhang/workspace/turtlebot_ws/src/mqtt_client/mqtt_client/package.xml")
endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/jqzhang/workspace/turtlebot_ws/build/mqtt_client/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
