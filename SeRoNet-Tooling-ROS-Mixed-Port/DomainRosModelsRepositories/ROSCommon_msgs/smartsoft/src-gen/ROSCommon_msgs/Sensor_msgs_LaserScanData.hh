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
#ifndef ROSCOMMON_MSGS_SENSOR_MSGS_LASERSCAN_DATA_H_
#define ROSCOMMON_MSGS_SENSOR_MSGS_LASERSCAN_DATA_H_

#include "ROSRos_core/Std_msgs_HeaderData.hh"

#include <vector>

namespace ROSCommon_msgsIDL 
{
	typedef std::vector<float> Sensor_msgs_LaserScan_ranges_type;
	typedef std::vector<float> Sensor_msgs_LaserScan_intensities_type;
	struct Sensor_msgs_LaserScan
	{
		ROSRos_coreIDL::Std_msgs_Header header;
		float angle_min;
		float angle_max;
		float angle_increment;
		float time_increment;
		float scan_time;
		float range_min;
		float range_max;
		Sensor_msgs_LaserScan_ranges_type ranges;
		Sensor_msgs_LaserScan_intensities_type intensities;
  	};
};

#endif /* ROSCOMMON_MSGS_SENSOR_MSGS_LASERSCAN_DATA_H_ */