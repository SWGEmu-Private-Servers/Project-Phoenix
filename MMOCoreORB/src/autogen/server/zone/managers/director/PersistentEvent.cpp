/*
 *	autogen/server/zone/managers/director/PersistentEvent.cpp generated by engine3 IDL compiler 0.60
 */

#include "PersistentEvent.h"

/*
 *	PersistentEventStub
 */

enum {RPC_GETTIMESTAMP__,RPC_GETKEY__,RPC_GETSCREENPLAY__,RPC_GETARGS__,RPC_GETOBJECT__,RPC_GETCURTIME__,RPC_GETEVENTNAME__,RPC_SETEVENTNAME__STRING_,RPC_SETCURTIME__LONG_,RPC_SETTIMESTAMP__INT_,RPC_SETKEY__STRING_,RPC_SETSCREENPLAY__STRING_,RPC_SETARGS__STRING_,RPC_SETOBJECT__SCENEOBJECT_,RPC_SETEVENTEXECUTED__BOOL_,RPC_LOADTRANSIENTTASK__};

PersistentEvent::PersistentEvent() : ManagedObject(DummyConstructorParameter::instance()) {
	PersistentEventImplementation* _implementation = new PersistentEventImplementation();
	_impl = _implementation;
	_impl->_setStub(this);
	_setClassName("PersistentEvent");
}

PersistentEvent::PersistentEvent(DummyConstructorParameter* param) : ManagedObject(param) {
	_setClassName("PersistentEvent");
}

PersistentEvent::~PersistentEvent() {
}



void PersistentEvent::setScreenplayTask(ScreenPlayTask* task) {
	PersistentEventImplementation* _implementation = static_cast<PersistentEventImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		throw ObjectNotLocalException(this);

	} else {
		_implementation->setScreenplayTask(task);
	}
}

WeakReference<ScreenPlayTask* > PersistentEvent::getScreenplayTask() const {
	PersistentEventImplementation* _implementation = static_cast<PersistentEventImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		throw ObjectNotLocalException(this);

	} else {
		return _implementation->getScreenplayTask();
	}
}

int PersistentEvent::getTimeStamp() const {
	PersistentEventImplementation* _implementation = static_cast<PersistentEventImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETTIMESTAMP__);

		return method.executeWithSignedIntReturn();
	} else {
		return _implementation->getTimeStamp();
	}
}

const String PersistentEvent::getKey() const {
	PersistentEventImplementation* _implementation = static_cast<PersistentEventImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETKEY__);

		String _return_getKey;
		method.executeWithAsciiReturn(_return_getKey);
		return _return_getKey;
	} else {
		return _implementation->getKey();
	}
}

const String PersistentEvent::getScreenplay() const {
	PersistentEventImplementation* _implementation = static_cast<PersistentEventImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETSCREENPLAY__);

		String _return_getScreenplay;
		method.executeWithAsciiReturn(_return_getScreenplay);
		return _return_getScreenplay;
	} else {
		return _implementation->getScreenplay();
	}
}

const String PersistentEvent::getArgs() const {
	PersistentEventImplementation* _implementation = static_cast<PersistentEventImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETARGS__);

		String _return_getArgs;
		method.executeWithAsciiReturn(_return_getArgs);
		return _return_getArgs;
	} else {
		return _implementation->getArgs();
	}
}

ManagedWeakReference<SceneObject* > PersistentEvent::getObject() const {
	PersistentEventImplementation* _implementation = static_cast<PersistentEventImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETOBJECT__);

		return static_cast<SceneObject*>(method.executeWithObjectReturn());
	} else {
		return _implementation->getObject();
	}
}

unsigned long long PersistentEvent::getCurTime() const {
	PersistentEventImplementation* _implementation = static_cast<PersistentEventImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETCURTIME__);

		return method.executeWithUnsignedLongReturn();
	} else {
		return _implementation->getCurTime();
	}
}

const String PersistentEvent::getEventName() const {
	PersistentEventImplementation* _implementation = static_cast<PersistentEventImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETEVENTNAME__);

		String _return_getEventName;
		method.executeWithAsciiReturn(_return_getEventName);
		return _return_getEventName;
	} else {
		return _implementation->getEventName();
	}
}

