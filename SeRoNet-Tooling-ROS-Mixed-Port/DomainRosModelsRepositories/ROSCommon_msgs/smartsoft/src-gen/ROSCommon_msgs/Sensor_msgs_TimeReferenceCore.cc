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
#include "ROSCommon_msgs/Sensor_msgs_TimeReferenceCore.hh"

// serialization/deserialization operators
//#include "ROSCommon_msgs/Sensor_msgs_TimeReferenceACE.hh"

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
	const char* Sensor_msgs_TimeReferenceCore::getCompiledHash()
	{
		return ROSCommon_msgsIDL::REPO_HASH;
	}
	
	void Sensor_msgs_TimeReferenceCore::getAllHashValues(std::list<std::string> &hashes)
	{
		// get own hash value
		hashes.push_back(getCompiledHash());
		// get hash value(s) for ROSRos_core::Std_msgs_Header(idl_Sensor_msgs_TimeReference.header)
		ROSRos_core::Std_msgs_Header::getAllHashValues(hashes);
		// get hash value(s) for CommBasicObjects::CommTimeStamp(idl_Sensor_msgs_TimeReference.time_ref)
		CommBasicObjects::CommTimeStamp::getAllHashValues(hashes);
	}
	
	void Sensor_msgs_TimeReferenceCore::checkAllHashValues(std::list<std::string> &hashes)
	{
		// check own hash value
		if (strcmp(getCompiledHash(), hashes.front().c_str()) != 0)
		{
			std::cerr << "###################################################" << std::endl;
			std::cerr << "WARNING: HASHES OF COMMUNICATION OBJECTS MISSMATCH!" << std::endl;
			std::cerr << "Sensor_msgs_TimeReferenceCore hash" << std::endl;
			std::cerr << "Expected: " << getCompiledHash() << std::endl;
			std::cerr << "Received: " << hashes.front() << std::endl;
			std::cerr << "###################################################" << std::endl;
		}
		assert(strcmp(getCompiledHash(), hashes.front().c_str()) == 0);
		hashes.pop_front();
		
		// check hash value(s) for ROSRos_core::Std_msgs_Header(idl_Sensor_msgs_TimeReference.header)
		ROSRos_core::Std_msgs_Header::checkAllHashValues(hashes);
		// check hash value(s) for CommBasicObjects::CommTimeStamp(idl_Sensor_msgs_TimeReference.time_ref)
		CommBasicObjects::CommTimeStamp::checkAllHashValues(hashes);
	}
	
	#ifdef ENABLE_HASH
	size_t Sensor_msgs_TimeReferenceCore::generateDataHash(const DATATYPE &data)
	{
		size_t seed = 0;
		
		seed += ROSRos_core::Std_msgs_Header::generateDataHash(data.header);
		seed += CommBasicObjects::CommTimeStamp::generateDataHash(data.time_ref);
		boost::hash_combine(seed, std::string(data.source.c_str()));
		
		return seed;
	}
	#endif
	
	// default constructor
	Sensor_msgs_TimeReferenceCore::Sensor_msgs_TimeReferenceCore()
	:	idl_Sensor_msgs_TimeReference()
	{  
		setHeader(ROSRos_core::Std_msgs_Header());
		setTime_ref(CommBasicObjects::CommTimeStamp());
		setSource("");
	}
	
	Sensor_msgs_TimeReferenceCore::Sensor_msgs_TimeReferenceCore(const DATATYPE &data)
	:	idl_Sensor_msgs_TimeReference(data)
	{  }

	Sensor_msgs_TimeReferenceCore::~Sensor_msgs_TimeReferenceCore()
	{  }
	
	void Sensor_msgs_TimeReferenceCore::to_ostream(std::ostream &os) const
	{
	  os << "Sensor_msgs_TimeReference(";
	  getHeader().to_ostream(os);
	  getTime_ref().to_ostream(os);
	  os << getSource() << " ";
	  os << ") ";
	}
	
	// convert to xml stream
	void Sensor_msgs_TimeReferenceCore::to_xml(std::ostream &os, const std::string &indent) const {
		os << indent << "<header>";
		getHeader().to_xml(os, indent);
		os << indent << "</header>";
		os << indent << "<time_ref>";
		getTime_ref().to_xml(os, indent);
		os << indent << "</time_ref>";
		os << indent << "<source>" << getSource() << "</source>";
	}
	
	// restore from xml stream
	void Sensor_msgs_TimeReferenceCore::from_xml(std::istream &is) {
		static const Smart::KnuthMorrisPratt kmp_header("<header>");
		static const Smart::KnuthMorrisPratt kmp_time_ref("<time_ref>");
		static const Smart::KnuthMorrisPratt kmp_source("<source>");
		
		if(kmp_header.search(is)) {
			ROSRos_core::Std_msgs_Header headerItem;
			headerItem.from_xml(is);
			setHeader(headerItem);
		}
		if(kmp_time_ref.search(is)) {
			CommBasicObjects::CommTimeStamp time_refItem;
			time_refItem.from_xml(is);
			setTime_ref(time_refItem);
		}
		if(kmp_source.search(is)) {
			std::string sourceItem;
			is >> sourceItem;
			setSource(sourceItem);
		}
	}
	
	/*
	void Sensor_msgs_TimeReferenceCore::get(ACE_Message_Block *&msg) const
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
		// (see Sensor_msgs_TimeReferenceACE.hh)
		cdr << idl_Sensor_msgs_TimeReference;
		
	#ifdef ENABLE_HASH
		ACE_CDR::ULong data_hash = generateDataHash(idl_Sensor_msgs_TimeReference);
		cdr << data_hash;
		// std::cout << "Sensor_msgs_TimeReferenceCore: current data hash: " << data_hash << std::endl;
	#endif
		
		// return a shallow copy of the serialized message 
		// (no data is actually copied, only the internal reference counter is incremented)
		// in order to prevent memory leaks the caller of this get(msg) method must
		// manually free the memory by calling the release() method of the message block msg
		msg = cdr.begin()->duplicate();
	}
	
	void Sensor_msgs_TimeReferenceCore::set(const ACE_Message_Block *msg)
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
		// (see Sensor_msgs_TimeReferenceACE.hh)
		cdr >> idl_Sensor_msgs_TimeReference;
		
	#ifdef ENABLE_HASH
		ACE_CDR::Long data_hash;
		cdr >> data_hash;
		ACE_CDR::Long own_hash = generateDataHash(idl_Sensor_msgs_TimeReference);
		assert(data_hash == own_hash);
		// std::cout << "Sensor_msgs_TimeReferenceCore: own data hash: " << own_hash << "; received data hash: " << data_hash << std::endl;
	#endif
	}
	*/
} /* namespace ROSCommon_msgs */
