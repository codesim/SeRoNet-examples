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
#ifndef ROSCOMMON_MSGS_SHAPE_MSGS_SOLIDPRIMITIVE_CORE_H_
#define ROSCOMMON_MSGS_SHAPE_MSGS_SOLIDPRIMITIVE_CORE_H_

#include "ROSCommon_msgs/Shape_msgs_SolidPrimitiveData.hh"

#include <iostream>
#include <string>
#include <list>

namespace ROSCommon_msgs {
	
class Shape_msgs_SolidPrimitiveCore {
protected:
	// data structure
	ROSCommon_msgsIDL::Shape_msgs_SolidPrimitive idl_Shape_msgs_SolidPrimitive;
	
public:
	// give a publicly accessible type-name for the template parameter IDL
	typedef ROSCommon_msgsIDL::Shape_msgs_SolidPrimitive DATATYPE;
	
	#ifdef ENABLE_HASH
		static size_t generateDataHash(const DATATYPE &);
	#endif
	
	static const char* getCompiledHash();
	static void getAllHashValues(std::list<std::string> &hashes);
	static void checkAllHashValues(std::list<std::string> &hashes);
	
	// default constructors
	Shape_msgs_SolidPrimitiveCore();
	Shape_msgs_SolidPrimitiveCore(const DATATYPE &data);
	// default destructor
	virtual ~Shape_msgs_SolidPrimitiveCore();
	
	const DATATYPE& get() const { return idl_Shape_msgs_SolidPrimitive; }
	operator const DATATYPE&() const { return idl_Shape_msgs_SolidPrimitive; }
	DATATYPE& set() { return idl_Shape_msgs_SolidPrimitive; }

	static inline std::string identifier(void) { return "ROSCommon_msgs::Shape_msgs_SolidPrimitive"; }
	
	// helper method to easily implement output stream in derived classes
	void to_ostream(std::ostream &os = std::cout) const;
	
	// convert to xml stream
	void to_xml(std::ostream &os, const std::string &indent = "") const;
	
	// restore from xml stream
	void from_xml(std::istream &is);
	
	// User Interface
	
	// getter and setter for element Type
	inline unsigned char getType() const { return idl_Shape_msgs_SolidPrimitive.type; }
	inline Shape_msgs_SolidPrimitiveCore& setType(const unsigned char &type) { idl_Shape_msgs_SolidPrimitive.type = type; return *this; }
	
	// getter and setter for element Dimensions
	/**
	 * Getter methods for idl_Shape_msgs_SolidPrimitive.dimensions of type vector<double>
	 */
	inline std::vector<double>& getDimensionsRef() { return idl_Shape_msgs_SolidPrimitive.dimensions; }
	inline std::vector<double> getDimensionsCopy() const {
		return std::vector<double>(idl_Shape_msgs_SolidPrimitive.dimensions.begin(), idl_Shape_msgs_SolidPrimitive.dimensions.end());
	}
	inline double getDimensionsElemAtPos(const size_t &pos) const { return idl_Shape_msgs_SolidPrimitive.dimensions[pos]; }
	inline size_t getDimensionsSize() const { return idl_Shape_msgs_SolidPrimitive.dimensions.size(); }
	inline bool isDimensionsEmpty() const { return idl_Shape_msgs_SolidPrimitive.dimensions.empty(); }
	/**
	 * Setter methods for idl_Shape_msgs_SolidPrimitive.dimensions of type vector<double>
	 */
	inline Shape_msgs_SolidPrimitiveCore& setDimensions(const std::vector<double> &dimensions) { idl_Shape_msgs_SolidPrimitive.dimensions = dimensions; return *this; }
	inline bool setDimensionsElemAtPos(const size_t &pos, const double &elem) {
		if(pos < idl_Shape_msgs_SolidPrimitive.dimensions.size()) {
			idl_Shape_msgs_SolidPrimitive.dimensions[pos] = elem;
			return true;
		}
		return false;
	}
	inline bool insertDimensionsVectorAtPos(const size_t &pos, const std::vector<double> &data) {
		if(pos < idl_Shape_msgs_SolidPrimitive.dimensions.size()) {
			idl_Shape_msgs_SolidPrimitive.dimensions.insert(idl_Shape_msgs_SolidPrimitive.dimensions.begin()+pos, data.begin(), data.end());
			return true;
		}
		return false;
	}
	inline void resizeDimensions(const size_t &size) { idl_Shape_msgs_SolidPrimitive.dimensions.resize(size); }
	inline bool eraseDimensionsElemsAtPos(const size_t &pos, const size_t &nbr_elems) {
		if( (pos+nbr_elems) <= idl_Shape_msgs_SolidPrimitive.dimensions.size() ) {
			idl_Shape_msgs_SolidPrimitive.dimensions.erase(idl_Shape_msgs_SolidPrimitive.dimensions.begin()+pos, idl_Shape_msgs_SolidPrimitive.dimensions.begin()+pos+nbr_elems);
			return true;
		}
		return false;
	}
	inline void clearDimensions() { idl_Shape_msgs_SolidPrimitive.dimensions.clear(); }
};

} /* namespace ROSCommon_msgs */
#endif /* ROSCOMMON_MSGS_SHAPE_MSGS_SOLIDPRIMITIVE_CORE_H_ */