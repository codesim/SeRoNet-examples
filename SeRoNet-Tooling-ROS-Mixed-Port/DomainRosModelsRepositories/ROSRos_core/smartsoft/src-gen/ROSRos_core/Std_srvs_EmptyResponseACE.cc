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
#include "ROSRos_core/Std_srvs_EmptyResponseACE.hh"
#include <ace/SString.h>
#include "CommBasicObjects/CommVoidACE.hh"

// serialization operator for element Std_srvs_EmptyResponse
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const ROSRos_coreIDL::Std_srvs_EmptyResponse &data)
{
	ACE_CDR::Boolean good_bit = true;
	// serialize list-element dummy
	good_bit = good_bit && cdr << data.dummy;
	
	return good_bit;
}

// de-serialization operator for element Std_srvs_EmptyResponse
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, ROSRos_coreIDL::Std_srvs_EmptyResponse &data)
{
	ACE_CDR::Boolean good_bit = true;
	// deserialize type element dummy
	good_bit = good_bit && cdr >> data.dummy;
	
	return good_bit;
}

// serialization operator for CommunicationObject Std_srvs_EmptyResponse
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const ROSRos_core::Std_srvs_EmptyResponse &obj)
{
	return cdr << obj.get();
}

// de-serialization operator for CommunicationObject Std_srvs_EmptyResponse
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, ROSRos_core::Std_srvs_EmptyResponse &obj)
{
	return cdr >> obj.set();
}