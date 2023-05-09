#!/bin/bash

set -e 

. /opt/ros/galactic/setup.bash
. ../install/setup.bash
ros_domain_id=1

export RMW_IMPLEMENTATION=rmw_fastrtps_cpp
roundtrip_mode="Main"
rate=10

for msg in Array1k Array4k Array16k Array256k Array1m PointCloud512k PointCloud1m PointCloud2m PointCloud4m PointCloud8m
do
    export ROS_DOMAIN_ID=${ros_domain_id}
    echo "ROS_DOMAIN_ID is " $ROS_DOMAIN_ID
    ../install/performance_test/lib/performance_test/perf_test -c rclcpp-single-threaded-executor -r ${rate} -m ${msg} --max-runtime 30 --logfile experiment/log_fastdds_${msg}_r${rate}_sub_2laptops_${roundtrip_mode}.csv --reliability RELIABLE --roundtrip-mode ${roundtrip_mode}
    let ros_domain_id++
    # sleep 1
done

export RMW_IMPLEMENTATION=rmw_cyclonedds_cpp
ros_domain_id=1

for msg in Array1k Array4k Array16k Array256k Array1m PointCloud512k PointCloud1m PointCloud2m PointCloud4m PointCloud8m
do
    export ROS_DOMAIN_ID=${ros_domain_id}
    echo "ROS_DOMAIN_ID is " $ROS_DOMAIN_ID
    ../install/performance_test/lib/performance_test/perf_test -c rclcpp-single-threaded-executor -r ${rate} -m ${msg} --max-runtime 30 --logfile experiment/log_cyclonedds_${msg}_r${rate}_sub_2laptops_${roundtrip_mode}.csv --reliability RELIABLE --roundtrip-mode ${roundtrip_mode}
    let ros_domain_id++
    # sleep 1
done

# export ROS_LOCALHOST_ONLY=1

# rmw_fastrtps_cpp

RMW_IMPLEMENTATION=rmw_fastrtps_cpp ./install/performance_test/lib/performance_test/perf_test -c rclcpp-single-threaded-executor -r 10 -m Array1k --max-runtime 30 --logfile experiment/log_fastdds_Array1k_r10_sub_2laptops_Main.csv --reliability RELIABLE --roundtrip-mode Main


RMW_IMPLEMENTATION=rmw_fastrtps_cpp ./install/performance_test/lib/performance_test/perf_test -c rclcpp-single-threaded-executor -r 10 -m Array4k --max-runtime 30 --logfile experiment/log_fastdds_Array4k_r10_sub_2laptops_Main.csv --reliability RELIABLE --roundtrip-mode Main


RMW_IMPLEMENTATION=rmw_fastrtps_cpp ./install/performance_test/lib/performance_test/perf_test -c rclcpp-single-threaded-executor -r 10 -m Array16k --max-runtime 30 --logfile experiment/log_fastdds_Array16k_r10_sub_2laptops_Main.csv --reliability RELIABLE --roundtrip-mode Main


RMW_IMPLEMENTATION=rmw_fastrtps_cpp ./install/performance_test/lib/performance_test/perf_test -c rclcpp-single-threaded-executor -r 10 -m Array64k --max-runtime 30 --logfile experiment/log_fastdds_Array64k_r10_sub_2laptops_Main.csv --reliability RELIABLE --roundtrip-mode Main


RMW_IMPLEMENTATION=rmw_fastrtps_cpp ./install/performance_test/lib/performance_test/perf_test -c rclcpp-single-threaded-executor -r 10 -m Array256k --max-runtime 30 --logfile experiment/log_fastdds_Array256k_r10_sub_2laptops_Main.csv --reliability RELIABLE --roundtrip-mode Main


RMW_IMPLEMENTATION=rmw_fastrtps_cpp ./install/performance_test/lib/performance_test/perf_test -c rclcpp-single-threaded-executor -r 10 -m Array1m --max-runtime 30 --logfile experiment/log_fastdds_Array1m_r10_sub_2laptops_Main.csv --reliability RELIABLE --roundtrip-mode Main


RMW_IMPLEMENTATION=rmw_fastrtps_cpp ./install/performance_test/lib/performance_test/perf_test -c rclcpp-single-threaded-executor -r 10 -m Array2m --max-runtime 30 --logfile experiment/log_fastdds_Array2m_r10_sub_2laptops_Main.csv --reliability RELIABLE --roundtrip-mode Main


