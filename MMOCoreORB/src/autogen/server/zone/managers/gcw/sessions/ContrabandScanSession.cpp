/*
 *	autogen/server/zone/managers/gcw/sessions/ContrabandScanSession.cpp generated by engine3 IDL compiler 0.60
 */

#include "ContrabandScanSession.h"

#include "server/zone/Zone.h"

#include "server/zone/objects/scene/SceneObject.h"

#include "server/zone/objects/creature/CreatureObject.h"

#include "server/zone/objects/creature/ai/AiAgent.h"

/*
 *	ContrabandScanSessionStub
 */

enum {RPC_INITIALIZESESSION__ = 414740677,RPC_CANCELSESSION__,RPC_CLEARSESSION__,RPC_RUNCONTRABANDSCAN__,RPC_SCANPREREQUISITESMET__AIAGENT_CREATUREOBJECT_,};

ContrabandScanSession::ContrabandScanSession(AiAgent* scanner, CreatureObject* player) : Facade(DummyConstructorParameter::instance()) {
	ContrabandScanSessionImplementation* _implementation = new ContrabandScanSessionImplementation(scanner, player);
	_impl = _implementation;
	_impl->_setStub(this);
	_setClassName("ContrabandScanSession");
}

ContrabandScanSession::ContrabandScanSession(DummyConstructorParameter* param) : Facade(param) {
	_setClassName("ContrabandScanSession");
}

ContrabandScanSession::~ContrabandScanSession() {
}



int ContrabandScanSession::initializeSession() {
	ContrabandScanSessionImplementation* _implementation = static_cast<ContrabandScanSessionImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_INITIALIZESESSION__);

		return method.executeWithSignedIntReturn();
	} else {
		return _implementation->initializeSession();
	}
}

int ContrabandScanSession::cancelSession() {
	ContrabandScanSessionImplementation* _implementation = static_cast<ContrabandScanSessionImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_CANCELSESSION__);

		return method.executeWithSignedIntReturn();
	} else {
		return _implementation->cancelSession();
	}
}

int ContrabandScanSession::clearSession() {
	ContrabandScanSessionImplementation* _implementation = static_cast<ContrabandScanSessionImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_CLEARSESSION__);

		return method.executeWithSignedIntReturn();
	} else {
		return _implementation->clearSession();
	}
}

void ContrabandScanSession::runContrabandScan() {
	ContrabandScanSessionImplementation* _implementation = static_cast<ContrabandScanSessionImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_RUNCONTRABANDSCAN__);

		method.executeWithVoidReturn();
	} else {
		_implementation->runContrabandScan();
	}
}

bool ContrabandScanSession::scanPrerequisitesMet(AiAgent* scanner, CreatureObject* player) {
	ContrabandScanSessionImplementation* _implementation = static_cast<ContrabandScanSessionImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SCANPREREQUISITESMET__AIAGENT_CREATUREOBJECT_);
		method.addObjectParameter(scanner);
		method.addObjectParameter(player);

		return method.executeWithBooleanReturn();
	} else {
		return _implementation->scanPrerequisitesMet(scanner, player);
	}
}

DistributedObjectServant* ContrabandScanSession::_getImplementation() {

	 if (!_updated) _updated = true;
	return _impl;
}

DistributedObjectServant* ContrabandScanSession::_getImplementationForRead() const {
	return _impl;
}

void ContrabandScanSession::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	ContrabandScanSessionImplementation
 */

ContrabandScanSessionImplementation::ContrabandScanSessionImplementation(DummyConstructorParameter* param) : FacadeImplementation(param) {
	_initializeImplementation();
}


ContrabandScanSessionImplementation::~ContrabandScanSessionImplementation() {
}


void ContrabandScanSessionImplementation::finalize() {
}

