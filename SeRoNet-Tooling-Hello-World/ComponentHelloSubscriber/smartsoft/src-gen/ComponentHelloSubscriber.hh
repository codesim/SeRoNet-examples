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
#ifndef _COMPONENTHELLOSUBSCRIBER_HH
#define _COMPONENTHELLOSUBSCRIBER_HH

#include <map>
#include <iostream>
#include "aceSmartSoft.hh"
#include "smartQueryServerTaskTrigger_T.h"
#include "ComponentHelloSubscriberCore.hh"

#include "ComponentHelloSubscriberPortFactoryInterface.hh"
#include "ComponentHelloSubscriberExtension.hh"

// forward declarations
class ComponentHelloSubscriberPortFactoryInterface;
class ComponentHelloSubscriberExtension;

// includes for ComponentHelloSubscriberROSExtension

// includes for OpcUaBackendComponentGeneratorExtension

// includes for PlainOpcUaComponentHelloSubscriberExtension
// include plain OPC UA device clients
// include plain OPC UA status servers


// include communication objects
#include <DomainHelloServices/CommTime.hh>
#include <DomainHelloServices/CommTimeACE.hh>

// include tasks
#include "ReceiverActivity.hh"
// include UpcallManagers
#include "TimeServiceInUpcallManager.hh"

// include input-handler(s)
// include request-handler(s)

// include handler
#include "CompHandler.hh"


#include "SmartStateChangeHandler.hh"

#define COMP ComponentHelloSubscriber::instance()

class ComponentHelloSubscriber : public ComponentHelloSubscriberCore {
private:
	static ComponentHelloSubscriber *_componentHelloSubscriber;
	
	// constructor
	ComponentHelloSubscriber();
	
	// copy-constructor
	ComponentHelloSubscriber(const ComponentHelloSubscriber& cc);
	
	// destructor
	~ComponentHelloSubscriber() { };
	
	// load parameter from ini file
	void loadParameter(int argc, char* argv[]);
	
	// instantiate comp-handler
	CompHandler compHandler;
	
	// helper method that maps a string-name to an according TaskTriggerSubject
	Smart::TaskTriggerSubject* getInputTaskTriggerFromString(const std::string &client);
	
	// internal map storing the different port-creation factories (that internally map to specific middleware implementations)
	std::map<std::string, ComponentHelloSubscriberPortFactoryInterface*> portFactoryRegistry;
	
	// internal map storing various extensions of this component class
	std::map<std::string, ComponentHelloSubscriberExtension*> componentExtensionRegistry;
	
public:
	
	// define tasks
	Smart::TaskTriggerSubject* receiverActivityTrigger;
	ReceiverActivity *receiverActivity;
	
	// define input-ports
	// InputPort TimeServiceIn
	Smart::IPushClientPattern<DomainHelloServices::CommTime> *timeServiceIn;
	Smart::InputTaskTrigger<DomainHelloServices::CommTime> *timeServiceInInputTaskTrigger;
	TimeServiceInUpcallManager *timeServiceInUpcallManager;
	
	// define request-ports
	
	// define input-handler
	
	// define output-ports
	
	// define answer-ports
	
	// define request-handlers
	
	// definitions of ComponentHelloSubscriberROSExtension
	
	// definitions of OpcUaBackendComponentGeneratorExtension
	
	// definitions of PlainOpcUaComponentHelloSubscriberExtension
	
	
	// define default slave ports
	SmartACE::StateSlave *stateSlave;
	SmartStateChangeHandler *stateChangeHandler;
	SmartACE::WiringSlave *wiringSlave;
	
	
	/// this method is used to register different PortFactory classes (one for each supported middleware framework)
	void addPortFactory(const std::string &name, ComponentHelloSubscriberPortFactoryInterface *portFactory);
	
	SmartACE::SmartComponent* getComponentImpl();
	
	/// this method is used to register different component-extension classes
	void addExtension(ComponentHelloSubscriberExtension *extension);
	
	/// this method allows to access the registered component-extensions (automatically converting to the actuall implementation type)
	template <typename T>
	T* getExtension(const std::string &name) {
		auto it = componentExtensionRegistry.find(name);
		if(it != componentExtensionRegistry.end()) {
			return dynamic_cast<T*>(it->second);
		}
		return 0;
	}
	
	/// initialize component's internal members
	void init(int argc, char *argv[]);
	
	/// execute the component's infrastructure
	void run();
	
	/// clean-up component's resources
	void fini();
	
	/// call this method to set the overall component into the Alive state (i.e. component is then ready to operate)
	void setStartupFinished();
	
	/// connect all component's client ports
	Smart::StatusCode connectAndStartAllServices();
	
	/// start all assocuated Activities
	void startAllTasks();
	
	/// start all associated timers
	void startAllTimers();
	
	Smart::StatusCode connectTimeServiceIn(const std::string &serverName, const std::string &serviceName);

	// return singleton instance
	static ComponentHelloSubscriber* instance()
	{
		if(_componentHelloSubscriber == 0) {
			_componentHelloSubscriber = new ComponentHelloSubscriber();
		}
		return _componentHelloSubscriber;
	}
	
	static void deleteInstance() {
		if(_componentHelloSubscriber != 0) {
			delete _componentHelloSubscriber;
		}
	}
	
	// connections parameter
	struct connections_struct
	{
		// component struct
		struct component_struct
		{
			// the name of the component
			std::string name;
			std::string initialComponentMode;
			std::string defaultScheduler;
			bool useLogger;
		} component;
		
		//--- task parameter ---
		struct ReceiverActivity_struct {
			double minActFreq;
			double maxActFreq;
			std::string trigger;
			// only one of the following two params is 
			// actually used at run-time according 
			// to the system config model
			double periodicActFreq;
			// or
			std::string inPortRef;
			int prescale;
			// scheduling parameters
			std::string scheduler;
			int priority;
			int cpuAffinity;
		} receiverActivity;
		
		//--- upcall parameter ---
		
		//--- server port parameter ---
	
		//--- client port parameter ---
		struct TimeServiceIn_struct {
			std::string serverName;
			std::string serviceName;
			std::string wiringName;
			long interval;
			std::string roboticMiddleware;
		} timeServiceIn;
		
		// -- parameters for ComponentHelloSubscriberROSExtension
		
		// -- parameters for OpcUaBackendComponentGeneratorExtension
		
		// -- parameters for PlainOpcUaComponentHelloSubscriberExtension
		
	} connections;
};
#endif
