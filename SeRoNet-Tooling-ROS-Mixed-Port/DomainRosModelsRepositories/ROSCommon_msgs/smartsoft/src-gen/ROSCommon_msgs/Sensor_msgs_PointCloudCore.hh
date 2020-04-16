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
#ifndef ROSCOMMON_MSGS_SENSOR_MSGS_POINTCLOUD_CORE_H_
#define ROSCOMMON_MSGS_SENSOR_MSGS_POINTCLOUD_CORE_H_

#include "ROSCommon_msgs/Sensor_msgs_PointCloudData.hh"
#include "ROSCommon_msgs/Sensor_msgs_ChannelFloat32.hh"
#include "ROSRos_core/Std_msgs_Header.hh"
#include "ROSCommon_msgs/Geometry_msgs_Point32.hh"

#include <iostream>
#include <string>
#include <list>

namespace ROSCommon_msgs {
	
class Sensor_msgs_PointCloudCore {
protected:
	// data structure
	ROSCommon_msgsIDL::Sensor_msgs_PointCloud idl_Sensor_msgs_PointCloud;
	
public:
	// give a publicly accessible type-name for the template parameter IDL
	typedef ROSCommon_msgsIDL::Sensor_msgs_PointCloud DATATYPE;
	
	#ifdef ENABLE_HASH
		static size_t generateDataHash(const DATATYPE &);
	#endif
	
	static const char* getCompiledHash();
	static void getAllHashValues(std::list<std::string> &hashes);
	static void checkAllHashValues(std::list<std::string> &hashes);
	
	// default constructors
	Sensor_msgs_PointCloudCore();
	Sensor_msgs_PointCloudCore(const DATATYPE &data);
	// default destructor
	virtual ~Sensor_msgs_PointCloudCore();
	
	const DATATYPE& get() const { return idl_Sensor_msgs_PointCloud; }
	operator const DATATYPE&() const { return idl_Sensor_msgs_PointCloud; }
	DATATYPE& set() { return idl_Sensor_msgs_PointCloud; }

	static inline std::string identifier(void) { return "ROSCommon_msgs::Sensor_msgs_PointCloud"; }
	
	// helper method to easily implement output stream in derived classes
	void to_ostream(std::ostream &os = std::cout) const;
	
	// convert to xml stream
	void to_xml(std::ostream &os, const std::string &indent = "") const;
	
	// restore from xml stream
	void from_xml(std::istream &is);
	
	// User Interface
	
	// getter and setter for element Header
	inline ROSRos_core::Std_msgs_Header getHeader() const { return ROSRos_core::Std_msgs_Header(idl_Sensor_msgs_PointCloud.header); }
	inline Sensor_msgs_PointCloudCore& setHeader(const ROSRos_core::Std_msgs_Header &header) { idl_Sensor_msgs_PointCloud.header = header; return *this; }
	
	// getter and setter for element Points
	/**
	 * Getter methods for element idl_Sensor_msgs_PointCloud.points of type vector<ROSCommon_msgs::Geometry_msgs_Point32>
	 */
	inline std::vector<ROSCommon_msgs::Geometry_msgs_Point32> getPointsCopy() const { 
		return std::vector<ROSCommon_msgs::Geometry_msgs_Point32>(idl_Sensor_msgs_PointCloud.points.begin(), idl_Sensor_msgs_PointCloud.points.end());
	}
	inline ROSCommon_msgs::Geometry_msgs_Point32 getPointsElemAtPos(const size_t &pos) const {
		return ROSCommon_msgs::Geometry_msgs_Point32(idl_Sensor_msgs_PointCloud.points[pos]);
	}
	inline size_t getPointsSize() const { return idl_Sensor_msgs_PointCloud.points.size(); }
	inline bool isPointsEmpty() const { return idl_Sensor_msgs_PointCloud.points.empty(); }
	/**
	 * Setter methods for idl_Sensor_msgs_PointCloud.points of type vector<ROSCommon_msgs::Geometry_msgs_Point32>
	 */
	inline Sensor_msgs_PointCloudCore& setPoints(const std::vector<ROSCommon_msgs::Geometry_msgs_Point32> &points) { 
		idl_Sensor_msgs_PointCloud.points.assign(points.begin(), points.end());
		return *this;
	}
	inline bool setPointsElemAtPos(const size_t &pos, const ROSCommon_msgs::Geometry_msgs_Point32 &elem) {
		if(pos < idl_Sensor_msgs_PointCloud.points.size()) {
			idl_Sensor_msgs_PointCloud.points[pos] = elem;
			return true;
		}
		return false;
	}
	inline bool insertPointsVectorAtPos(const size_t &pos, const std::vector<ROSCommon_msgs::Geometry_msgs_Point32> &data) {
		if(pos < idl_Sensor_msgs_PointCloud.points.size()) {
			idl_Sensor_msgs_PointCloud.points.insert(idl_Sensor_msgs_PointCloud.points.begin()+pos, data.begin(), data.end());
			return true;
		}
		return false;
	}
	inline void resizePoints(const size_t &size) { idl_Sensor_msgs_PointCloud.points.resize(size); }
	inline bool erasePointsElemsAtPos(const size_t &pos, const size_t &nbr_elems) {
		if( (pos+nbr_elems) <= idl_Sensor_msgs_PointCloud.points.size() ) {
			idl_Sensor_msgs_PointCloud.points.erase(idl_Sensor_msgs_PointCloud.points.begin()+pos, idl_Sensor_msgs_PointCloud.points.begin()+pos+nbr_elems);
			return true;
		}
		return false;
	}
	inline void clearPoints() { idl_Sensor_msgs_PointCloud.points.clear(); }
	
