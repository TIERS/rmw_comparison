import numpy as np
import pandas as pd
import matplotlib.pyplot as plt
# from evo.tools import plot

from mpl_toolkits.mplot3d import Axes3D
import tikzplotlib as tikz


cyclonedds_datarange_path = "/home/jqzhang/workspace/turtlebot_ws/experiment/cyclonedds_square_1200_datarange.csv"
fastdds_datarange_path = "/home/jqzhang/workspace/turtlebot_ws/experiment/fastdds_square_1200_datarange.csv"
zenoh_datarange_path = "/home/jqzhang/workspace/turtlebot_ws/experiment/zenoh_square_1200_1_datarange.csv"
mqtt_datarange_path = "/home/jqzhang/workspace/turtlebot_ws/experiment/mqtt_square_1200_datarange.csv"

path_dict = {'FastDDS': fastdds_datarange_path, 'CycloneDDS':cyclonedds_datarange_path, 'Zenoh':zenoh_datarange_path, 'MQTT':mqtt_datarange_path}
name_list = ['FastDDS', 'CycloneDDS', 'Zenoh', 'MQTT']

for idx in range(len(name_list)):
    datarange_df = pd.read_csv(path_dict[name_list[idx]], usecols=['/vrpn_client_node/turtlebot7/pose/header/stamp', '/vrpn_client_node/turtlebot7/pose/pose/position/x', '/vrpn_client_node/turtlebot7/pose/pose/position/y'])
    datarange_df['/vrpn_client_node/turtlebot7/pose/header/stamp'] = pd.to_numeric(datarange_df['/vrpn_client_node/turtlebot7/pose/header/stamp'])
    
    start_time = int(datarange_df.at[0, '/vrpn_client_node/turtlebot7/pose/header/stamp']) + 20
    end_time = start_time + 95
    
    traj_df = datarange_df[(datarange_df['/vrpn_client_node/turtlebot7/pose/header/stamp']>=start_time) & (datarange_df['/vrpn_client_node/turtlebot7/pose/header/stamp']<end_time+1)]
    traj_x = traj_df['/vrpn_client_node/turtlebot7/pose/pose/position/x'].values.tolist()
    traj_y = traj_df['/vrpn_client_node/turtlebot7/pose/pose/position/y'].values.tolist()

    
    plt.subplot(2, 2, idx+1)
    plt.plot(traj_x[::3], traj_y[::3])
    plt.xlabel("x (m)")
    plt.ylabel("y (m)")
    # plt.title(name_list[idx])
    # plt.legend()
plt.subplots_adjust(left=None, bottom=None, right=None, top=None, wspace=0.5, hspace=0.5)

# plt.show()
plt.savefig('trajectory_plot_ds3.png') 
tikz.save('trajectory_plot_ds3.tex')
