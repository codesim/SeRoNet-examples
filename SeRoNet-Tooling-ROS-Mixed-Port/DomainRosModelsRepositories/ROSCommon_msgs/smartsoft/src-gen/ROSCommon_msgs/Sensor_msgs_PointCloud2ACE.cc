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
#include "ROSCommon_msgs/Sensor_msgs_PointCloud2ACE.hh"
#include <ace/SString.h>
#include "ROSCommon_msgs/Sensor_msgs_PointFieldACE.hh"
#include "ROSRos_core/Std_msgs_HeaderACE.hh"

// serialization operator for element Sensor_msgs_PointCloud2
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const ROSCommon_msgsIDL::Sensor_msgs_PointCloud2 &data)
{
	ACE_CDR::Boolean good_bit = true;
	// serialize list-element header
	good_bit = good_bit && cdr << data.header;
	// serialize list-element height
	good_bit = good_bit && cdr.write_ulong(data.height);
	// serialize list-element width
	good_bit = good_bit && cdr.write_ulong(data.width);
	// serialize list-element fields
	good_bit = good_bit && cdr << ACE_Utils::truncate_cast<ACE_CDR::ULong>(data.fields.size());
	std::vector<ROSCommon_msgsIDL::Sensor_msgs_PointField>::const_iterator data_fieldsIt;
	for(data_fieldsIt=data.fields.begin(); data_fieldsIt!=data.fields.end(); data_fieldsIt++) {
		good_bit = good_bit && cdr << *data_fieldsIt;
	}
	// serialize list-element is_bigendian
	good_bit = good_bit && cdr.write_boolean(data.is_bigendian);
	// serialize list-element point_step
	good_bit = good_bit && cdr.write_ulong(data.point_step);
	// serialize list-element row_step
	good_bit = good_bit && cdr.write_ulong(data.row_step);
	// serialize list-element data
	good_bit = good_bit && cdr << ACE_Utils::truncate_cast<ACE_CDR::ULong>(data.data.size());
	good_bit = good_bit && cdr.write_octet_array(data.data.data(), data.data.size());
	// serialize list-element is_dense
	good_bit = good_bit && cdr.write_boolean(data.is_dense);
	
	return good_bit;
}

// de-serialization operator for element Sensor_msgs_PointCloud2
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, ROSCommon_msgsIDL::Sensor_msgs_PointCloud2 &data)
{
	ACE_CDR::Boolean good_bit = true;
	// deserialize type element header
	good_bit = good_bit && cdr >> data.header;
	// deserialize type element height
	good_bit = good_bit && cdr.read_ulong(data.height);
	// deserialize type element width
	good_bit = good_bit && cdr.read_ulong(data.width);
	// deserialize list-type element fields
	ACE_CDR::ULong data_fieldsNbr;
	good_bit = good_bit && cdr >> data_fieldsNbr;
	data.fields.clear();
	ROSCommon_msgsIDL::Sensor_msgs_PointField data_fieldsItem;
	for(ACE_CDR::ULong i=0; i<data_fieldsNbr; ++i) {
		good_bit = good_bit && cdr >> data_fieldsItem;
		data.fields.push_back(data_fieldsItem);
	}
	// deserialize type element is_bigendian
	good_bit = good_bit && cdr.read_boolean(data.is_bigendian);
	// deserialize type element point_step
	good_bit = good_bit && cdr.read_ulong(data.point_step);
	// deserialize type element row_step
	good_bit = good_bit && cdr.read_ulong(data.row_step);
	// deserialize list-type element data
	ACE_CDR::ULong data_dataNbr;
	good_bit = good_bit && cdr >> data_dataNbr;
	data.data.resize(data_dataNbr);
	good_bit = good_bit && cdr.read_octet_array(data.data.data(), data_dataNbr);
	// deserialize type element is_dense
	good_bit = good_bit && cdr.read_boolean(data.is_dense);
	
	return good_bit;
}

// serialization operator for CommunicationObject Sensor_msgs_PointCloud2
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const ROSCommon_msgs::Sensor_msgs_PointCloud2 &obj)
{
	return cdr << obj.get();
}

// de-serialization operator for CommunicationObject Sensor_msgs_PointCloud2
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, ROSCommon_msgs::Sensor_msgs_PointCloud2 &obj)
{
	return cdr >> obj.set();
}