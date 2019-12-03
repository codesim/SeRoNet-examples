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
#include "TimeTask.hh"
#include "ComponentHelloPublisher.hh"

#include <iostream>
#include <chrono>

TimeTask::TimeTask(SmartACE::SmartComponent *comp) 
:	TimeTaskCore(comp)
{
	std::cout << "constructor TimeTask\n";
}
TimeTask::~TimeTask() 
{
	std::cout << "destructor TimeTask\n";
}

int TimeTask::on_entry()
{
	return 0;
}
int TimeTask::on_execute()
{
	// to get the incoming data, use this methods:
	Smart::StatusCode status;
	DomainHelloServices::CommTime time;

	auto now = std::chrono::system_clock::now();
	auto seconds = std::chrono::duration_cast<std::chrono::seconds>(now.time_since_epoch());
	time.setSec(seconds.count());
	auto rest = now - seconds;
	auto usec = std::chrono::duration_cast<std::chrono::nanoseconds>(rest.time_since_epoch());
	time.setUsec(usec.count());

	status = timeServiceOutPut(time);
	std::cout << "push " << time << status  << std::endl;

	// it is possible to return != 0 (e.g. when the task detects errors), then the outer loop breaks and the task stops
	return 0;
}
int TimeTask::on_exit()
{
	return 0;
}