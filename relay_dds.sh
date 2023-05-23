#!/bin/bash

set -e 

. /opt/ros/galactic/setup.bash
. ./install/setup.bash
. /opt/ros/galactic/setup.bash
# export ROS_DOMAIN_ID=0

net=wifi # ethernet
user=jqzhang
sship=192.168.50.49
ws=/home/jqzhang/workspace/tracing_ws


echo testing with $net

echo RMW is cyclonedds now
for msg in Array1k Array4k Array16k Array64k Array256k Array1m Array2m PointCloud512k PointCloud1m PointCloud2m
do
    echo testing $msg
    RMW_IMPLEMENTATION=rmw_cyclonedds_cpp ./install/performance_test/lib/performance_test/perf_test -c rclcpp-single-threaded-executor -r 10 -m $msg --max-runtime 30 --logfile experiment/current/${net}_cyclonedds_${msg}_r10_pub_2laptops_Relay.csv --roundtrip-mode Relay &
    ssh $user@$sship "cd $ws; . /opt/ros/galactic/setup.bash; . install/setup.bash; \
    RMW_IMPLEMENTATION=rmw_cyclonedds_cpp ./install/performance_test/lib/performance_test/perf_test -c rclcpp-single-threaded-executor -r 10 -m $msg --max-runtime 30 --logfile experiment/current/${net}_cyclonedds_${msg}_r10_sub_2laptops_Main.csv --roundtrip-mode Main" 
    echo sleep 3s
    sleep 3
done

echo RMW is fastdds now
for msg in Array1k Array4k Array16k Array64k Array256k Array1m Array2m PointCloud512k PointCloud1m PointCloud2m
do
    echo testing $msg
    RMW_IMPLEMENTATION=rmw_fastrtps_cpp ./install/performance_test/lib/performance_test/perf_test -c rclcpp-single-threaded-executor -r 10 -m $msg --max-runtime 30 --logfile experiment/current/${net}_fastdds_${msg}_r10_pub_2laptops_Relay.csv --reliability RELIABLE --roundtrip-mode Relay &
    ssh $user@$sship "cd $ws; . /opt/ros/galactic/setup.bash; . install/setup.bash; \
    RMW_IMPLEMENTATION=rmw_fastrtps_cpp ./install/performance_test/lib/performance_test/perf_test -c rclcpp-single-threaded-executor -r 10 -m $msg --max-runtime 30 --logfile experiment/current/${net}_fastdds_${msg}_r10_sub_2laptops_Main.csv --reliability RELIABLE --roundtrip-mode Main"
    echo sleep 3s
    sleep 3
done

echo RMW is Zenoh now
export ROS_LOCALHOST_ONLY=1

for msg in Array1k Array4k Array16k Array64k Array256k Array1m Array2m PointCloud512k PointCloud1m PointCloud2m
do
    echo testing $msg
    ROS_LOCALHOST_ONLY=1 RMW_IMPLEMENTATION=rmw_cyclonedds_cpp ./install/performance_test/lib/performance_test/perf_test -c rclcpp-single-threaded-executor -r 10 -m $msg --max-runtime 30 --logfile experiment/current/${net}_zenoh_${msg}_r10_pub_2laptops_Relay.csv --reliability RELIABLE --roundtrip-mode Relay &
    ssh $user@$sship "cd $ws; . /opt/ros/galactic/setup.bash; . install/setup.bash; \
    ROS_LOCALHOST_ONLY=1 RMW_IMPLEMENTATION=rmw_cyclonedds_cpp ./install/performance_test/lib/performance_test/perf_test -c rclcpp-single-threaded-executor -r 10 -m $msg --max-runtime 30 --logfile experiment/current/${net}_zenoh_${msg}_r10_sub_2laptops_Main.csv --reliability RELIABLE --roundtrip-mode Main"
    echo sleep 3s
    sleep 3
done

# MQTT
echo RMW is MQTT now
export ROS_LOCALHOST_ONLY=1
# mqttbrokerip=192.168.193.113
mqttbrokerip=192.168.2.3

