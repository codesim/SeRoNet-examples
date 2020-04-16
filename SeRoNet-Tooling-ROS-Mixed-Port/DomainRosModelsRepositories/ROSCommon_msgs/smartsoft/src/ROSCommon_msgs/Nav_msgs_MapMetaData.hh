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
#ifndef ROSCOMMON_MSGS_NAV_MSGS_MAPMETADATA_H_
#define ROSCOMMON_MSGS_NAV_MSGS_MAPMETADATA_H_

#include "ROSCommon_msgs/Nav_msgs_MapMetaDataCore.hh"

namespace ROSCommon_msgs {
		
class Nav_msgs_MapMetaData : public Nav_msgs_MapMetaDataCore {
	public:
		// default constructors
		Nav_msgs_MapMetaData();
		
		/**
		 * Constructor to set all values.
		 * NOTE that you have to keep this constructor consistent with the model!
		 * Use  at your own choice.
		 *
		 * The preferred way to set values for initialization is:
		 *      CommRepository::MyCommObject obj;
		 *      obj.setX(1).setY(2).setZ(3)...;
		 */
		// Nav_msgs_MapMetaData(const CommBasicObjects::CommTimeStamp &map_load_time, const float &resolution, const unsigned int &width, const unsigned int &height, const ROSCommon_msgs::Geometry_msgs_Pose &origin);
		
		Nav_msgs_MapMetaData(const Nav_msgs_MapMetaDataCore &nav_msgs_MapMetaData);
		Nav_msgs_MapMetaData(const DATATYPE &nav_msgs_MapMetaData);
		virtual ~Nav_msgs_MapMetaData();
		
		// use framework specific getter and setter methods from core (base) class
		using Nav_msgs_MapMetaDataCore::get;
		using Nav_msgs_MapMetaDataCore::set;
		
		//
		// feel free to add customized methods here
		//
};

inline std::ostream &operator<<(std::ostream &os, const Nav_msgs_MapMetaData &co)
{
	co.to_ostream(os);
	return os;
}
	
} /* namespace ROSCommon_msgs */
#endif /* ROSCOMMON_MSGS_NAV_MSGS_MAPMETADATA_H_ */