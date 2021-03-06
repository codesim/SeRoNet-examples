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
#ifndef ROSCOMMON_MSGS_SENSOR_MSGS_SETCAMERAINFORESPONSE_CORE_H_
#define ROSCOMMON_MSGS_SENSOR_MSGS_SETCAMERAINFORESPONSE_CORE_H_

#include "ROSCommon_msgs/Sensor_msgs_SetCameraInfoResponseData.hh"

#include <iostream>
#include <string>
#include <list>

namespace ROSCommon_msgs {
	
class Sensor_msgs_SetCameraInfoResponseCore {
protected:
	// data structure
	ROSCommon_msgsIDL::Sensor_msgs_SetCameraInfoResponse idl_Sensor_msgs_SetCameraInfoResponse;
	
public:
	// give a publicly accessible type-name for the template parameter IDL
	typedef ROSCommon_msgsIDL::Sensor_msgs_SetCameraInfoResponse DATATYPE;
	
	#ifdef ENABLE_HASH
		static size_t generateDataHash(const DATATYPE &);
	#endif
	
	static const char* getCompiledHash();
	static void getAllHashValues(std::list<std::string> &hashes);
	static void checkAllHashValues(std::list<std::string> &hashes);
	
	// default constructors
	Sensor_msgs_SetCameraInfoResponseCore();
	Sensor_msgs_SetCameraInfoResponseCore(const DATATYPE &data);
	// default destructor
	virtual ~Sensor_msgs_SetCameraInfoResponseCore();
	
	const DATATYPE& get() const { return idl_Sensor_msgs_SetCameraInfoResponse; }
	operator const DATATYPE&() const { return idl_Sensor_msgs_SetCameraInfoResponse; }
	DATATYPE& set() { return idl_Sensor_msgs_SetCameraInfoResponse; }

	static inline std::string identifier(void) { return "ROSCommon_msgs::Sensor_msgs_SetCameraInfoResponse"; }
	
	// helper method to easily implement output stream in derived classes
	void to_ostream(std::ostream &os = std::cout) const;
	
	// convert to xml stream
	void to_xml(std::ostream &os, const std::string &indent = "") const;
	
	// restore from xml stream
	void from_xml(std::istream &is);
	
	// User Interface
	
	// getter and setter for element Success
	inline bool getSuccess() const { return idl_Sensor_msgs_SetCameraInfoResponse.success; }
	inline Sensor_msgs_SetCameraInfoResponseCore& setSuccess(const bool &success) { idl_Sensor_msgs_SetCameraInfoResponse.success = success; return *this; }
	
	// getter and setter for element Status_message
	inline std::string getStatus_message() const { return idl_Sensor_msgs_SetCameraInfoResponse.status_message; }
	inline Sensor_msgs_SetCameraInfoResponseCore& setStatus_message(const std::string &status_message) { idl_Sensor_msgs_SetCameraInfoResponse.status_message = status_message; return *this; }
};

} /* namespace ROSCommon_msgs */
#endif /* ROSCOMMON_MSGS_SENSOR_MSGS_SETCAMERAINFORESPONSE_CORE_H_ */
