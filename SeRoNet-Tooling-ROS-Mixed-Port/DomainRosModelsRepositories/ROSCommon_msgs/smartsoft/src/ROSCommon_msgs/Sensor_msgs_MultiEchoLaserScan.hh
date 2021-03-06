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
// This file is generated once. Modify this file to your needs. 
// If you want the toolchain to re-generate this file, please 
// delete it before running the code generator.
//--------------------------------------------------------------------------
#ifndef ROSCOMMON_MSGS_SENSOR_MSGS_MULTIECHOLASERSCAN_H_
#define ROSCOMMON_MSGS_SENSOR_MSGS_MULTIECHOLASERSCAN_H_

#include "ROSCommon_msgs/Sensor_msgs_MultiEchoLaserScanCore.hh"

namespace ROSCommon_msgs {
		
class Sensor_msgs_MultiEchoLaserScan : public Sensor_msgs_MultiEchoLaserScanCore {
	public:
		// default constructors
		Sensor_msgs_MultiEchoLaserScan();
		
		/**
		 * Constructor to set all values.
		 * NOTE that you have to keep this constructor consistent with the model!
		 * Use  at your own choice.
		 *
		 * The preferred way to set values for initialization is:
		 *      CommRepository::MyCommObject obj;
		 *      obj.setX(1).setY(2).setZ(3)...;
		 */
		// Sensor_msgs_MultiEchoLaserScan(const ROSRos_core::Std_msgs_Header &header, const float &angle_min, const float &angle_max, const float &angle_increment, const float &time_increment, const float &scan_time, const float &range_min, const float &range_max, const std::vector<ROSCommon_msgs::Sensor_msgs_LaserEcho> &ranges, const std::vector<ROSCommon_msgs::Sensor_msgs_LaserEcho> &intensities);
		
		Sensor_msgs_MultiEchoLaserScan(const Sensor_msgs_MultiEchoLaserScanCore &sensor_msgs_MultiEchoLaserScan);
		Sensor_msgs_MultiEchoLaserScan(const DATATYPE &sensor_msgs_MultiEchoLaserScan);
		virtual ~Sensor_msgs_MultiEchoLaserScan();
		
		// use framework specific getter and setter methods from core (base) class
		using Sensor_msgs_MultiEchoLaserScanCore::get;
		using Sensor_msgs_MultiEchoLaserScanCore::set;
		
		//
		// feel free to add customized methods here
		//
};

inline std::ostream &operator<<(std::ostream &os, const Sensor_msgs_MultiEchoLaserScan &co)
{
	co.to_ostream(os);
	return os;
}
	
} /* namespace ROSCommon_msgs */
#endif /* ROSCOMMON_MSGS_SENSOR_MSGS_MULTIECHOLASERSCAN_H_ */
