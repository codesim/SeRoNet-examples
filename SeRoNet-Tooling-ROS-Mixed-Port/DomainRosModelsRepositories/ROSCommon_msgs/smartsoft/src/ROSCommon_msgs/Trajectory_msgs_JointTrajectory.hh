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
#ifndef ROSCOMMON_MSGS_TRAJECTORY_MSGS_JOINTTRAJECTORY_H_
#define ROSCOMMON_MSGS_TRAJECTORY_MSGS_JOINTTRAJECTORY_H_

#include "ROSCommon_msgs/Trajectory_msgs_JointTrajectoryCore.hh"

namespace ROSCommon_msgs {
		
class Trajectory_msgs_JointTrajectory : public Trajectory_msgs_JointTrajectoryCore {
	public:
		// default constructors
		Trajectory_msgs_JointTrajectory();
		
		/**
		 * Constructor to set all values.
		 * NOTE that you have to keep this constructor consistent with the model!
		 * Use  at your own choice.
		 *
		 * The preferred way to set values for initialization is:
		 *      CommRepository::MyCommObject obj;
		 *      obj.setX(1).setY(2).setZ(3)...;
		 */
		// Trajectory_msgs_JointTrajectory(const ROSRos_core::Std_msgs_Header &header, const std::vector<std::string> &joint_names, const std::vector<ROSCommon_msgs::Trajectory_msgs_JointTrajectoryPoint> &points);
		
		Trajectory_msgs_JointTrajectory(const Trajectory_msgs_JointTrajectoryCore &trajectory_msgs_JointTrajectory);
		Trajectory_msgs_JointTrajectory(const DATATYPE &trajectory_msgs_JointTrajectory);
		virtual ~Trajectory_msgs_JointTrajectory();
		
		// use framework specific getter and setter methods from core (base) class
		using Trajectory_msgs_JointTrajectoryCore::get;
		using Trajectory_msgs_JointTrajectoryCore::set;
		
		//
		// feel free to add customized methods here
		//
};

inline std::ostream &operator<<(std::ostream &os, const Trajectory_msgs_JointTrajectory &co)
{
	co.to_ostream(os);
	return os;
}
	
} /* namespace ROSCommon_msgs */
#endif /* ROSCOMMON_MSGS_TRAJECTORY_MSGS_JOINTTRAJECTORY_H_ */
