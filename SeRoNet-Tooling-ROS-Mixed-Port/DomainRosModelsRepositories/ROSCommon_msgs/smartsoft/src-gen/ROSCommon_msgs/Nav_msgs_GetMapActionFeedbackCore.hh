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
#ifndef ROSCOMMON_MSGS_NAV_MSGS_GETMAPACTIONFEEDBACK_CORE_H_
#define ROSCOMMON_MSGS_NAV_MSGS_GETMAPACTIONFEEDBACK_CORE_H_

#include "ROSCommon_msgs/Nav_msgs_GetMapActionFeedbackData.hh"
#include "ROSRos_core/Std_msgs_Header.hh"
#include "ROSCommon_msgs/Actionlib_msgs_GoalStatus.hh"
#include "ROSCommon_msgs/Nav_msgs_GetMapFeedback.hh"

#include <iostream>
#include <string>
#include <list>

namespace ROSCommon_msgs {
	
class Nav_msgs_GetMapActionFeedbackCore {
protected:
	// data structure
	ROSCommon_msgsIDL::Nav_msgs_GetMapActionFeedback idl_Nav_msgs_GetMapActionFeedback;
	
public:
	// give a publicly accessible type-name for the template parameter IDL
	typedef ROSCommon_msgsIDL::Nav_msgs_GetMapActionFeedback DATATYPE;
	
	#ifdef ENABLE_HASH
		static size_t generateDataHash(const DATATYPE &);
	#endif
	
	static const char* getCompiledHash();
	static void getAllHashValues(std::list<std::string> &hashes);
	static void checkAllHashValues(std::list<std::string> &hashes);
	
	// default constructors
	Nav_msgs_GetMapActionFeedbackCore();
	Nav_msgs_GetMapActionFeedbackCore(const DATATYPE &data);
	// default destructor
	virtual ~Nav_msgs_GetMapActionFeedbackCore();
	
	const DATATYPE& get() const { return idl_Nav_msgs_GetMapActionFeedback; }
	operator const DATATYPE&() const { return idl_Nav_msgs_GetMapActionFeedback; }
	DATATYPE& set() { return idl_Nav_msgs_GetMapActionFeedback; }

	static inline std::string identifier(void) { return "ROSCommon_msgs::Nav_msgs_GetMapActionFeedback"; }
	
	// helper method to easily implement output stream in derived classes
	void to_ostream(std::ostream &os = std::cout) const;
	
	// convert to xml stream
	void to_xml(std::ostream &os, const std::string &indent = "") const;
	
	// restore from xml stream
	void from_xml(std::istream &is);
	
	// User Interface
	
	// getter and setter for element Header
	inline ROSRos_core::Std_msgs_Header getHeader() const { return ROSRos_core::Std_msgs_Header(idl_Nav_msgs_GetMapActionFeedback.header); }
	inline Nav_msgs_GetMapActionFeedbackCore& setHeader(const ROSRos_core::Std_msgs_Header &header) { idl_Nav_msgs_GetMapActionFeedback.header = header; return *this; }
	
	// getter and setter for element Status
	inline ROSCommon_msgs::Actionlib_msgs_GoalStatus getStatus() const { return ROSCommon_msgs::Actionlib_msgs_GoalStatus(idl_Nav_msgs_GetMapActionFeedback.status); }
	inline Nav_msgs_GetMapActionFeedbackCore& setStatus(const ROSCommon_msgs::Actionlib_msgs_GoalStatus &status) { idl_Nav_msgs_GetMapActionFeedback.status = status; return *this; }
	
	// getter and setter for element Feedback
	inline ROSCommon_msgs::Nav_msgs_GetMapFeedback getFeedback() const { return ROSCommon_msgs::Nav_msgs_GetMapFeedback(idl_Nav_msgs_GetMapActionFeedback.feedback); }
	inline Nav_msgs_GetMapActionFeedbackCore& setFeedback(const ROSCommon_msgs::Nav_msgs_GetMapFeedback &feedback) { idl_Nav_msgs_GetMapActionFeedback.feedback = feedback; return *this; }
};

} /* namespace ROSCommon_msgs */
#endif /* ROSCOMMON_MSGS_NAV_MSGS_GETMAPACTIONFEEDBACK_CORE_H_ */