	// getter and setter for element Channels
	/**
	 * Getter methods for element idl_Sensor_msgs_PointCloud.channels of type vector<ROSCommon_msgs::Sensor_msgs_ChannelFloat32>
	 */
	inline std::vector<ROSCommon_msgs::Sensor_msgs_ChannelFloat32> getChannelsCopy() const { 
		return std::vector<ROSCommon_msgs::Sensor_msgs_ChannelFloat32>(idl_Sensor_msgs_PointCloud.channels.begin(), idl_Sensor_msgs_PointCloud.channels.end());
	}
	inline ROSCommon_msgs::Sensor_msgs_ChannelFloat32 getChannelsElemAtPos(const size_t &pos) const {
		return ROSCommon_msgs::Sensor_msgs_ChannelFloat32(idl_Sensor_msgs_PointCloud.channels[pos]);
	}
	inline size_t getChannelsSize() const { return idl_Sensor_msgs_PointCloud.channels.size(); }
	inline bool isChannelsEmpty() const { return idl_Sensor_msgs_PointCloud.channels.empty(); }
	/**
	 * Setter methods for idl_Sensor_msgs_PointCloud.channels of type vector<ROSCommon_msgs::Sensor_msgs_ChannelFloat32>
	 */
	inline Sensor_msgs_PointCloudCore& setChannels(const std::vector<ROSCommon_msgs::Sensor_msgs_ChannelFloat32> &channels) { 
		idl_Sensor_msgs_PointCloud.channels.assign(channels.begin(), channels.end());
		return *this;
	}
	inline bool setChannelsElemAtPos(const size_t &pos, const ROSCommon_msgs::Sensor_msgs_ChannelFloat32 &elem) {
		if(pos < idl_Sensor_msgs_PointCloud.channels.size()) {
			idl_Sensor_msgs_PointCloud.channels[pos] = elem;
			return true;
		}
		return false;
	}
	inline bool insertChannelsVectorAtPos(const size_t &pos, const std::vector<ROSCommon_msgs::Sensor_msgs_ChannelFloat32> &data) {
		if(pos < idl_Sensor_msgs_PointCloud.channels.size()) {
			idl_Sensor_msgs_PointCloud.channels.insert(idl_Sensor_msgs_PointCloud.channels.begin()+pos, data.begin(), data.end());
			return true;
		}
		return false;
	}
	inline void resizeChannels(const size_t &size) { idl_Sensor_msgs_PointCloud.channels.resize(size); }
	inline bool eraseChannelsElemsAtPos(const size_t &pos, const size_t &nbr_elems) {
		if( (pos+nbr_elems) <= idl_Sensor_msgs_PointCloud.channels.size() ) {
			idl_Sensor_msgs_PointCloud.channels.erase(idl_Sensor_msgs_PointCloud.channels.begin()+pos, idl_Sensor_msgs_PointCloud.channels.begin()+pos+nbr_elems);
			return true;
		}
		return false;
	}
	inline void clearChannels() { idl_Sensor_msgs_PointCloud.channels.clear(); }
};

} /* namespace ROSCommon_msgs */
#endif /* ROSCOMMON_MSGS_SENSOR_MSGS_POINTCLOUD_CORE_H_ */