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
#include "ROSCommon_msgs/Nav_msgs_GetMapActionACE.hh"
#include <ace/SString.h>
#include "ROSCommon_msgs/Nav_msgs_GetMapActionGoalACE.hh"
#include "ROSCommon_msgs/Nav_msgs_GetMapActionResultACE.hh"
#include "ROSCommon_msgs/Nav_msgs_GetMapActionFeedbackACE.hh"

// serialization operator for element Nav_msgs_GetMapAction
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const ROSCommon_msgsIDL::Nav_msgs_GetMapAction &data)
{
	ACE_CDR::Boolean good_bit = true;
	// serialize list-element action_goal
	good_bit = good_bit && cdr << data.action_goal;
	// serialize list-element action_result
	good_bit = good_bit && cdr << data.action_result;
	// serialize list-element action_feedback
	good_bit = good_bit && cdr << data.action_feedback;
	
	return good_bit;
}

// de-serialization operator for element Nav_msgs_GetMapAction
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, ROSCommon_msgsIDL::Nav_msgs_GetMapAction &data)
{
	ACE_CDR::Boolean good_bit = true;
	// deserialize type element action_goal
	good_bit = good_bit && cdr >> data.action_goal;
	// deserialize type element action_result
	good_bit = good_bit && cdr >> data.action_result;
	// deserialize type element action_feedback
	good_bit = good_bit && cdr >> data.action_feedback;
	
	return good_bit;
}

// serialization operator for CommunicationObject Nav_msgs_GetMapAction
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const ROSCommon_msgs::Nav_msgs_GetMapAction &obj)
{
	return cdr << obj.get();
}

// de-serialization operator for CommunicationObject Nav_msgs_GetMapAction
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, ROSCommon_msgs::Nav_msgs_GetMapAction &obj)
{
	return cdr >> obj.set();
}
