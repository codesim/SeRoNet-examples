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
#ifndef COMMBASICOBJECTS_COMMPOSITION3D_CORE_H_
#define COMMBASICOBJECTS_COMMPOSITION3D_CORE_H_

#include "CommBasicObjects/CommPosition3dData.hh"

#include <iostream>
#include <string>
#include <list>

namespace CommBasicObjects {
	
class CommPosition3dCore {
protected:
	// data structure
	CommBasicObjectsIDL::CommPosition3d idl_CommPosition3d;
	
public:
	// give a publicly accessible type-name for the template parameter IDL
	typedef CommBasicObjectsIDL::CommPosition3d DATATYPE;
	
	#ifdef ENABLE_HASH
		static size_t generateDataHash(const DATATYPE &);
	#endif
	
	static const char* getCompiledHash();
	static void getAllHashValues(std::list<std::string> &hashes);
	static void checkAllHashValues(std::list<std::string> &hashes);
	
	// default constructors
	CommPosition3dCore();
	CommPosition3dCore(const DATATYPE &data);
	// default destructor
	virtual ~CommPosition3dCore();
	
	const DATATYPE& get() const { return idl_CommPosition3d; }
	operator const DATATYPE&() const { return idl_CommPosition3d; }
	DATATYPE& set() { return idl_CommPosition3d; }

	static inline std::string identifier(void) { return "CommBasicObjects::CommPosition3d"; }
	
	// helper method to easily implement output stream in derived classes
	void to_ostream(std::ostream &os = std::cout) const;
	
	// convert to xml stream
	void to_xml(std::ostream &os, const std::string &indent = "") const;
	
	// restore from xml stream
	void from_xml(std::istream &is);
	
	// User Interface
	
	// getter and setter for element X
	inline double getX() const { return idl_CommPosition3d.x; }
	inline CommPosition3dCore& setX(const double &x) { idl_CommPosition3d.x = x; return *this; }
	
	// getter and setter for element Y
	inline double getY() const { return idl_CommPosition3d.y; }
	inline CommPosition3dCore& setY(const double &y) { idl_CommPosition3d.y = y; return *this; }
	
	// getter and setter for element Z
	inline double getZ() const { return idl_CommPosition3d.z; }
	inline CommPosition3dCore& setZ(const double &z) { idl_CommPosition3d.z = z; return *this; }
};

} /* namespace CommBasicObjects */
#endif /* COMMBASICOBJECTS_COMMPOSITION3D_CORE_H_ */