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
#ifndef ROSCOMMON_MSGS_SENSOR_MSGS_IMU_CORE_H_
#define ROSCOMMON_MSGS_SENSOR_MSGS_IMU_CORE_H_

#include "ROSCommon_msgs/Sensor_msgs_ImuData.hh"
#include "ROSCommon_msgs/Geometry_msgs_Quaternion.hh"
#include "ROSCommon_msgs/Geometry_msgs_Vector3.hh"
#include "ROSRos_core/Std_msgs_Header.hh"

#include <iostream>
#include <string>
#include <list>

namespace ROSCommon_msgs {
	
class Sensor_msgs_ImuCore {
protected:
	// data structure
	ROSCommon_msgsIDL::Sensor_msgs_Imu idl_Sensor_msgs_Imu;
	
public:
	// give a publicly accessible type-name for the template parameter IDL
	typedef ROSCommon_msgsIDL::Sensor_msgs_Imu DATATYPE;
	
	#ifdef ENABLE_HASH
		static size_t generateDataHash(const DATATYPE &);
	#endif
	
	static const char* getCompiledHash();
	static void getAllHashValues(std::list<std::string> &hashes);
	static void checkAllHashValues(std::list<std::string> &hashes);
	
	// default constructors
	Sensor_msgs_ImuCore();
	Sensor_msgs_ImuCore(const DATATYPE &data);
	// default destructor
	virtual ~Sensor_msgs_ImuCore();
	
	const DATATYPE& get() const { return idl_Sensor_msgs_Imu; }
	operator const DATATYPE&() const { return idl_Sensor_msgs_Imu; }
	DATATYPE& set() { return idl_Sensor_msgs_Imu; }

	static inline std::string identifier(void) { return "ROSCommon_msgs::Sensor_msgs_Imu"; }
	
	// helper method to easily implement output stream in derived classes
	void to_ostream(std::ostream &os = std::cout) const;
	
	// convert to xml stream
	void to_xml(std::ostream &os, const std::string &indent = "") const;
	
	// restore from xml stream
	void from_xml(std::istream &is);
	
	// User Interface
	
	// getter and setter for element Header
	inline ROSRos_core::Std_msgs_Header getHeader() const { return ROSRos_core::Std_msgs_Header(idl_Sensor_msgs_Imu.header); }
	inline Sensor_msgs_ImuCore& setHeader(const ROSRos_core::Std_msgs_Header &header) { idl_Sensor_msgs_Imu.header = header; return *this; }
	
	// getter and setter for element Orientation
	inline ROSCommon_msgs::Geometry_msgs_Quaternion getOrientation() const { return ROSCommon_msgs::Geometry_msgs_Quaternion(idl_Sensor_msgs_Imu.orientation); }
	inline Sensor_msgs_ImuCore& setOrientation(const ROSCommon_msgs::Geometry_msgs_Quaternion &orientation) { idl_Sensor_msgs_Imu.orientation = orientation; return *this; }
	
	// getter and setter for element Orientation_covariance
	/**
	 * Getter methods for idl_Sensor_msgs_Imu.orientation_covariance of type vector<double>
	 */
	inline std::vector<double>& getOrientation_covarianceRef() { return idl_Sensor_msgs_Imu.orientation_covariance; }
	inline std::vector<double> getOrientation_covarianceCopy() const {
		return std::vector<double>(idl_Sensor_msgs_Imu.orientation_covariance.begin(), idl_Sensor_msgs_Imu.orientation_covariance.end());
	}
	inline double getOrientation_covarianceElemAtPos(const size_t &pos) const { return idl_Sensor_msgs_Imu.orientation_covariance[pos]; }
	inline size_t getOrientation_covarianceSize() const { return idl_Sensor_msgs_Imu.orientation_covariance.size(); }
	inline bool isOrientation_covarianceEmpty() const { return idl_Sensor_msgs_Imu.orientation_covariance.empty(); }
	/**
	 * Setter methods for idl_Sensor_msgs_Imu.orientation_covariance of type vector<double>
	 */
	inline Sensor_msgs_ImuCore& setOrientation_covariance(const std::vector<double> &orientation_covariance) { idl_Sensor_msgs_Imu.orientation_covariance = orientation_covariance; return *this; }
	inline bool setOrientation_covarianceElemAtPos(const size_t &pos, const double &elem) {
		if(pos < idl_Sensor_msgs_Imu.orientation_covariance.size()) {
			idl_Sensor_msgs_Imu.orientation_covariance[pos] = elem;
			return true;
		}
		return false;
	}
	inline bool insertOrientation_covarianceVectorAtPos(const size_t &pos, const std::vector<double> &data) {
		if(pos < idl_Sensor_msgs_Imu.orientation_covariance.size()) {
			idl_Sensor_msgs_Imu.orientation_covariance.insert(idl_Sensor_msgs_Imu.orientation_covariance.begin()+pos, data.begin(), data.end());
			return true;
		}
		return false;
	}
	inline void resizeOrientation_covariance(const size_t &size) { idl_Sensor_msgs_Imu.orientation_covariance.resize(size); }
	inline bool eraseOrientation_covarianceElemsAtPos(const size_t &pos, const size_t &nbr_elems) {
		if( (pos+nbr_elems) <= idl_Sensor_msgs_Imu.orientation_covariance.size() ) {
			idl_Sensor_msgs_Imu.orientation_covariance.erase(idl_Sensor_msgs_Imu.orientation_covariance.begin()+pos, idl_Sensor_msgs_Imu.orientation_covariance.begin()+pos+nbr_elems);
			return true;
		}
		return false;
	}
	inline void clearOrientation_covariance() { idl_Sensor_msgs_Imu.orientation_covariance.clear(); }
	