void PersistentEvent::setEventName(const String& en) {
	PersistentEventImplementation* _implementation = static_cast<PersistentEventImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETEVENTNAME__STRING_);
		method.addAsciiParameter(en);

		method.executeWithVoidReturn();
	} else {
		_implementation->setEventName(en);
	}
}

void PersistentEvent::setCurTime(unsigned long long time) {
	PersistentEventImplementation* _implementation = static_cast<PersistentEventImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETCURTIME__LONG_);
		method.addUnsignedLongParameter(time);

		method.executeWithVoidReturn();
	} else {
		_implementation->setCurTime(time);
	}
}

void PersistentEvent::setTimeStamp(int stamp) {
	PersistentEventImplementation* _implementation = static_cast<PersistentEventImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETTIMESTAMP__INT_);
		method.addSignedIntParameter(stamp);

		method.executeWithVoidReturn();
	} else {
		_implementation->setTimeStamp(stamp);
	}
}

void PersistentEvent::setKey(const String& k) {
	PersistentEventImplementation* _implementation = static_cast<PersistentEventImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETKEY__STRING_);
		method.addAsciiParameter(k);

		method.executeWithVoidReturn();
	} else {
		_implementation->setKey(k);
	}
}

void PersistentEvent::setScreenplay(const String& sp) {
	PersistentEventImplementation* _implementation = static_cast<PersistentEventImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETSCREENPLAY__STRING_);
		method.addAsciiParameter(sp);

		method.executeWithVoidReturn();
	} else {
		_implementation->setScreenplay(sp);
	}
}

void PersistentEvent::setArgs(const String& ar) {
	PersistentEventImplementation* _implementation = static_cast<PersistentEventImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETARGS__STRING_);
		method.addAsciiParameter(ar);

		method.executeWithVoidReturn();
	} else {
		_implementation->setArgs(ar);
	}
}

void PersistentEvent::setObject(SceneObject* o) {
	PersistentEventImplementation* _implementation = static_cast<PersistentEventImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETOBJECT__SCENEOBJECT_);
		method.addObjectParameter(o);

		method.executeWithVoidReturn();
	} else {
		_implementation->setObject(o);
	}
}

void PersistentEvent::setEventExecuted(bool val) {
	PersistentEventImplementation* _implementation = static_cast<PersistentEventImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETEVENTEXECUTED__BOOL_);
		method.addBooleanParameter(val);

		method.executeWithVoidReturn();
	} else {
		_implementation->setEventExecuted(val);
	}
}

void PersistentEvent::loadTransientTask() {
	PersistentEventImplementation* _implementation = static_cast<PersistentEventImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_LOADTRANSIENTTASK__);

		method.executeWithVoidReturn();
	} else {
		_implementation->loadTransientTask();
	}
}

DistributedObjectServant* PersistentEvent::_getImplementation() {

	 if (!_updated) _updated = true;
	return _impl;
}

DistributedObjectServant* PersistentEvent::_getImplementationForRead() const {
	return _impl;
}

void PersistentEvent::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	PersistentEventImplementation
 */

PersistentEventImplementation::PersistentEventImplementation(DummyConstructorParameter* param) : ManagedObjectImplementation(param) {
	_initializeImplementation();
}


PersistentEventImplementation::~PersistentEventImplementation() {
}


void PersistentEventImplementation::finalize() {
}

void PersistentEventImplementation::_initializeImplementation() {
	_setClassHelper(PersistentEventHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void PersistentEventImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<PersistentEvent*>(stub);
	ManagedObjectImplementation::_setStub(stub);
}

DistributedObjectStub* PersistentEventImplementation::_getStub() {
	return _this.get();
}

PersistentEventImplementation::operator const PersistentEvent*() {
	return _this.get();
}

void PersistentEventImplementation::lock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->lock(doLock);
}

void PersistentEventImplementation::lock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->lock(obj);
}

void PersistentEventImplementation::rlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->rlock(doLock);
}

void PersistentEventImplementation::wlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->wlock(doLock);
}

void PersistentEventImplementation::wlock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->wlock(obj);
}

void PersistentEventImplementation::unlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->unlock(doLock);
}

void PersistentEventImplementation::runlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->runlock(doLock);
}

