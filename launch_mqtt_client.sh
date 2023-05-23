#!/bin/bash

set -e 

. /opt/ros/galactic/setup.bash
. ./install/setup.bash
. /opt/ros/galactic/setup.bash
# export ROS_DOMAIN_ID=0

# net=wifi # ethernet
# user=jqzhang
# sship=192.168.50.49
# ws=/home/jqzhang/workspace/tracing_ws

echo starting mqtt_client
ros2 launch -n mqtt_client standalone.launch.ros2.xml params_file:=/home/jqzhang/workspace/tracing_ws/src/rmw_comparison/params.ros2.$1.yaml