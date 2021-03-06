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
#ifndef ROSCOMMON_MSGS_DIAGNOSTIC_MSGS_ADDDIAGNOSTICSREQUEST_H_
#define ROSCOMMON_MSGS_DIAGNOSTIC_MSGS_ADDDIAGNOSTICSREQUEST_H_

#include "ROSCommon_msgs/Diagnostic_msgs_AddDiagnosticsRequestCore.hh"

namespace ROSCommon_msgs {
		
class Diagnostic_msgs_AddDiagnosticsRequest : public Diagnostic_msgs_AddDiagnosticsRequestCore {
	public:
		// default constructors
		Diagnostic_msgs_AddDiagnosticsRequest();
		
		/**
		 * Constructor to set all values.
		 * NOTE that you have to keep this constructor consistent with the model!
		 * Use  at your own choice.
		 *
		 * The preferred way to set values for initialization is:
		 *      CommRepository::MyCommObject obj;
		 *      obj.setX(1).setY(2).setZ(3)...;
		 */
		// Diagnostic_msgs_AddDiagnosticsRequest(const std::string &load_namespace);
		
		Diagnostic_msgs_AddDiagnosticsRequest(const Diagnostic_msgs_AddDiagnosticsRequestCore &diagnostic_msgs_AddDiagnosticsRequest);
		Diagnostic_msgs_AddDiagnosticsRequest(const DATATYPE &diagnostic_msgs_AddDiagnosticsRequest);
		virtual ~Diagnostic_msgs_AddDiagnosticsRequest();
		
		// use framework specific getter and setter methods from core (base) class
		using Diagnostic_msgs_AddDiagnosticsRequestCore::get;
		using Diagnostic_msgs_AddDiagnosticsRequestCore::set;
		
		//
		// feel free to add customized methods here
		//
};

inline std::ostream &operator<<(std::ostream &os, const Diagnostic_msgs_AddDiagnosticsRequest &co)
{
	co.to_ostream(os);
	return os;
}
	
} /* namespace ROSCommon_msgs */
#endif /* ROSCOMMON_MSGS_DIAGNOSTIC_MSGS_ADDDIAGNOSTICSREQUEST_H_ */
