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
#include "ROSCommon_msgs/Geometry_msgs_WrenchStampedCore.hh"

// serialization/deserialization operators
//#include "ROSCommon_msgs/Geometry_msgs_WrenchStampedACE.hh"

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
	const char* Geometry_msgs_WrenchStampedCore::getCompiledHash()
	{
		return ROSCommon_msgsIDL::REPO_HASH;
	}
	
	void Geometry_msgs_WrenchStampedCore::getAllHashValues(std::list<std::string> &hashes)
	{
		// get own hash value
		hashes.push_back(getCompiledHash());
		// get hash value(s) for ROSRos_core::Std_msgs_Header(idl_Geometry_msgs_WrenchStamped.header)
		ROSRos_core::Std_msgs_Header::getAllHashValues(hashes);
		// get hash value(s) for ROSCommon_msgs::Geometry_msgs_Wrench(idl_Geometry_msgs_WrenchStamped.wrench)
		ROSCommon_msgs::Geometry_msgs_Wrench::getAllHashValues(hashes);
	}
	
	void Geometry_msgs_WrenchStampedCore::checkAllHashValues(std::list<std::string> &hashes)
	{
		// check own hash value
		if (strcmp(getCompiledHash(), hashes.front().c_str()) != 0)
		{
			std::cerr << "###################################################" << std::endl;
			std::cerr << "WARNING: HASHES OF COMMUNICATION OBJECTS MISSMATCH!" << std::endl;
			std::cerr << "Geometry_msgs_WrenchStampedCore hash" << std::endl;
			std::cerr << "Expected: " << getCompiledHash() << std::endl;
			std::cerr << "Received: " << hashes.front() << std::endl;
			std::cerr << "###################################################" << std::endl;
		}
		assert(strcmp(getCompiledHash(), hashes.front().c_str()) == 0);
		hashes.pop_front();
		
		// check hash value(s) for ROSRos_core::Std_msgs_Header(idl_Geometry_msgs_WrenchStamped.header)
		ROSRos_core::Std_msgs_Header::checkAllHashValues(hashes);
		// check hash value(s) for ROSCommon_msgs::Geometry_msgs_Wrench(idl_Geometry_msgs_WrenchStamped.wrench)
		ROSCommon_msgs::Geometry_msgs_Wrench::checkAllHashValues(hashes);
	}
	
	#ifdef ENABLE_HASH
	size_t Geometry_msgs_WrenchStampedCore::generateDataHash(const DATATYPE &data)
	{
		size_t seed = 0;
		
		seed += ROSRos_core::Std_msgs_Header::generateDataHash(data.header);
		seed += ROSCommon_msgs::Geometry_msgs_Wrench::generateDataHash(data.wrench);
		
		return seed;
	}
	#endif
	
	// default constructor
	Geometry_msgs_WrenchStampedCore::Geometry_msgs_WrenchStampedCore()
	:	idl_Geometry_msgs_WrenchStamped()
	{  
		setHeader(ROSRos_core::Std_msgs_Header());
		setWrench(ROSCommon_msgs::Geometry_msgs_Wrench());
	}
	
	Geometry_msgs_WrenchStampedCore::Geometry_msgs_WrenchStampedCore(const DATATYPE &data)
	:	idl_Geometry_msgs_WrenchStamped(data)
	{  }

	Geometry_msgs_WrenchStampedCore::~Geometry_msgs_WrenchStampedCore()
	{  }
	
	void Geometry_msgs_WrenchStampedCore::to_ostream(std::ostream &os) const
	{
	  os << "Geometry_msgs_WrenchStamped(";
	  getHeader().to_ostream(os);
	  getWrench().to_ostream(os);
	  os << ") ";
	}
	
	// convert to xml stream
	void Geometry_msgs_WrenchStampedCore::to_xml(std::ostream &os, const std::string &indent) const {
		os << indent << "<header>";
		getHeader().to_xml(os, indent);
		os << indent << "</header>";
		os << indent << "<wrench>";
		getWrench().to_xml(os, indent);
		os << indent << "</wrench>";
	}
	
	// restore from xml stream
	void Geometry_msgs_WrenchStampedCore::from_xml(std::istream &is) {
		static const Smart::KnuthMorrisPratt kmp_header("<header>");
		static const Smart::KnuthMorrisPratt kmp_wrench("<wrench>");
		
		if(kmp_header.search(is)) {
			ROSRos_core::Std_msgs_Header headerItem;
			headerItem.from_xml(is);
			setHeader(headerItem);
		}
		if(kmp_wrench.search(is)) {
			ROSCommon_msgs::Geometry_msgs_Wrench wrenchItem;
			wrenchItem.from_xml(is);
			setWrench(wrenchItem);
		}
	}
	
	/*
	void Geometry_msgs_WrenchStampedCore::get(ACE_Message_Block *&msg) const
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
		// (see Geometry_msgs_WrenchStampedACE.hh)
		cdr << idl_Geometry_msgs_WrenchStamped;
		
	#ifdef ENABLE_HASH
		ACE_CDR::ULong data_hash = generateDataHash(idl_Geometry_msgs_WrenchStamped);
		cdr << data_hash;
		// std::cout << "Geometry_msgs_WrenchStampedCore: current data hash: " << data_hash << std::endl;
	#endif
		
		// return a shallow copy of the serialized message 
		// (no data is actually copied, only the internal reference counter is incremented)
		// in order to prevent memory leaks the caller of this get(msg) method must
		// manually free the memory by calling the release() method of the message block msg
		msg = cdr.begin()->duplicate();
	}
	
	void Geometry_msgs_WrenchStampedCore::set(const ACE_Message_Block *msg)
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
		// (see Geometry_msgs_WrenchStampedACE.hh)
		cdr >> idl_Geometry_msgs_WrenchStamped;
		
	#ifdef ENABLE_HASH
		ACE_CDR::Long data_hash;
		cdr >> data_hash;
		ACE_CDR::Long own_hash = generateDataHash(idl_Geometry_msgs_WrenchStamped);
		assert(data_hash == own_hash);
		// std::cout << "Geometry_msgs_WrenchStampedCore: own data hash: " << own_hash << "; received data hash: " << data_hash << std::endl;
	#endif
	}
	*/
} /* namespace ROSCommon_msgs */