RMW_IMPLEMENTATION=rmw_fastrtps_cpp ./install/performance_test/lib/performance_test/perf_test -c rclcpp-single-threaded-executor -r 10 -m PointCloud512k --max-runtime 30 --logfile experiment/log_fastdds_PointCloud512k_r10_sub_2laptops_Main.csv --reliability RELIABLE --roundtrip-mode Main


RMW_IMPLEMENTATION=rmw_fastrtps_cpp ./install/performance_test/lib/performance_test/perf_test -c rclcpp-single-threaded-executor -r 10 -m PointCloud1m --max-runtime 30 --logfile experiment/log_fastdds_PointCloud1m_r10_sub_2laptops_Main.csv --reliability RELIABLE --roundtrip-mode Main


RMW_IMPLEMENTATION=rmw_fastrtps_cpp ./install/performance_test/lib/performance_test/perf_test -c rclcpp-single-threaded-executor -r 10 -m PointCloud2m --max-runtime 30 --logfile experiment/log_fastdds_PointCloud2m_r10_sub_2laptops_Main.csv --reliability RELIABLE --roundtrip-mode Main


# RMW_IMPLEMENTATION=rmw_fastrtps_cpp ./install/performance_test/lib/performance_test/perf_test -c rclcpp-single-threaded-executor -r 10 -m PointCloud4m --max-runtime 30 --logfile experiment/log_fastdds_PointCloud4m_r10_sub_2laptops_Main.csv --reliability RELIABLE --roundtrip-mode Main


# RMW_IMPLEMENTATION=rmw_fastrtps_cpp ./install/performance_test/lib/performance_test/perf_test -c rclcpp-single-threaded-executor -r 10 -m PointCloud8m --max-runtime 30 --logfile experiment/log_fastdds_PointCloud8m_r10_sub_2laptops_Main.csv --reliability RELIABLE --roundtrip-mode Main



# rmw_cyclonedds_cpp

RMW_IMPLEMENTATION=rmw_cyclonedds_cpp ./install/performance_test/lib/performance_test/perf_test -c rclcpp-single-threaded-executor -r 10 -m Array1k --max-runtime 30 --logfile experiment/log_cyclonedds_Array1k_r10_sub_2laptops_Main.csv --reliability RELIABLE --roundtrip-mode Main


RMW_IMPLEMENTATION=rmw_cyclonedds_cpp ./install/performance_test/lib/performance_test/perf_test -c rclcpp-single-threaded-executor -r 10 -m Array4k --max-runtime 30 --logfile experiment/log_cyclonedds_Array4k_r10_sub_2laptops_Main.csv --reliability RELIABLE --roundtrip-mode Main


RMW_IMPLEMENTATION=rmw_cyclonedds_cpp ./install/performance_test/lib/performance_test/perf_test -c rclcpp-single-threaded-executor -r 10 -m Array16k --max-runtime 30 --logfile experiment/log_cyclonedds_Array16k_r10_sub_2laptops_Main.csv --reliability RELIABLE --roundtrip-mode Main


RMW_IMPLEMENTATION=rmw_cyclonedds_cpp ./install/performance_test/lib/performance_test/perf_test -c rclcpp-single-threaded-executor -r 10 -m Array64k --max-runtime 30 --logfile experiment/log_cyclonedds_Array64k_r10_sub_2laptops_Main.csv --reliability RELIABLE --roundtrip-mode Main


RMW_IMPLEMENTATION=rmw_cyclonedds_cpp ./install/performance_test/lib/performance_test/perf_test -c rclcpp-single-threaded-executor -r 10 -m Array256k --max-runtime 30 --logfile experiment/log_cyclonedds_Array256k_r10_sub_2laptops_Main.csv --reliability RELIABLE --roundtrip-mode Main


RMW_IMPLEMENTATION=rmw_cyclonedds_cpp ./install/performance_test/lib/performance_test/perf_test -c rclcpp-single-threaded-executor -r 10 -m Array1m --max-runtime 30 --logfile experiment/log_cyclonedds_Array1m_r10_sub_2laptops_Main.csv --reliability RELIABLE --roundtrip-mode Main


