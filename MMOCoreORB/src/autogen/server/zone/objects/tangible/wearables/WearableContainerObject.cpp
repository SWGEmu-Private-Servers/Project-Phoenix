/*
 *	autogen/server/zone/objects/tangible/wearables/WearableContainerObject.cpp generated by engine3 IDL compiler 0.60
 */

#include "WearableContainerObject.h"

#include "server/zone/packets/scene/AttributeListMessage.h"

#include "server/zone/objects/creature/CreatureObject.h"

/*
 *	WearableContainerObjectStub
 */

enum {RPC_INITIALIZETRANSIENTMEMBERS__ = 753592095,RPC_ADDSKILLMOD__INT_STRING_INT_BOOL_,RPC_APPLYSKILLMODSTO__CREATUREOBJECT_,RPC_REMOVESKILLMODSFROM__CREATUREOBJECT_,RPC_ISEQUIPPED__,RPC_ISWEARABLECONTAINEROBJECT__};

WearableContainerObject::WearableContainerObject() : Container(DummyConstructorParameter::instance()) {
	WearableContainerObjectImplementation* _implementation = new WearableContainerObjectImplementation();
	_impl = _implementation;
	_impl->_setStub(this);
	_setClassName("WearableContainerObject");
}

WearableContainerObject::WearableContainerObject(DummyConstructorParameter* param) : Container(param) {
	_setClassName("WearableContainerObject");
}

WearableContainerObject::~WearableContainerObject() {
}



void WearableContainerObject::initializeTransientMembers() {
	WearableContainerObjectImplementation* _implementation = static_cast<WearableContainerObjectImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_INITIALIZETRANSIENTMEMBERS__);

		method.executeWithVoidReturn();
	} else {
		_implementation->initializeTransientMembers();
	}
}

void WearableContainerObject::fillAttributeList(AttributeListMessage* msg, CreatureObject* object) {
	WearableContainerObjectImplementation* _implementation = static_cast<WearableContainerObjectImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		throw ObjectNotLocalException(this);

	} else {
		_implementation->fillAttributeList(msg, object);
	}
}

void WearableContainerObject::addSkillMod(const int skillType, const String& skillMod, int value, bool notifyClient) {
	WearableContainerObjectImplementation* _implementation = static_cast<WearableContainerObjectImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ADDSKILLMOD__INT_STRING_INT_BOOL_);
		method.addSignedIntParameter(skillType);
		method.addAsciiParameter(skillMod);
		method.addSignedIntParameter(value);
		method.addBooleanParameter(notifyClient);

		method.executeWithVoidReturn();
	} else {
		_implementation->addSkillMod(skillType, skillMod, value, notifyClient);
	}
}

void WearableContainerObject::applySkillModsTo(CreatureObject* creature) {
	WearableContainerObjectImplementation* _implementation = static_cast<WearableContainerObjectImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_APPLYSKILLMODSTO__CREATUREOBJECT_);
		method.addObjectParameter(creature);

		method.executeWithVoidReturn();
	} else {
		_implementation->applySkillModsTo(creature);
	}
}

void WearableContainerObject::removeSkillModsFrom(CreatureObject* creature) {
	WearableContainerObjectImplementation* _implementation = static_cast<WearableContainerObjectImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_REMOVESKILLMODSFROM__CREATUREOBJECT_);
		method.addObjectParameter(creature);

		method.executeWithVoidReturn();
	} else {
		_implementation->removeSkillModsFrom(creature);
	}
}

VectorMap<String, int>* WearableContainerObject::getWearableSkillMods() {
	WearableContainerObjectImplementation* _implementation = static_cast<WearableContainerObjectImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		throw ObjectNotLocalException(this);

	} else {
		return _implementation->getWearableSkillMods();
	}
}

bool WearableContainerObject::isEquipped() {
	WearableContainerObjectImplementation* _implementation = static_cast<WearableContainerObjectImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISEQUIPPED__);

		return method.executeWithBooleanReturn();
	} else {
		return _implementation->isEquipped();
	}
}

