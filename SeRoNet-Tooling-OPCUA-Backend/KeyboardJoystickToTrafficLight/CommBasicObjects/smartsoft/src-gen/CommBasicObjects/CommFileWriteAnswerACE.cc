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
#include "CommBasicObjects/CommFileWriteAnswerACE.hh"
#include <ace/SString.h>

// serialization operator for element CommFileWriteAnswer
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const CommBasicObjectsIDL::CommFileWriteAnswer &data)
{
	ACE_CDR::Boolean good_bit = true;
	// serialize list-element success
	good_bit = good_bit && cdr.write_boolean(data.success);
	
	return good_bit;
}

// de-serialization operator for element CommFileWriteAnswer
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, CommBasicObjectsIDL::CommFileWriteAnswer &data)
{
	ACE_CDR::Boolean good_bit = true;
	// deserialize type element success
	good_bit = good_bit && cdr.read_boolean(data.success);
	
	return good_bit;
}

// serialization operator for CommunicationObject CommFileWriteAnswer
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const CommBasicObjects::CommFileWriteAnswer &obj)
{
	return cdr << obj.get();
}

// de-serialization operator for CommunicationObject CommFileWriteAnswer
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, CommBasicObjects::CommFileWriteAnswer &obj)
{
	return cdr >> obj.set();
}