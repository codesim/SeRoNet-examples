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
#ifndef COMMBASICOBJECTS_COMMMOBILEULTRASONICSCAN_DATA_H_
#define COMMBASICOBJECTS_COMMMOBILEULTRASONICSCAN_DATA_H_

#include "CommBasicObjects/CommBaseStateData.hh"
#include "CommBasicObjects/CommUltrasonicScanData.hh"


namespace CommBasicObjectsIDL 
{
	struct CommMobileUltrasonicScan
	{
		CommBasicObjectsIDL::CommBaseState baseState;
		CommBasicObjectsIDL::CommUltrasonicScan usScan;
  	};
};

#endif /* COMMBASICOBJECTS_COMMMOBILEULTRASONICSCAN_DATA_H_ */