import numpy 
import matplotlib.pyplot as plt

from mpl_toolkits.mplot3d import Axes3D
import tikzplotlib as tikz

t4 = []
t5 = []

xposition_uwb = numpy.genfromtxt("xposition_uwb.csv")
yposition_uwb = numpy.genfromtxt("yposition_uwb.csv")
zposition_uwb = numpy.genfromtxt("zposition_optitrack.csv")

xposition_yolox = numpy.genfromtxt("object_xposition_uwb.csv")
yposition_yolox = numpy.genfromtxt("object_yposition_uwb.csv")
zposition_yolox = numpy.genfromtxt("object_zposition_optitrack.csv")
##############################################################################
xposition_uwb_dashgo = numpy.genfromtxt("xposition_optitrack_dashgo.csv")
yposition_uwb_dashgo = numpy.genfromtxt("yposition_optitrack_dashgo.csv")
zposition_uwb_dashgo = numpy.genfromtxt("zposition_optitrack_dashgo.csv")

xposition_yolox_dashgo = numpy.genfromtxt("object_xposition_optitrack_dashgo.csv")
yposition_yolox_dashgo = numpy.genfromtxt("object_yposition_optitrack_dashgo.csv")
zposition_yolox_dashgo = numpy.genfromtxt("object_zposition_optitrack_dashgo.csv")
############################################
detection_tello = numpy.genfromtxt("detections_tello.csv")
detection_dashgo = numpy.genfromtxt("detections_dashgo.csv")
# for i in range(494):
# for i in range(0,200,0.4):
#     t1.append(i)
# print(t1)

t1_range_array = numpy.arange(0.0, 200, 0.4048583)
t1 = list(t1_range_array)
# print(t1)
t2_range_array = numpy.arange(0.0, 200, 0.4)
t2 = list(t2_range_array)
# for i in range(500):
#     t2.append(i)
t3_range_array = numpy.arange(0.0, 200, 0.22727273)
t3 = list(t3_range_array)
for i in range(5218):
    t4.append(1)
for i in range(475):
    t5.append(1.5)

# t4_range_array = numpy.arange(0.0, 200, 0.22727273)
# t4 = list(t4_range_array)
# for i in range(880):
#     t3.append(i)
plt.subplot(3, 1, 1)
plt.plot(t1, xposition_uwb,label='x_tello',linewidth=1)
plt.plot(t1, yposition_uwb,'--',label='y_tello',linewidth=1)
plt.plot(t1, zposition_uwb,'-.',label='z_tello',linewidth=1)
plt.plot(t2, xposition_uwb_dashgo,label='x_dashgo',linewidth=1)
plt.plot(t2, yposition_uwb_dashgo,'--',label='y_dashgo',linewidth=1)
plt.plot(t2, zposition_uwb_dashgo,'-.',label='z_dashgo',linewidth=1)
plt.xlabel("Time (s)")
plt.ylabel("Meter")
plt.title("Path Plot")
plt.legend()
# plt.subplot(4, 1, 2)
# plt.plot(t3, zposition_yolox,'*',label='object',linewidth=1)
# plt.plot(detection_tello , t4,'*',label='object',linewidth=0.5)
# test = plt.plot(detection_dashgo , t5,'*',label='object',linewidth=0.5)

# plt.subplot(3, 1, 2)
# # print(test)
# # plt.plot(t3, zposition_yolox,'*',label='object',linewidth=1)

# plt.hist(detection_dashgo)

plt.subplot(3, 1, 2)

import seaborn as sns
sns.distplot(detection_tello)

plt.xlabel("Time (s)")
plt.ylabel("Detected objects by Tello")
plt.title("Path Plot")
plt.legend()

plt.subplot(3, 1, 3)

import seaborn as sns
sns.distplot(detection_dashgo)
# plt.plot(detection_tello , t4,'*',label='object',linewidth=0.5)
# plt.plot(detectiondashgov2, t5,'*',label='object',linewidth=0.5)

plt.xlabel("Time (s)")
plt.ylabel("Detected objects by Dashgo")
plt.title("Path Plot")
plt.legend()
# plt.tight_layout()
# ax.set_title('3d tello path plot')
# plt.show()
plt.savefig('trajectory_plot_v2.png') 
plt.savefig('trajectory_plot.pdf') 
tikz.save('trajectory_plot.tex')
