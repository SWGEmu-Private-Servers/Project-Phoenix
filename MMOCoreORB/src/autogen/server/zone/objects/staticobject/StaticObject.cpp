/*
 *	autogen/server/zone/objects/staticobject/StaticObject.cpp generated by engine3 IDL compiler 0.60
 */

#include "StaticObject.h"

#include "server/zone/Zone.h"

/*
 *	StaticObjectStub
 */

enum {RPC_SENDBASELINESTO__SCENEOBJECT_,RPC_ISSTATICOBJECTCLASS__};

StaticObject::StaticObject() : SceneObject(DummyConstructorParameter::instance()) {
	StaticObjectImplementation* _implementation = new StaticObjectImplementation();
	_impl = _implementation;
	_impl->_setStub(this);
	_setClassName("StaticObject");
}

StaticObject::StaticObject(DummyConstructorParameter* param) : SceneObject(param) {
	_setClassName("StaticObject");
}

StaticObject::~StaticObject() {
}



void StaticObject::loadTemplateData(SharedObjectTemplate* templateData) {
	StaticObjectImplementation* _implementation = static_cast<StaticObjectImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		throw ObjectNotLocalException(this);

	} else {
		_implementation->loadTemplateData(templateData);
	}
}

void StaticObject::sendBaselinesTo(SceneObject* player) {
	StaticObjectImplementation* _implementation = static_cast<StaticObjectImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SENDBASELINESTO__SCENEOBJECT_);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else {
		_implementation->sendBaselinesTo(player);
	}
}

StaticObject* StaticObject::asStaticObject() {
	StaticObjectImplementation* _implementation = static_cast<StaticObjectImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		throw ObjectNotLocalException(this);

	} else {
		return _implementation->asStaticObject();
	}
}

bool StaticObject::isStaticObjectClass() {
	StaticObjectImplementation* _implementation = static_cast<StaticObjectImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISSTATICOBJECTCLASS__);

		return method.executeWithBooleanReturn();
	} else {
		return _implementation->isStaticObjectClass();
	}
}

DistributedObjectServant* StaticObject::_getImplementation() {

	 if (!_updated) _updated = true;
	return _impl;
}

DistributedObjectServant* StaticObject::_getImplementationForRead() const {
	return _impl;
}

void StaticObject::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	StaticObjectImplementation
 */

StaticObjectImplementation::StaticObjectImplementation(DummyConstructorParameter* param) : SceneObjectImplementation(param) {
	_initializeImplementation();
}


StaticObjectImplementation::~StaticObjectImplementation() {
}


void StaticObjectImplementation::finalize() {
}

void StaticObjectImplementation::_initializeImplementation() {
	_setClassHelper(StaticObjectHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void StaticObjectImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<StaticObject*>(stub);
	SceneObjectImplementation::_setStub(stub);
}

DistributedObjectStub* StaticObjectImplementation::_getStub() {
	return _this.get();
}

StaticObjectImplementation::operator const StaticObject*() {
	return _this.get();
}

void StaticObjectImplementation::lock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->lock(doLock);
}

void StaticObjectImplementation::lock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->lock(obj);
}

void StaticObjectImplementation::rlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->rlock(doLock);
}

void StaticObjectImplementation::wlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->wlock(doLock);
}

void StaticObjectImplementation::wlock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->wlock(obj);
}

void StaticObjectImplementation::unlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->unlock(doLock);
}

void StaticObjectImplementation::runlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->runlock(doLock);
}

void StaticObjectImplementation::_serializationHelperMethod() {
	SceneObjectImplementation::_serializationHelperMethod();

	_setClassName("StaticObject");

}

void StaticObjectImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		uint32 _nameHashCode;
		TypeInfo<uint32>::parseFromBinaryStream(&_nameHashCode, stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(StaticObjectImplementation::readObjectMember(stream, _nameHashCode)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool StaticObjectImplementation::readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode) {
	if (SceneObjectImplementation::readObjectMember(stream, nameHashCode))
		return true;

	switch(nameHashCode) {
	}

	return false;
}

void StaticObjectImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = StaticObjectImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int StaticObjectImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = SceneObjectImplementation::writeObjectMembers(stream);

	uint32 _nameHashCode;
	int _offset;
	uint32 _totalSize;

	return _count + 0;
}

StaticObjectImplementation::StaticObjectImplementation() {
	_initializeImplementation();
	// server/zone/objects/staticobject/StaticObject.idl():  		Logger.setLoggingName("StaticObject");
	Logger::setLoggingName("StaticObject");
	// server/zone/objects/staticobject/StaticObject.idl():  		Logger.setLogging(false);
	Logger::setLogging(false);
	// server/zone/objects/staticobject/StaticObject.idl():  		Logger.setGlobalLogging(true);
	Logger::setGlobalLogging(true);
}

void StaticObjectImplementation::loadTemplateData(SharedObjectTemplate* templateData) {
	// server/zone/objects/staticobject/StaticObject.idl():  		super.loadTemplateData(templateData);
	SceneObjectImplementation::loadTemplateData(templateData);
}

bool StaticObjectImplementation::isStaticObjectClass() {
	// server/zone/objects/staticobject/StaticObject.idl():  		return true;
	return true;
}

/*
 *	StaticObjectAdapter
 */


#include "engine/orb/messages/InvokeMethodMessage.h"


StaticObjectAdapter::StaticObjectAdapter(StaticObject* obj) : SceneObjectAdapter(obj) {
}

void StaticObjectAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	DOBMessage* resp = inv->getInvocationMessage();

	switch (methid) {
	case RPC_SENDBASELINESTO__SCENEOBJECT_:
		{
			SceneObject* player = static_cast<SceneObject*>(inv->getObjectParameter());
			
			sendBaselinesTo(player);
			
		}
		break;
	case RPC_ISSTATICOBJECTCLASS__:
		{
			
			bool _m_res = isStaticObjectClass();
			resp->insertBoolean(_m_res);
		}
		break;
	default:
		SceneObjectAdapter::invokeMethod(methid, inv);
	}
}

void StaticObjectAdapter::sendBaselinesTo(SceneObject* player) {
	(static_cast<StaticObject*>(stub))->sendBaselinesTo(player);
}

bool StaticObjectAdapter::isStaticObjectClass() {
	return (static_cast<StaticObject*>(stub))->isStaticObjectClass();
}

/*
 *	StaticObjectHelper
 */

StaticObjectHelper* StaticObjectHelper::staticInitializer = StaticObjectHelper::instance();

StaticObjectHelper::StaticObjectHelper() {
	className = "StaticObject";

	Core::getObjectBroker()->registerClass(className, this);
}

void StaticObjectHelper::finalizeHelper() {
	StaticObjectHelper::finalize();
}

DistributedObject* StaticObjectHelper::instantiateObject() {
	return new StaticObject(DummyConstructorParameter::instance());
}

DistributedObjectServant* StaticObjectHelper::instantiateServant() {
	return new StaticObjectImplementation();
}

DistributedObjectAdapter* StaticObjectHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new StaticObjectAdapter(static_cast<StaticObject*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}
