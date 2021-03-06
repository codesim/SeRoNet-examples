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
#include "ROSCommon_msgs/Visualization_msgs_MarkerACE.hh"
#include <ace/SString.h>
#include "ROSCommon_msgs/Geometry_msgs_PoseACE.hh"
#include "ROSCommon_msgs/Geometry_msgs_PointACE.hh"
#include "ROSCommon_msgs/Geometry_msgs_Vector3ACE.hh"
#include "CommBasicObjects/CommTimeStampACE.hh"
#include "ROSRos_core/Std_msgs_ColorRGBAACE.hh"
#include "ROSRos_core/Std_msgs_HeaderACE.hh"

// serialization operator for element Visualization_msgs_Marker
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const ROSCommon_msgsIDL::Visualization_msgs_Marker &data)
{
	ACE_CDR::Boolean good_bit = true;
	// serialize list-element header
	good_bit = good_bit && cdr << data.header;
	// serialize list-element ns
	good_bit = good_bit && cdr << ACE_CString(data.ns.c_str());
	// serialize list-element id
	good_bit = good_bit && cdr.write_long(data.id);
	// serialize list-element type
	good_bit = good_bit && cdr.write_long(data.type);
	// serialize list-element action
	good_bit = good_bit && cdr.write_long(data.action);
	// serialize list-element pose
	good_bit = good_bit && cdr << data.pose;
	// serialize list-element scale
	good_bit = good_bit && cdr << data.scale;
	// serialize list-element color
	good_bit = good_bit && cdr << data.color;
	// serialize list-element lifetime
	good_bit = good_bit && cdr << data.lifetime;
	// serialize list-element frame_locked
	good_bit = good_bit && cdr.write_boolean(data.frame_locked);
	// serialize list-element points
	good_bit = good_bit && cdr << ACE_Utils::truncate_cast<ACE_CDR::ULong>(data.points.size());
	std::vector<ROSCommon_msgsIDL::Geometry_msgs_Point>::const_iterator data_pointsIt;
	for(data_pointsIt=data.points.begin(); data_pointsIt!=data.points.end(); data_pointsIt++) {
		good_bit = good_bit && cdr << *data_pointsIt;
	}
	// serialize list-element colors
	good_bit = good_bit && cdr << ACE_Utils::truncate_cast<ACE_CDR::ULong>(data.colors.size());
	std::vector<ROSRos_coreIDL::Std_msgs_ColorRGBA>::const_iterator data_colorsIt;
	for(data_colorsIt=data.colors.begin(); data_colorsIt!=data.colors.end(); data_colorsIt++) {
		good_bit = good_bit && cdr << *data_colorsIt;
	}
	// serialize list-element text
	good_bit = good_bit && cdr << ACE_CString(data.text.c_str());
	// serialize list-element mesh_resource
	good_bit = good_bit && cdr << ACE_CString(data.mesh_resource.c_str());
	// serialize list-element mesh_use_embedded_materials
	good_bit = good_bit && cdr.write_boolean(data.mesh_use_embedded_materials);
	
	return good_bit;
}

// de-serialization operator for element Visualization_msgs_Marker
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, ROSCommon_msgsIDL::Visualization_msgs_Marker &data)
{
	ACE_CDR::Boolean good_bit = true;
	// deserialize type element header
	good_bit = good_bit && cdr >> data.header;
	// deserialize string-type element ns
	ACE_CString data_ns_str;
	good_bit = good_bit && cdr >> data_ns_str;
	data.ns = data_ns_str.c_str();
	// deserialize type element id
	good_bit = good_bit && cdr.read_long(data.id);
	// deserialize type element type
	good_bit = good_bit && cdr.read_long(data.type);
	// deserialize type element action
	good_bit = good_bit && cdr.read_long(data.action);
	// deserialize type element pose
	good_bit = good_bit && cdr >> data.pose;
	// deserialize type element scale
	good_bit = good_bit && cdr >> data.scale;
	// deserialize type element color
	good_bit = good_bit && cdr >> data.color;
	// deserialize type element lifetime
	good_bit = good_bit && cdr >> data.lifetime;
	// deserialize type element frame_locked
	good_bit = good_bit && cdr.read_boolean(data.frame_locked);
	// deserialize list-type element points
	ACE_CDR::ULong data_pointsNbr;
	good_bit = good_bit && cdr >> data_pointsNbr;
	data.points.clear();
	ROSCommon_msgsIDL::Geometry_msgs_Point data_pointsItem;
	for(ACE_CDR::ULong i=0; i<data_pointsNbr; ++i) {
		good_bit = good_bit && cdr >> data_pointsItem;
		data.points.push_back(data_pointsItem);
	}
	// deserialize list-type element colors
	ACE_CDR::ULong data_colorsNbr;
	good_bit = good_bit && cdr >> data_colorsNbr;
	data.colors.clear();
	ROSRos_coreIDL::Std_msgs_ColorRGBA data_colorsItem;
	for(ACE_CDR::ULong i=0; i<data_colorsNbr; ++i) {
		good_bit = good_bit && cdr >> data_colorsItem;
		data.colors.push_back(data_colorsItem);
	}
	// deserialize string-type element text
	ACE_CString data_text_str;
	good_bit = good_bit && cdr >> data_text_str;
	data.text = data_text_str.c_str();
	// deserialize string-type element mesh_resource
	ACE_CString data_mesh_resource_str;
	good_bit = good_bit && cdr >> data_mesh_resource_str;
	data.mesh_resource = data_mesh_resource_str.c_str();
	// deserialize type element mesh_use_embedded_materials
	good_bit = good_bit && cdr.read_boolean(data.mesh_use_embedded_materials);
	
	return good_bit;
}

// serialization operator for CommunicationObject Visualization_msgs_Marker
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const ROSCommon_msgs::Visualization_msgs_Marker &obj)
{
	return cdr << obj.get();
}

// de-serialization operator for CommunicationObject Visualization_msgs_Marker
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, ROSCommon_msgs::Visualization_msgs_Marker &obj)
{
	return cdr >> obj.set();
}
