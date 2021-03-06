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
#include "ROSCommon_msgs/Trajectory_msgs_MultiDOFJointTrajectoryACE.hh"
#include <ace/SString.h>
#include "ROSCommon_msgs/Trajectory_msgs_MultiDOFJointTrajectoryPointACE.hh"
#include "ROSRos_core/Std_msgs_HeaderACE.hh"

// serialization operator for element Trajectory_msgs_MultiDOFJointTrajectory
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const ROSCommon_msgsIDL::Trajectory_msgs_MultiDOFJointTrajectory &data)
{
	ACE_CDR::Boolean good_bit = true;
	// serialize list-element header
	good_bit = good_bit && cdr << data.header;
	// serialize list-element joint_names
	good_bit = good_bit && cdr << ACE_Utils::truncate_cast<ACE_CDR::ULong>(data.joint_names.size());
	std::vector<std::string>::const_iterator data_joint_namesIt;
	for(data_joint_namesIt=data.joint_names.begin(); data_joint_namesIt!=data.joint_names.end(); data_joint_namesIt++) {
		good_bit = good_bit && cdr << ACE_CString(data_joint_namesIt->c_str());
	}
	// serialize list-element points
	good_bit = good_bit && cdr << ACE_Utils::truncate_cast<ACE_CDR::ULong>(data.points.size());
	std::vector<ROSCommon_msgsIDL::Trajectory_msgs_MultiDOFJointTrajectoryPoint>::const_iterator data_pointsIt;
	for(data_pointsIt=data.points.begin(); data_pointsIt!=data.points.end(); data_pointsIt++) {
		good_bit = good_bit && cdr << *data_pointsIt;
	}
	
	return good_bit;
}

// de-serialization operator for element Trajectory_msgs_MultiDOFJointTrajectory
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, ROSCommon_msgsIDL::Trajectory_msgs_MultiDOFJointTrajectory &data)
{
	ACE_CDR::Boolean good_bit = true;
	// deserialize type element header
	good_bit = good_bit && cdr >> data.header;
	// deserialize list-type element joint_names
	ACE_CDR::ULong data_joint_namesNbr;
	good_bit = good_bit && cdr >> data_joint_namesNbr;
	data.joint_names.clear();
	ACE_CString data_joint_namesItem;
	for(ACE_CDR::ULong i=0; i<data_joint_namesNbr; ++i) {
		good_bit = good_bit && cdr >> data_joint_namesItem;
		data.joint_names.push_back(data_joint_namesItem.c_str());
	}
	// deserialize list-type element points
	ACE_CDR::ULong data_pointsNbr;
	good_bit = good_bit && cdr >> data_pointsNbr;
	data.points.clear();
	ROSCommon_msgsIDL::Trajectory_msgs_MultiDOFJointTrajectoryPoint data_pointsItem;
	for(ACE_CDR::ULong i=0; i<data_pointsNbr; ++i) {
		good_bit = good_bit && cdr >> data_pointsItem;
		data.points.push_back(data_pointsItem);
	}
	
	return good_bit;
}

// serialization operator for CommunicationObject Trajectory_msgs_MultiDOFJointTrajectory
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const ROSCommon_msgs::Trajectory_msgs_MultiDOFJointTrajectory &obj)
{
	return cdr << obj.get();
}

// de-serialization operator for CommunicationObject Trajectory_msgs_MultiDOFJointTrajectory
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, ROSCommon_msgs::Trajectory_msgs_MultiDOFJointTrajectory &obj)
{
	return cdr >> obj.set();
}