RMW_IMPLEMENTATION=rmw_cyclonedds_cpp ./install/performance_test/lib/performance_test/perf_test -c rclcpp-single-threaded-executor -r 10 -m Array2m --max-runtime 30 --logfile experiment/log_cyclonedds_Array2m_r10_sub_2laptops_Main.csv --reliability RELIABLE --roundtrip-mode Main


RMW_IMPLEMENTATION=rmw_cyclonedds_cpp ./install/performance_test/lib/performance_test/perf_test -c rclcpp-single-threaded-executor -r 10 -m PointCloud512k --max-runtime 30 --logfile experiment/log_cyclonedds_PointCloud512k_r10_sub_2laptops_Main.csv --reliability RELIABLE --roundtrip-mode Main


RMW_IMPLEMENTATION=rmw_cyclonedds_cpp ./install/performance_test/lib/performance_test/perf_test -c rclcpp-single-threaded-executor -r 10 -m PointCloud1m --max-runtime 30 --logfile experiment/log_cyclonedds_PointCloud1m_r10_sub_2laptops_Main.csv --reliability RELIABLE --roundtrip-mode Main


RMW_IMPLEMENTATION=rmw_cyclonedds_cpp ./install/performance_test/lib/performance_test/perf_test -c rclcpp-single-threaded-executor -r 10 -m PointCloud2m --max-runtime 30 --logfile experiment/log_cyclonedds_PointCloud2m_r10_sub_2laptops_Main.csv --reliability RELIABLE --roundtrip-mode Main


# RMW_IMPLEMENTATION=rmw_cyclonedds_cpp ./install/performance_test/lib/performance_test/perf_test -c rclcpp-single-threaded-executor -r 10 -m PointCloud4m --max-runtime 30 --logfile experiment/log_cyclonedds_PointCloud4m_r10_sub_2laptops_Main.csv --reliability RELIABLE --roundtrip-mode Main


# RMW_IMPLEMENTATION=rmw_cyclonedds_cpp ./install/performance_test/lib/performance_test/perf_test -c rclcpp-single-threaded-executor -r 10 -m PointCloud8m --max-runtime 30 --logfile experiment/log_cyclonedds_PointCloud8m_r10_sub_2laptops_Main.csv --reliability RELIABLE --roundtrip-mode Main



# zenoh

./install/performance_test/lib/performance_test/perf_test -c rclcpp-single-threaded-executor -r 10 -m Array1k --max-runtime 30 --logfile experiment/log_zenoh_Array1k_r10_sub_2laptops_Main.csv --reliability RELIABLE --roundtrip-mode Main


./install/performance_test/lib/performance_test/perf_test -c rclcpp-single-threaded-executor -r 10 -m Array4k --max-runtime 30 --logfile experiment/log_zenoh_Array4k_r10_sub_2laptops_Main.csv --reliability RELIABLE --roundtrip-mode Main


./install/performance_test/lib/performance_test/perf_test -c rclcpp-single-threaded-executor -r 10 -m Array16k --max-runtime 30 --logfile experiment/log_zenoh_Array16k_r10_sub_2laptops_Main.csv --reliability RELIABLE --roundtrip-mode Main


./install/performance_test/lib/performance_test/perf_test -c rclcpp-single-threaded-executor -r 10 -m Array64k --max-runtime 30 --logfile experiment/log_zenoh_Array64k_r10_sub_2laptops_Main.csv --reliability RELIABLE --roundtrip-mode Main


./install/performance_test/lib/performance_test/perf_test -c rclcpp-single-threaded-executor -r 10 -m Array256k --max-runtime 30 --logfile experiment/log_zenoh_Array256k_r10_sub_2laptops_Main.csv --reliability RELIABLE --roundtrip-mode Main


./install/performance_test/lib/performance_test/perf_test -c rclcpp-single-threaded-executor -r 10 -m Array1m --max-runtime 30 --logfile experiment/log_zenoh_Array1m_r10_sub_2laptops_Main.csv --reliability RELIABLE --roundtrip-mode Main


./install/performance_test/lib/performance_test/perf_test -c rclcpp-single-threaded-executor -r 10 -m Array2m --max-runtime 30 --logfile experiment/log_zenoh_Array2m_r10_sub_2laptops_Main.csv --reliability RELIABLE --roundtrip-mode Main