for msg in Array1k Array4k Array16k Array64k Array256k Array1m Array2m PointCloud512k PointCloud1m PointCloud2m
do
    echo testing $msg
    echo starting broker
    ssh tiers@$mqttbrokerip mosquitto -c /home/tiers/workspace/mosquitto/config/mosquitto.config -d
    echo starting mqtt_client
    . launch_mqtt_client.sh $msg & ssh $user@$sship . launch_mqtt_client.sh $msg
    # ros2 launch mqtt_client standalone.launch.ros2.xml params_file:=/home/jqzhang/workspace/tracing_ws/src/mqtt_client/mqtt_client/config/params.ros2.yaml
    echo sleep 3s
    sleep 3s
    echo start mqtt test 
    ROS_LOCALHOST_ONLY=1 RMW_IMPLEMENTATION=rmw_cyclonedds_cpp ./install/performance_test/lib/performance_test/perf_test -c rclcpp-single-threaded-executor -t test_topicrelay_$msg -r 10 -m $msg --max-runtime 30 --logfile experiment/current/${net}_mqtt_${msg}_r10_pub_2laptops_Relay.csv --reliability RELIABLE --roundtrip-mode Relay &
    ssh $user@$sship "cd $ws; . /opt/ros/galactic/setup.bash; . install/setup.bash; \
    ROS_LOCALHOST_ONLY=1 RMW_IMPLEMENTATION=rmw_cyclonedds_cpp ./install/performance_test/lib/performance_test/perf_test -c rclcpp-single-threaded-executor -t test_topicmain_$msg -r 10 -m $msg --max-runtime 30 --logfile experiment/current/${net}_mqtt_${msg}_r10_sub_2laptops_Main.csv --reliability RELIABLE --roundtrip-mode Main"
    echo sleep 2s
    sleep 2s
    echo stop mqtt_client and broker
    kill $(ps aux | grep '[n]ode:=mqtt_client' | awk '{print $2}') & ssh $user@$sship kill $(ps aux | grep '[n]ode:=mqtt_client' | awk '{print $2}')
    ssh tiers@$mqttbrokerip kill $(ps aux | grep '[m]osquitto' | awk '{print $2}')
    echo sleep 15s
    sleep 15s
done

# ./install/performance_test/lib/performance_test/perf_test -c rclcpp-single-threaded-executor -r 10 -m $msg --max-runtime 30 --logfile experiment/current/${net}_mqtt_${msg}_r10_pub_2laptops_Relay.csv --reliability RELIABLE --roundtrip-mode Relay &
# ssh jqzhang@192.168.50.49 "cd /home/jqzhang/workspace/tracing_ws; . /opt/ros/galactic/setup.bash; . install/setup.bash; \
# ROS_LOCALHOST_ONLY=1 ./install/performance_test/lib/performance_test/perf_test -c rclcpp-single-threaded-executor -r 10 -m $msg --max-runtime 30 --logfile experiment/current/${net}_mqtt_${msg}_r10_sub_2laptops_Main.csv --reliability RELIABLE --roundtrip-mode Main"



# rmw_fastrtps_cpp

# RMW_IMPLEMENTATION=rmw_fastrtps_cpp ./install/performance_test/lib/performance_test/perf_test -c rclcpp-single-threaded-executor -r 20 -m Array1k --max-runtime 30 --logfile experiment/current/log_fastdds_Array1k_sub_2laptops_Relay.csv --reliability RELIABLE --roundtrip-mode Relay


# RMW_IMPLEMENTATION=rmw_fastrtps_cpp ./install/performance_test/lib/performance_test/perf_test -c rclcpp-single-threaded-executor -r 20 -m Array4k --max-runtime 30 --logfile experiment/current/log_fastdds_Array4k_sub_2laptops_Relay.csv --reliability RELIABLE --roundtrip-mode Relay


# RMW_IMPLEMENTATION=rmw_fastrtps_cpp ./install/performance_test/lib/performance_test/perf_test -c rclcpp-single-threaded-executor -r 20 -m Array16k --max-runtime 30 --logfile experiment/current/log_fastdds_Array16k_sub_2laptops_Relay.csv --reliability RELIABLE --roundtrip-mode Relay


# RMW_IMPLEMENTATION=rmw_fastrtps_cpp ./install/performance_test/lib/performance_test/perf_test -c rclcpp-single-threaded-executor -r 20 -m Array256k --max-runtime 30 --logfile experiment/current/log_fastdds_Array256k_sub_2laptops_Relay.csv --reliability RELIABLE --roundtrip-mode Relay


# RMW_IMPLEMENTATION=rmw_fastrtps_cpp ./install/performance_test/lib/performance_test/perf_test -c rclcpp-single-threaded-executor -r 20 -m Array1m --max-runtime 30 --logfile experiment/current/log_fastdds_Array1m_sub_2laptops_Relay.csv --reliability RELIABLE --roundtrip-mode Relay


# RMW_IMPLEMENTATION=rmw_fastrtps_cpp ./install/performance_test/lib/performance_test/perf_test -c rclcpp-single-threaded-executor -r 20 -m PointCloud512k --max-runtime 30 --logfile experiment/current/log_fastdds_PointCloud512k_sub_2laptops_Relay.csv --reliability RELIABLE --roundtrip-mode Relay


# RMW_IMPLEMENTATION=rmw_fastrtps_cpp ./install/performance_test/lib/performance_test/perf_test -c rclcpp-single-threaded-executor -r 20 -m PointCloud1m --max-runtime 30 --logfile experiment/current/log_fastdds_PointCloud1m_sub_2laptops_Relay.csv --reliability RELIABLE --roundtrip-mode Relay


