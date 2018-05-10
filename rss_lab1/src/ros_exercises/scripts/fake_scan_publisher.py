#!/usr/bin/env python
import rospy
from sensor_msgs.msg import LaserScan
from std_msgs.msg import Header
import random
import math
def talker():
    pub = rospy.Publisher('fake_scan', LaserScan, queue_size=10)
    rospy.init_node('fake_scan_publisher', anonymous=True)
    rate = rospy.Rate(20) # 10hz
    while not rospy.is_shutdown():
        head = Header(stamp=rospy.get_rostime(),frame_id="base_link")
        rF = LaserScan(header=head,angle_min=-2/3*math.pi,angle_max=2/3*math.pi,
        angle_increment=1/300*math.pi,scan_time=1/20,range_min=1.0,range_max=10.0,
        ranges=createRanges(),intensities=[])
        rospy.loginfo(rF)
        pub.publish(rF)
        rate.sleep()
def createRanges():
    l = []
    for i in range (0, 400):
        l.append(random.randint(0,90)/10.0 + 1.0)
    return l
if __name__ == '__main__':
    try:
        talker()
    except rospy.ROSInterruptException:
        pass
