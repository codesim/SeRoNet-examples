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
#include "ROSCommon_msgs/Sensor_msgs_JoyFeedbackArrayCore.hh"

// serialization/deserialization operators
//#include "ROSCommon_msgs/Sensor_msgs_JoyFeedbackArrayACE.hh"

// include the hash.idl containing the hash constant
#include "hash.hh"
#include <assert.h>
#include <cstring>
#include <iostream>

// SmartUtils used in from_xml method
#include "smartKnuthMorrisPratt.hh"

#ifdef ENABLE_HASH
	#include <boost/functional/hash.hpp>
#endif

namespace ROSCommon_msgs 
{
	const char* Sensor_msgs_JoyFeedbackArrayCore::getCompiledHash()
	{
		return ROSCommon_msgsIDL::REPO_HASH;
	}
	
	void Sensor_msgs_JoyFeedbackArrayCore::getAllHashValues(std::list<std::string> &hashes)
	{
		// get own hash value
		hashes.push_back(getCompiledHash());
		// get hash value(s) for ROSCommon_msgs::Sensor_msgs_JoyFeedback(idl_Sensor_msgs_JoyFeedbackArray.array)
		ROSCommon_msgs::Sensor_msgs_JoyFeedback::getAllHashValues(hashes);
	}
	
	void Sensor_msgs_JoyFeedbackArrayCore::checkAllHashValues(std::list<std::string> &hashes)
	{
		// check own hash value
		if (strcmp(getCompiledHash(), hashes.front().c_str()) != 0)
		{
			std::cerr << "###################################################" << std::endl;
			std::cerr << "WARNING: HASHES OF COMMUNICATION OBJECTS MISSMATCH!" << std::endl;
			std::cerr << "Sensor_msgs_JoyFeedbackArrayCore hash" << std::endl;
			std::cerr << "Expected: " << getCompiledHash() << std::endl;
			std::cerr << "Received: " << hashes.front() << std::endl;
			std::cerr << "###################################################" << std::endl;
		}
		assert(strcmp(getCompiledHash(), hashes.front().c_str()) == 0);
		hashes.pop_front();
		
		// check hash value(s) for ROSCommon_msgs::Sensor_msgs_JoyFeedback(idl_Sensor_msgs_JoyFeedbackArray.array)
		ROSCommon_msgs::Sensor_msgs_JoyFeedback::checkAllHashValues(hashes);
	}
	
	#ifdef ENABLE_HASH
	size_t Sensor_msgs_JoyFeedbackArrayCore::generateDataHash(const DATATYPE &data)
	{
		size_t seed = 0;
		
		std::vector<ROSCommon_msgsIDL::Sensor_msgs_JoyFeedback>::const_iterator data_arrayIt;
		for(data_arrayIt=data.array.begin(); data_arrayIt!=data.array.end(); data_arrayIt++) {
			seed += ROSCommon_msgs::Sensor_msgs_JoyFeedback::generateDataHash(*data_arrayIt);
		}
		
		return seed;
	}
	#endif
	
	// default constructor
	Sensor_msgs_JoyFeedbackArrayCore::Sensor_msgs_JoyFeedbackArrayCore()
	:	idl_Sensor_msgs_JoyFeedbackArray()
	{  
		setArray(std::vector<ROSCommon_msgs::Sensor_msgs_JoyFeedback>());
	}
	
	Sensor_msgs_JoyFeedbackArrayCore::Sensor_msgs_JoyFeedbackArrayCore(const DATATYPE &data)
	:	idl_Sensor_msgs_JoyFeedbackArray(data)
	{  }

	Sensor_msgs_JoyFeedbackArrayCore::~Sensor_msgs_JoyFeedbackArrayCore()
	{  }
	
	void Sensor_msgs_JoyFeedbackArrayCore::to_ostream(std::ostream &os) const
	{
	  os << "Sensor_msgs_JoyFeedbackArray(";
	  std::vector<ROSCommon_msgs::Sensor_msgs_JoyFeedback>::const_iterator arrayIt;
	  std::vector<ROSCommon_msgs::Sensor_msgs_JoyFeedback> arrayList = getArrayCopy();
	  for(arrayIt=arrayList.begin(); arrayIt!=arrayList.end(); arrayIt++) {
	  	arrayIt->to_ostream(os);
	  }
	  os << ") ";
	}
	
