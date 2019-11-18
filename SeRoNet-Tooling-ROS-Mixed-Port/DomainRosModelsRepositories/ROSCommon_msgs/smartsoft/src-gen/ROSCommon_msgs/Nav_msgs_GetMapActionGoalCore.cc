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
#include "ROSCommon_msgs/Nav_msgs_GetMapActionGoalCore.hh"

// serialization/deserialization operators
//#include "ROSCommon_msgs/Nav_msgs_GetMapActionGoalACE.hh"

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
	const char* Nav_msgs_GetMapActionGoalCore::getCompiledHash()
	{
		return ROSCommon_msgsIDL::REPO_HASH;
	}
	
	void Nav_msgs_GetMapActionGoalCore::getAllHashValues(std::list<std::string> &hashes)
	{
		// get own hash value
		hashes.push_back(getCompiledHash());
		// get hash value(s) for ROSRos_core::Std_msgs_Header(idl_Nav_msgs_GetMapActionGoal.header)
		ROSRos_core::Std_msgs_Header::getAllHashValues(hashes);
		// get hash value(s) for ROSCommon_msgs::Actionlib_msgs_GoalID(idl_Nav_msgs_GetMapActionGoal.goal_id)
		ROSCommon_msgs::Actionlib_msgs_GoalID::getAllHashValues(hashes);
		// get hash value(s) for ROSCommon_msgs::Nav_msgs_GetMapGoal(idl_Nav_msgs_GetMapActionGoal.goal)
		ROSCommon_msgs::Nav_msgs_GetMapGoal::getAllHashValues(hashes);
	}
	
	void Nav_msgs_GetMapActionGoalCore::checkAllHashValues(std::list<std::string> &hashes)
	{
		// check own hash value
		if (strcmp(getCompiledHash(), hashes.front().c_str()) != 0)
		{
			std::cerr << "###################################################" << std::endl;
			std::cerr << "WARNING: HASHES OF COMMUNICATION OBJECTS MISSMATCH!" << std::endl;
			std::cerr << "Nav_msgs_GetMapActionGoalCore hash" << std::endl;
			std::cerr << "Expected: " << getCompiledHash() << std::endl;
			std::cerr << "Received: " << hashes.front() << std::endl;
			std::cerr << "###################################################" << std::endl;
		}
		assert(strcmp(getCompiledHash(), hashes.front().c_str()) == 0);
		hashes.pop_front();
		
		// check hash value(s) for ROSRos_core::Std_msgs_Header(idl_Nav_msgs_GetMapActionGoal.header)
		ROSRos_core::Std_msgs_Header::checkAllHashValues(hashes);
		// check hash value(s) for ROSCommon_msgs::Actionlib_msgs_GoalID(idl_Nav_msgs_GetMapActionGoal.goal_id)
		ROSCommon_msgs::Actionlib_msgs_GoalID::checkAllHashValues(hashes);
		// check hash value(s) for ROSCommon_msgs::Nav_msgs_GetMapGoal(idl_Nav_msgs_GetMapActionGoal.goal)
		ROSCommon_msgs::Nav_msgs_GetMapGoal::checkAllHashValues(hashes);
	}
	
	#ifdef ENABLE_HASH
	size_t Nav_msgs_GetMapActionGoalCore::generateDataHash(const DATATYPE &data)
	{
		size_t seed = 0;
		
		seed += ROSRos_core::Std_msgs_Header::generateDataHash(data.header);
		seed += ROSCommon_msgs::Actionlib_msgs_GoalID::generateDataHash(data.goal_id);
		seed += ROSCommon_msgs::Nav_msgs_GetMapGoal::generateDataHash(data.goal);
		
		return seed;
	}
	#endif
	
	// default constructor
	Nav_msgs_GetMapActionGoalCore::Nav_msgs_GetMapActionGoalCore()
	:	idl_Nav_msgs_GetMapActionGoal()
	{  
		setHeader(ROSRos_core::Std_msgs_Header());
		setGoal_id(ROSCommon_msgs::Actionlib_msgs_GoalID());
		setGoal(ROSCommon_msgs::Nav_msgs_GetMapGoal());
	}
	
	Nav_msgs_GetMapActionGoalCore::Nav_msgs_GetMapActionGoalCore(const DATATYPE &data)
	:	idl_Nav_msgs_GetMapActionGoal(data)
	{  }

	Nav_msgs_GetMapActionGoalCore::~Nav_msgs_GetMapActionGoalCore()
	{  }
	
	void Nav_msgs_GetMapActionGoalCore::to_ostream(std::ostream &os) const
	{
	  os << "Nav_msgs_GetMapActionGoal(";
	  getHeader().to_ostream(os);
	  getGoal_id().to_ostream(os);
	  getGoal().to_ostream(os);
	  os << ") ";
	}
	
	// convert to xml stream
	void Nav_msgs_GetMapActionGoalCore::to_xml(std::ostream &os, const std::string &indent) const {
		os << indent << "<header>";
		getHeader().to_xml(os, indent);
		os << indent << "</header>";
		os << indent << "<goal_id>";
		getGoal_id().to_xml(os, indent);
		os << indent << "</goal_id>";
		os << indent << "<goal>";
		getGoal().to_xml(os, indent);
		os << indent << "</goal>";
	}
	
	// restore from xml stream
	void Nav_msgs_GetMapActionGoalCore::from_xml(std::istream &is) {
		static const Smart::KnuthMorrisPratt kmp_header("<header>");
		static const Smart::KnuthMorrisPratt kmp_goal_id("<goal_id>");
		static const Smart::KnuthMorrisPratt kmp_goal("<goal>");
		
		if(kmp_header.search(is)) {
			ROSRos_core::Std_msgs_Header headerItem;
			headerItem.from_xml(is);
			setHeader(headerItem);
		}
		if(kmp_goal_id.search(is)) {
			ROSCommon_msgs::Actionlib_msgs_GoalID goal_idItem;
			goal_idItem.from_xml(is);
			setGoal_id(goal_idItem);
		}
		if(kmp_goal.search(is)) {
			ROSCommon_msgs::Nav_msgs_GetMapGoal goalItem;
			goalItem.from_xml(is);
			setGoal(goalItem);
		}
	}
	
	/*
	void Nav_msgs_GetMapActionGoalCore::get(ACE_Message_Block *&msg) const
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
		// (see Nav_msgs_GetMapActionGoalACE.hh)
		cdr << idl_Nav_msgs_GetMapActionGoal;
		
	#ifdef ENABLE_HASH
		ACE_CDR::ULong data_hash = generateDataHash(idl_Nav_msgs_GetMapActionGoal);
		cdr << data_hash;
		// std::cout << "Nav_msgs_GetMapActionGoalCore: current data hash: " << data_hash << std::endl;
	#endif
		
		// return a shallow copy of the serialized message 
		// (no data is actually copied, only the internal reference counter is incremented)
		// in order to prevent memory leaks the caller of this get(msg) method must
		// manually free the memory by calling the release() method of the message block msg
		msg = cdr.begin()->duplicate();
	}
	
	void Nav_msgs_GetMapActionGoalCore::set(const ACE_Message_Block *msg)
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
		// (see Nav_msgs_GetMapActionGoalACE.hh)
		cdr >> idl_Nav_msgs_GetMapActionGoal;
		
	#ifdef ENABLE_HASH
		ACE_CDR::Long data_hash;
		cdr >> data_hash;
		ACE_CDR::Long own_hash = generateDataHash(idl_Nav_msgs_GetMapActionGoal);
		assert(data_hash == own_hash);
		// std::cout << "Nav_msgs_GetMapActionGoalCore: own data hash: " << own_hash << "; received data hash: " << data_hash << std::endl;
	#endif
	}
	*/
} /* namespace ROSCommon_msgs */
