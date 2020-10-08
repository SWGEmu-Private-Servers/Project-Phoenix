/*
 *	autogen/server/zone/objects/tangible/consumable/Consumable.cpp generated by engine3 IDL compiler 0.60
 */

#include "Consumable.h"

#include "server/zone/objects/scene/SceneObject.h"

#include "server/zone/Zone.h"

#include "server/zone/packets/scene/AttributeListMessage.h"

#include "server/zone/packets/object/ObjectMenuResponse.h"

#include "server/zone/objects/creature/CreatureObject.h"

#include "server/zone/objects/creature/CreatureObject.h"

#include "server/zone/ZoneServer.h"

#include "server/zone/objects/creature/buffs/Buff.h"

/*
 *	ConsumableStub
 */

enum {RPC_HANDLEOBJECTMENUSELECT__CREATUREOBJECT_BYTE_ = 877540444,RPC_SETMODIFIERS__BUFF_BOOL_,RPC_ISSPICEEFFECT__,RPC_ISATTRIBUTEEFFECT__,RPC_ISDRINK__,RPC_ISFOOD__,RPC_ISFORAGEDFOOD__,RPC_ISSPICE__,RPC_ISCONSUMABLE__,RPC_GETDURATION__,RPC_GETSPECIESRESTRICTION__};

Consumable::Consumable() : TangibleObject(DummyConstructorParameter::instance()) {
	ConsumableImplementation* _implementation = new ConsumableImplementation();
	_impl = _implementation;
	_impl->_setStub(this);
	_setClassName("Consumable");
}

Consumable::Consumable(DummyConstructorParameter* param) : TangibleObject(param) {
	_setClassName("Consumable");
}

Consumable::~Consumable() {
}



int Consumable::handleObjectMenuSelect(CreatureObject* player, byte selectedID) {
	ConsumableImplementation* _implementation = static_cast<ConsumableImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_HANDLEOBJECTMENUSELECT__CREATUREOBJECT_BYTE_);
		method.addObjectParameter(player);
		method.addByteParameter(selectedID);

		return method.executeWithSignedIntReturn();
	} else {
		return _implementation->handleObjectMenuSelect(player, selectedID);
	}
}

void Consumable::updateCraftingValues(CraftingValues* values, bool firstUpdate) {
	ConsumableImplementation* _implementation = static_cast<ConsumableImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		throw ObjectNotLocalException(this);

	} else {
		_implementation->updateCraftingValues(values, firstUpdate);
	}
}

void Consumable::loadTemplateData(SharedObjectTemplate* templateData) {
	ConsumableImplementation* _implementation = static_cast<ConsumableImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		throw ObjectNotLocalException(this);

	} else {
		_implementation->loadTemplateData(templateData);
	}
}

void Consumable::fillAttributeList(AttributeListMessage* msg, CreatureObject* object) {
	ConsumableImplementation* _implementation = static_cast<ConsumableImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		throw ObjectNotLocalException(this);

	} else {
		_implementation->fillAttributeList(msg, object);
	}
}

void Consumable::setModifiers(Buff* buff, bool skillModifiers) {
	ConsumableImplementation* _implementation = static_cast<ConsumableImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETMODIFIERS__BUFF_BOOL_);
		method.addObjectParameter(buff);
		method.addBooleanParameter(skillModifiers);

		method.executeWithVoidReturn();
	} else {
		_implementation->setModifiers(buff, skillModifiers);
	}
}

bool Consumable::isSpiceEffect() const {
	ConsumableImplementation* _implementation = static_cast<ConsumableImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISSPICEEFFECT__);

		return method.executeWithBooleanReturn();
	} else {
		return _implementation->isSpiceEffect();
	}
}

bool Consumable::isAttributeEffect() const {
	ConsumableImplementation* _implementation = static_cast<ConsumableImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISATTRIBUTEEFFECT__);

		return method.executeWithBooleanReturn();
	} else {
		return _implementation->isAttributeEffect();
	}
}

bool Consumable::isDrink() {
	ConsumableImplementation* _implementation = static_cast<ConsumableImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISDRINK__);

		return method.executeWithBooleanReturn();
	} else {
		return _implementation->isDrink();
	}
}

bool Consumable::isFood() {
	ConsumableImplementation* _implementation = static_cast<ConsumableImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISFOOD__);

		return method.executeWithBooleanReturn();
	} else {
		return _implementation->isFood();
	}
}

