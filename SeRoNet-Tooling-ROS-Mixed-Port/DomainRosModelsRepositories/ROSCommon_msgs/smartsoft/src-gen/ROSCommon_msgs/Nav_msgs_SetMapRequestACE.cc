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
#include "ROSCommon_msgs/Nav_msgs_SetMapRequestACE.hh"
#include <ace/SString.h>
#include "ROSCommon_msgs/Nav_msgs_OccupancyGridACE.hh"
#include "ROSCommon_msgs/Geometry_msgs_PoseWithCovarianceStampedACE.hh"

// serialization operator for element Nav_msgs_SetMapRequest
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const ROSCommon_msgsIDL::Nav_msgs_SetMapRequest &data)
{
	ACE_CDR::Boolean good_bit = true;
	// serialize list-element map
	good_bit = good_bit && cdr << data.map;
	// serialize list-element initial_pose
	good_bit = good_bit && cdr << data.initial_pose;
	
	return good_bit;
}

// de-serialization operator for element Nav_msgs_SetMapRequest
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, ROSCommon_msgsIDL::Nav_msgs_SetMapRequest &data)
{
	ACE_CDR::Boolean good_bit = true;
	// deserialize type element map
	good_bit = good_bit && cdr >> data.map;
	// deserialize type element initial_pose
	good_bit = good_bit && cdr >> data.initial_pose;
	
	return good_bit;
}

// serialization operator for CommunicationObject Nav_msgs_SetMapRequest
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const ROSCommon_msgs::Nav_msgs_SetMapRequest &obj)
{
	return cdr << obj.get();
}

// de-serialization operator for CommunicationObject Nav_msgs_SetMapRequest
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, ROSCommon_msgs::Nav_msgs_SetMapRequest &obj)
{
	return cdr >> obj.set();
}