void ContrabandScanSessionImplementation::_initializeImplementation() {
	_setClassHelper(ContrabandScanSessionHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void ContrabandScanSessionImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<ContrabandScanSession*>(stub);
	FacadeImplementation::_setStub(stub);
}

DistributedObjectStub* ContrabandScanSessionImplementation::_getStub() {
	return _this.get();
}

ContrabandScanSessionImplementation::operator const ContrabandScanSession*() {
	return _this.get();
}

void ContrabandScanSessionImplementation::lock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->lock(doLock);
}

void ContrabandScanSessionImplementation::lock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->lock(obj);
}

void ContrabandScanSessionImplementation::rlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->rlock(doLock);
}

void ContrabandScanSessionImplementation::wlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->wlock(doLock);
}

void ContrabandScanSessionImplementation::wlock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->wlock(obj);
}

void ContrabandScanSessionImplementation::unlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->unlock(doLock);
}

void ContrabandScanSessionImplementation::runlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->runlock(doLock);
}

void ContrabandScanSessionImplementation::_serializationHelperMethod() {
	FacadeImplementation::_serializationHelperMethod();

	_setClassName("ContrabandScanSession");

}

void ContrabandScanSessionImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		uint32 _nameHashCode;
		TypeInfo<uint32>::parseFromBinaryStream(&_nameHashCode, stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(ContrabandScanSessionImplementation::readObjectMember(stream, _nameHashCode)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool ContrabandScanSessionImplementation::readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode) {
	if (FacadeImplementation::readObjectMember(stream, nameHashCode))
		return true;

	switch(nameHashCode) {
	case 0xa5a8247b: //ContrabandScanSession.scanState
		TypeInfo<int >::parseFromBinaryStream(&scanState, stream);
		return true;

	case 0x1204e3b3: //ContrabandScanSession.previousScanState
		TypeInfo<int >::parseFromBinaryStream(&previousScanState, stream);
		return true;

	case 0xcbc487f2: //ContrabandScanSession.timeLeft
		TypeInfo<int >::parseFromBinaryStream(&timeLeft, stream);
		return true;

	case 0xd3193203: //ContrabandScanSession.previousTimeLeft
		TypeInfo<int >::parseFromBinaryStream(&previousTimeLeft, stream);
		return true;

	case 0xc53d78c4: //ContrabandScanSession.alreadyTriedToAvoidScan
		TypeInfo<bool >::parseFromBinaryStream(&alreadyTriedToAvoidScan, stream);
		return true;

	}

	return false;
}

void ContrabandScanSessionImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = ContrabandScanSessionImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int ContrabandScanSessionImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = FacadeImplementation::writeObjectMembers(stream);

	uint32 _nameHashCode;
	int _offset;
	uint32 _totalSize;
	_nameHashCode = 0xa5a8247b; //ContrabandScanSession.scanState
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<int >::toBinaryStream(&scanState, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_nameHashCode = 0x1204e3b3; //ContrabandScanSession.previousScanState
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<int >::toBinaryStream(&previousScanState, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_nameHashCode = 0xcbc487f2; //ContrabandScanSession.timeLeft
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<int >::toBinaryStream(&timeLeft, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_nameHashCode = 0xd3193203; //ContrabandScanSession.previousTimeLeft
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<int >::toBinaryStream(&previousTimeLeft, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_nameHashCode = 0xc53d78c4; //ContrabandScanSession.alreadyTriedToAvoidScan
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<bool >::toBinaryStream(&alreadyTriedToAvoidScan, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);


	return _count + 5;
}

ContrabandScanSessionImplementation::ContrabandScanSessionImplementation(AiAgent* scanner, CreatureObject* player) {
	_initializeImplementation();
	// server/zone/managers/gcw/sessions/ContrabandScanSession.idl():  		Logger.setLoggingName("ContrabandScanSession");
	Logger::setLoggingName("ContrabandScanSession");
	// server/zone/managers/gcw/sessions/ContrabandScanSession.idl():  		Logger.setLogging(true);
	Logger::setLogging(true);
	// server/zone/managers/gcw/sessions/ContrabandScanSession.idl():  		weakScanner = scanner;
	weakScanner = scanner;
	// server/zone/managers/gcw/sessions/ContrabandScanSession.idl():  		weakPlayer = player;
	weakPlayer = player;
	// server/zone/managers/gcw/sessions/ContrabandScanSession.idl():  		previousScanState = SCANCHANCE;
	previousScanState = SCANCHANCE;
	// server/zone/managers/gcw/sessions/ContrabandScanSession.idl():  		scanState = SCANCHANCE;
	scanState = SCANCHANCE;
	// server/zone/managers/gcw/sessions/ContrabandScanSession.idl():  		previousTimeLeft = 0;
	previousTimeLeft = 0;
	// server/zone/managers/gcw/sessions/ContrabandScanSession.idl():  		timeLeft = 0;
	timeLeft = 0;
	// server/zone/managers/gcw/sessions/ContrabandScanSession.idl():  		alreadyTriedToAvoidScan = false;
	alreadyTriedToAvoidScan = false;
}

/*
 *	ContrabandScanSessionAdapter
 */


#include "engine/orb/messages/InvokeMethodMessage.h"


ContrabandScanSessionAdapter::ContrabandScanSessionAdapter(ContrabandScanSession* obj) : FacadeAdapter(obj) {
}

void ContrabandScanSessionAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	DOBMessage* resp = inv->getInvocationMessage();

	switch (methid) {
	case RPC_INITIALIZESESSION__:
		{
			
			int _m_res = initializeSession();
			resp->insertSignedInt(_m_res);
		}
		break;
	case RPC_CANCELSESSION__:
		{
			
			int _m_res = cancelSession();
			resp->insertSignedInt(_m_res);
		}
		break;
	case RPC_CLEARSESSION__:
		{
			
			int _m_res = clearSession();
			resp->insertSignedInt(_m_res);
		}
		break;
	case RPC_RUNCONTRABANDSCAN__:
		{
			
			runContrabandScan();
			
		}
		break;
	case RPC_SCANPREREQUISITESMET__AIAGENT_CREATUREOBJECT_:
		{
			AiAgent* scanner = static_cast<AiAgent*>(inv->getObjectParameter());
			CreatureObject* player = static_cast<CreatureObject*>(inv->getObjectParameter());
			
			bool _m_res = scanPrerequisitesMet(scanner, player);
			resp->insertBoolean(_m_res);
		}
		break;
	default:
		FacadeAdapter::invokeMethod(methid, inv);
	}
}

int ContrabandScanSessionAdapter::initializeSession() {
	return (static_cast<ContrabandScanSession*>(stub))->initializeSession();
}

int ContrabandScanSessionAdapter::cancelSession() {
	return (static_cast<ContrabandScanSession*>(stub))->cancelSession();
}

int ContrabandScanSessionAdapter::clearSession() {
	return (static_cast<ContrabandScanSession*>(stub))->clearSession();
}

void ContrabandScanSessionAdapter::runContrabandScan() {
	(static_cast<ContrabandScanSession*>(stub))->runContrabandScan();
}

bool ContrabandScanSessionAdapter::scanPrerequisitesMet(AiAgent* scanner, CreatureObject* player) {
	return (static_cast<ContrabandScanSession*>(stub))->scanPrerequisitesMet(scanner, player);
}

/*
 *	ContrabandScanSessionHelper
 */

ContrabandScanSessionHelper* ContrabandScanSessionHelper::staticInitializer = ContrabandScanSessionHelper::instance();

ContrabandScanSessionHelper::ContrabandScanSessionHelper() {
	className = "ContrabandScanSession";

	Core::getObjectBroker()->registerClass(className, this);
}

void ContrabandScanSessionHelper::finalizeHelper() {
	ContrabandScanSessionHelper::finalize();
}

DistributedObject* ContrabandScanSessionHelper::instantiateObject() {
	return new ContrabandScanSession(DummyConstructorParameter::instance());
}

DistributedObjectServant* ContrabandScanSessionHelper::instantiateServant() {
	return new ContrabandScanSessionImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* ContrabandScanSessionHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new ContrabandScanSessionAdapter(static_cast<ContrabandScanSession*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