bool Consumable::isForagedFood() {
	ConsumableImplementation* _implementation = static_cast<ConsumableImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISFORAGEDFOOD__);

		return method.executeWithBooleanReturn();
	} else {
		return _implementation->isForagedFood();
	}
}

bool Consumable::isSpice() {
	ConsumableImplementation* _implementation = static_cast<ConsumableImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISSPICE__);

		return method.executeWithBooleanReturn();
	} else {
		return _implementation->isSpice();
	}
}

bool Consumable::isConsumable() {
	ConsumableImplementation* _implementation = static_cast<ConsumableImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISCONSUMABLE__);

		return method.executeWithBooleanReturn();
	} else {
		return _implementation->isConsumable();
	}
}

int Consumable::getDuration() {
	ConsumableImplementation* _implementation = static_cast<ConsumableImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETDURATION__);

		return method.executeWithSignedIntReturn();
	} else {
		return _implementation->getDuration();
	}
}

String Consumable::getSpeciesRestriction() {
	ConsumableImplementation* _implementation = static_cast<ConsumableImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETSPECIESRESTRICTION__);

		String _return_getSpeciesRestriction;
		method.executeWithAsciiReturn(_return_getSpeciesRestriction);
		return _return_getSpeciesRestriction;
	} else {
		return _implementation->getSpeciesRestriction();
	}
}

DistributedObjectServant* Consumable::_getImplementation() {

	 if (!_updated) _updated = true;
	return _impl;
}

DistributedObjectServant* Consumable::_getImplementationForRead() const {
	return _impl;
}

void Consumable::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	ConsumableImplementation
 */

ConsumableImplementation::ConsumableImplementation(DummyConstructorParameter* param) : TangibleObjectImplementation(param) {
	_initializeImplementation();
}


ConsumableImplementation::~ConsumableImplementation() {
}


void ConsumableImplementation::finalize() {
}

void ConsumableImplementation::_initializeImplementation() {
	_setClassHelper(ConsumableHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void ConsumableImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<Consumable*>(stub);
	TangibleObjectImplementation::_setStub(stub);
}

DistributedObjectStub* ConsumableImplementation::_getStub() {
	return _this.get();
}

ConsumableImplementation::operator const Consumable*() {
	return _this.get();
}

void ConsumableImplementation::lock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->lock(doLock);
}

void ConsumableImplementation::lock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->lock(obj);
}

void ConsumableImplementation::rlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->rlock(doLock);
}

void ConsumableImplementation::wlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->wlock(doLock);
}

void ConsumableImplementation::wlock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->wlock(obj);
}

void ConsumableImplementation::unlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->unlock(doLock);
}

void ConsumableImplementation::runlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->runlock(doLock);
}

void ConsumableImplementation::_serializationHelperMethod() {
	TangibleObjectImplementation::_serializationHelperMethod();

	_setClassName("Consumable");

}

void ConsumableImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		uint32 _nameHashCode;
		TypeInfo<uint32>::parseFromBinaryStream(&_nameHashCode, stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(ConsumableImplementation::readObjectMember(stream, _nameHashCode)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool ConsumableImplementation::readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode) {
	if (TangibleObjectImplementation::readObjectMember(stream, nameHashCode))
		return true;

	switch(nameHashCode) {
	case 0xfdae01b0: //Consumable.duration
		TypeInfo<int >::parseFromBinaryStream(&duration, stream);
		return true;

	case 0xeb15c048: //Consumable.filling
		TypeInfo<int >::parseFromBinaryStream(&filling, stream);
		return true;

	case 0xb64fb3fd: //Consumable.nutrition
		TypeInfo<int >::parseFromBinaryStream(&nutrition, stream);
		return true;

	case 0xa36d5c4d: //Consumable.effectType
		TypeInfo<int >::parseFromBinaryStream(&effectType, stream);
		return true;

	case 0x6c8b25b9: //Consumable.eventTypes
		TypeInfo<Vector<int> >::parseFromBinaryStream(&eventTypes, stream);
		return true;

	case 0xa072ef0b: //Consumable.fillingMin
		TypeInfo<int >::parseFromBinaryStream(&fillingMin, stream);
		return true;

	case 0x7cad3a9b: //Consumable.fillingMax
		TypeInfo<int >::parseFromBinaryStream(&fillingMax, stream);
		return true;

	case 0x4d41b426: //Consumable.flavorMin
		TypeInfo<int >::parseFromBinaryStream(&flavorMin, stream);
		return true;

	case 0x919e61b6: //Consumable.flavorMax
		TypeInfo<int >::parseFromBinaryStream(&flavorMax, stream);
		return true;

	case 0xe0f66d24: //Consumable.nutritionMin
		TypeInfo<int >::parseFromBinaryStream(&nutritionMin, stream);
		return true;

	case 0x3c29b8b4: //Consumable.nutritionMax
		TypeInfo<int >::parseFromBinaryStream(&nutritionMax, stream);
		return true;

	case 0x487009d3: //Consumable.quantityMin
		TypeInfo<int >::parseFromBinaryStream(&quantityMin, stream);
		return true;

	case 0x94afdc43: //Consumable.quantityMax
		TypeInfo<int >::parseFromBinaryStream(&quantityMax, stream);
		return true;

	case 0xa3a02e88: //Consumable.modifiers
		TypeInfo<VectorMap<String, float> >::parseFromBinaryStream(&modifiers, stream);
		return true;

	case 0xdcd8e8af: //Consumable.buffName
		TypeInfo<String >::parseFromBinaryStream(&buffName, stream);
		return true;

	case 0x5f33347: //Consumable.buffCRC
		TypeInfo<unsigned int >::parseFromBinaryStream(&buffCRC, stream);
		return true;

	case 0x626dcb1e: //Consumable.consumableType
		TypeInfo<int >::parseFromBinaryStream(&consumableType, stream);
		return true;

	case 0x6128397e: //Consumable.foragedFood
		TypeInfo<int >::parseFromBinaryStream(&foragedFood, stream);
		return true;

	case 0x6f3ae7b7: //Consumable.speciesRestriction
		TypeInfo<String >::parseFromBinaryStream(&speciesRestriction, stream);
		return true;

	}

	return false;
}

void ConsumableImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = ConsumableImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int ConsumableImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = TangibleObjectImplementation::writeObjectMembers(stream);

	uint32 _nameHashCode;
	int _offset;
	uint32 _totalSize;
	_nameHashCode = 0xfdae01b0; //Consumable.duration
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<int >::toBinaryStream(&duration, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_nameHashCode = 0xeb15c048; //Consumable.filling
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<int >::toBinaryStream(&filling, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_nameHashCode = 0xb64fb3fd; //Consumable.nutrition
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<int >::toBinaryStream(&nutrition, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_nameHashCode = 0xa36d5c4d; //Consumable.effectType
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<int >::toBinaryStream(&effectType, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_nameHashCode = 0x6c8b25b9; //Consumable.eventTypes
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<Vector<int> >::toBinaryStream(&eventTypes, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_nameHashCode = 0xa072ef0b; //Consumable.fillingMin
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<int >::toBinaryStream(&fillingMin, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_nameHashCode = 0x7cad3a9b; //Consumable.fillingMax
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<int >::toBinaryStream(&fillingMax, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_nameHashCode = 0x4d41b426; //Consumable.flavorMin
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<int >::toBinaryStream(&flavorMin, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_nameHashCode = 0x919e61b6; //Consumable.flavorMax
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<int >::toBinaryStream(&flavorMax, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_nameHashCode = 0xe0f66d24; //Consumable.nutritionMin
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<int >::toBinaryStream(&nutritionMin, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_nameHashCode = 0x3c29b8b4; //Consumable.nutritionMax
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<int >::toBinaryStream(&nutritionMax, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_nameHashCode = 0x487009d3; //Consumable.quantityMin
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<int >::toBinaryStream(&quantityMin, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_nameHashCode = 0x94afdc43; //Consumable.quantityMax
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<int >::toBinaryStream(&quantityMax, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_nameHashCode = 0xa3a02e88; //Consumable.modifiers
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<VectorMap<String, float> >::toBinaryStream(&modifiers, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_nameHashCode = 0xdcd8e8af; //Consumable.buffName
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<String >::toBinaryStream(&buffName, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_nameHashCode = 0x5f33347; //Consumable.buffCRC
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<unsigned int >::toBinaryStream(&buffCRC, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_nameHashCode = 0x626dcb1e; //Consumable.consumableType
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<int >::toBinaryStream(&consumableType, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_nameHashCode = 0x6128397e; //Consumable.foragedFood
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<int >::toBinaryStream(&foragedFood, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_nameHashCode = 0x6f3ae7b7; //Consumable.speciesRestriction
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<String >::toBinaryStream(&speciesRestriction, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);


	return _count + 19;
}

ConsumableImplementation::ConsumableImplementation() {
	_initializeImplementation();
	// server/zone/objects/tangible/consumable/Consumable.idl():  		setLoggingName("PharmaceuticalObject");
	setLoggingName("PharmaceuticalObject");
	// server/zone/objects/tangible/consumable/Consumable.idl():  		consumableType = 0;
	consumableType = 0;
	// server/zone/objects/tangible/consumable/Consumable.idl():  		foragedFood = 0;
	foragedFood = 0;
	// server/zone/objects/tangible/consumable/Consumable.idl():  		duration = 30;
	duration = 30;
	// server/zone/objects/tangible/consumable/Consumable.idl():  		filling = 0;
	filling = 0;
	// server/zone/objects/tangible/consumable/Consumable.idl():  		effectType = EFFECT_ATTRIBUTE;
	effectType = EFFECT_ATTRIBUTE;
	// server/zone/objects/tangible/consumable/Consumable.idl():  		fillingMin = 1;
	fillingMin = 1;
	// server/zone/objects/tangible/consumable/Consumable.idl():  		fillingMax = 1;
	fillingMax = 1;
	// server/zone/objects/tangible/consumable/Consumable.idl():  		flavorMin = 1;
	flavorMin = 1;
	// server/zone/objects/tangible/consumable/Consumable.idl():  		flavorMax = 1;
	flavorMax = 1;
	// server/zone/objects/tangible/consumable/Consumable.idl():  		nutritionMin = 1;
	nutritionMin = 1;
	// server/zone/objects/tangible/consumable/Consumable.idl():  		nutritionMax = 1;
	nutritionMax = 1;
	// server/zone/objects/tangible/consumable/Consumable.idl():  		quantityMin = 1;
	quantityMin = 1;
	// server/zone/objects/tangible/consumable/Consumable.idl():  		quantityMax = 1;
	quantityMax = 1;
	// server/zone/objects/tangible/consumable/Consumable.idl():  		modifiers.setNoDuplicateInsertPlan();
	(&modifiers)->setNoDuplicateInsertPlan();
	// server/zone/objects/tangible/consumable/Consumable.idl():  		modifiers.setNullValue(0);
	(&modifiers)->setNullValue(0);
	// server/zone/objects/tangible/consumable/Consumable.idl():  		buffCRC = 0;
	buffCRC = 0;
}

bool ConsumableImplementation::isSpiceEffect() const{
	// server/zone/objects/tangible/consumable/Consumable.idl():  		return (effectType == EFFECT_SPICE);
	return (effectType == EFFECT_SPICE);
}

bool ConsumableImplementation::isAttributeEffect() const{
	// server/zone/objects/tangible/consumable/Consumable.idl():  		return (effectType == EFFECT_ATTRIBUTE);
	return (effectType == EFFECT_ATTRIBUTE);
}

bool ConsumableImplementation::isDrink() {
	// server/zone/objects/tangible/consumable/Consumable.idl():  		return (consumableType == DRINK);
	return (consumableType == DRINK);
}

bool ConsumableImplementation::isFood() {
	// server/zone/objects/tangible/consumable/Consumable.idl():  		return (consumableType == FOOD);
	return (consumableType == FOOD);
}

bool ConsumableImplementation::isForagedFood() {
	// server/zone/objects/tangible/consumable/Consumable.idl():  		return (foragedFood == 1);
	return (foragedFood == 1);
}

bool ConsumableImplementation::isSpice() {
	// server/zone/objects/tangible/consumable/Consumable.idl():  		return (isSpiceEffect() && isFood());
	return (isSpiceEffect() && isFood());
}

bool ConsumableImplementation::isConsumable() {
	// server/zone/objects/tangible/consumable/Consumable.idl():  		return true;
	return true;
}

int ConsumableImplementation::getDuration() {
	// server/zone/objects/tangible/consumable/Consumable.idl():  		return duration;
	return duration;
}

String ConsumableImplementation::getSpeciesRestriction() {
	// server/zone/objects/tangible/consumable/Consumable.idl():  		return speciesRestriction;
	return speciesRestriction;
}

/*
 *	ConsumableAdapter
 */


#include "engine/orb/messages/InvokeMethodMessage.h"


ConsumableAdapter::ConsumableAdapter(Consumable* obj) : TangibleObjectAdapter(obj) {
}

void ConsumableAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	DOBMessage* resp = inv->getInvocationMessage();

	switch (methid) {
	case RPC_HANDLEOBJECTMENUSELECT__CREATUREOBJECT_BYTE_:
		{
			CreatureObject* player = static_cast<CreatureObject*>(inv->getObjectParameter());
			byte selectedID = inv->getByteParameter();
			
			int _m_res = handleObjectMenuSelect(player, selectedID);
			resp->insertSignedInt(_m_res);
		}
		break;
	case RPC_SETMODIFIERS__BUFF_BOOL_:
		{
			Buff* buff = static_cast<Buff*>(inv->getObjectParameter());
			bool skillModifiers = inv->getBooleanParameter();
			
			setModifiers(buff, skillModifiers);
			
		}
		break;
	case RPC_ISSPICEEFFECT__:
		{
			
			bool _m_res = isSpiceEffect();
			resp->insertBoolean(_m_res);
		}
		break;
	case RPC_ISATTRIBUTEEFFECT__:
		{
			
			bool _m_res = isAttributeEffect();
			resp->insertBoolean(_m_res);
		}
		break;
	case RPC_ISDRINK__:
		{
			
			bool _m_res = isDrink();
			resp->insertBoolean(_m_res);
		}
		break;
	case RPC_ISFOOD__:
		{
			
			bool _m_res = isFood();
			resp->insertBoolean(_m_res);
		}
		break;
	case RPC_ISFORAGEDFOOD__:
		{
			
			bool _m_res = isForagedFood();
			resp->insertBoolean(_m_res);
		}
		break;
	case RPC_ISSPICE__:
		{
			
			bool _m_res = isSpice();
			resp->insertBoolean(_m_res);
		}
		break;
	case RPC_ISCONSUMABLE__:
		{
			
			bool _m_res = isConsumable();
			resp->insertBoolean(_m_res);
		}
		break;
	case RPC_GETDURATION__:
		{
			
			int _m_res = getDuration();
			resp->insertSignedInt(_m_res);
		}
		break;
	case RPC_GETSPECIESRESTRICTION__:
		{
			
			String _m_res = getSpeciesRestriction();
			resp->insertAscii(_m_res);
		}
		break;
	default:
		TangibleObjectAdapter::invokeMethod(methid, inv);
	}
}

int ConsumableAdapter::handleObjectMenuSelect(CreatureObject* player, byte selectedID) {
	return (static_cast<Consumable*>(stub))->handleObjectMenuSelect(player, selectedID);
}

void ConsumableAdapter::setModifiers(Buff* buff, bool skillModifiers) {
	(static_cast<Consumable*>(stub))->setModifiers(buff, skillModifiers);
}

bool ConsumableAdapter::isSpiceEffect() const {
	return (static_cast<Consumable*>(stub))->isSpiceEffect();
}

bool ConsumableAdapter::isAttributeEffect() const {
	return (static_cast<Consumable*>(stub))->isAttributeEffect();
}

bool ConsumableAdapter::isDrink() {
	return (static_cast<Consumable*>(stub))->isDrink();
}

bool ConsumableAdapter::isFood() {
	return (static_cast<Consumable*>(stub))->isFood();
}

bool ConsumableAdapter::isForagedFood() {
	return (static_cast<Consumable*>(stub))->isForagedFood();
}

bool ConsumableAdapter::isSpice() {
	return (static_cast<Consumable*>(stub))->isSpice();
}

bool ConsumableAdapter::isConsumable() {
	return (static_cast<Consumable*>(stub))->isConsumable();
}

int ConsumableAdapter::getDuration() {
	return (static_cast<Consumable*>(stub))->getDuration();
}

String ConsumableAdapter::getSpeciesRestriction() {
	return (static_cast<Consumable*>(stub))->getSpeciesRestriction();
}

/*
 *	ConsumableHelper
 */

ConsumableHelper* ConsumableHelper::staticInitializer = ConsumableHelper::instance();

ConsumableHelper::ConsumableHelper() {
	className = "Consumable";

	Core::getObjectBroker()->registerClass(className, this);
}

void ConsumableHelper::finalizeHelper() {
	ConsumableHelper::finalize();
}

DistributedObject* ConsumableHelper::instantiateObject() {
	return new Consumable(DummyConstructorParameter::instance());
}

DistributedObjectServant* ConsumableHelper::instantiateServant() {
	return new ConsumableImplementation();
}

DistributedObjectAdapter* ConsumableHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new ConsumableAdapter(static_cast<Consumable*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

