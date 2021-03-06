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
#include "ROSCommon_msgs/Sensor_msgs_RelativeHumidityACE.hh"
#include <ace/SString.h>
#include "ROSRos_core/Std_msgs_HeaderACE.hh"

// serialization operator for element Sensor_msgs_RelativeHumidity
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const ROSCommon_msgsIDL::Sensor_msgs_RelativeHumidity &data)
{
	ACE_CDR::Boolean good_bit = true;
	// serialize list-element header
	good_bit = good_bit && cdr << data.header;
	// serialize list-element relative_humidity
	good_bit = good_bit && cdr.write_double(data.relative_humidity);
	// serialize list-element variance
	good_bit = good_bit && cdr.write_double(data.variance);
	
	return good_bit;
}

// de-serialization operator for element Sensor_msgs_RelativeHumidity
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, ROSCommon_msgsIDL::Sensor_msgs_RelativeHumidity &data)
{
	ACE_CDR::Boolean good_bit = true;
	// deserialize type element header
	good_bit = good_bit && cdr >> data.header;
	// deserialize type element relative_humidity
	good_bit = good_bit && cdr.read_double(data.relative_humidity);
	// deserialize type element variance
	good_bit = good_bit && cdr.read_double(data.variance);
	
	return good_bit;
}

// serialization operator for CommunicationObject Sensor_msgs_RelativeHumidity
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const ROSCommon_msgs::Sensor_msgs_RelativeHumidity &obj)
{
	return cdr << obj.get();
}

// de-serialization operator for CommunicationObject Sensor_msgs_RelativeHumidity
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, ROSCommon_msgs::Sensor_msgs_RelativeHumidity &obj)
{
	return cdr >> obj.set();
}
