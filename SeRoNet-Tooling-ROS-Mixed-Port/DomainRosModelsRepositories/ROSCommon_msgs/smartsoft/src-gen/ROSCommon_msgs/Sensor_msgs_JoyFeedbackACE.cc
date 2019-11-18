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
#include "ROSCommon_msgs/Sensor_msgs_JoyFeedbackACE.hh"
#include <ace/SString.h>

// serialization operator for element Sensor_msgs_JoyFeedback
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const ROSCommon_msgsIDL::Sensor_msgs_JoyFeedback &data)
{
	ACE_CDR::Boolean good_bit = true;
	// serialize list-element type
	good_bit = good_bit && cdr.write_octet(data.type);
	// serialize list-element id
	good_bit = good_bit && cdr.write_octet(data.id);
	// serialize list-element intensity
	good_bit = good_bit && cdr.write_float(data.intensity);
	
	return good_bit;
}

// de-serialization operator for element Sensor_msgs_JoyFeedback
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, ROSCommon_msgsIDL::Sensor_msgs_JoyFeedback &data)
{
	ACE_CDR::Boolean good_bit = true;
	// deserialize type element type
	good_bit = good_bit && cdr.read_octet(data.type);
	// deserialize type element id
	good_bit = good_bit && cdr.read_octet(data.id);
	// deserialize type element intensity
	good_bit = good_bit && cdr.read_float(data.intensity);
	
	return good_bit;
}

// serialization operator for CommunicationObject Sensor_msgs_JoyFeedback
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const ROSCommon_msgs::Sensor_msgs_JoyFeedback &obj)
{
	return cdr << obj.get();
}

// de-serialization operator for CommunicationObject Sensor_msgs_JoyFeedback
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, ROSCommon_msgs::Sensor_msgs_JoyFeedback &obj)
{
	return cdr >> obj.set();
}
