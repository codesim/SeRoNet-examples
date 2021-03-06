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
#include "ROSCommon_msgs/Shape_msgs_SolidPrimitiveACE.hh"
#include <ace/SString.h>

// serialization operator for element Shape_msgs_SolidPrimitive
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const ROSCommon_msgsIDL::Shape_msgs_SolidPrimitive &data)
{
	ACE_CDR::Boolean good_bit = true;
	// serialize list-element type
	good_bit = good_bit && cdr.write_octet(data.type);
	// serialize list-element dimensions
	good_bit = good_bit && cdr << ACE_Utils::truncate_cast<ACE_CDR::ULong>(data.dimensions.size());
	good_bit = good_bit && cdr.write_double_array(data.dimensions.data(), data.dimensions.size());
	
	return good_bit;
}

// de-serialization operator for element Shape_msgs_SolidPrimitive
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, ROSCommon_msgsIDL::Shape_msgs_SolidPrimitive &data)
{
	ACE_CDR::Boolean good_bit = true;
	// deserialize type element type
	good_bit = good_bit && cdr.read_octet(data.type);
	// deserialize list-type element dimensions
	ACE_CDR::ULong data_dimensionsNbr;
	good_bit = good_bit && cdr >> data_dimensionsNbr;
	data.dimensions.resize(data_dimensionsNbr);
	good_bit = good_bit && cdr.read_double_array(data.dimensions.data(), data_dimensionsNbr);
	
	return good_bit;
}

// serialization operator for CommunicationObject Shape_msgs_SolidPrimitive
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const ROSCommon_msgs::Shape_msgs_SolidPrimitive &obj)
{
	return cdr << obj.get();
}

// de-serialization operator for CommunicationObject Shape_msgs_SolidPrimitive
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, ROSCommon_msgs::Shape_msgs_SolidPrimitive &obj)
{
	return cdr >> obj.set();
}