# RMW_IMPLEMENTATION=rmw_fastrtps_cpp ./install/performance_test/lib/performance_test/perf_test -c rclcpp-single-threaded-executor -r 20 -m PointCloud2m --max-runtime 30 --logfile experiment/current/log_fastdds_PointCloud2m_sub_2laptops_Relay.csv --reliability RELIABLE --roundtrip-mode Relay


# RMW_IMPLEMENTATION=rmw_fastrtps_cpp ./install/performance_test/lib/performance_test/perf_test -c rclcpp-single-threaded-executor -r 20 -m PointCloud4m --max-runtime 30 --logfile experiment/current/log_fastdds_PointCloud4m_sub_2laptops_Relay.csv --reliability RELIABLE --roundtrip-mode Relay


# RMW_IMPLEMENTATION=rmw_fastrtps_cpp ./install/performance_test/lib/performance_test/perf_test -c rclcpp-single-threaded-executor -r 20 -m PointCloud8m --max-runtime 30 --logfile experiment/current/log_fastdds_PointCloud8m_sub_2laptops_Relay.csv --reliability RELIABLE --roundtrip-mode Relay


# # rmw_cyclonedds_cpp

# RMW_IMPLEMENTATION=rmw_cyclonedds_cpp ./install/performance_test/lib/performance_test/perf_test -c rclcpp-single-threaded-executor -r 20 -m Array1k --max-runtime 30 --logfile experiment/current/log_cyclonedds_Array1k_sub_2laptops_Relay.csv --reliability RELIABLE --roundtrip-mode Relay


# RMW_IMPLEMENTATION=rmw_cyclonedds_cpp ./install/performance_test/lib/performance_test/perf_test -c rclcpp-single-threaded-executor -r 20 -m Array4k --max-runtime 30 --logfile experiment/current/log_cyclonedds_Array4k_sub_2laptops_Relay.csv --reliability RELIABLE --roundtrip-mode Relay


# RMW_IMPLEMENTATION=rmw_cyclonedds_cpp ./install/performance_test/lib/performance_test/perf_test -c rclcpp-single-threaded-executor -r 20 -m Array16k --max-runtime 30 --logfile experiment/current/log_cyclonedds_Array16k_sub_2laptops_Relay.csv --reliability RELIABLE --roundtrip-mode Relay


# RMW_IMPLEMENTATION=rmw_cyclonedds_cpp ./install/performance_test/lib/performance_test/perf_test -c rclcpp-single-threaded-executor -r 20 -m Array256k --max-runtime 30 --logfile experiment/current/log_cyclonedds_Array256k_sub_2laptops_Relay.csv --reliability RELIABLE --roundtrip-mode Relay


# RMW_IMPLEMENTATION=rmw_cyclonedds_cpp ./install/performance_test/lib/performance_test/perf_test -c rclcpp-single-threaded-executor -r 20 -m Array1m --max-runtime 30 --logfile experiment/current/log_cyclonedds_Array1m_sub_2laptops_Relay.csv --reliability RELIABLE --roundtrip-mode Relay


# RMW_IMPLEMENTATION=rmw_cyclonedds_cpp ./install/performance_test/lib/performance_test/perf_test -c rclcpp-single-threaded-executor -r 20 -m PointCloud512k --max-runtime 30 --logfile experiment/current/log_cyclonedds_PointCloud512k_sub_2laptops_Relay.csv --reliability RELIABLE --roundtrip-mode Relay


# RMW_IMPLEMENTATION=rmw_cyclonedds_cpp ./install/performance_test/lib/performance_test/perf_test -c rclcpp-single-threaded-executor -r 20 -m PointCloud1m --max-runtime 30 --logfile experiment/current/log_cyclonedds_PointCloud1m_sub_2laptops_Relay.csv --reliability RELIABLE --roundtrip-mode Relay


# RMW_IMPLEMENTATION=rmw_cyclonedds_cpp ./install/performance_test/lib/performance_test/perf_test -c rclcpp-single-threaded-executor -r 20 -m PointCloud2m --max-runtime 30 --logfile experiment/current/log_cyclonedds_PointCloud2m_sub_2laptops_Relay.csv --reliability RELIABLE --roundtrip-mode Relay


# RMW_IMPLEMENTATION=rmw_cyclonedds_cpp ./install/performance_test/lib/performance_test/perf_test -c rclcpp-single-threaded-executor -r 20 -m PointCloud4m --max-runtime 30 --logfile experiment/current/log_cyclonedds_PointCloud4m_sub_2laptops_Relay.csv --reliability RELIABLE --roundtrip-mode Relay


# RMW_IMPLEMENTATION=rmw_cyclonedds_cpp ./install/performance_test/lib/performance_test/perf_test -c rclcpp-single-threaded-executor -r 20 -m PointCloud8m --max-runtime 30 --logfile experiment/current/log_cyclonedds_PointCloud8m_sub_2laptops_Relay.csv --reliability RELIABLE --roundtrip-mode Relay