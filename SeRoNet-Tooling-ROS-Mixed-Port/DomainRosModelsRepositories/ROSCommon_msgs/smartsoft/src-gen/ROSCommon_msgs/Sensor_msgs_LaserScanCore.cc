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
#include "ROSCommon_msgs/Sensor_msgs_LaserScanCore.hh"

// serialization/deserialization operators
//#include "ROSCommon_msgs/Sensor_msgs_LaserScanACE.hh"

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
	const char* Sensor_msgs_LaserScanCore::getCompiledHash()
	{
		return ROSCommon_msgsIDL::REPO_HASH;
	}
	
	void Sensor_msgs_LaserScanCore::getAllHashValues(std::list<std::string> &hashes)
	{
		// get own hash value
		hashes.push_back(getCompiledHash());
		// get hash value(s) for ROSRos_core::Std_msgs_Header(idl_Sensor_msgs_LaserScan.header)
		ROSRos_core::Std_msgs_Header::getAllHashValues(hashes);
	}
	
	void Sensor_msgs_LaserScanCore::checkAllHashValues(std::list<std::string> &hashes)
	{
		// check own hash value
		if (strcmp(getCompiledHash(), hashes.front().c_str()) != 0)
		{
			std::cerr << "###################################################" << std::endl;
			std::cerr << "WARNING: HASHES OF COMMUNICATION OBJECTS MISSMATCH!" << std::endl;
			std::cerr << "Sensor_msgs_LaserScanCore hash" << std::endl;
			std::cerr << "Expected: " << getCompiledHash() << std::endl;
			std::cerr << "Received: " << hashes.front() << std::endl;
			std::cerr << "###################################################" << std::endl;
		}
		assert(strcmp(getCompiledHash(), hashes.front().c_str()) == 0);
		hashes.pop_front();
		
		// check hash value(s) for ROSRos_core::Std_msgs_Header(idl_Sensor_msgs_LaserScan.header)
		ROSRos_core::Std_msgs_Header::checkAllHashValues(hashes);
	}
	
	#ifdef ENABLE_HASH
	size_t Sensor_msgs_LaserScanCore::generateDataHash(const DATATYPE &data)
	{
		size_t seed = 0;
		
		seed += ROSRos_core::Std_msgs_Header::generateDataHash(data.header);
		boost::hash_combine(seed, data.angle_min);
		boost::hash_combine(seed, data.angle_max);
		boost::hash_combine(seed, data.angle_increment);
		boost::hash_combine(seed, data.time_increment);
		boost::hash_combine(seed, data.scan_time);
		boost::hash_combine(seed, data.range_min);
		boost::hash_combine(seed, data.range_max);
		std::vector<ACE_CDR::Float>::const_iterator data_rangesIt;
		for(data_rangesIt=data.ranges.begin(); data_rangesIt!=data.ranges.end(); data_rangesIt++) {
			boost::hash_combine(seed, *data_rangesIt);
		}
		std::vector<ACE_CDR::Float>::const_iterator data_intensitiesIt;
		for(data_intensitiesIt=data.intensities.begin(); data_intensitiesIt!=data.intensities.end(); data_intensitiesIt++) {
			boost::hash_combine(seed, *data_intensitiesIt);
		}
		
		return seed;
	}
	#endif
	
	// default constructor
	Sensor_msgs_LaserScanCore::Sensor_msgs_LaserScanCore()
	:	idl_Sensor_msgs_LaserScan()
	{  
		setHeader(ROSRos_core::Std_msgs_Header());
		setAngle_min(0.0);
		setAngle_max(0.0);
		setAngle_increment(0.0);
		setTime_increment(0.0);
		setScan_time(0.0);
		setRange_min(0.0);
		setRange_max(0.0);
		setRanges(std::vector<float>());
		setIntensities(std::vector<float>());
	}
	
	Sensor_msgs_LaserScanCore::Sensor_msgs_LaserScanCore(const DATATYPE &data)
	:	idl_Sensor_msgs_LaserScan(data)
	{  }

	Sensor_msgs_LaserScanCore::~Sensor_msgs_LaserScanCore()
	{  }
	
	void Sensor_msgs_LaserScanCore::to_ostream(std::ostream &os) const
	{
	  os << "Sensor_msgs_LaserScan(";
	  getHeader().to_ostream(os);
	  os << getAngle_min() << " ";
	  os << getAngle_max() << " ";
	  os << getAngle_increment() << " ";
	  os << getTime_increment() << " ";
	  os << getScan_time() << " ";
	  os << getRange_min() << " ";
	  os << getRange_max() << " ";
	  std::vector<float>::const_iterator rangesIt;
	  std::vector<float> rangesList = getRangesCopy();
	  for(rangesIt=rangesList.begin(); rangesIt!=rangesList.end(); rangesIt++) {
	  	os << *rangesIt << " ";
	  }
	  std::vector<float>::const_iterator intensitiesIt;
	  std::vector<float> intensitiesList = getIntensitiesCopy();
	  for(intensitiesIt=intensitiesList.begin(); intensitiesIt!=intensitiesList.end(); intensitiesIt++) {
	  	os << *intensitiesIt << " ";
	  }
	  os << ") ";
	}
	
	// convert to xml stream
	void Sensor_msgs_LaserScanCore::to_xml(std::ostream &os, const std::string &indent) const {
		size_t counter = 0;
		
		os << indent << "<header>";
		getHeader().to_xml(os, indent);
		os << indent << "</header>";
		os << indent << "<angle_min>" << getAngle_min() << "</angle_min>";
		os << indent << "<angle_max>" << getAngle_max() << "</angle_max>";
		os << indent << "<angle_increment>" << getAngle_increment() << "</angle_increment>";
		os << indent << "<time_increment>" << getTime_increment() << "</time_increment>";
		os << indent << "<scan_time>" << getScan_time() << "</scan_time>";
		os << indent << "<range_min>" << getRange_min() << "</range_min>";
		os << indent << "<range_max>" << getRange_max() << "</range_max>";
		std::vector<float>::const_iterator rangesIt;
		std::vector<float> rangesList = getRangesCopy();
		counter = 0;
		os << indent << "<rangesList n=\"" << rangesList.size() << "\">";
		for(rangesIt=rangesList.begin(); rangesIt!=rangesList.end(); rangesIt++) {
			os << indent << "<ranges i=\"" << counter++ << "\">" << *rangesIt << "</ranges>";
		}
		os << indent << "</rangesList>";
		std::vector<float>::const_iterator intensitiesIt;
		std::vector<float> intensitiesList = getIntensitiesCopy();
		counter = 0;
		os << indent << "<intensitiesList n=\"" << intensitiesList.size() << "\">";
		for(intensitiesIt=intensitiesList.begin(); intensitiesIt!=intensitiesList.end(); intensitiesIt++) {
			os << indent << "<intensities i=\"" << counter++ << "\">" << *intensitiesIt << "</intensities>";
		}
		os << indent << "</intensitiesList>";
	}
	
	// restore from xml stream
	void Sensor_msgs_LaserScanCore::from_xml(std::istream &is) {
		size_t counter = 0;
		
		static const Smart::KnuthMorrisPratt kmp_header("<header>");
		static const Smart::KnuthMorrisPratt kmp_angle_min("<angle_min>");
		static const Smart::KnuthMorrisPratt kmp_angle_max("<angle_max>");
		static const Smart::KnuthMorrisPratt kmp_angle_increment("<angle_increment>");
		static const Smart::KnuthMorrisPratt kmp_time_increment("<time_increment>");
		static const Smart::KnuthMorrisPratt kmp_scan_time("<scan_time>");
		static const Smart::KnuthMorrisPratt kmp_range_min("<range_min>");
		static const Smart::KnuthMorrisPratt kmp_range_max("<range_max>");
		static const Smart::KnuthMorrisPratt kmp_rangesList("<rangesList n=\"");
		static const Smart::KnuthMorrisPratt kmp_ranges("\">");
		static const Smart::KnuthMorrisPratt kmp_intensitiesList("<intensitiesList n=\"");
		static const Smart::KnuthMorrisPratt kmp_intensities("\">");
		
		if(kmp_header.search(is)) {
			ROSRos_core::Std_msgs_Header headerItem;
			headerItem.from_xml(is);
			setHeader(headerItem);
		}
		if(kmp_angle_min.search(is)) {
			float angle_minItem;
			is >> angle_minItem;
			setAngle_min(angle_minItem);
		}
		if(kmp_angle_max.search(is)) {
			float angle_maxItem;
			is >> angle_maxItem;
			setAngle_max(angle_maxItem);
		}
		if(kmp_angle_increment.search(is)) {
			float angle_incrementItem;
			is >> angle_incrementItem;
			setAngle_increment(angle_incrementItem);
		}
		if(kmp_time_increment.search(is)) {
			float time_incrementItem;
			is >> time_incrementItem;
			setTime_increment(time_incrementItem);
		}
		if(kmp_scan_time.search(is)) {
			float scan_timeItem;
			is >> scan_timeItem;
			setScan_time(scan_timeItem);
		}
		if(kmp_range_min.search(is)) {
			float range_minItem;
			is >> range_minItem;
			setRange_min(range_minItem);
		}
		if(kmp_range_max.search(is)) {
			float range_maxItem;
			is >> range_maxItem;
			setRange_max(range_maxItem);
		}
		if(kmp_rangesList.search(is)) {
			size_t numberElements;
			is >> numberElements;
			float rangesItem;
			std::vector<float> rangesList;
			kmp_ranges.search(is);
			for(counter=0; counter<numberElements; counter++) {
				if(kmp_ranges.search(is)) {
					is >> rangesItem;
					rangesList.push_back(rangesItem);
				}
			}
			setRanges(rangesList);
		}
		if(kmp_intensitiesList.search(is)) {
			size_t numberElements;
			is >> numberElements;
			float intensitiesItem;
			std::vector<float> intensitiesList;
			kmp_intensities.search(is);
			for(counter=0; counter<numberElements; counter++) {
				if(kmp_intensities.search(is)) {
					is >> intensitiesItem;
					intensitiesList.push_back(intensitiesItem);
				}
			}
			setIntensities(intensitiesList);
		}
	}
	
	/*
	void Sensor_msgs_LaserScanCore::get(ACE_Message_Block *&msg) const
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
		// (see Sensor_msgs_LaserScanACE.hh)
		cdr << idl_Sensor_msgs_LaserScan;
		
	#ifdef ENABLE_HASH
		ACE_CDR::ULong data_hash = generateDataHash(idl_Sensor_msgs_LaserScan);
		cdr << data_hash;
		// std::cout << "Sensor_msgs_LaserScanCore: current data hash: " << data_hash << std::endl;
	#endif
		
		// return a shallow copy of the serialized message 
		// (no data is actually copied, only the internal reference counter is incremented)
		// in order to prevent memory leaks the caller of this get(msg) method must
		// manually free the memory by calling the release() method of the message block msg
		msg = cdr.begin()->duplicate();
	}
	
	void Sensor_msgs_LaserScanCore::set(const ACE_Message_Block *msg)
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
		// (see Sensor_msgs_LaserScanACE.hh)
		cdr >> idl_Sensor_msgs_LaserScan;
		
	#ifdef ENABLE_HASH
		ACE_CDR::Long data_hash;
		cdr >> data_hash;
		ACE_CDR::Long own_hash = generateDataHash(idl_Sensor_msgs_LaserScan);
		assert(data_hash == own_hash);
		// std::cout << "Sensor_msgs_LaserScanCore: own data hash: " << own_hash << "; received data hash: " << data_hash << std::endl;
	#endif
	}
	*/
} /* namespace ROSCommon_msgs */