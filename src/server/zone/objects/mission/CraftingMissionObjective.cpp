/*
 *	server/zone/objects/mission/CraftingMissionObjective.cpp generated by engine3 IDL compiler 0.60
 */

#include "CraftingMissionObjective.h"

#include "server/zone/objects/scene/Observer.h"

#include "server/zone/objects/scene/Observable.h"

#include "server/zone/objects/mission/MissionObject.h"

#include "server/zone/objects/mission/MissionObserver.h"

#include "server/zone/objects/area/MissionSpawnActiveArea.h"

#include "server/zone/objects/scene/SceneObject.h"

#include "server/zone/templates/SharedObjectTemplate.h"


// Imported class dependencies

#include "server/zone/objects/mission/DestroyMissionObjective.h"

#include "engine/util/Quaternion.h"

#include "server/zone/templates/TemplateReference.h"

#include "system/util/VectorMap.h"

#include "server/zone/objects/scene/ObserverEventMap.h"

#include "server/zone/objects/mission/MissionObject.h"

#include "system/util/Vector.h"

#include "server/zone/ZoneProcessServerImplementation.h"

#include "server/zone/Zone.h"

#include "server/zone/objects/mission/MissionObjective.h"

#include "server/zone/objects/waypoint/WaypointObject.h"

#include "server/zone/objects/scene/SceneObject.h"

#include "server/zone/templates/SharedObjectTemplate.h"

#include "system/util/SortedVector.h"

#include "engine/core/ObjectUpdateToDatabaseTask.h"

#include "server/zone/objects/scene/variables/PendingTasksMap.h"

#include "server/zone/objects/scene/variables/StringId.h"

/*
 *	CraftingMissionObjectiveStub
 */

CraftingMissionObjective::CraftingMissionObjective(MissionObject* mission) : MissionObjective(DummyConstructorParameter::instance()) {
	CraftingMissionObjectiveImplementation* _implementation = new CraftingMissionObjectiveImplementation(mission);
	ManagedObject::_setImplementation(_implementation);
	_implementation->_setStub(this);
}

CraftingMissionObjective::CraftingMissionObjective(DummyConstructorParameter* param) : MissionObjective(param) {
}

CraftingMissionObjective::~CraftingMissionObjective() {
}


void CraftingMissionObjective::initializeTransientMembers() {
	CraftingMissionObjectiveImplementation* _implementation = (CraftingMissionObjectiveImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);

		method.executeWithVoidReturn();
	} else
		_implementation->initializeTransientMembers();
}

void CraftingMissionObjective::activate() {
	CraftingMissionObjectiveImplementation* _implementation = (CraftingMissionObjectiveImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 7);

		method.executeWithVoidReturn();
	} else
		_implementation->activate();
}

void CraftingMissionObjective::abort() {
	CraftingMissionObjectiveImplementation* _implementation = (CraftingMissionObjectiveImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 8);

		method.executeWithVoidReturn();
	} else
		_implementation->abort();
}

void CraftingMissionObjective::complete() {
	CraftingMissionObjectiveImplementation* _implementation = (CraftingMissionObjectiveImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 9);

		method.executeWithVoidReturn();
	} else
		_implementation->complete();
}

int CraftingMissionObjective::notifyObserverEvent(MissionObserver* observer, unsigned int eventType, Observable* observable, ManagedObject* arg1, long long arg2) {
	CraftingMissionObjectiveImplementation* _implementation = (CraftingMissionObjectiveImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 10);
		method.addObjectParameter(observer);
		method.addUnsignedIntParameter(eventType);
		method.addObjectParameter(observable);
		method.addObjectParameter(arg1);
		method.addSignedLongParameter(arg2);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->notifyObserverEvent(observer, eventType, observable, arg1, arg2);
}

DistributedObjectServant* CraftingMissionObjective::_getImplementation() {
	return getForUpdate();}

void CraftingMissionObjective::_setImplementation(DistributedObjectServant* servant) {
	setObject((ManagedObjectImplementation*) servant);}

/*
 *	CraftingMissionObjectiveImplementation
 */

CraftingMissionObjectiveImplementation::CraftingMissionObjectiveImplementation(DummyConstructorParameter* param) : MissionObjectiveImplementation(param) {
	_initializeImplementation();
}


CraftingMissionObjectiveImplementation::~CraftingMissionObjectiveImplementation() {
	CraftingMissionObjectiveImplementation::finalize();
}


void CraftingMissionObjectiveImplementation::_initializeImplementation() {
	_setClassHelper(CraftingMissionObjectiveHelper::instance());

	_serializationHelperMethod();
}

void CraftingMissionObjectiveImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (CraftingMissionObjective*) stub;
	MissionObjectiveImplementation::_setStub(stub);
}

DistributedObjectStub* CraftingMissionObjectiveImplementation::_getStub() {
	return _this;
}

