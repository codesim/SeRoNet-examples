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
#ifndef ROSCOMMON_MSGS_ACTIONLIB_MSGS_GOALID_H_
#define ROSCOMMON_MSGS_ACTIONLIB_MSGS_GOALID_H_

#include "ROSCommon_msgs/Actionlib_msgs_GoalIDCore.hh"

namespace ROSCommon_msgs {
		
class Actionlib_msgs_GoalID : public Actionlib_msgs_GoalIDCore {
	public:
		// default constructors
		Actionlib_msgs_GoalID();
		
		/**
		 * Constructor to set all values.
		 * NOTE that you have to keep this constructor consistent with the model!
		 * Use  at your own choice.
		 *
		 * The preferred way to set values for initialization is:
		 *      CommRepository::MyCommObject obj;
		 *      obj.setX(1).setY(2).setZ(3)...;
		 */
		// Actionlib_msgs_GoalID(const CommBasicObjects::CommTimeStamp &stamp, const std::string &id);
		
		Actionlib_msgs_GoalID(const Actionlib_msgs_GoalIDCore &actionlib_msgs_GoalID);
		Actionlib_msgs_GoalID(const DATATYPE &actionlib_msgs_GoalID);
		virtual ~Actionlib_msgs_GoalID();
		
		// use framework specific getter and setter methods from core (base) class
		using Actionlib_msgs_GoalIDCore::get;
		using Actionlib_msgs_GoalIDCore::set;
		
		//
		// feel free to add customized methods here
		//
};

inline std::ostream &operator<<(std::ostream &os, const Actionlib_msgs_GoalID &co)
{
	co.to_ostream(os);
	return os;
}
	
} /* namespace ROSCommon_msgs */
#endif /* ROSCOMMON_MSGS_ACTIONLIB_MSGS_GOALID_H_ */
