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
#ifndef ROSCOMMON_MSGS_TRAJECTORY_MSGS_MULTIDOFJOINTTRAJECTORYPOINT_CORE_H_
#define ROSCOMMON_MSGS_TRAJECTORY_MSGS_MULTIDOFJOINTTRAJECTORYPOINT_CORE_H_

#include "ROSCommon_msgs/Trajectory_msgs_MultiDOFJointTrajectoryPointData.hh"
#include "ROSCommon_msgs/Geometry_msgs_Transform.hh"
#include "ROSCommon_msgs/Geometry_msgs_Twist.hh"
#include "CommBasicObjects/CommTimeStamp.hh"

#include <iostream>
#include <string>
#include <list>

namespace ROSCommon_msgs {
	
class Trajectory_msgs_MultiDOFJointTrajectoryPointCore {
protected:
	// data structure
	ROSCommon_msgsIDL::Trajectory_msgs_MultiDOFJointTrajectoryPoint idl_Trajectory_msgs_MultiDOFJointTrajectoryPoint;
	
public:
	// give a publicly accessible type-name for the template parameter IDL
	typedef ROSCommon_msgsIDL::Trajectory_msgs_MultiDOFJointTrajectoryPoint DATATYPE;
	
	#ifdef ENABLE_HASH
		static size_t generateDataHash(const DATATYPE &);
	#endif
	
	static const char* getCompiledHash();
	static void getAllHashValues(std::list<std::string> &hashes);
	static void checkAllHashValues(std::list<std::string> &hashes);
	
	// default constructors
	Trajectory_msgs_MultiDOFJointTrajectoryPointCore();
	Trajectory_msgs_MultiDOFJointTrajectoryPointCore(const DATATYPE &data);
	// default destructor
	virtual ~Trajectory_msgs_MultiDOFJointTrajectoryPointCore();
	
	const DATATYPE& get() const { return idl_Trajectory_msgs_MultiDOFJointTrajectoryPoint; }
	operator const DATATYPE&() const { return idl_Trajectory_msgs_MultiDOFJointTrajectoryPoint; }
	DATATYPE& set() { return idl_Trajectory_msgs_MultiDOFJointTrajectoryPoint; }

	static inline std::string identifier(void) { return "ROSCommon_msgs::Trajectory_msgs_MultiDOFJointTrajectoryPoint"; }
	
	// helper method to easily implement output stream in derived classes
	void to_ostream(std::ostream &os = std::cout) const;
	
	// convert to xml stream
	void to_xml(std::ostream &os, const std::string &indent = "") const;
	
	// restore from xml stream
	void from_xml(std::istream &is);
	
	// User Interface
	
	// getter and setter for element Transforms
	/**
	 * Getter methods for element idl_Trajectory_msgs_MultiDOFJointTrajectoryPoint.transforms of type vector<ROSCommon_msgs::Geometry_msgs_Transform>
	 */
	inline std::vector<ROSCommon_msgs::Geometry_msgs_Transform> getTransformsCopy() const { 
		return std::vector<ROSCommon_msgs::Geometry_msgs_Transform>(idl_Trajectory_msgs_MultiDOFJointTrajectoryPoint.transforms.begin(), idl_Trajectory_msgs_MultiDOFJointTrajectoryPoint.transforms.end());
	}
	inline ROSCommon_msgs::Geometry_msgs_Transform getTransformsElemAtPos(const size_t &pos) const {
		return ROSCommon_msgs::Geometry_msgs_Transform(idl_Trajectory_msgs_MultiDOFJointTrajectoryPoint.transforms[pos]);
	}
	inline size_t getTransformsSize() const { return idl_Trajectory_msgs_MultiDOFJointTrajectoryPoint.transforms.size(); }
	inline bool isTransformsEmpty() const { return idl_Trajectory_msgs_MultiDOFJointTrajectoryPoint.transforms.empty(); }
	/**
	 * Setter methods for idl_Trajectory_msgs_MultiDOFJointTrajectoryPoint.transforms of type vector<ROSCommon_msgs::Geometry_msgs_Transform>
	 */
	inline Trajectory_msgs_MultiDOFJointTrajectoryPointCore& setTransforms(const std::vector<ROSCommon_msgs::Geometry_msgs_Transform> &transforms) { 
		idl_Trajectory_msgs_MultiDOFJointTrajectoryPoint.transforms.assign(transforms.begin(), transforms.end());
		return *this;
	}
	inline bool setTransformsElemAtPos(const size_t &pos, const ROSCommon_msgs::Geometry_msgs_Transform &elem) {
		if(pos < idl_Trajectory_msgs_MultiDOFJointTrajectoryPoint.transforms.size()) {
			idl_Trajectory_msgs_MultiDOFJointTrajectoryPoint.transforms[pos] = elem;
			return true;
		}
		return false;
	}
	inline bool insertTransformsVectorAtPos(const size_t &pos, const std::vector<ROSCommon_msgs::Geometry_msgs_Transform> &data) {
		if(pos < idl_Trajectory_msgs_MultiDOFJointTrajectoryPoint.transforms.size()) {
			idl_Trajectory_msgs_MultiDOFJointTrajectoryPoint.transforms.insert(idl_Trajectory_msgs_MultiDOFJointTrajectoryPoint.transforms.begin()+pos, data.begin(), data.end());
			return true;
		}
		return false;
	}
	inline void resizeTransforms(const size_t &size) { idl_Trajectory_msgs_MultiDOFJointTrajectoryPoint.transforms.resize(size); }
	inline bool eraseTransformsElemsAtPos(const size_t &pos, const size_t &nbr_elems) {
		if( (pos+nbr_elems) <= idl_Trajectory_msgs_MultiDOFJointTrajectoryPoint.transforms.size() ) {
			idl_Trajectory_msgs_MultiDOFJointTrajectoryPoint.transforms.erase(idl_Trajectory_msgs_MultiDOFJointTrajectoryPoint.transforms.begin()+pos, idl_Trajectory_msgs_MultiDOFJointTrajectoryPoint.transforms.begin()+pos+nbr_elems);
			return true;
		}
		return false;
	}
	inline void clearTransforms() { idl_Trajectory_msgs_MultiDOFJointTrajectoryPoint.transforms.clear(); }
	
