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
#ifndef ROSCOMMON_MSGS_SENSOR_MSGS_POINTFIELD_CORE_H_
#define ROSCOMMON_MSGS_SENSOR_MSGS_POINTFIELD_CORE_H_

#include "ROSCommon_msgs/Sensor_msgs_PointFieldData.hh"

#include <iostream>
#include <string>
#include <list>

namespace ROSCommon_msgs {
	
class Sensor_msgs_PointFieldCore {
protected:
	// data structure
	ROSCommon_msgsIDL::Sensor_msgs_PointField idl_Sensor_msgs_PointField;
	
public:
	// give a publicly accessible type-name for the template parameter IDL
	typedef ROSCommon_msgsIDL::Sensor_msgs_PointField DATATYPE;
	
	#ifdef ENABLE_HASH
		static size_t generateDataHash(const DATATYPE &);
	#endif
	
	static const char* getCompiledHash();
	static void getAllHashValues(std::list<std::string> &hashes);
	static void checkAllHashValues(std::list<std::string> &hashes);
	
	// default constructors
	Sensor_msgs_PointFieldCore();
	Sensor_msgs_PointFieldCore(const DATATYPE &data);
	// default destructor
	virtual ~Sensor_msgs_PointFieldCore();
	
	const DATATYPE& get() const { return idl_Sensor_msgs_PointField; }
	operator const DATATYPE&() const { return idl_Sensor_msgs_PointField; }
	DATATYPE& set() { return idl_Sensor_msgs_PointField; }

	static inline std::string identifier(void) { return "ROSCommon_msgs::Sensor_msgs_PointField"; }
	
	// helper method to easily implement output stream in derived classes
	void to_ostream(std::ostream &os = std::cout) const;
	
	// convert to xml stream
	void to_xml(std::ostream &os, const std::string &indent = "") const;
	
	// restore from xml stream
	void from_xml(std::istream &is);
	
	// User Interface
	
	// getter and setter for element Name
	inline std::string getName() const { return idl_Sensor_msgs_PointField.name; }
	inline Sensor_msgs_PointFieldCore& setName(const std::string &name) { idl_Sensor_msgs_PointField.name = name; return *this; }
	
	// getter and setter for element Offset
	inline unsigned int getOffset() const { return idl_Sensor_msgs_PointField.offset; }
	inline Sensor_msgs_PointFieldCore& setOffset(const unsigned int &offset) { idl_Sensor_msgs_PointField.offset = offset; return *this; }
	
	// getter and setter for element Datatype
	inline unsigned char getDatatype() const { return idl_Sensor_msgs_PointField.datatype; }
	inline Sensor_msgs_PointFieldCore& setDatatype(const unsigned char &datatype) { idl_Sensor_msgs_PointField.datatype = datatype; return *this; }
	
	// getter and setter for element Count
	inline unsigned int getCount() const { return idl_Sensor_msgs_PointField.count; }
	inline Sensor_msgs_PointFieldCore& setCount(const unsigned int &count) { idl_Sensor_msgs_PointField.count = count; return *this; }
};

} /* namespace ROSCommon_msgs */
#endif /* ROSCOMMON_MSGS_SENSOR_MSGS_POINTFIELD_CORE_H_ */
