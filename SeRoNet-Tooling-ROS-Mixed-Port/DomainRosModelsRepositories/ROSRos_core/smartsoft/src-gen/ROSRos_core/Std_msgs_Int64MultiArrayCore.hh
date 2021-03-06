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
#ifndef ROSROS_CORE_STD_MSGS_INT64MULTIARRAY_CORE_H_
#define ROSROS_CORE_STD_MSGS_INT64MULTIARRAY_CORE_H_

#include "ROSRos_core/Std_msgs_Int64MultiArrayData.hh"
#include "ROSRos_core/Std_msgs_MultiArrayLayout.hh"

#include <iostream>
#include <string>
#include <list>

namespace ROSRos_core {
	
class Std_msgs_Int64MultiArrayCore {
protected:
	// data structure
	ROSRos_coreIDL::Std_msgs_Int64MultiArray idl_Std_msgs_Int64MultiArray;
	
public:
	// give a publicly accessible type-name for the template parameter IDL
	typedef ROSRos_coreIDL::Std_msgs_Int64MultiArray DATATYPE;
	
	#ifdef ENABLE_HASH
		static size_t generateDataHash(const DATATYPE &);
	#endif
	
	static const char* getCompiledHash();
	static void getAllHashValues(std::list<std::string> &hashes);
	static void checkAllHashValues(std::list<std::string> &hashes);
	
	// default constructors
	Std_msgs_Int64MultiArrayCore();
	Std_msgs_Int64MultiArrayCore(const DATATYPE &data);
	// default destructor
	virtual ~Std_msgs_Int64MultiArrayCore();
	
	const DATATYPE& get() const { return idl_Std_msgs_Int64MultiArray; }
	operator const DATATYPE&() const { return idl_Std_msgs_Int64MultiArray; }
	DATATYPE& set() { return idl_Std_msgs_Int64MultiArray; }

	static inline std::string identifier(void) { return "ROSRos_core::Std_msgs_Int64MultiArray"; }
	
	// helper method to easily implement output stream in derived classes
	void to_ostream(std::ostream &os = std::cout) const;
	
	// convert to xml stream
	void to_xml(std::ostream &os, const std::string &indent = "") const;
	
	// restore from xml stream
	void from_xml(std::istream &is);
	
	// User Interface
	
	// getter and setter for element Layout
	inline ROSRos_core::Std_msgs_MultiArrayLayout getLayout() const { return ROSRos_core::Std_msgs_MultiArrayLayout(idl_Std_msgs_Int64MultiArray.layout); }
	inline Std_msgs_Int64MultiArrayCore& setLayout(const ROSRos_core::Std_msgs_MultiArrayLayout &layout) { idl_Std_msgs_Int64MultiArray.layout = layout; return *this; }
	
	// getter and setter for element Data
	/**
	 * Getter methods for idl_Std_msgs_Int64MultiArray.data of type vector<long int>
	 */
	inline std::vector<long int>& getDataRef() { return idl_Std_msgs_Int64MultiArray.data; }
	inline std::vector<long int> getDataCopy() const {
		return std::vector<long int>(idl_Std_msgs_Int64MultiArray.data.begin(), idl_Std_msgs_Int64MultiArray.data.end());
	}
	inline long int getDataElemAtPos(const size_t &pos) const { return idl_Std_msgs_Int64MultiArray.data[pos]; }
	inline size_t getDataSize() const { return idl_Std_msgs_Int64MultiArray.data.size(); }
	inline bool isDataEmpty() const { return idl_Std_msgs_Int64MultiArray.data.empty(); }
	/**
	 * Setter methods for idl_Std_msgs_Int64MultiArray.data of type vector<long int>
	 */
	inline Std_msgs_Int64MultiArrayCore& setData(const std::vector<long int> &data) { idl_Std_msgs_Int64MultiArray.data = data; return *this; }
	inline bool setDataElemAtPos(const size_t &pos, const long int &elem) {
		if(pos < idl_Std_msgs_Int64MultiArray.data.size()) {
			idl_Std_msgs_Int64MultiArray.data[pos] = elem;
			return true;
		}
		return false;
	}
	inline bool insertDataVectorAtPos(const size_t &pos, const std::vector<long int> &data) {
		if(pos < idl_Std_msgs_Int64MultiArray.data.size()) {
			idl_Std_msgs_Int64MultiArray.data.insert(idl_Std_msgs_Int64MultiArray.data.begin()+pos, data.begin(), data.end());
			return true;
		}
		return false;
	}
	inline void resizeData(const size_t &size) { idl_Std_msgs_Int64MultiArray.data.resize(size); }
	inline bool eraseDataElemsAtPos(const size_t &pos, const size_t &nbr_elems) {
		if( (pos+nbr_elems) <= idl_Std_msgs_Int64MultiArray.data.size() ) {
			idl_Std_msgs_Int64MultiArray.data.erase(idl_Std_msgs_Int64MultiArray.data.begin()+pos, idl_Std_msgs_Int64MultiArray.data.begin()+pos+nbr_elems);
			return true;
		}
		return false;
	}
	inline void clearData() { idl_Std_msgs_Int64MultiArray.data.clear(); }
};

} /* namespace ROSRos_core */
#endif /* ROSROS_CORE_STD_MSGS_INT64MULTIARRAY_CORE_H_ */
