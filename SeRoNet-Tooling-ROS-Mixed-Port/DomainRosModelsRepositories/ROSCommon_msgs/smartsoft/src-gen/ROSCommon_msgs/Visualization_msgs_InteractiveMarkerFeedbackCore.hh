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
#ifndef ROSCOMMON_MSGS_VISUALIZATION_MSGS_INTERACTIVEMARKERFEEDBACK_CORE_H_
#define ROSCOMMON_MSGS_VISUALIZATION_MSGS_INTERACTIVEMARKERFEEDBACK_CORE_H_

#include "ROSCommon_msgs/Visualization_msgs_InteractiveMarkerFeedbackData.hh"
#include "ROSCommon_msgs/Geometry_msgs_Pose.hh"
#include "ROSRos_core/Std_msgs_Header.hh"
#include "ROSCommon_msgs/Geometry_msgs_Point.hh"

#include <iostream>
#include <string>
#include <list>

namespace ROSCommon_msgs {
	
class Visualization_msgs_InteractiveMarkerFeedbackCore {
protected:
	// data structure
	ROSCommon_msgsIDL::Visualization_msgs_InteractiveMarkerFeedback idl_Visualization_msgs_InteractiveMarkerFeedback;
	
public:
	// give a publicly accessible type-name for the template parameter IDL
	typedef ROSCommon_msgsIDL::Visualization_msgs_InteractiveMarkerFeedback DATATYPE;
	
	#ifdef ENABLE_HASH
		static size_t generateDataHash(const DATATYPE &);
	#endif
	
	static const char* getCompiledHash();
	static void getAllHashValues(std::list<std::string> &hashes);
	static void checkAllHashValues(std::list<std::string> &hashes);
	
	// default constructors
	Visualization_msgs_InteractiveMarkerFeedbackCore();
	Visualization_msgs_InteractiveMarkerFeedbackCore(const DATATYPE &data);
	// default destructor
	virtual ~Visualization_msgs_InteractiveMarkerFeedbackCore();
	
	const DATATYPE& get() const { return idl_Visualization_msgs_InteractiveMarkerFeedback; }
	operator const DATATYPE&() const { return idl_Visualization_msgs_InteractiveMarkerFeedback; }
	DATATYPE& set() { return idl_Visualization_msgs_InteractiveMarkerFeedback; }

	static inline std::string identifier(void) { return "ROSCommon_msgs::Visualization_msgs_InteractiveMarkerFeedback"; }
	
	// helper method to easily implement output stream in derived classes
	void to_ostream(std::ostream &os = std::cout) const;
	
	// convert to xml stream
	void to_xml(std::ostream &os, const std::string &indent = "") const;
	
	// restore from xml stream
	void from_xml(std::istream &is);
	
	// User Interface
	
	// getter and setter for element Header
	inline ROSRos_core::Std_msgs_Header getHeader() const { return ROSRos_core::Std_msgs_Header(idl_Visualization_msgs_InteractiveMarkerFeedback.header); }
	inline Visualization_msgs_InteractiveMarkerFeedbackCore& setHeader(const ROSRos_core::Std_msgs_Header &header) { idl_Visualization_msgs_InteractiveMarkerFeedback.header = header; return *this; }
	
	// getter and setter for element Client_id
	inline std::string getClient_id() const { return idl_Visualization_msgs_InteractiveMarkerFeedback.client_id; }
	inline Visualization_msgs_InteractiveMarkerFeedbackCore& setClient_id(const std::string &client_id) { idl_Visualization_msgs_InteractiveMarkerFeedback.client_id = client_id; return *this; }
	
	// getter and setter for element Marker_name
	inline std::string getMarker_name() const { return idl_Visualization_msgs_InteractiveMarkerFeedback.marker_name; }
	inline Visualization_msgs_InteractiveMarkerFeedbackCore& setMarker_name(const std::string &marker_name) { idl_Visualization_msgs_InteractiveMarkerFeedback.marker_name = marker_name; return *this; }
	
	// getter and setter for element Control_name
	inline std::string getControl_name() const { return idl_Visualization_msgs_InteractiveMarkerFeedback.control_name; }
	inline Visualization_msgs_InteractiveMarkerFeedbackCore& setControl_name(const std::string &control_name) { idl_Visualization_msgs_InteractiveMarkerFeedback.control_name = control_name; return *this; }
	
	// getter and setter for element Event_type
	inline unsigned char getEvent_type() const { return idl_Visualization_msgs_InteractiveMarkerFeedback.event_type; }
	inline Visualization_msgs_InteractiveMarkerFeedbackCore& setEvent_type(const unsigned char &event_type) { idl_Visualization_msgs_InteractiveMarkerFeedback.event_type = event_type; return *this; }
	
	// getter and setter for element Pose
	inline ROSCommon_msgs::Geometry_msgs_Pose getPose() const { return ROSCommon_msgs::Geometry_msgs_Pose(idl_Visualization_msgs_InteractiveMarkerFeedback.pose); }
	inline Visualization_msgs_InteractiveMarkerFeedbackCore& setPose(const ROSCommon_msgs::Geometry_msgs_Pose &pose) { idl_Visualization_msgs_InteractiveMarkerFeedback.pose = pose; return *this; }
	
	// getter and setter for element Menu_entry_id
	inline unsigned int getMenu_entry_id() const { return idl_Visualization_msgs_InteractiveMarkerFeedback.menu_entry_id; }
	inline Visualization_msgs_InteractiveMarkerFeedbackCore& setMenu_entry_id(const unsigned int &menu_entry_id) { idl_Visualization_msgs_InteractiveMarkerFeedback.menu_entry_id = menu_entry_id; return *this; }
	
	// getter and setter for element Mouse_point
	inline ROSCommon_msgs::Geometry_msgs_Point getMouse_point() const { return ROSCommon_msgs::Geometry_msgs_Point(idl_Visualization_msgs_InteractiveMarkerFeedback.mouse_point); }
	inline Visualization_msgs_InteractiveMarkerFeedbackCore& setMouse_point(const ROSCommon_msgs::Geometry_msgs_Point &mouse_point) { idl_Visualization_msgs_InteractiveMarkerFeedback.mouse_point = mouse_point; return *this; }
	
	// getter and setter for element Mouse_point_valid
	inline bool getMouse_point_valid() const { return idl_Visualization_msgs_InteractiveMarkerFeedback.mouse_point_valid; }
	inline Visualization_msgs_InteractiveMarkerFeedbackCore& setMouse_point_valid(const bool &mouse_point_valid) { idl_Visualization_msgs_InteractiveMarkerFeedback.mouse_point_valid = mouse_point_valid; return *this; }
};

} /* namespace ROSCommon_msgs */
#endif /* ROSCOMMON_MSGS_VISUALIZATION_MSGS_INTERACTIVEMARKERFEEDBACK_CORE_H_ */