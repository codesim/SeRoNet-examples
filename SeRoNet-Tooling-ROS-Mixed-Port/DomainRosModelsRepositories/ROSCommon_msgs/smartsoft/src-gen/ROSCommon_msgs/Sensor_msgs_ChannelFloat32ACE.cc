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
#include "ROSCommon_msgs/Sensor_msgs_ChannelFloat32ACE.hh"
#include <ace/SString.h>

// serialization operator for element Sensor_msgs_ChannelFloat32
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const ROSCommon_msgsIDL::Sensor_msgs_ChannelFloat32 &data)
{
	ACE_CDR::Boolean good_bit = true;
	// serialize list-element name
	good_bit = good_bit && cdr << ACE_CString(data.name.c_str());
	// serialize list-element values
	good_bit = good_bit && cdr << ACE_Utils::truncate_cast<ACE_CDR::ULong>(data.values.size());
	good_bit = good_bit && cdr.write_float_array(data.values.data(), data.values.size());
	
	return good_bit;
}

// de-serialization operator for element Sensor_msgs_ChannelFloat32
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, ROSCommon_msgsIDL::Sensor_msgs_ChannelFloat32 &data)
{
	ACE_CDR::Boolean good_bit = true;
	// deserialize string-type element name
	ACE_CString data_name_str;
	good_bit = good_bit && cdr >> data_name_str;
	data.name = data_name_str.c_str();
	// deserialize list-type element values
	ACE_CDR::ULong data_valuesNbr;
	good_bit = good_bit && cdr >> data_valuesNbr;
	data.values.resize(data_valuesNbr);
	good_bit = good_bit && cdr.read_float_array(data.values.data(), data_valuesNbr);
	
	return good_bit;
}

// serialization operator for CommunicationObject Sensor_msgs_ChannelFloat32
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const ROSCommon_msgs::Sensor_msgs_ChannelFloat32 &obj)
{
	return cdr << obj.get();
}

// de-serialization operator for CommunicationObject Sensor_msgs_ChannelFloat32
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, ROSCommon_msgs::Sensor_msgs_ChannelFloat32 &obj)
{
	return cdr >> obj.set();
}