	// convert to xml stream
	void Sensor_msgs_JoyFeedbackArrayCore::to_xml(std::ostream &os, const std::string &indent) const {
		size_t counter = 0;
		
		std::vector<ROSCommon_msgs::Sensor_msgs_JoyFeedback>::const_iterator arrayIt;
		std::vector<ROSCommon_msgs::Sensor_msgs_JoyFeedback> arrayList = getArrayCopy();
		counter = 0;
		os << indent << "<arrayList n=\"" << arrayList.size() << "\">";
		for(arrayIt=arrayList.begin(); arrayIt!=arrayList.end(); arrayIt++) {
			os << indent << "<array i=\"" << counter++ << "\">";
			arrayIt->to_xml(os, indent);
			os << indent << "</array>";
		}
		os << indent << "</arrayList>";
	}
	
	// restore from xml stream
	void Sensor_msgs_JoyFeedbackArrayCore::from_xml(std::istream &is) {
		size_t counter = 0;
		
		static const Smart::KnuthMorrisPratt kmp_arrayList("<arrayList n=\"");
		static const Smart::KnuthMorrisPratt kmp_array("\">");
		
		if(kmp_arrayList.search(is)) {
			size_t numberElements;
			is >> numberElements;
			ROSCommon_msgs::Sensor_msgs_JoyFeedback arrayItem;
			std::vector<ROSCommon_msgs::Sensor_msgs_JoyFeedback> arrayList;
			kmp_array.search(is);
			for(counter=0; counter<numberElements; counter++) {
				if(kmp_array.search(is)) {
					arrayItem.from_xml(is);
					arrayList.push_back(arrayItem);
				}
			}
			setArray(arrayList);
		}
	}
	
	/*
	void Sensor_msgs_JoyFeedbackArrayCore::get(ACE_Message_Block *&msg) const
	{
		// start with a default internal buffer size(will automatically grow if needed)
		ACE_OutputCDR cdr(ACE_DEFAULT_CDR_BUFSIZE);
		
		ROSCommon_msgsIDL::HashList hashes;
		getAllHashValues(hashes);
		cdr << static_cast<ACE_CDR::Long>(hashes.size());
		for(ROSCommon_msgsIDL::HashList::const_iterator it=hashes.begin(); it!=hashes.end(); it++)
		{
			cdr << ACE_CString(it->c_str());
		}
		
		// Here the actual serialization takes place using the OutputCDR serialization operator<<
		// (see Sensor_msgs_JoyFeedbackArrayACE.hh)
		cdr << idl_Sensor_msgs_JoyFeedbackArray;
		
	#ifdef ENABLE_HASH
		ACE_CDR::ULong data_hash = generateDataHash(idl_Sensor_msgs_JoyFeedbackArray);
		cdr << data_hash;
		// std::cout << "Sensor_msgs_JoyFeedbackArrayCore: current data hash: " << data_hash << std::endl;
	#endif
		
		// return a shallow copy of the serialized message 
		// (no data is actually copied, only the internal reference counter is incremented)
		// in order to prevent memory leaks the caller of this get(msg) method must
		// manually free the memory by calling the release() method of the message block msg
		msg = cdr.begin()->duplicate();
	}
	
	void Sensor_msgs_JoyFeedbackArrayCore::set(const ACE_Message_Block *msg)
	{
		ACE_InputCDR cdr(msg);
	
		ROSCommon_msgsIDL::HashList hashes;
		ACE_CDR::Long hashes_size;
		cdr >> hashes_size;
		for(int i=0; i<hashes_size; ++i) 
		{
			ACE_CString hash;
			cdr >> hash;
			hashes.push_back(hash.c_str());
		}
		checkAllHashValues(hashes);
		
		// Here the actual de-serialization takes place using the InputCDR serialization operator>>
		// (see Sensor_msgs_JoyFeedbackArrayACE.hh)
		cdr >> idl_Sensor_msgs_JoyFeedbackArray;
		
	#ifdef ENABLE_HASH
		ACE_CDR::Long data_hash;
		cdr >> data_hash;
		ACE_CDR::Long own_hash = generateDataHash(idl_Sensor_msgs_JoyFeedbackArray);
		assert(data_hash == own_hash);
		// std::cout << "Sensor_msgs_JoyFeedbackArrayCore: own data hash: " << own_hash << "; received data hash: " << data_hash << std::endl;
	#endif
	}
	*/
} /* namespace ROSCommon_msgs */
