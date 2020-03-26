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
// This file is generated once. Modify this file to your needs. 
// If you want the toolchain to re-generate this file, please 
// delete it before running the code generator.
//--------------------------------------------------------------------------
#ifndef _JOY_NODEACTIVITY_HH
#define _JOY_NODEACTIVITY_HH

#include "Joy_nodeActivityCore.hh"
#include <sensor_msgs/Joy.h>

class Joy_nodeActivity  : public Joy_nodeActivityCore
{
private:
public:
	Joy_nodeActivity(SmartACE::SmartComponent *comp);
	virtual ~Joy_nodeActivity();
	
	virtual int on_entry();
	virtual int on_execute();
	virtual int on_exit();
	void joy_sub_cb (const sensor_msgs::Joy::ConstPtr &msg);
};

#endif