bool WearableContainerObject::isWearableContainerObject() {
	WearableContainerObjectImplementation* _implementation = static_cast<WearableContainerObjectImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISWEARABLECONTAINEROBJECT__);

		return method.executeWithBooleanReturn();
	} else {
		return _implementation->isWearableContainerObject();
	}
}

DistributedObjectServant* WearableContainerObject::_getImplementation() {

	 if (!_updated) _updated = true;
	return _impl;
}

DistributedObjectServant* WearableContainerObject::_getImplementationForRead() const {
	return _impl;
}

void WearableContainerObject::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	WearableContainerObjectImplementation
 */

WearableContainerObjectImplementation::WearableContainerObjectImplementation(DummyConstructorParameter* param) : ContainerImplementation(param) {
	_initializeImplementation();
}


WearableContainerObjectImplementation::~WearableContainerObjectImplementation() {
}


void WearableContainerObjectImplementation::finalize() {
}

void WearableContainerObjectImplementation::_initializeImplementation() {
	_setClassHelper(WearableContainerObjectHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void WearableContainerObjectImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<WearableContainerObject*>(stub);
	ContainerImplementation::_setStub(stub);
}

DistributedObjectStub* WearableContainerObjectImplementation::_getStub() {
	return _this.get();
}

WearableContainerObjectImplementation::operator const WearableContainerObject*() {
	return _this.get();
}

void WearableContainerObjectImplementation::lock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->lock(doLock);
}

void WearableContainerObjectImplementation::lock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->lock(obj);
}

void WearableContainerObjectImplementation::rlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->rlock(doLock);
}

void WearableContainerObjectImplementation::wlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->wlock(doLock);
}

void WearableContainerObjectImplementation::wlock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->wlock(obj);
}

void WearableContainerObjectImplementation::unlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->unlock(doLock);
}

void WearableContainerObjectImplementation::runlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->runlock(doLock);
}

void WearableContainerObjectImplementation::_serializationHelperMethod() {
	ContainerImplementation::_serializationHelperMethod();

	_setClassName("WearableContainerObject");

}

void WearableContainerObjectImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		uint32 _nameHashCode;
		TypeInfo<uint32>::parseFromBinaryStream(&_nameHashCode, stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(WearableContainerObjectImplementation::readObjectMember(stream, _nameHashCode)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool WearableContainerObjectImplementation::readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode) {
	if (ContainerImplementation::readObjectMember(stream, nameHashCode))
		return true;

	switch(nameHashCode) {
	case 0x4e6d3f82: //WearableContainerObject.wearableSkillMods
		TypeInfo<VectorMap<String, int> >::parseFromBinaryStream(&wearableSkillMods, stream);
		return true;

	}

	return false;
}

void WearableContainerObjectImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = WearableContainerObjectImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int WearableContainerObjectImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = ContainerImplementation::writeObjectMembers(stream);

	uint32 _nameHashCode;
	int _offset;
	uint32 _totalSize;
	_nameHashCode = 0x4e6d3f82; //WearableContainerObject.wearableSkillMods
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<VectorMap<String, int> >::toBinaryStream(&wearableSkillMods, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);


	return _count + 1;
}

WearableContainerObjectImplementation::WearableContainerObjectImplementation() : ContainerImplementation() {
	_initializeImplementation();
	// server/zone/objects/tangible/wearables/WearableContainerObject.idl():  		Logger.setLoggingName("WearableContainerObject");
	Logger::setLoggingName("WearableContainerObject");
	// server/zone/objects/tangible/wearables/WearableContainerObject.idl():  		wearableSkillMods.setAllowOverwriteInsertPlan();
	(&wearableSkillMods)->setAllowOverwriteInsertPlan();
}

void WearableContainerObjectImplementation::addSkillMod(const int skillType, const String& skillMod, int value, bool notifyClient) {
	// server/zone/objects/tangible/wearables/WearableContainerObject.idl():  		wearableSkillMods.put(skillMod, value);
	(&wearableSkillMods)->put(skillMod, value);
}

VectorMap<String, int>* WearableContainerObjectImplementation::getWearableSkillMods() {
	// server/zone/objects/tangible/wearables/WearableContainerObject.idl():  		return wearableSkillMods;
	return (&wearableSkillMods);
}

