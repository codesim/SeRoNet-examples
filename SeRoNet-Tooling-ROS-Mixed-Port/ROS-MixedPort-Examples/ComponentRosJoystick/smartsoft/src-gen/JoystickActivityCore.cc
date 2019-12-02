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
#include "JoystickActivityCore.hh"
#include "JoystickActivity.hh"
#include "ComponentRosJoystick.hh"

//FIXME: use logging
//#include "smartGlobalLogger.hh"

// include observers


JoystickActivityCore::JoystickActivityCore(Smart::IComponent *comp, const bool &useDefaultState) 
:	SmartACE::ManagedTask(comp)
,	useDefaultState(useDefaultState)
,	useLogging(false)
,	taskLoggingId(0)
,	currentUpdateCount(0)
{
}

JoystickActivityCore::~JoystickActivityCore()
{
}

void JoystickActivityCore::_joy_cb (const sensor_msgs::Joy::ConstPtr &msg) {
	std::unique_lock<std::mutex> lck (interaction_observers_mutex);
	for(size_t ax=0; ax < msg->axes.size(); ++ax) {
		if(ax == 0) {
			comm_joy.set_x(msg->axes[ax]);
		} else if(ax == 1) {
			comm_joy.set_y(msg->axes[ax]);
		} else if(ax == 2) {
			comm_joy.set_x2(msg->axes[ax]);
		} else if(ax == 3) {
			comm_joy.set_y2(msg->axes[ax]);
		}
	}
	for(size_t btn=0; btn < msg->buttons.size(); ++btn) {
		// TODO: check if this conversion is correct
		comm_joy.set_button(btn, msg->buttons[btn]);
	}
}

void JoystickActivityCore::notify_all_interaction_observers() {
	std::unique_lock<std::mutex> lock(interaction_observers_mutex);
	// try dynamically down-casting this class to the derived class 
	// (we can do it safely here as we exactly know the derived class)
	if(const JoystickActivity* joystickActivity = dynamic_cast<const JoystickActivity*>(this)) {
		for(auto it=interaction_observers.begin(); it!=interaction_observers.end(); it++) {
			(*it)->on_update_from(joystickActivity);
		}
	}
}

void JoystickActivityCore::attach_interaction_observer(JoystickActivityObserverInterface *observer) {
	std::unique_lock<std::mutex> lock(interaction_observers_mutex);
	interaction_observers.push_back(observer);
}

void JoystickActivityCore::detach_interaction_observer(JoystickActivityObserverInterface *observer) {
	std::unique_lock<std::mutex> lock(interaction_observers_mutex);
	interaction_observers.remove(observer);
}

int JoystickActivityCore::execute_protected_region()
{
	
	// update of comm-objects must be within the protected region to prevent aged comm-object values
	this->updateAllCommObjects();
	
	if(useLogging == true) {
		//FIXME: use logging
		//Smart::LOGGER->log(taskLoggingId, getCurrentUpdateCount(), getPreviousCommObjId());
	}
	
	// this is the user code (should not internally use the state-pattern any more)
	int retval = this->on_execute();
	
	// notify all attached interaction observers
	this->notify_all_interaction_observers();
	
	// inform all associated tasks about a new update
	this->trigger_all_tasks();
	
	// increment current currentUpdateCount for the next iteration
	currentUpdateCount++;
	
	return retval;
}


void JoystickActivityCore::updateAllCommObjects()
{
	
}


// this method is meant to be used in derived classes
Smart::StatusCode JoystickActivityCore::joystickServiceOutPut(CommBasicObjects::CommJoystick &joystickServiceOutDataObject)
{
	Smart::StatusCode result = COMP->joystickServiceOut->put(joystickServiceOutDataObject);
	if(useLogging == true) {
		//FIXME: use logging
		//Smart::LOGGER->log(pushLoggingId+1, getCurrentUpdateCount(), getPreviousCommObjId());
	}
	return result;
}

void JoystickActivityCore::triggerLogEntry(const int& idOffset)
{
	if(useLogging == true) {
		int logId = taskLoggingId + 2*1 + idOffset;
		//FIXME: use logging
		//Smart::LOGGER->log(logId, getCurrentUpdateCount(), getPreviousCommObjId());
	}
}

int JoystickActivityCore::getPreviousCommObjId()
{
	// this method needs to be overloaded and implemented in derived classes
	return 0;
}