	// getter and setter for element Angular_velocity
	inline ROSCommon_msgs::Geometry_msgs_Vector3 getAngular_velocity() const { return ROSCommon_msgs::Geometry_msgs_Vector3(idl_Sensor_msgs_Imu.angular_velocity); }
	inline Sensor_msgs_ImuCore& setAngular_velocity(const ROSCommon_msgs::Geometry_msgs_Vector3 &angular_velocity) { idl_Sensor_msgs_Imu.angular_velocity = angular_velocity; return *this; }
	
	// getter and setter for element Angular_velocity_covariance
	/**
	 * Getter methods for idl_Sensor_msgs_Imu.angular_velocity_covariance of type vector<double>
	 */
	inline std::vector<double>& getAngular_velocity_covarianceRef() { return idl_Sensor_msgs_Imu.angular_velocity_covariance; }
	inline std::vector<double> getAngular_velocity_covarianceCopy() const {
		return std::vector<double>(idl_Sensor_msgs_Imu.angular_velocity_covariance.begin(), idl_Sensor_msgs_Imu.angular_velocity_covariance.end());
	}
	inline double getAngular_velocity_covarianceElemAtPos(const size_t &pos) const { return idl_Sensor_msgs_Imu.angular_velocity_covariance[pos]; }
	inline size_t getAngular_velocity_covarianceSize() const { return idl_Sensor_msgs_Imu.angular_velocity_covariance.size(); }
	inline bool isAngular_velocity_covarianceEmpty() const { return idl_Sensor_msgs_Imu.angular_velocity_covariance.empty(); }
	/**
	 * Setter methods for idl_Sensor_msgs_Imu.angular_velocity_covariance of type vector<double>
	 */
	inline Sensor_msgs_ImuCore& setAngular_velocity_covariance(const std::vector<double> &angular_velocity_covariance) { idl_Sensor_msgs_Imu.angular_velocity_covariance = angular_velocity_covariance; return *this; }
	inline bool setAngular_velocity_covarianceElemAtPos(const size_t &pos, const double &elem) {
		if(pos < idl_Sensor_msgs_Imu.angular_velocity_covariance.size()) {
			idl_Sensor_msgs_Imu.angular_velocity_covariance[pos] = elem;
			return true;
		}
		return false;
	}
	inline bool insertAngular_velocity_covarianceVectorAtPos(const size_t &pos, const std::vector<double> &data) {
		if(pos < idl_Sensor_msgs_Imu.angular_velocity_covariance.size()) {
			idl_Sensor_msgs_Imu.angular_velocity_covariance.insert(idl_Sensor_msgs_Imu.angular_velocity_covariance.begin()+pos, data.begin(), data.end());
			return true;
		}
		return false;
	}
	inline void resizeAngular_velocity_covariance(const size_t &size) { idl_Sensor_msgs_Imu.angular_velocity_covariance.resize(size); }
	inline bool eraseAngular_velocity_covarianceElemsAtPos(const size_t &pos, const size_t &nbr_elems) {
		if( (pos+nbr_elems) <= idl_Sensor_msgs_Imu.angular_velocity_covariance.size() ) {
			idl_Sensor_msgs_Imu.angular_velocity_covariance.erase(idl_Sensor_msgs_Imu.angular_velocity_covariance.begin()+pos, idl_Sensor_msgs_Imu.angular_velocity_covariance.begin()+pos+nbr_elems);
			return true;
		}
		return false;
	}
	inline void clearAngular_velocity_covariance() { idl_Sensor_msgs_Imu.angular_velocity_covariance.clear(); }
	
