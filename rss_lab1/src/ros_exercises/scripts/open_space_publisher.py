#!/usr/bin/env python
import rospy
from sensor_msgs.msg import LaserScan
from std_msgs.msg import Header
import OpenSpace.msg
import random
import math
from std_msgs.msg import Float32
dist = rospy.Publisher('open_space/distance', Float32, queue_size=10)
ang = rospy.Publisher('open_space/angle', Float32, queue_size=10)
d = 0.0
a = 0.0
def callback(data):
    d, a = process(data.ranges)
    #print("a is: " + str(a))
    rospy.loginfo(d)
    rospy.loginfo(a)
    dist.publish(d)
    ang.publish(a)
def process(ranges):
    largest = -1.0
    ang = 0.0
    for i in range (0,len(ranges)):
        if ranges[i] > largest:
            largest = ranges[i]
            ang = (-2.0/3.0)*math.pi + (1.0/300.0)*math.pi*(i)
    #print("ang is" + str(ang))
    return (largest,ang)
def listener():

    # In ROS, nodes are uniquely named. If two nodes with the same
    # name are launched, the previous one is kicked off. The
    # anonymous=True flag means that rospy will choose a unique
    # name for our 'listener' node so that multiple listeners can
    # run simultaneously.
    rospy.init_node('open_space_publisher', anonymous=True)

    rospy.Subscriber('fake_scan', LaserScan, callback)
    # spin() simply keeps python from exiting until this node is stopped
    rospy.spin()

if __name__ == '__main__':
    listener()