	// getter and setter for element Velocities
	/**
	 * Getter methods for element idl_Trajectory_msgs_MultiDOFJointTrajectoryPoint.velocities of type vector<ROSCommon_msgs::Geometry_msgs_Twist>
	 */
	inline std::vector<ROSCommon_msgs::Geometry_msgs_Twist> getVelocitiesCopy() const { 
		return std::vector<ROSCommon_msgs::Geometry_msgs_Twist>(idl_Trajectory_msgs_MultiDOFJointTrajectoryPoint.velocities.begin(), idl_Trajectory_msgs_MultiDOFJointTrajectoryPoint.velocities.end());
	}
	inline ROSCommon_msgs::Geometry_msgs_Twist getVelocitiesElemAtPos(const size_t &pos) const {
		return ROSCommon_msgs::Geometry_msgs_Twist(idl_Trajectory_msgs_MultiDOFJointTrajectoryPoint.velocities[pos]);
	}
	inline size_t getVelocitiesSize() const { return idl_Trajectory_msgs_MultiDOFJointTrajectoryPoint.velocities.size(); }
	inline bool isVelocitiesEmpty() const { return idl_Trajectory_msgs_MultiDOFJointTrajectoryPoint.velocities.empty(); }
	/**
	 * Setter methods for idl_Trajectory_msgs_MultiDOFJointTrajectoryPoint.velocities of type vector<ROSCommon_msgs::Geometry_msgs_Twist>
	 */
	inline Trajectory_msgs_MultiDOFJointTrajectoryPointCore& setVelocities(const std::vector<ROSCommon_msgs::Geometry_msgs_Twist> &velocities) { 
		idl_Trajectory_msgs_MultiDOFJointTrajectoryPoint.velocities.assign(velocities.begin(), velocities.end());
		return *this;
	}
	inline bool setVelocitiesElemAtPos(const size_t &pos, const ROSCommon_msgs::Geometry_msgs_Twist &elem) {
		if(pos < idl_Trajectory_msgs_MultiDOFJointTrajectoryPoint.velocities.size()) {
			idl_Trajectory_msgs_MultiDOFJointTrajectoryPoint.velocities[pos] = elem;
			return true;
		}
		return false;
	}
	inline bool insertVelocitiesVectorAtPos(const size_t &pos, const std::vector<ROSCommon_msgs::Geometry_msgs_Twist> &data) {
		if(pos < idl_Trajectory_msgs_MultiDOFJointTrajectoryPoint.velocities.size()) {
			idl_Trajectory_msgs_MultiDOFJointTrajectoryPoint.velocities.insert(idl_Trajectory_msgs_MultiDOFJointTrajectoryPoint.velocities.begin()+pos, data.begin(), data.end());
			return true;
		}
		return false;
	}
	inline void resizeVelocities(const size_t &size) { idl_Trajectory_msgs_MultiDOFJointTrajectoryPoint.velocities.resize(size); }
	inline bool eraseVelocitiesElemsAtPos(const size_t &pos, const size_t &nbr_elems) {
		if( (pos+nbr_elems) <= idl_Trajectory_msgs_MultiDOFJointTrajectoryPoint.velocities.size() ) {
			idl_Trajectory_msgs_MultiDOFJointTrajectoryPoint.velocities.erase(idl_Trajectory_msgs_MultiDOFJointTrajectoryPoint.velocities.begin()+pos, idl_Trajectory_msgs_MultiDOFJointTrajectoryPoint.velocities.begin()+pos+nbr_elems);
			return true;
		}
		return false;
	}
	inline void clearVelocities() { idl_Trajectory_msgs_MultiDOFJointTrajectoryPoint.velocities.clear(); }
	
