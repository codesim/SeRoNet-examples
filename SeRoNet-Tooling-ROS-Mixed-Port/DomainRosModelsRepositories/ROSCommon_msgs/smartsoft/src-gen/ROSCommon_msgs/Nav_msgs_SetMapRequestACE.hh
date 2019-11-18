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
#ifndef ROSCOMMON_MSGS_NAV_MSGS_SETMAPREQUEST_ACE_H_
#define ROSCOMMON_MSGS_NAV_MSGS_SETMAPREQUEST_ACE_H_

#include "ROSCommon_msgs/Nav_msgs_SetMapRequest.hh"

#include <ace/CDR_Stream.h>

// serialization operator for DataStructure Nav_msgs_SetMapRequest
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const ROSCommon_msgsIDL::Nav_msgs_SetMapRequest &data);

// de-serialization operator for DataStructure Nav_msgs_SetMapRequest
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, ROSCommon_msgsIDL::Nav_msgs_SetMapRequest &data);

// serialization operator for CommunicationObject Nav_msgs_SetMapRequest
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const ROSCommon_msgs::Nav_msgs_SetMapRequest &obj);

// de-serialization operator for CommunicationObject Nav_msgs_SetMapRequest
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, ROSCommon_msgs::Nav_msgs_SetMapRequest &obj);

#endif /* ROSCOMMON_MSGS_NAV_MSGS_SETMAPREQUEST_ACE_H_ */
