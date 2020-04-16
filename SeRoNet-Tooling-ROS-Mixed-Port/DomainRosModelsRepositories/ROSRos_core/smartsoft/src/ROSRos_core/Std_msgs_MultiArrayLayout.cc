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

#include "ROSRos_core/Std_msgs_MultiArrayLayout.hh"

using namespace ROSRos_core;

Std_msgs_MultiArrayLayout::Std_msgs_MultiArrayLayout()
:	Std_msgs_MultiArrayLayoutCore()
{  }


/**
 * Constructor to set all values.
 * NOTE that you have to keep this constructor consistent with the model!
 * Use  at your own choice.
 *
 * The preferred way to set values for initialization is:
 *      CommRepository::MyCommObject obj;
 *      obj.setX(1).setY(2).setZ(3)...;
Std_msgs_MultiArrayLayout::Std_msgs_MultiArrayLayout(const std::vector<ROSRos_core::Std_msgs_MultiArrayDimension> &dim, const unsigned int &data_offset)
:	Std_msgs_MultiArrayLayoutCore() // base constructor sets default values as defined in the model
{
	setDim(dim);
	setData_offset(data_offset);
}
 */

Std_msgs_MultiArrayLayout::Std_msgs_MultiArrayLayout(const Std_msgs_MultiArrayLayoutCore &std_msgs_MultiArrayLayout)
:	Std_msgs_MultiArrayLayoutCore(std_msgs_MultiArrayLayout)
{  }

Std_msgs_MultiArrayLayout::Std_msgs_MultiArrayLayout(const DATATYPE &std_msgs_MultiArrayLayout)
:	Std_msgs_MultiArrayLayoutCore(std_msgs_MultiArrayLayout)
{  }

Std_msgs_MultiArrayLayout::~Std_msgs_MultiArrayLayout()
{  }