CraftingMissionObjectiveImplementation::operator const CraftingMissionObjective*() {
	return _this;
}

TransactionalObject* CraftingMissionObjectiveImplementation::clone() {
	return (TransactionalObject*) new CraftingMissionObjectiveImplementation(*this);
}


void CraftingMissionObjectiveImplementation::lock(bool doLock) {
}

void CraftingMissionObjectiveImplementation::lock(ManagedObject* obj) {
}

void CraftingMissionObjectiveImplementation::rlock(bool doLock) {
}

void CraftingMissionObjectiveImplementation::wlock(bool doLock) {
}

void CraftingMissionObjectiveImplementation::wlock(ManagedObject* obj) {
}

void CraftingMissionObjectiveImplementation::unlock(bool doLock) {
}

void CraftingMissionObjectiveImplementation::runlock(bool doLock) {
}

void CraftingMissionObjectiveImplementation::_serializationHelperMethod() {
	MissionObjectiveImplementation::_serializationHelperMethod();

	_setClassName("CraftingMissionObjective");

}

CraftingMissionObjectiveImplementation::CraftingMissionObjectiveImplementation(MissionObject* mission) : MissionObjectiveImplementation(mission) {
	_initializeImplementation();
	// server/zone/objects/mission/CraftingMissionObjective.idl(61):  		Logger.setLoggingName("CraftingMissionObjective");
	Logger::setLoggingName("CraftingMissionObjective");
}

void CraftingMissionObjectiveImplementation::finalize() {
	// server/zone/objects/mission/CraftingMissionObjective.idl(65):  		Logger.info("deleting from memory", true);
	Logger::info("deleting from memory", true);
}

void CraftingMissionObjectiveImplementation::initializeTransientMembers() {
	// server/zone/objects/mission/CraftingMissionObjective.idl(69):  		super.initializeTransientMembers();
	MissionObjectiveImplementation::initializeTransientMembers();
	// server/zone/objects/mission/CraftingMissionObjective.idl(71):  		Logger.setLoggingName("MissionObject");
	Logger::setLoggingName("MissionObject");
	// server/zone/objects/mission/CraftingMissionObjective.idl(73):  		activate();
	activate();
}

/*
 *	CraftingMissionObjectiveAdapter
 */

CraftingMissionObjectiveAdapter::CraftingMissionObjectiveAdapter(CraftingMissionObjectiveImplementation* obj) : MissionObjectiveAdapter(obj) {
}

Packet* CraftingMissionObjectiveAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		finalize();
		break;
	case 7:
		initializeTransientMembers();
		break;
	case 8:
		activate();
		break;
	case 9:
		abort();
		break;
	case 10:
		complete();
		break;
	case 11:
		resp->insertSignedInt(notifyObserverEvent((MissionObserver*) inv->getObjectParameter(), inv->getUnsignedIntParameter(), (Observable*) inv->getObjectParameter(), (ManagedObject*) inv->getObjectParameter(), inv->getSignedLongParameter()));
		break;
	default:
		return NULL;
	}

	return resp;
}

void CraftingMissionObjectiveAdapter::finalize() {
	((CraftingMissionObjectiveImplementation*) impl)->finalize();
}

void CraftingMissionObjectiveAdapter::initializeTransientMembers() {
	((CraftingMissionObjectiveImplementation*) impl)->initializeTransientMembers();
}

void CraftingMissionObjectiveAdapter::activate() {
	((CraftingMissionObjectiveImplementation*) impl)->activate();
}

void CraftingMissionObjectiveAdapter::abort() {
	((CraftingMissionObjectiveImplementation*) impl)->abort();
}

void CraftingMissionObjectiveAdapter::complete() {
	((CraftingMissionObjectiveImplementation*) impl)->complete();
}

int CraftingMissionObjectiveAdapter::notifyObserverEvent(MissionObserver* observer, unsigned int eventType, Observable* observable, ManagedObject* arg1, long long arg2) {
	return ((CraftingMissionObjectiveImplementation*) impl)->notifyObserverEvent(observer, eventType, observable, arg1, arg2);
}

/*
 *	CraftingMissionObjectiveHelper
 */

CraftingMissionObjectiveHelper* CraftingMissionObjectiveHelper::staticInitializer = CraftingMissionObjectiveHelper::instance();

CraftingMissionObjectiveHelper::CraftingMissionObjectiveHelper() {
	className = "CraftingMissionObjective";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void CraftingMissionObjectiveHelper::finalizeHelper() {
	CraftingMissionObjectiveHelper::finalize();
}

DistributedObject* CraftingMissionObjectiveHelper::instantiateObject() {
	return new CraftingMissionObjective(DummyConstructorParameter::instance());
}

DistributedObjectServant* CraftingMissionObjectiveHelper::instantiateServant() {
	return new CraftingMissionObjectiveImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* CraftingMissionObjectiveHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new CraftingMissionObjectiveAdapter((CraftingMissionObjectiveImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

