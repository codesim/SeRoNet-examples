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
#include "ROSCommon_msgs/Diagnostic_msgs_AddDiagnosticsResponseACE.hh"
#include <ace/SString.h>

// serialization operator for element Diagnostic_msgs_AddDiagnosticsResponse
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const ROSCommon_msgsIDL::Diagnostic_msgs_AddDiagnosticsResponse &data)
{
	ACE_CDR::Boolean good_bit = true;
	// serialize list-element success
	good_bit = good_bit && cdr.write_boolean(data.success);
	// serialize list-element message
	good_bit = good_bit && cdr << ACE_CString(data.message.c_str());
	
	return good_bit;
}

// de-serialization operator for element Diagnostic_msgs_AddDiagnosticsResponse
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, ROSCommon_msgsIDL::Diagnostic_msgs_AddDiagnosticsResponse &data)
{
	ACE_CDR::Boolean good_bit = true;
	// deserialize type element success
	good_bit = good_bit && cdr.read_boolean(data.success);
	// deserialize string-type element message
	ACE_CString data_message_str;
	good_bit = good_bit && cdr >> data_message_str;
	data.message = data_message_str.c_str();
	
	return good_bit;
}

// serialization operator for CommunicationObject Diagnostic_msgs_AddDiagnosticsResponse
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const ROSCommon_msgs::Diagnostic_msgs_AddDiagnosticsResponse &obj)
{
	return cdr << obj.get();
}

// de-serialization operator for CommunicationObject Diagnostic_msgs_AddDiagnosticsResponse
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, ROSCommon_msgs::Diagnostic_msgs_AddDiagnosticsResponse &obj)
{
	return cdr >> obj.set();
}
