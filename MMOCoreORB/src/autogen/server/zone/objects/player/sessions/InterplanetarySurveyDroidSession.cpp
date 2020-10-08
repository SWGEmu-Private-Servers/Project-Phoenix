/*
 *	autogen/server/zone/objects/player/sessions/InterplanetarySurveyDroidSession.cpp generated by engine3 IDL compiler 0.60
 */

#include "InterplanetarySurveyDroidSession.h"

#include "server/zone/objects/creature/CreatureObject.h"

#include "server/zone/objects/tangible/tool/SurveyTool.h"

#include "server/zone/objects/tangible/TangibleObject.h"

/*
 *	InterplanetarySurveyDroidSessionStub
 */

enum {RPC_SETPLANET__STRING_ = 451335763,RPC_GETPLANET__,RPC_SETTOOL__SURVEYTOOL_,RPC_CLEARSESSION__,RPC_CANCELSESSION__,RPC_HASSURVEYTOOL__,};

InterplanetarySurveyDroidSession::InterplanetarySurveyDroidSession(CreatureObject* parent) : Facade(DummyConstructorParameter::instance()) {
	InterplanetarySurveyDroidSessionImplementation* _implementation = new InterplanetarySurveyDroidSessionImplementation(parent);
	_impl = _implementation;
	_impl->_setStub(this);
	_setClassName("InterplanetarySurveyDroidSession");
}

InterplanetarySurveyDroidSession::InterplanetarySurveyDroidSession(DummyConstructorParameter* param) : Facade(param) {
	_setClassName("InterplanetarySurveyDroidSession");
}

InterplanetarySurveyDroidSession::~InterplanetarySurveyDroidSession() {
}



void InterplanetarySurveyDroidSession::setPlanet(String& planet) {
	InterplanetarySurveyDroidSessionImplementation* _implementation = static_cast<InterplanetarySurveyDroidSessionImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETPLANET__STRING_);
		method.addAsciiParameter(planet);

		method.executeWithVoidReturn();
	} else {
		_implementation->setPlanet(planet);
	}
}

String InterplanetarySurveyDroidSession::getPlanet() {
	InterplanetarySurveyDroidSessionImplementation* _implementation = static_cast<InterplanetarySurveyDroidSessionImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETPLANET__);

		String _return_getPlanet;
		method.executeWithAsciiReturn(_return_getPlanet);
		return _return_getPlanet;
	} else {
		return _implementation->getPlanet();
	}
}

void InterplanetarySurveyDroidSession::setTool(SurveyTool* t) {
	InterplanetarySurveyDroidSessionImplementation* _implementation = static_cast<InterplanetarySurveyDroidSessionImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETTOOL__SURVEYTOOL_);
		method.addObjectParameter(t);

		method.executeWithVoidReturn();
	} else {
		_implementation->setTool(t);
	}
}

int InterplanetarySurveyDroidSession::clearSession() {
	InterplanetarySurveyDroidSessionImplementation* _implementation = static_cast<InterplanetarySurveyDroidSessionImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_CLEARSESSION__);

		return method.executeWithSignedIntReturn();
	} else {
		return _implementation->clearSession();
	}
}

int InterplanetarySurveyDroidSession::cancelSession() {
	InterplanetarySurveyDroidSessionImplementation* _implementation = static_cast<InterplanetarySurveyDroidSessionImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_CANCELSESSION__);

		return method.executeWithSignedIntReturn();
	} else {
		return _implementation->cancelSession();
	}
}

bool InterplanetarySurveyDroidSession::hasSurveyTool() {
	InterplanetarySurveyDroidSessionImplementation* _implementation = static_cast<InterplanetarySurveyDroidSessionImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_HASSURVEYTOOL__);

		return method.executeWithBooleanReturn();
	} else {
		return _implementation->hasSurveyTool();
	}
}

void InterplanetarySurveyDroidSession::initalizeDroid(TangibleObject* droid) {
	InterplanetarySurveyDroidSessionImplementation* _implementation = static_cast<InterplanetarySurveyDroidSessionImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		throw ObjectNotLocalException(this);

	} else {
		_implementation->initalizeDroid(droid);
	}
}

void InterplanetarySurveyDroidSession::handleMenuSelect(CreatureObject* pl, unsigned long long menuID, SuiListBox* suiBox) {
	InterplanetarySurveyDroidSessionImplementation* _implementation = static_cast<InterplanetarySurveyDroidSessionImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		throw ObjectNotLocalException(this);

	} else {
		_implementation->handleMenuSelect(pl, menuID, suiBox);
	}
}

DistributedObjectServant* InterplanetarySurveyDroidSession::_getImplementation() {

	 if (!_updated) _updated = true;
	return _impl;
}

DistributedObjectServant* InterplanetarySurveyDroidSession::_getImplementationForRead() const {
	return _impl;
}

void InterplanetarySurveyDroidSession::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	InterplanetarySurveyDroidSessionImplementation
 */

