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
#ifndef ROSCOMMON_MSGS_GEOMETRY_MSGS_WRENCHSTAMPED_ACE_H_
#define ROSCOMMON_MSGS_GEOMETRY_MSGS_WRENCHSTAMPED_ACE_H_

#include "ROSCommon_msgs/Geometry_msgs_WrenchStamped.hh"

#include <ace/CDR_Stream.h>

// serialization operator for DataStructure Geometry_msgs_WrenchStamped
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const ROSCommon_msgsIDL::Geometry_msgs_WrenchStamped &data);

// de-serialization operator for DataStructure Geometry_msgs_WrenchStamped
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, ROSCommon_msgsIDL::Geometry_msgs_WrenchStamped &data);

// serialization operator for CommunicationObject Geometry_msgs_WrenchStamped
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const ROSCommon_msgs::Geometry_msgs_WrenchStamped &obj);

// de-serialization operator for CommunicationObject Geometry_msgs_WrenchStamped
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, ROSCommon_msgs::Geometry_msgs_WrenchStamped &obj);

#endif /* ROSCOMMON_MSGS_GEOMETRY_MSGS_WRENCHSTAMPED_ACE_H_ */
