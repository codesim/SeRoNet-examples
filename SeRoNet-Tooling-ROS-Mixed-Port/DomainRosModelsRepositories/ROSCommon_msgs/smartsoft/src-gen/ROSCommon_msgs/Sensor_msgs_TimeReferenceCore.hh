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
#ifndef ROSCOMMON_MSGS_SENSOR_MSGS_TIMEREFERENCE_CORE_H_
#define ROSCOMMON_MSGS_SENSOR_MSGS_TIMEREFERENCE_CORE_H_

#include "ROSCommon_msgs/Sensor_msgs_TimeReferenceData.hh"
#include "CommBasicObjects/CommTimeStamp.hh"
#include "ROSRos_core/Std_msgs_Header.hh"

#include <iostream>
#include <string>
#include <list>

namespace ROSCommon_msgs {
	
class Sensor_msgs_TimeReferenceCore {
protected:
	// data structure
	ROSCommon_msgsIDL::Sensor_msgs_TimeReference idl_Sensor_msgs_TimeReference;
	
public:
	// give a publicly accessible type-name for the template parameter IDL
	typedef ROSCommon_msgsIDL::Sensor_msgs_TimeReference DATATYPE;
	
	#ifdef ENABLE_HASH
		static size_t generateDataHash(const DATATYPE &);
	#endif
	
	static const char* getCompiledHash();
	static void getAllHashValues(std::list<std::string> &hashes);
	static void checkAllHashValues(std::list<std::string> &hashes);
	
	// default constructors
	Sensor_msgs_TimeReferenceCore();
	Sensor_msgs_TimeReferenceCore(const DATATYPE &data);
	// default destructor
	virtual ~Sensor_msgs_TimeReferenceCore();
	
	const DATATYPE& get() const { return idl_Sensor_msgs_TimeReference; }
	operator const DATATYPE&() const { return idl_Sensor_msgs_TimeReference; }
	DATATYPE& set() { return idl_Sensor_msgs_TimeReference; }

	static inline std::string identifier(void) { return "ROSCommon_msgs::Sensor_msgs_TimeReference"; }
	
	// helper method to easily implement output stream in derived classes
	void to_ostream(std::ostream &os = std::cout) const;
	
	// convert to xml stream
	void to_xml(std::ostream &os, const std::string &indent = "") const;
	
	// restore from xml stream
	void from_xml(std::istream &is);
	
	// User Interface
	
	// getter and setter for element Header
	inline ROSRos_core::Std_msgs_Header getHeader() const { return ROSRos_core::Std_msgs_Header(idl_Sensor_msgs_TimeReference.header); }
	inline Sensor_msgs_TimeReferenceCore& setHeader(const ROSRos_core::Std_msgs_Header &header) { idl_Sensor_msgs_TimeReference.header = header; return *this; }
	
	// getter and setter for element Time_ref
	inline CommBasicObjects::CommTimeStamp getTime_ref() const { return CommBasicObjects::CommTimeStamp(idl_Sensor_msgs_TimeReference.time_ref); }
	inline Sensor_msgs_TimeReferenceCore& setTime_ref(const CommBasicObjects::CommTimeStamp &time_ref) { idl_Sensor_msgs_TimeReference.time_ref = time_ref; return *this; }
	
	// getter and setter for element Source
	inline std::string getSource() const { return idl_Sensor_msgs_TimeReference.source; }
	inline Sensor_msgs_TimeReferenceCore& setSource(const std::string &source) { idl_Sensor_msgs_TimeReference.source = source; return *this; }
};

} /* namespace ROSCommon_msgs */
#endif /* ROSCOMMON_MSGS_SENSOR_MSGS_TIMEREFERENCE_CORE_H_ */
