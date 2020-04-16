//--------------------------------------------------------------------------
// Code generated by the SmartSoft MDSD Toolchain
// The SmartSoft Toolchain has been developed by:
//  
// Service Robotics Research Center
// University of Applied Sciences Ulm
// Prittwitzstr. 10
// 89075 Ulm (Germany)
//
// Information about the SmartSoft MDSD Toolchain is available at:
// www.servicerobotik-ulm.de
//
// Please do not modify this file. It will be re-generated
// running the code generator.
//--------------------------------------------------------------------------
#ifndef ROSCOMMON_MSGS_SENSOR_MSGS_MULTIDOFJOINTSTATE_DATA_H_
#define ROSCOMMON_MSGS_SENSOR_MSGS_MULTIDOFJOINTSTATE_DATA_H_

#include "ROSCommon_msgs/Geometry_msgs_WrenchData.hh"
#include "ROSRos_core/Std_msgs_HeaderData.hh"
#include "ROSCommon_msgs/Geometry_msgs_TwistData.hh"
#include "ROSCommon_msgs/Geometry_msgs_TransformData.hh"

#include <vector>
#include <string>

namespace ROSCommon_msgsIDL 
{
	typedef std::vector<std::string> Sensor_msgs_MultiDOFJointState_joint_names_type;
	typedef std::vector<ROSCommon_msgsIDL::Geometry_msgs_Transform> Sensor_msgs_MultiDOFJointState_transforms_type;
	typedef std::vector<ROSCommon_msgsIDL::Geometry_msgs_Twist> Sensor_msgs_MultiDOFJointState_twist_type;
	typedef std::vector<ROSCommon_msgsIDL::Geometry_msgs_Wrench> Sensor_msgs_MultiDOFJointState_wrench_type;
	struct Sensor_msgs_MultiDOFJointState
	{
		ROSRos_coreIDL::Std_msgs_Header header;
		Sensor_msgs_MultiDOFJointState_joint_names_type joint_names;
		Sensor_msgs_MultiDOFJointState_transforms_type transforms;
		Sensor_msgs_MultiDOFJointState_twist_type twist;
		Sensor_msgs_MultiDOFJointState_wrench_type wrench;
  	};
};

#endif /* ROSCOMMON_MSGS_SENSOR_MSGS_MULTIDOFJOINTSTATE_DATA_H_ */