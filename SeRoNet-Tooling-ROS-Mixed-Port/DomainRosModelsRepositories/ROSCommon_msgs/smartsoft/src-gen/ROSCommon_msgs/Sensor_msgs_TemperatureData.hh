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
#ifndef ROSCOMMON_MSGS_SENSOR_MSGS_TEMPERATURE_DATA_H_
#define ROSCOMMON_MSGS_SENSOR_MSGS_TEMPERATURE_DATA_H_

#include "ROSRos_core/Std_msgs_HeaderData.hh"


namespace ROSCommon_msgsIDL 
{
	struct Sensor_msgs_Temperature
	{
		ROSRos_coreIDL::Std_msgs_Header header;
		double temperature;
		double variance;
  	};
};

#endif /* ROSCOMMON_MSGS_SENSOR_MSGS_TEMPERATURE_DATA_H_ */