	// getter and setter for element Linear_acceleration
	inline ROSCommon_msgs::Geometry_msgs_Vector3 getLinear_acceleration() const { return ROSCommon_msgs::Geometry_msgs_Vector3(idl_Sensor_msgs_Imu.linear_acceleration); }
	inline Sensor_msgs_ImuCore& setLinear_acceleration(const ROSCommon_msgs::Geometry_msgs_Vector3 &linear_acceleration) { idl_Sensor_msgs_Imu.linear_acceleration = linear_acceleration; return *this; }
	
	// getter and setter for element Linear_acceleration_covariance
	/**
	 * Getter methods for idl_Sensor_msgs_Imu.linear_acceleration_covariance of type vector<double>
	 */
	inline std::vector<double>& getLinear_acceleration_covarianceRef() { return idl_Sensor_msgs_Imu.linear_acceleration_covariance; }
	inline std::vector<double> getLinear_acceleration_covarianceCopy() const {
		return std::vector<double>(idl_Sensor_msgs_Imu.linear_acceleration_covariance.begin(), idl_Sensor_msgs_Imu.linear_acceleration_covariance.end());
	}
	inline double getLinear_acceleration_covarianceElemAtPos(const size_t &pos) const { return idl_Sensor_msgs_Imu.linear_acceleration_covariance[pos]; }
	inline size_t getLinear_acceleration_covarianceSize() const { return idl_Sensor_msgs_Imu.linear_acceleration_covariance.size(); }
	inline bool isLinear_acceleration_covarianceEmpty() const { return idl_Sensor_msgs_Imu.linear_acceleration_covariance.empty(); }
	/**
	 * Setter methods for idl_Sensor_msgs_Imu.linear_acceleration_covariance of type vector<double>
	 */
	inline Sensor_msgs_ImuCore& setLinear_acceleration_covariance(const std::vector<double> &linear_acceleration_covariance) { idl_Sensor_msgs_Imu.linear_acceleration_covariance = linear_acceleration_covariance; return *this; }
	inline bool setLinear_acceleration_covarianceElemAtPos(const size_t &pos, const double &elem) {
		if(pos < idl_Sensor_msgs_Imu.linear_acceleration_covariance.size()) {
			idl_Sensor_msgs_Imu.linear_acceleration_covariance[pos] = elem;
			return true;
		}
		return false;
	}
	inline bool insertLinear_acceleration_covarianceVectorAtPos(const size_t &pos, const std::vector<double> &data) {
		if(pos < idl_Sensor_msgs_Imu.linear_acceleration_covariance.size()) {
			idl_Sensor_msgs_Imu.linear_acceleration_covariance.insert(idl_Sensor_msgs_Imu.linear_acceleration_covariance.begin()+pos, data.begin(), data.end());
			return true;
		}
		return false;
	}
	inline void resizeLinear_acceleration_covariance(const size_t &size) { idl_Sensor_msgs_Imu.linear_acceleration_covariance.resize(size); }
	inline bool eraseLinear_acceleration_covarianceElemsAtPos(const size_t &pos, const size_t &nbr_elems) {
		if( (pos+nbr_elems) <= idl_Sensor_msgs_Imu.linear_acceleration_covariance.size() ) {
			idl_Sensor_msgs_Imu.linear_acceleration_covariance.erase(idl_Sensor_msgs_Imu.linear_acceleration_covariance.begin()+pos, idl_Sensor_msgs_Imu.linear_acceleration_covariance.begin()+pos+nbr_elems);
			return true;
		}
		return false;
	}
	inline void clearLinear_acceleration_covariance() { idl_Sensor_msgs_Imu.linear_acceleration_covariance.clear(); }
};

} /* namespace ROSCommon_msgs */
#endif /* ROSCOMMON_MSGS_SENSOR_MSGS_IMU_CORE_H_ */