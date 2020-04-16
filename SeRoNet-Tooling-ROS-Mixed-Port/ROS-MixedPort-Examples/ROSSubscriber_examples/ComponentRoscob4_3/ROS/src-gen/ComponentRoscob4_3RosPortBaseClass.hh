//--------------------------------------------------------------------------
// This file is generated by the SeRoNet Tooling. The SeRoNet Tooling is 
// developed by the SeRoNet Project consortium: 
// http://www.seronet-projekt.de
//
// The ROS Mixed-Port Component is developed by:
// Service Robotics Research Center of Ulm University of Applied Sciences
// Fraunhofer Institute for Manufacturing Engineering and Automation IPA
//
// This code-generator uses infrastructure of the SmartMDSD Toolchain on
// which the SeRoNet Tooling is based on.
//
// CAUTION: 
// This software is a preview for the purpose of technology demonstration. 
// It is experimental and comes with no support. Use at your own risk.
// Please do not modify this file. It will be re-generated
// running the code generator.
//--------------------------------------------------------------------------

#ifndef ROS_PORT_BASE_CLASS_H_
#define ROS_PORT_BASE_CLASS_H_

#include <ros/ros.h>
#include <sensor_msgs/Joy.h>



class ComponentRoscob4_3RosPortBaseClass {
public:
	ComponentRoscob4_3RosPortBaseClass() { };
	virtual ~ComponentRoscob4_3RosPortBaseClass() { }
	
	ros::Publisher _joy_pub;
	
	void _joy_pub_publish_ros_msg(const sensor_msgs::Joy &msg);

};

#endif // ROS_PORT_BASE_CLASS_H_