./install/performance_test/lib/performance_test/perf_test -c rclcpp-single-threaded-executor -r 10 -m PointCloud512k --max-runtime 30 --logfile experiment/log_zenoh_PointCloud512k_r10_sub_2laptops_Main.csv --reliability RELIABLE --roundtrip-mode Main


./install/performance_test/lib/performance_test/perf_test -c rclcpp-single-threaded-executor -r 10 -m PointCloud1m --max-runtime 30 --logfile experiment/log_zenoh_PointCloud1m_r10_sub_2laptops_Main.csv --reliability RELIABLE --roundtrip-mode Main


./install/performance_test/lib/performance_test/perf_test -c rclcpp-single-threaded-executor -r 10 -m PointCloud2m --max-runtime 30 --logfile experiment/log_zenoh_PointCloud2m_r10_sub_2laptops_Main.csv --reliability RELIABLE --roundtrip-mode Main


# mqtt


./install/performance_test/lib/performance_test/perf_test -c rclcpp-single-threaded-executor -r 10 -m Array1k --max-runtime 30 --logfile experiment/log_mqtt_Array1k_r10_sub_2laptops_Main.csv --reliability RELIABLE --roundtrip-mode Main


./install/performance_test/lib/performance_test/perf_test -c rclcpp-single-threaded-executor -r 10 -m Array4k --max-runtime 30 --logfile experiment/log_mqtt_Array4k_r10_sub_2laptops_Main.csv --reliability RELIABLE --roundtrip-mode Main


./install/performance_test/lib/performance_test/perf_test -c rclcpp-single-threaded-executor -r 10 -m Array16k --max-runtime 30 --logfile experiment/log_mqtt_Array16k_r10_sub_2laptops_Main.csv --reliability RELIABLE --roundtrip-mode Main


./install/performance_test/lib/performance_test/perf_test -c rclcpp-single-threaded-executor -r 10 -m Array64k --max-runtime 30 --logfile experiment/log_mqtt_Array64k_r10_sub_2laptops_Main.csv --reliability RELIABLE --roundtrip-mode Main


./install/performance_test/lib/performance_test/perf_test -c rclcpp-single-threaded-executor -r 10 -m Array256k --max-runtime 30 --logfile experiment/log_mqtt_Array256k_r10_sub_2laptops_Main.csv --reliability RELIABLE --roundtrip-mode Main


./install/performance_test/lib/performance_test/perf_test -c rclcpp-single-threaded-executor -r 10 -m Array1m --max-runtime 30 --logfile experiment/log_mqtt_Array1m_r10_sub_2laptops_Main.csv --reliability RELIABLE --roundtrip-mode Main


./install/performance_test/lib/performance_test/perf_test -c rclcpp-single-threaded-executor -r 10 -m Array2m --max-runtime 30 --logfile experiment/log_mqtt_Array2m_r10_sub_2laptops_Main.csv --reliability RELIABLE --roundtrip-mode Main


./install/performance_test/lib/performance_test/perf_test -c rclcpp-single-threaded-executor -r 10 -m PointCloud512k --max-runtime 30 --logfile experiment/log_mqtt_PointCloud512k_r10_sub_2laptops_Main.csv --reliability RELIABLE --roundtrip-mode Main


./install/performance_test/lib/performance_test/perf_test -c rclcpp-single-threaded-executor -r 10 -m PointCloud1m --max-runtime 30 --logfile experiment/log_mqtt_PointCloud1m_r10_sub_2laptops_Main.csv --reliability RELIABLE --roundtrip-mode Main


./install/performance_test/lib/performance_test/perf_test -c rclcpp-single-threaded-executor -r 10 -m PointCloud2m --max-runtime 30 --logfile experiment/log_mqtt_PointCloud2m_r10_sub_2laptops_Main.csv --reliability RELIABLE --roundtrip-mode Main

#message list
#Array1k
#Array4k
#Array16k
#Array32k
#Array60k
#Array64k
#Array256k
#Array1m
#Array2m
#Array4m
#Array8m
#Struct16
#Struct256
#Struct4k
#Struct32k
#PointCloud1m
#PointCloud2m
#PointCloud4m
#PointCloud8m
#PointCloud512k