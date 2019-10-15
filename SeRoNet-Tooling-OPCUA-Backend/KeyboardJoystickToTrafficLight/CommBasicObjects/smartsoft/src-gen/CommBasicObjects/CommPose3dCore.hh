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
#ifndef COMMBASICOBJECTS_COMMPOSE3D_CORE_H_
#define COMMBASICOBJECTS_COMMPOSE3D_CORE_H_

#include "CommBasicObjects/CommPose3dData.hh"
#include "CommBasicObjects/CommOrientation3d.hh"
#include "CommBasicObjects/CommPosition3d.hh"

#include <iostream>
#include <string>
#include <list>

namespace CommBasicObjects {
	
class CommPose3dCore {
protected:
	// data structure
	CommBasicObjectsIDL::CommPose3d idl_CommPose3d;
	
public:
	// give a publicly accessible type-name for the template parameter IDL
	typedef CommBasicObjectsIDL::CommPose3d DATATYPE;
	
	#ifdef ENABLE_HASH
		static size_t generateDataHash(const DATATYPE &);
	#endif
	
	static const char* getCompiledHash();
	static void getAllHashValues(std::list<std::string> &hashes);
	static void checkAllHashValues(std::list<std::string> &hashes);
	
	// default constructors
	CommPose3dCore();
	CommPose3dCore(const DATATYPE &data);
	// default destructor
	virtual ~CommPose3dCore();
	
	const DATATYPE& get() const { return idl_CommPose3d; }
	operator const DATATYPE&() const { return idl_CommPose3d; }
	DATATYPE& set() { return idl_CommPose3d; }

	static inline std::string identifier(void) { return "CommBasicObjects::CommPose3d"; }
	
	// helper method to easily implement output stream in derived classes
	void to_ostream(std::ostream &os = std::cout) const;
	
	// convert to xml stream
	void to_xml(std::ostream &os, const std::string &indent = "") const;
	
	// restore from xml stream
	void from_xml(std::istream &is);
	
	// User Interface
	
	// getter and setter for element Position
	inline CommBasicObjects::CommPosition3d getPosition() const { return CommBasicObjects::CommPosition3d(idl_CommPose3d.position); }
	inline CommPose3dCore& setPosition(const CommBasicObjects::CommPosition3d &position) { idl_CommPose3d.position = position; return *this; }
	
	// getter and setter for element Orientation
	inline CommBasicObjects::CommOrientation3d getOrientation() const { return CommBasicObjects::CommOrientation3d(idl_CommPose3d.orientation); }
	inline CommPose3dCore& setOrientation(const CommBasicObjects::CommOrientation3d &orientation) { idl_CommPose3d.orientation = orientation; return *this; }
};

} /* namespace CommBasicObjects */
#endif /* COMMBASICOBJECTS_COMMPOSE3D_CORE_H_ */