void PersistentEventImplementation::_serializationHelperMethod() {
	ManagedObjectImplementation::_serializationHelperMethod();

	_setClassName("PersistentEvent");

}

void PersistentEventImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		uint32 _nameHashCode;
		TypeInfo<uint32>::parseFromBinaryStream(&_nameHashCode, stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(PersistentEventImplementation::readObjectMember(stream, _nameHashCode)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool PersistentEventImplementation::readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode) {
	if (ManagedObjectImplementation::readObjectMember(stream, nameHashCode))
		return true;

	switch(nameHashCode) {
	case 0x9aac8fa1: //PersistentEvent.timeStamp
		TypeInfo<int >::parseFromBinaryStream(&timeStamp, stream);
		return true;

	case 0x8f4c2527: //PersistentEvent.curTime
		TypeInfo<unsigned long long >::parseFromBinaryStream(&curTime, stream);
		return true;

	case 0x1e880265: //PersistentEvent.key
		TypeInfo<String >::parseFromBinaryStream(&key, stream);
		return true;

	case 0x709aa4e0: //PersistentEvent.play
		TypeInfo<String >::parseFromBinaryStream(&play, stream);
		return true;

	case 0x86233dde: //PersistentEvent.args
		TypeInfo<String >::parseFromBinaryStream(&args, stream);
		return true;

	case 0xf34709a1: //PersistentEvent.eventName
		TypeInfo<String >::parseFromBinaryStream(&eventName, stream);
		return true;

	case 0x171e6e3d: //PersistentEvent.eventExecuted
		TypeInfo<bool >::parseFromBinaryStream(&eventExecuted, stream);
		return true;

	case 0xb08c8c20: //PersistentEvent.screenplayTask
		TypeInfo<WeakReference<ScreenPlayTask* > >::parseFromBinaryStream(&screenplayTask, stream);
		return true;

	case 0x6f7733aa: //PersistentEvent.obj
		TypeInfo<ManagedWeakReference<SceneObject* > >::parseFromBinaryStream(&obj, stream);
		return true;

	}

	return false;
}

void PersistentEventImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = PersistentEventImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int PersistentEventImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = ManagedObjectImplementation::writeObjectMembers(stream);

	uint32 _nameHashCode;
	int _offset;
	uint32 _totalSize;
	_nameHashCode = 0x9aac8fa1; //PersistentEvent.timeStamp
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<int >::toBinaryStream(&timeStamp, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_nameHashCode = 0x8f4c2527; //PersistentEvent.curTime
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<unsigned long long >::toBinaryStream(&curTime, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_nameHashCode = 0x1e880265; //PersistentEvent.key
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<String >::toBinaryStream(&key, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_nameHashCode = 0x709aa4e0; //PersistentEvent.play
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<String >::toBinaryStream(&play, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_nameHashCode = 0x86233dde; //PersistentEvent.args
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<String >::toBinaryStream(&args, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_nameHashCode = 0xf34709a1; //PersistentEvent.eventName
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<String >::toBinaryStream(&eventName, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_nameHashCode = 0x171e6e3d; //PersistentEvent.eventExecuted
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<bool >::toBinaryStream(&eventExecuted, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_nameHashCode = 0xb08c8c20; //PersistentEvent.screenplayTask
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<WeakReference<ScreenPlayTask* > >::toBinaryStream(&screenplayTask, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_nameHashCode = 0x6f7733aa; //PersistentEvent.obj
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<ManagedWeakReference<SceneObject* > >::toBinaryStream(&obj, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);


	return _count + 9;
}

PersistentEventImplementation::PersistentEventImplementation() {
	_initializeImplementation();
	// server/zone/managers/director/PersistentEvent.idl():  		eventExecuted = false;
	eventExecuted = false;
}

void PersistentEventImplementation::setScreenplayTask(ScreenPlayTask* task) {
	// server/zone/managers/director/PersistentEvent.idl():  		screenplayTask = task;
	screenplayTask = task;
}

WeakReference<ScreenPlayTask* > PersistentEventImplementation::getScreenplayTask() const{
	// server/zone/managers/director/PersistentEvent.idl():  		return screenplayTask;
	return screenplayTask;
}

int PersistentEventImplementation::getTimeStamp() const{
	// server/zone/managers/director/PersistentEvent.idl():  		return timeStamp;
	return timeStamp;
}

const String PersistentEventImplementation::getKey() const{
	// server/zone/managers/director/PersistentEvent.idl():  		return key;
	return key;
}

const String PersistentEventImplementation::getScreenplay() const{
	// server/zone/managers/director/PersistentEvent.idl():  		return play;
	return play;
}

const String PersistentEventImplementation::getArgs() const{
	// server/zone/managers/director/PersistentEvent.idl():  		return args;
	return args;
}

ManagedWeakReference<SceneObject* > PersistentEventImplementation::getObject() const{
	// server/zone/managers/director/PersistentEvent.idl():  		return obj;
	return obj;
}

unsigned long long PersistentEventImplementation::getCurTime() const{
	// server/zone/managers/director/PersistentEvent.idl():  		return curTime;
	return curTime;
}

const String PersistentEventImplementation::getEventName() const{
	// server/zone/managers/director/PersistentEvent.idl():  		return eventName;
	return eventName;
}

void PersistentEventImplementation::setEventName(const String& en) {
	// server/zone/managers/director/PersistentEvent.idl():  		eventName = en;
	eventName = en;
}

void PersistentEventImplementation::setCurTime(unsigned long long time) {
	// server/zone/managers/director/PersistentEvent.idl():  		curTime = time;
	curTime = time;
}

void PersistentEventImplementation::setTimeStamp(int stamp) {
	// server/zone/managers/director/PersistentEvent.idl():  		timeStamp = stamp;
	timeStamp = stamp;
}

void PersistentEventImplementation::setKey(const String& k) {
	// server/zone/managers/director/PersistentEvent.idl():  		key = k;
	key = k;
}

void PersistentEventImplementation::setScreenplay(const String& sp) {
	// server/zone/managers/director/PersistentEvent.idl():  		play = sp;
	play = sp;
}

void PersistentEventImplementation::setArgs(const String& ar) {
	// server/zone/managers/director/PersistentEvent.idl():  		args = ar;
	args = ar;
}

void PersistentEventImplementation::setObject(SceneObject* o) {
	// server/zone/managers/director/PersistentEvent.idl():  		obj = o;
	obj = o;
}

void PersistentEventImplementation::setEventExecuted(bool val) {
	// server/zone/managers/director/PersistentEvent.idl():  		eventExecuted = val;
	eventExecuted = val;
}

/*
 *	PersistentEventAdapter
 */


#include "engine/orb/messages/InvokeMethodMessage.h"


PersistentEventAdapter::PersistentEventAdapter(PersistentEvent* obj) : ManagedObjectAdapter(obj) {
}

void PersistentEventAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	DOBMessage* resp = inv->getInvocationMessage();

	switch (methid) {
	case RPC_GETTIMESTAMP__:
		{
			
			int _m_res = getTimeStamp();
			resp->insertSignedInt(_m_res);
		}
		break;
	case RPC_GETKEY__:
		{
			
			const String _m_res = getKey();
			resp->insertAscii(_m_res);
		}
		break;
	case RPC_GETSCREENPLAY__:
		{
			
			const String _m_res = getScreenplay();
			resp->insertAscii(_m_res);
		}
		break;
	case RPC_GETARGS__:
		{
			
			const String _m_res = getArgs();
			resp->insertAscii(_m_res);
		}
		break;
	case RPC_GETOBJECT__:
		{
			
			DistributedObject* _m_res = getObject().get();
			resp->insertLong(_m_res == NULL ? 0 : _m_res->_getObjectID());
		}
		break;
	case RPC_GETCURTIME__:
		{
			
			unsigned long long _m_res = getCurTime();
			resp->insertLong(_m_res);
		}
		break;
	case RPC_GETEVENTNAME__:
		{
			
			const String _m_res = getEventName();
			resp->insertAscii(_m_res);
		}
		break;
	case RPC_SETEVENTNAME__STRING_:
		{
			 String en; inv->getAsciiParameter(en);
			
			setEventName(en);
			
		}
		break;
	case RPC_SETCURTIME__LONG_:
		{
			unsigned long long time = inv->getUnsignedLongParameter();
			
			setCurTime(time);
			
		}
		break;
	case RPC_SETTIMESTAMP__INT_:
		{
			int stamp = inv->getSignedIntParameter();
			
			setTimeStamp(stamp);
			
		}
		break;
	case RPC_SETKEY__STRING_:
		{
			 String k; inv->getAsciiParameter(k);
			
			setKey(k);
			
		}
		break;
	case RPC_SETSCREENPLAY__STRING_:
		{
			 String sp; inv->getAsciiParameter(sp);
			
			setScreenplay(sp);
			
		}
		break;
	case RPC_SETARGS__STRING_:
		{
			 String ar; inv->getAsciiParameter(ar);
			
			setArgs(ar);
			
		}
		break;
	case RPC_SETOBJECT__SCENEOBJECT_:
		{
			SceneObject* o = static_cast<SceneObject*>(inv->getObjectParameter());
			
			setObject(o);
			
		}
		break;
	case RPC_SETEVENTEXECUTED__BOOL_:
		{
			bool val = inv->getBooleanParameter();
			
			setEventExecuted(val);
			
		}
		break;
	case RPC_LOADTRANSIENTTASK__:
		{
			
			loadTransientTask();
			
		}
		break;
	default:
		ManagedObjectAdapter::invokeMethod(methid, inv);
	}
}

int PersistentEventAdapter::getTimeStamp() const {
	return (static_cast<PersistentEvent*>(stub))->getTimeStamp();
}

const String PersistentEventAdapter::getKey() const {
	return (static_cast<PersistentEvent*>(stub))->getKey();
}

const String PersistentEventAdapter::getScreenplay() const {
	return (static_cast<PersistentEvent*>(stub))->getScreenplay();
}

const String PersistentEventAdapter::getArgs() const {
	return (static_cast<PersistentEvent*>(stub))->getArgs();
}

ManagedWeakReference<SceneObject* > PersistentEventAdapter::getObject() const {
	return (static_cast<PersistentEvent*>(stub))->getObject();
}

unsigned long long PersistentEventAdapter::getCurTime() const {
	return (static_cast<PersistentEvent*>(stub))->getCurTime();
}

const String PersistentEventAdapter::getEventName() const {
	return (static_cast<PersistentEvent*>(stub))->getEventName();
}

void PersistentEventAdapter::setEventName(const String& en) {
	(static_cast<PersistentEvent*>(stub))->setEventName(en);
}

void PersistentEventAdapter::setCurTime(unsigned long long time) {
	(static_cast<PersistentEvent*>(stub))->setCurTime(time);
}

void PersistentEventAdapter::setTimeStamp(int stamp) {
	(static_cast<PersistentEvent*>(stub))->setTimeStamp(stamp);
}

void PersistentEventAdapter::setKey(const String& k) {
	(static_cast<PersistentEvent*>(stub))->setKey(k);
}

void PersistentEventAdapter::setScreenplay(const String& sp) {
	(static_cast<PersistentEvent*>(stub))->setScreenplay(sp);
}

void PersistentEventAdapter::setArgs(const String& ar) {
	(static_cast<PersistentEvent*>(stub))->setArgs(ar);
}

void PersistentEventAdapter::setObject(SceneObject* o) {
	(static_cast<PersistentEvent*>(stub))->setObject(o);
}

void PersistentEventAdapter::setEventExecuted(bool val) {
	(static_cast<PersistentEvent*>(stub))->setEventExecuted(val);
}

void PersistentEventAdapter::loadTransientTask() {
	(static_cast<PersistentEvent*>(stub))->loadTransientTask();
}

/*
 *	PersistentEventHelper
 */

PersistentEventHelper* PersistentEventHelper::staticInitializer = PersistentEventHelper::instance();

PersistentEventHelper::PersistentEventHelper() {
	className = "PersistentEvent";

	Core::getObjectBroker()->registerClass(className, this);
}

void PersistentEventHelper::finalizeHelper() {
	PersistentEventHelper::finalize();
}

DistributedObject* PersistentEventHelper::instantiateObject() {
	return new PersistentEvent(DummyConstructorParameter::instance());
}

DistributedObjectServant* PersistentEventHelper::instantiateServant() {
	return new PersistentEventImplementation();
}

DistributedObjectAdapter* PersistentEventHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new PersistentEventAdapter(static_cast<PersistentEvent*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