	// getter and setter for element Accelerations
	/**
	 * Getter methods for element idl_Trajectory_msgs_MultiDOFJointTrajectoryPoint.accelerations of type vector<ROSCommon_msgs::Geometry_msgs_Twist>
	 */
	inline std::vector<ROSCommon_msgs::Geometry_msgs_Twist> getAccelerationsCopy() const { 
		return std::vector<ROSCommon_msgs::Geometry_msgs_Twist>(idl_Trajectory_msgs_MultiDOFJointTrajectoryPoint.accelerations.begin(), idl_Trajectory_msgs_MultiDOFJointTrajectoryPoint.accelerations.end());
	}
	inline ROSCommon_msgs::Geometry_msgs_Twist getAccelerationsElemAtPos(const size_t &pos) const {
		return ROSCommon_msgs::Geometry_msgs_Twist(idl_Trajectory_msgs_MultiDOFJointTrajectoryPoint.accelerations[pos]);
	}
	inline size_t getAccelerationsSize() const { return idl_Trajectory_msgs_MultiDOFJointTrajectoryPoint.accelerations.size(); }
	inline bool isAccelerationsEmpty() const { return idl_Trajectory_msgs_MultiDOFJointTrajectoryPoint.accelerations.empty(); }
	/**
	 * Setter methods for idl_Trajectory_msgs_MultiDOFJointTrajectoryPoint.accelerations of type vector<ROSCommon_msgs::Geometry_msgs_Twist>
	 */
	inline Trajectory_msgs_MultiDOFJointTrajectoryPointCore& setAccelerations(const std::vector<ROSCommon_msgs::Geometry_msgs_Twist> &accelerations) { 
		idl_Trajectory_msgs_MultiDOFJointTrajectoryPoint.accelerations.assign(accelerations.begin(), accelerations.end());
		return *this;
	}
	inline bool setAccelerationsElemAtPos(const size_t &pos, const ROSCommon_msgs::Geometry_msgs_Twist &elem) {
		if(pos < idl_Trajectory_msgs_MultiDOFJointTrajectoryPoint.accelerations.size()) {
			idl_Trajectory_msgs_MultiDOFJointTrajectoryPoint.accelerations[pos] = elem;
			return true;
		}
		return false;
	}
	inline bool insertAccelerationsVectorAtPos(const size_t &pos, const std::vector<ROSCommon_msgs::Geometry_msgs_Twist> &data) {
		if(pos < idl_Trajectory_msgs_MultiDOFJointTrajectoryPoint.accelerations.size()) {
			idl_Trajectory_msgs_MultiDOFJointTrajectoryPoint.accelerations.insert(idl_Trajectory_msgs_MultiDOFJointTrajectoryPoint.accelerations.begin()+pos, data.begin(), data.end());
			return true;
		}
		return false;
	}
	inline void resizeAccelerations(const size_t &size) { idl_Trajectory_msgs_MultiDOFJointTrajectoryPoint.accelerations.resize(size); }
	inline bool eraseAccelerationsElemsAtPos(const size_t &pos, const size_t &nbr_elems) {
		if( (pos+nbr_elems) <= idl_Trajectory_msgs_MultiDOFJointTrajectoryPoint.accelerations.size() ) {
			idl_Trajectory_msgs_MultiDOFJointTrajectoryPoint.accelerations.erase(idl_Trajectory_msgs_MultiDOFJointTrajectoryPoint.accelerations.begin()+pos, idl_Trajectory_msgs_MultiDOFJointTrajectoryPoint.accelerations.begin()+pos+nbr_elems);
			return true;
		}
		return false;
	}
	inline void clearAccelerations() { idl_Trajectory_msgs_MultiDOFJointTrajectoryPoint.accelerations.clear(); }
	
	// getter and setter for element Time_from_start
	inline CommBasicObjects::CommTimeStamp getTime_from_start() const { return CommBasicObjects::CommTimeStamp(idl_Trajectory_msgs_MultiDOFJointTrajectoryPoint.time_from_start); }
	inline Trajectory_msgs_MultiDOFJointTrajectoryPointCore& setTime_from_start(const CommBasicObjects::CommTimeStamp &time_from_start) { idl_Trajectory_msgs_MultiDOFJointTrajectoryPoint.time_from_start = time_from_start; return *this; }
};

} /* namespace ROSCommon_msgs */
#endif /* ROSCOMMON_MSGS_TRAJECTORY_MSGS_MULTIDOFJOINTTRAJECTORYPOINT_CORE_H_ */