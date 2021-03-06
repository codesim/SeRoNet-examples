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
#include "ROSCommon_msgs/Sensor_msgs_PointCloudACE.hh"
#include <ace/SString.h>
#include "ROSCommon_msgs/Geometry_msgs_Point32ACE.hh"
#include "ROSCommon_msgs/Sensor_msgs_ChannelFloat32ACE.hh"
#include "ROSRos_core/Std_msgs_HeaderACE.hh"

// serialization operator for element Sensor_msgs_PointCloud
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const ROSCommon_msgsIDL::Sensor_msgs_PointCloud &data)
{
	ACE_CDR::Boolean good_bit = true;
	// serialize list-element header
	good_bit = good_bit && cdr << data.header;
	// serialize list-element points
	good_bit = good_bit && cdr << ACE_Utils::truncate_cast<ACE_CDR::ULong>(data.points.size());
	std::vector<ROSCommon_msgsIDL::Geometry_msgs_Point32>::const_iterator data_pointsIt;
	for(data_pointsIt=data.points.begin(); data_pointsIt!=data.points.end(); data_pointsIt++) {
		good_bit = good_bit && cdr << *data_pointsIt;
	}
	// serialize list-element channels
	good_bit = good_bit && cdr << ACE_Utils::truncate_cast<ACE_CDR::ULong>(data.channels.size());
	std::vector<ROSCommon_msgsIDL::Sensor_msgs_ChannelFloat32>::const_iterator data_channelsIt;
	for(data_channelsIt=data.channels.begin(); data_channelsIt!=data.channels.end(); data_channelsIt++) {
		good_bit = good_bit && cdr << *data_channelsIt;
	}
	
	return good_bit;
}

// de-serialization operator for element Sensor_msgs_PointCloud
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, ROSCommon_msgsIDL::Sensor_msgs_PointCloud &data)
{
	ACE_CDR::Boolean good_bit = true;
	// deserialize type element header
	good_bit = good_bit && cdr >> data.header;
	// deserialize list-type element points
	ACE_CDR::ULong data_pointsNbr;
	good_bit = good_bit && cdr >> data_pointsNbr;
	data.points.clear();
	ROSCommon_msgsIDL::Geometry_msgs_Point32 data_pointsItem;
	for(ACE_CDR::ULong i=0; i<data_pointsNbr; ++i) {
		good_bit = good_bit && cdr >> data_pointsItem;
		data.points.push_back(data_pointsItem);
	}
	// deserialize list-type element channels
	ACE_CDR::ULong data_channelsNbr;
	good_bit = good_bit && cdr >> data_channelsNbr;
	data.channels.clear();
	ROSCommon_msgsIDL::Sensor_msgs_ChannelFloat32 data_channelsItem;
	for(ACE_CDR::ULong i=0; i<data_channelsNbr; ++i) {
		good_bit = good_bit && cdr >> data_channelsItem;
		data.channels.push_back(data_channelsItem);
	}
	
	return good_bit;
}

// serialization operator for CommunicationObject Sensor_msgs_PointCloud
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const ROSCommon_msgs::Sensor_msgs_PointCloud &obj)
{
	return cdr << obj.get();
}

// de-serialization operator for CommunicationObject Sensor_msgs_PointCloud
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, ROSCommon_msgs::Sensor_msgs_PointCloud &obj)
{
	return cdr >> obj.set();
}