InterplanetarySurveyDroidSessionImplementation::InterplanetarySurveyDroidSessionImplementation(DummyConstructorParameter* param) : FacadeImplementation(param) {
	_initializeImplementation();
}


InterplanetarySurveyDroidSessionImplementation::~InterplanetarySurveyDroidSessionImplementation() {
}


void InterplanetarySurveyDroidSessionImplementation::finalize() {
}

void InterplanetarySurveyDroidSessionImplementation::_initializeImplementation() {
	_setClassHelper(InterplanetarySurveyDroidSessionHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void InterplanetarySurveyDroidSessionImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<InterplanetarySurveyDroidSession*>(stub);
	FacadeImplementation::_setStub(stub);
}

DistributedObjectStub* InterplanetarySurveyDroidSessionImplementation::_getStub() {
	return _this.get();
}

InterplanetarySurveyDroidSessionImplementation::operator const InterplanetarySurveyDroidSession*() {
	return _this.get();
}

void InterplanetarySurveyDroidSessionImplementation::lock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->lock(doLock);
}

void InterplanetarySurveyDroidSessionImplementation::lock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->lock(obj);
}

void InterplanetarySurveyDroidSessionImplementation::rlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->rlock(doLock);
}

void InterplanetarySurveyDroidSessionImplementation::wlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->wlock(doLock);
}

void InterplanetarySurveyDroidSessionImplementation::wlock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->wlock(obj);
}

void InterplanetarySurveyDroidSessionImplementation::unlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->unlock(doLock);
}

void InterplanetarySurveyDroidSessionImplementation::runlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->runlock(doLock);
}

void InterplanetarySurveyDroidSessionImplementation::_serializationHelperMethod() {
	FacadeImplementation::_serializationHelperMethod();

	_setClassName("InterplanetarySurveyDroidSession");

}

void InterplanetarySurveyDroidSessionImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		uint32 _nameHashCode;
		TypeInfo<uint32>::parseFromBinaryStream(&_nameHashCode, stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(InterplanetarySurveyDroidSessionImplementation::readObjectMember(stream, _nameHashCode)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool InterplanetarySurveyDroidSessionImplementation::readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode) {
	if (FacadeImplementation::readObjectMember(stream, nameHashCode))
		return true;

	switch(nameHashCode) {
	case 0x9f3bfeac: //InterplanetarySurveyDroidSession.player
		TypeInfo<ManagedWeakReference<CreatureObject* > >::parseFromBinaryStream(&player, stream);
		return true;

	case 0x1ef56180: //InterplanetarySurveyDroidSession.targetPlanet
		TypeInfo<String >::parseFromBinaryStream(&targetPlanet, stream);
		return true;

	case 0x83ac69e: //InterplanetarySurveyDroidSession.droidSuiBox
		TypeInfo<ManagedReference<SuiListBox* > >::parseFromBinaryStream(&droidSuiBox, stream);
		return true;

	case 0x8a48b55: //InterplanetarySurveyDroidSession.step
		TypeInfo<byte >::parseFromBinaryStream(&step, stream);
		return true;

	}

	return false;
}

void InterplanetarySurveyDroidSessionImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = InterplanetarySurveyDroidSessionImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int InterplanetarySurveyDroidSessionImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = FacadeImplementation::writeObjectMembers(stream);

	uint32 _nameHashCode;
	int _offset;
	uint32 _totalSize;
	_nameHashCode = 0x9f3bfeac; //InterplanetarySurveyDroidSession.player
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<ManagedWeakReference<CreatureObject* > >::toBinaryStream(&player, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_nameHashCode = 0x1ef56180; //InterplanetarySurveyDroidSession.targetPlanet
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<String >::toBinaryStream(&targetPlanet, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_nameHashCode = 0x83ac69e; //InterplanetarySurveyDroidSession.droidSuiBox
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<ManagedReference<SuiListBox* > >::toBinaryStream(&droidSuiBox, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_nameHashCode = 0x8a48b55; //InterplanetarySurveyDroidSession.step
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<byte >::toBinaryStream(&step, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);


	return _count + 4;
}

InterplanetarySurveyDroidSessionImplementation::InterplanetarySurveyDroidSessionImplementation(CreatureObject* parent) {
	_initializeImplementation();
	// server/zone/objects/player/sessions/InterplanetarySurveyDroidSession.idl():  		Logger.setLoggingName("InterplanetarySurveyDroidSession");
	Logger::setLoggingName("InterplanetarySurveyDroidSession");
	// server/zone/objects/player/sessions/InterplanetarySurveyDroidSession.idl():  		Logger.setLogging(true);
	Logger::setLogging(true);
	// server/zone/objects/player/sessions/InterplanetarySurveyDroidSession.idl():  		player = parent;
	player = parent;
	// server/zone/objects/player/sessions/InterplanetarySurveyDroidSession.idl():  		step = 0;
	step = 0;
}

void InterplanetarySurveyDroidSessionImplementation::setPlanet(String& planet) {
	// server/zone/objects/player/sessions/InterplanetarySurveyDroidSession.idl():  		targetPlanet = planet;
	targetPlanet = planet;
}

String InterplanetarySurveyDroidSessionImplementation::getPlanet() {
	// server/zone/objects/player/sessions/InterplanetarySurveyDroidSession.idl():  		return targetPlanet;
	return targetPlanet;
}

void InterplanetarySurveyDroidSessionImplementation::setTool(SurveyTool* t) {
	// server/zone/objects/player/sessions/InterplanetarySurveyDroidSession.idl():  		toolObject = t;
	toolObject = t;
}

int InterplanetarySurveyDroidSessionImplementation::clearSession() {
	// server/zone/objects/player/sessions/InterplanetarySurveyDroidSession.idl():  		player = null;
	player = NULL;
	// server/zone/objects/player/sessions/InterplanetarySurveyDroidSession.idl():  		droidObject = null;
	droidObject = NULL;
	// server/zone/objects/player/sessions/InterplanetarySurveyDroidSession.idl():  		toolObject = null;
	toolObject = NULL;
	// server/zone/objects/player/sessions/InterplanetarySurveyDroidSession.idl():  		return 0;
	return 0;
}

/*
 *	InterplanetarySurveyDroidSessionAdapter
 */


#include "engine/orb/messages/InvokeMethodMessage.h"


InterplanetarySurveyDroidSessionAdapter::InterplanetarySurveyDroidSessionAdapter(InterplanetarySurveyDroidSession* obj) : FacadeAdapter(obj) {
}

void InterplanetarySurveyDroidSessionAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	DOBMessage* resp = inv->getInvocationMessage();

	switch (methid) {
	case RPC_SETPLANET__STRING_:
		{
			String planet; inv->getAsciiParameter(planet);
			
			setPlanet(planet);
			
		}
		break;
	case RPC_GETPLANET__:
		{
			
			String _m_res = getPlanet();
			resp->insertAscii(_m_res);
		}
		break;
	case RPC_SETTOOL__SURVEYTOOL_:
		{
			SurveyTool* t = static_cast<SurveyTool*>(inv->getObjectParameter());
			
			setTool(t);
			
		}
		break;
	case RPC_CLEARSESSION__:
		{
			
			int _m_res = clearSession();
			resp->insertSignedInt(_m_res);
		}
		break;
	case RPC_CANCELSESSION__:
		{
			
			int _m_res = cancelSession();
			resp->insertSignedInt(_m_res);
		}
		break;
	case RPC_HASSURVEYTOOL__:
		{
			
			bool _m_res = hasSurveyTool();
			resp->insertBoolean(_m_res);
		}
		break;
	default:
		FacadeAdapter::invokeMethod(methid, inv);
	}
}

void InterplanetarySurveyDroidSessionAdapter::setPlanet(String& planet) {
	(static_cast<InterplanetarySurveyDroidSession*>(stub))->setPlanet(planet);
}

String InterplanetarySurveyDroidSessionAdapter::getPlanet() {
	return (static_cast<InterplanetarySurveyDroidSession*>(stub))->getPlanet();
}

void InterplanetarySurveyDroidSessionAdapter::setTool(SurveyTool* t) {
	(static_cast<InterplanetarySurveyDroidSession*>(stub))->setTool(t);
}

int InterplanetarySurveyDroidSessionAdapter::clearSession() {
	return (static_cast<InterplanetarySurveyDroidSession*>(stub))->clearSession();
}

int InterplanetarySurveyDroidSessionAdapter::cancelSession() {
	return (static_cast<InterplanetarySurveyDroidSession*>(stub))->cancelSession();
}

bool InterplanetarySurveyDroidSessionAdapter::hasSurveyTool() {
	return (static_cast<InterplanetarySurveyDroidSession*>(stub))->hasSurveyTool();
}

/*
 *	InterplanetarySurveyDroidSessionHelper
 */

InterplanetarySurveyDroidSessionHelper* InterplanetarySurveyDroidSessionHelper::staticInitializer = InterplanetarySurveyDroidSessionHelper::instance();

InterplanetarySurveyDroidSessionHelper::InterplanetarySurveyDroidSessionHelper() {
	className = "InterplanetarySurveyDroidSession";

	Core::getObjectBroker()->registerClass(className, this);
}

void InterplanetarySurveyDroidSessionHelper::finalizeHelper() {
	InterplanetarySurveyDroidSessionHelper::finalize();
}

DistributedObject* InterplanetarySurveyDroidSessionHelper::instantiateObject() {
	return new InterplanetarySurveyDroidSession(DummyConstructorParameter::instance());
}

DistributedObjectServant* InterplanetarySurveyDroidSessionHelper::instantiateServant() {
	return new InterplanetarySurveyDroidSessionImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* InterplanetarySurveyDroidSessionHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new InterplanetarySurveyDroidSessionAdapter(static_cast<InterplanetarySurveyDroidSession*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