bool WearableContainerObjectImplementation::isWearableContainerObject() {
	// server/zone/objects/tangible/wearables/WearableContainerObject.idl():  		return true;
	return true;
}

/*
 *	WearableContainerObjectAdapter
 */


#include "engine/orb/messages/InvokeMethodMessage.h"


WearableContainerObjectAdapter::WearableContainerObjectAdapter(WearableContainerObject* obj) : ContainerAdapter(obj) {
}

void WearableContainerObjectAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	DOBMessage* resp = inv->getInvocationMessage();

	switch (methid) {
	case RPC_INITIALIZETRANSIENTMEMBERS__:
		{
			
			initializeTransientMembers();
			
		}
		break;
	case RPC_ADDSKILLMOD__INT_STRING_INT_BOOL_:
		{
			 int skillType = inv->getSignedIntParameter();
			 String skillMod; inv->getAsciiParameter(skillMod);
			int value = inv->getSignedIntParameter();
			bool notifyClient = inv->getBooleanParameter();
			
			addSkillMod(skillType, skillMod, value, notifyClient);
			
		}
		break;
	case RPC_APPLYSKILLMODSTO__CREATUREOBJECT_:
		{
			CreatureObject* creature = static_cast<CreatureObject*>(inv->getObjectParameter());
			
			applySkillModsTo(creature);
			
		}
		break;
	case RPC_REMOVESKILLMODSFROM__CREATUREOBJECT_:
		{
			CreatureObject* creature = static_cast<CreatureObject*>(inv->getObjectParameter());
			
			removeSkillModsFrom(creature);
			
		}
		break;
	case RPC_ISEQUIPPED__:
		{
			
			bool _m_res = isEquipped();
			resp->insertBoolean(_m_res);
		}
		break;
	case RPC_ISWEARABLECONTAINEROBJECT__:
		{
			
			bool _m_res = isWearableContainerObject();
			resp->insertBoolean(_m_res);
		}
		break;
	default:
		ContainerAdapter::invokeMethod(methid, inv);
	}
}

void WearableContainerObjectAdapter::initializeTransientMembers() {
	(static_cast<WearableContainerObject*>(stub))->initializeTransientMembers();
}

void WearableContainerObjectAdapter::addSkillMod(const int skillType, const String& skillMod, int value, bool notifyClient) {
	(static_cast<WearableContainerObject*>(stub))->addSkillMod(skillType, skillMod, value, notifyClient);
}

void WearableContainerObjectAdapter::applySkillModsTo(CreatureObject* creature) {
	(static_cast<WearableContainerObject*>(stub))->applySkillModsTo(creature);
}

void WearableContainerObjectAdapter::removeSkillModsFrom(CreatureObject* creature) {
	(static_cast<WearableContainerObject*>(stub))->removeSkillModsFrom(creature);
}

bool WearableContainerObjectAdapter::isEquipped() {
	return (static_cast<WearableContainerObject*>(stub))->isEquipped();
}

bool WearableContainerObjectAdapter::isWearableContainerObject() {
	return (static_cast<WearableContainerObject*>(stub))->isWearableContainerObject();
}

/*
 *	WearableContainerObjectHelper
 */

WearableContainerObjectHelper* WearableContainerObjectHelper::staticInitializer = WearableContainerObjectHelper::instance();

WearableContainerObjectHelper::WearableContainerObjectHelper() {
	className = "WearableContainerObject";

	Core::getObjectBroker()->registerClass(className, this);
}

void WearableContainerObjectHelper::finalizeHelper() {
	WearableContainerObjectHelper::finalize();
}

DistributedObject* WearableContainerObjectHelper::instantiateObject() {
	return new WearableContainerObject(DummyConstructorParameter::instance());
}

DistributedObjectServant* WearableContainerObjectHelper::instantiateServant() {
	return new WearableContainerObjectImplementation();
}

DistributedObjectAdapter* WearableContainerObjectHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new WearableContainerObjectAdapter(static_cast<WearableContainerObject*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

