/*
 *	autogen/server/zone/objects/tangible/ticket/TicketObject.cpp generated by engine3 IDL compiler 0.60
 */

#include "TicketObject.h"

#include "server/zone/objects/scene/SceneObject.h"

#include "server/zone/Zone.h"

#include "server/zone/packets/object/ObjectMenuResponse.h"

#include "server/zone/objects/creature/CreatureObject.h"

#include "server/zone/packets/scene/AttributeListMessage.h"

/*
 *	TicketObjectStub
 */

enum {RPC_INITIALIZETRANSIENTMEMBERS__ = 1958512165,RPC_HANDLEOBJECTMENUSELECT__CREATUREOBJECT_BYTE_,RPC_SETDEPARTUREPLANET__STRING_,RPC_SETDEPARTUREPOINT__STRING_,RPC_SETARRIVALPLANET__STRING_,RPC_SETARRIVALPOINT__STRING_,RPC_GETDEPARTUREPLANET__,RPC_GETDEPARTUREPOINT__,RPC_GETARRIVALPLANET__,RPC_GETARRIVALPOINT__,RPC_ISTICKETOBJECT__};

TicketObject::TicketObject() : TangibleObject(DummyConstructorParameter::instance()) {
	TicketObjectImplementation* _implementation = new TicketObjectImplementation();
	_impl = _implementation;
	_impl->_setStub(this);
	_setClassName("TicketObject");
}

TicketObject::TicketObject(DummyConstructorParameter* param) : TangibleObject(param) {
	_setClassName("TicketObject");
}

TicketObject::~TicketObject() {
}



void TicketObject::initializeTransientMembers() {
	TicketObjectImplementation* _implementation = static_cast<TicketObjectImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_INITIALIZETRANSIENTMEMBERS__);

		method.executeWithVoidReturn();
	} else {
		_implementation->initializeTransientMembers();
	}
}

void TicketObject::fillAttributeList(AttributeListMessage* msg, CreatureObject* object) {
	TicketObjectImplementation* _implementation = static_cast<TicketObjectImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		throw ObjectNotLocalException(this);

	} else {
		_implementation->fillAttributeList(msg, object);
	}
}

int TicketObject::handleObjectMenuSelect(CreatureObject* player, byte selectedID) {
	TicketObjectImplementation* _implementation = static_cast<TicketObjectImplementation*>(_getImplementation());
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

void TicketObject::setDeparturePlanet(const String& departureplanet) {
	TicketObjectImplementation* _implementation = static_cast<TicketObjectImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETDEPARTUREPLANET__STRING_);
		method.addAsciiParameter(departureplanet);

		method.executeWithVoidReturn();
	} else {
		_implementation->setDeparturePlanet(departureplanet);
	}
}

void TicketObject::setDeparturePoint(const String& departurepoint) {
	TicketObjectImplementation* _implementation = static_cast<TicketObjectImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETDEPARTUREPOINT__STRING_);
		method.addAsciiParameter(departurepoint);

		method.executeWithVoidReturn();
	} else {
		_implementation->setDeparturePoint(departurepoint);
	}
}

void TicketObject::setArrivalPlanet(const String& arrival) {
	TicketObjectImplementation* _implementation = static_cast<TicketObjectImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETARRIVALPLANET__STRING_);
		method.addAsciiParameter(arrival);

		method.executeWithVoidReturn();
	} else {
		_implementation->setArrivalPlanet(arrival);
	}
}

void TicketObject::setArrivalPoint(const String& arrival) {
	TicketObjectImplementation* _implementation = static_cast<TicketObjectImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETARRIVALPOINT__STRING_);
		method.addAsciiParameter(arrival);

		method.executeWithVoidReturn();
	} else {
		_implementation->setArrivalPoint(arrival);
	}
}

String TicketObject::getDeparturePlanet() {
	TicketObjectImplementation* _implementation = static_cast<TicketObjectImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETDEPARTUREPLANET__);

		String _return_getDeparturePlanet;
		method.executeWithAsciiReturn(_return_getDeparturePlanet);
		return _return_getDeparturePlanet;
	} else {
		return _implementation->getDeparturePlanet();
	}
}

String TicketObject::getDeparturePoint() {
	TicketObjectImplementation* _implementation = static_cast<TicketObjectImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETDEPARTUREPOINT__);

		String _return_getDeparturePoint;
		method.executeWithAsciiReturn(_return_getDeparturePoint);
		return _return_getDeparturePoint;
	} else {
		return _implementation->getDeparturePoint();
	}
}

String TicketObject::getArrivalPlanet() {
	TicketObjectImplementation* _implementation = static_cast<TicketObjectImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETARRIVALPLANET__);

		String _return_getArrivalPlanet;
		method.executeWithAsciiReturn(_return_getArrivalPlanet);
		return _return_getArrivalPlanet;
	} else {
		return _implementation->getArrivalPlanet();
	}
}

String TicketObject::getArrivalPoint() {
	TicketObjectImplementation* _implementation = static_cast<TicketObjectImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETARRIVALPOINT__);

		String _return_getArrivalPoint;
		method.executeWithAsciiReturn(_return_getArrivalPoint);
		return _return_getArrivalPoint;
	} else {
		return _implementation->getArrivalPoint();
	}
}

bool TicketObject::isTicketObject() {
	TicketObjectImplementation* _implementation = static_cast<TicketObjectImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISTICKETOBJECT__);

		return method.executeWithBooleanReturn();
	} else {
		return _implementation->isTicketObject();
	}
}

DistributedObjectServant* TicketObject::_getImplementation() {

	 if (!_updated) _updated = true;
	return _impl;
}

DistributedObjectServant* TicketObject::_getImplementationForRead() const {
	return _impl;
}

void TicketObject::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	TicketObjectImplementation
 */

TicketObjectImplementation::TicketObjectImplementation(DummyConstructorParameter* param) : TangibleObjectImplementation(param) {
	_initializeImplementation();
}


TicketObjectImplementation::~TicketObjectImplementation() {
}


void TicketObjectImplementation::finalize() {
}

void TicketObjectImplementation::_initializeImplementation() {
	_setClassHelper(TicketObjectHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void TicketObjectImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<TicketObject*>(stub);
	TangibleObjectImplementation::_setStub(stub);
}

DistributedObjectStub* TicketObjectImplementation::_getStub() {
	return _this.get();
}

TicketObjectImplementation::operator const TicketObject*() {
	return _this.get();
}

void TicketObjectImplementation::lock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->lock(doLock);
}

void TicketObjectImplementation::lock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->lock(obj);
}

void TicketObjectImplementation::rlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->rlock(doLock);
}

void TicketObjectImplementation::wlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->wlock(doLock);
}

void TicketObjectImplementation::wlock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->wlock(obj);
}

void TicketObjectImplementation::unlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->unlock(doLock);
}

void TicketObjectImplementation::runlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->runlock(doLock);
}

void TicketObjectImplementation::_serializationHelperMethod() {
	TangibleObjectImplementation::_serializationHelperMethod();

	_setClassName("TicketObject");

}

void TicketObjectImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		uint32 _nameHashCode;
		TypeInfo<uint32>::parseFromBinaryStream(&_nameHashCode, stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(TicketObjectImplementation::readObjectMember(stream, _nameHashCode)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool TicketObjectImplementation::readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode) {
	if (TangibleObjectImplementation::readObjectMember(stream, nameHashCode))
		return true;

	switch(nameHashCode) {
	case 0x84d97799: //TicketObject.departurePlanet
		TypeInfo<String >::parseFromBinaryStream(&departurePlanet, stream);
		return true;

	case 0xf6b51586: //TicketObject.departurePoint
		TypeInfo<String >::parseFromBinaryStream(&departurePoint, stream);
		return true;

	case 0x1dd9757f: //TicketObject.arrivalPlanet
		TypeInfo<String >::parseFromBinaryStream(&arrivalPlanet, stream);
		return true;

	case 0x2f1f473f: //TicketObject.arrivalPoint
		TypeInfo<String >::parseFromBinaryStream(&arrivalPoint, stream);
		return true;

	}

	return false;
}

void TicketObjectImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = TicketObjectImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int TicketObjectImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = TangibleObjectImplementation::writeObjectMembers(stream);

	uint32 _nameHashCode;
	int _offset;
	uint32 _totalSize;
	_nameHashCode = 0x84d97799; //TicketObject.departurePlanet
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<String >::toBinaryStream(&departurePlanet, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_nameHashCode = 0xf6b51586; //TicketObject.departurePoint
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<String >::toBinaryStream(&departurePoint, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_nameHashCode = 0x1dd9757f; //TicketObject.arrivalPlanet
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<String >::toBinaryStream(&arrivalPlanet, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_nameHashCode = 0x2f1f473f; //TicketObject.arrivalPoint
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<String >::toBinaryStream(&arrivalPoint, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);


	return _count + 4;
}

TicketObjectImplementation::TicketObjectImplementation() {
	_initializeImplementation();
	// server/zone/objects/tangible/ticket/TicketObject.idl():  		Logger.setLoggingName("TicketObject");
	Logger::setLoggingName("TicketObject");
}

void TicketObjectImplementation::initializeTransientMembers() {
	// server/zone/objects/tangible/ticket/TicketObject.idl():  		super.initializeTransientMembers();
	TangibleObjectImplementation::initializeTransientMembers();
	// server/zone/objects/tangible/ticket/TicketObject.idl():  		Logger.setLoggingName("TicketObject");
	Logger::setLoggingName("TicketObject");
}

void TicketObjectImplementation::setDeparturePlanet(const String& departureplanet) {
	// server/zone/objects/tangible/ticket/TicketObject.idl():  		departurePlanet = departureplanet;
	departurePlanet = departureplanet;
}

void TicketObjectImplementation::setDeparturePoint(const String& departurepoint) {
	// server/zone/objects/tangible/ticket/TicketObject.idl():  		departurePoint = departurepoint;
	departurePoint = departurepoint;
}

void TicketObjectImplementation::setArrivalPlanet(const String& arrival) {
	// server/zone/objects/tangible/ticket/TicketObject.idl():  		arrivalPlanet = arrival;
	arrivalPlanet = arrival;
}

void TicketObjectImplementation::setArrivalPoint(const String& arrival) {
	// server/zone/objects/tangible/ticket/TicketObject.idl():  		arrivalPoint = arrival;
	arrivalPoint = arrival;
}

String TicketObjectImplementation::getDeparturePlanet() {
	// server/zone/objects/tangible/ticket/TicketObject.idl():  		return departurePlanet;
	return departurePlanet;
}

String TicketObjectImplementation::getDeparturePoint() {
	// server/zone/objects/tangible/ticket/TicketObject.idl():  		return departurePoint;
	return departurePoint;
}

String TicketObjectImplementation::getArrivalPlanet() {
	// server/zone/objects/tangible/ticket/TicketObject.idl():  		return arrivalPlanet;
	return arrivalPlanet;
}

String TicketObjectImplementation::getArrivalPoint() {
	// server/zone/objects/tangible/ticket/TicketObject.idl():  		return arrivalPoint;
	return arrivalPoint;
}

bool TicketObjectImplementation::isTicketObject() {
	// server/zone/objects/tangible/ticket/TicketObject.idl():  		return true;
	return true;
}

/*
 *	TicketObjectAdapter
 */


#include "engine/orb/messages/InvokeMethodMessage.h"


TicketObjectAdapter::TicketObjectAdapter(TicketObject* obj) : TangibleObjectAdapter(obj) {
}

void TicketObjectAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	DOBMessage* resp = inv->getInvocationMessage();

	switch (methid) {
	case RPC_INITIALIZETRANSIENTMEMBERS__:
		{
			
			initializeTransientMembers();
			
		}
		break;
	case RPC_HANDLEOBJECTMENUSELECT__CREATUREOBJECT_BYTE_:
		{
			CreatureObject* player = static_cast<CreatureObject*>(inv->getObjectParameter());
			byte selectedID = inv->getByteParameter();
			
			int _m_res = handleObjectMenuSelect(player, selectedID);
			resp->insertSignedInt(_m_res);
		}
		break;
	case RPC_SETDEPARTUREPLANET__STRING_:
		{
			 String departureplanet; inv->getAsciiParameter(departureplanet);
			
			setDeparturePlanet(departureplanet);
			
		}
		break;
	case RPC_SETDEPARTUREPOINT__STRING_:
		{
			 String departurepoint; inv->getAsciiParameter(departurepoint);
			
			setDeparturePoint(departurepoint);
			
		}
		break;
	case RPC_SETARRIVALPLANET__STRING_:
		{
			 String arrival; inv->getAsciiParameter(arrival);
			
			setArrivalPlanet(arrival);
			
		}
		break;
	case RPC_SETARRIVALPOINT__STRING_:
		{
			 String arrival; inv->getAsciiParameter(arrival);
			
			setArrivalPoint(arrival);
			
		}
		break;
	case RPC_GETDEPARTUREPLANET__:
		{
			
			String _m_res = getDeparturePlanet();
			resp->insertAscii(_m_res);
		}
		break;
	case RPC_GETDEPARTUREPOINT__:
		{
			
			String _m_res = getDeparturePoint();
			resp->insertAscii(_m_res);
		}
		break;
	case RPC_GETARRIVALPLANET__:
		{
			
			String _m_res = getArrivalPlanet();
			resp->insertAscii(_m_res);
		}
		break;
	case RPC_GETARRIVALPOINT__:
		{
			
			String _m_res = getArrivalPoint();
			resp->insertAscii(_m_res);
		}
		break;
	case RPC_ISTICKETOBJECT__:
		{
			
			bool _m_res = isTicketObject();
			resp->insertBoolean(_m_res);
		}
		break;
	default:
		TangibleObjectAdapter::invokeMethod(methid, inv);
	}
}

void TicketObjectAdapter::initializeTransientMembers() {
	(static_cast<TicketObject*>(stub))->initializeTransientMembers();
}

int TicketObjectAdapter::handleObjectMenuSelect(CreatureObject* player, byte selectedID) {
	return (static_cast<TicketObject*>(stub))->handleObjectMenuSelect(player, selectedID);
}

void TicketObjectAdapter::setDeparturePlanet(const String& departureplanet) {
	(static_cast<TicketObject*>(stub))->setDeparturePlanet(departureplanet);
}

void TicketObjectAdapter::setDeparturePoint(const String& departurepoint) {
	(static_cast<TicketObject*>(stub))->setDeparturePoint(departurepoint);
}

void TicketObjectAdapter::setArrivalPlanet(const String& arrival) {
	(static_cast<TicketObject*>(stub))->setArrivalPlanet(arrival);
}

void TicketObjectAdapter::setArrivalPoint(const String& arrival) {
	(static_cast<TicketObject*>(stub))->setArrivalPoint(arrival);
}

String TicketObjectAdapter::getDeparturePlanet() {
	return (static_cast<TicketObject*>(stub))->getDeparturePlanet();
}

String TicketObjectAdapter::getDeparturePoint() {
	return (static_cast<TicketObject*>(stub))->getDeparturePoint();
}

String TicketObjectAdapter::getArrivalPlanet() {
	return (static_cast<TicketObject*>(stub))->getArrivalPlanet();
}

String TicketObjectAdapter::getArrivalPoint() {
	return (static_cast<TicketObject*>(stub))->getArrivalPoint();
}

bool TicketObjectAdapter::isTicketObject() {
	return (static_cast<TicketObject*>(stub))->isTicketObject();
}

/*
 *	TicketObjectHelper
 */

TicketObjectHelper* TicketObjectHelper::staticInitializer = TicketObjectHelper::instance();

TicketObjectHelper::TicketObjectHelper() {
	className = "TicketObject";

	Core::getObjectBroker()->registerClass(className, this);
}

void TicketObjectHelper::finalizeHelper() {
	TicketObjectHelper::finalize();
}

DistributedObject* TicketObjectHelper::instantiateObject() {
	return new TicketObject(DummyConstructorParameter::instance());
}

DistributedObjectServant* TicketObjectHelper::instantiateServant() {
	return new TicketObjectImplementation();
}

DistributedObjectAdapter* TicketObjectHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new TicketObjectAdapter(static_cast<TicketObject*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

const char LuaTicketObject::className[] = "LuaTicketObject";

Luna<LuaTicketObject>::RegType LuaTicketObject::Register[] = {
	{ "_setObject", &LuaTicketObject::_setObject },
	{ "_getObject", &LuaTicketObject::_getObject },
	{ "initializeTransientMembers", &LuaTicketObject::initializeTransientMembers },
	{ "fillAttributeList", &LuaTicketObject::fillAttributeList },
	{ "handleObjectMenuSelect", &LuaTicketObject::handleObjectMenuSelect },
	{ "setDeparturePlanet", &LuaTicketObject::setDeparturePlanet },
	{ "setDeparturePoint", &LuaTicketObject::setDeparturePoint },
	{ "setArrivalPlanet", &LuaTicketObject::setArrivalPlanet },
	{ "setArrivalPoint", &LuaTicketObject::setArrivalPoint },
	{ "getDeparturePlanet", &LuaTicketObject::getDeparturePlanet },
	{ "getDeparturePoint", &LuaTicketObject::getDeparturePoint },
	{ "getArrivalPlanet", &LuaTicketObject::getArrivalPlanet },
	{ "getArrivalPoint", &LuaTicketObject::getArrivalPoint },
	{ "isTicketObject", &LuaTicketObject::isTicketObject },
	{ 0, 0 }
};

LuaTicketObject::LuaTicketObject(lua_State *L) {
	realObject = static_cast<TicketObject*>(lua_touserdata(L, 1));
}

LuaTicketObject::~LuaTicketObject() {
}

int LuaTicketObject::_setObject(lua_State* L) {
	realObject = static_cast<TicketObject*>(lua_touserdata(L, -1));

	return 0;
}

int LuaTicketObject::_getObject(lua_State* L) {
	lua_pushlightuserdata(L, realObject.get());

	return 1;
}

int LuaTicketObject::initializeTransientMembers(lua_State *L) {
	int parameterCount = lua_gettop(L) - 1;
	
	if (parameterCount == 0) {
		realObject->initializeTransientMembers();

		return 0;
	} else {
		throw LuaCallbackException(L, "invalid argument count " + String::valueOf(parameterCount) + " for lua method 'TicketObject:initializeTransientMembers()'");
	}
	return 0;
}

int LuaTicketObject::fillAttributeList(lua_State *L) {
	int parameterCount = lua_gettop(L) - 1;
	
	if (lua_isuserdata(L, -1)) {
		if (lua_isuserdata(L, -2)) {
			if (parameterCount == 2) {
				AttributeListMessage* msg = static_cast<AttributeListMessage*>(lua_touserdata(L, -2));
				CreatureObject* object = static_cast<CreatureObject*>(lua_touserdata(L, -1));

				realObject->fillAttributeList(msg, object);

				return 0;
			} else {
				throw LuaCallbackException(L, "invalid argument count " + String::valueOf(parameterCount) + " for lua method 'TicketObject:fillAttributeList(userdata, userdata)'");
			}
		} else {
			throw LuaCallbackException(L, "invalid argument at 1 for lua method 'TicketObject:fillAttributeList(userdata, userdata)'");
		}
	} else {
		throw LuaCallbackException(L, "invalid argument at 0 for lua method 'TicketObject:fillAttributeList(userdata, userdata)'");
	}
	return 0;
}

int LuaTicketObject::handleObjectMenuSelect(lua_State *L) {
	int parameterCount = lua_gettop(L) - 1;
	
	if (lua_isnumber(L, -1)) {
		if (lua_isuserdata(L, -2)) {
			if (parameterCount == 2) {
				CreatureObject* player = static_cast<CreatureObject*>(lua_touserdata(L, -2));
				byte selectedID = lua_tointeger(L, -1);

				int result = realObject->handleObjectMenuSelect(player, selectedID);

				lua_pushinteger(L, result);
				return 1;
			} else {
				throw LuaCallbackException(L, "invalid argument count " + String::valueOf(parameterCount) + " for lua method 'TicketObject:handleObjectMenuSelect(userdata, integer)'");
			}
		} else {
			throw LuaCallbackException(L, "invalid argument at 1 for lua method 'TicketObject:handleObjectMenuSelect(userdata, integer)'");
		}
	} else {
		throw LuaCallbackException(L, "invalid argument at 0 for lua method 'TicketObject:handleObjectMenuSelect(userdata, integer)'");
	}
	return 0;
}

int LuaTicketObject::setDeparturePlanet(lua_State *L) {
	int parameterCount = lua_gettop(L) - 1;
	
	if (lua_isstring(L, -1)) {
		if (parameterCount == 1) {
			const String departureplanet = lua_tostring(L, -1);

			realObject->setDeparturePlanet(departureplanet);

			return 0;
		} else {
			throw LuaCallbackException(L, "invalid argument count " + String::valueOf(parameterCount) + " for lua method 'TicketObject:setDeparturePlanet(string)'");
		}
	} else {
		throw LuaCallbackException(L, "invalid argument at 0 for lua method 'TicketObject:setDeparturePlanet(string)'");
	}
	return 0;
}

int LuaTicketObject::setDeparturePoint(lua_State *L) {
	int parameterCount = lua_gettop(L) - 1;
	
	if (lua_isstring(L, -1)) {
		if (parameterCount == 1) {
			const String departurepoint = lua_tostring(L, -1);

			realObject->setDeparturePoint(departurepoint);

			return 0;
		} else {
			throw LuaCallbackException(L, "invalid argument count " + String::valueOf(parameterCount) + " for lua method 'TicketObject:setDeparturePoint(string)'");
		}
	} else {
		throw LuaCallbackException(L, "invalid argument at 0 for lua method 'TicketObject:setDeparturePoint(string)'");
	}
	return 0;
}

int LuaTicketObject::setArrivalPlanet(lua_State *L) {
	int parameterCount = lua_gettop(L) - 1;
	
	if (lua_isstring(L, -1)) {
		if (parameterCount == 1) {
			const String arrival = lua_tostring(L, -1);

			realObject->setArrivalPlanet(arrival);

			return 0;
		} else {
			throw LuaCallbackException(L, "invalid argument count " + String::valueOf(parameterCount) + " for lua method 'TicketObject:setArrivalPlanet(string)'");
		}
	} else {
		throw LuaCallbackException(L, "invalid argument at 0 for lua method 'TicketObject:setArrivalPlanet(string)'");
	}
	return 0;
}

int LuaTicketObject::setArrivalPoint(lua_State *L) {
	int parameterCount = lua_gettop(L) - 1;
	
	if (lua_isstring(L, -1)) {
		if (parameterCount == 1) {
			const String arrival = lua_tostring(L, -1);

			realObject->setArrivalPoint(arrival);

			return 0;
		} else {
			throw LuaCallbackException(L, "invalid argument count " + String::valueOf(parameterCount) + " for lua method 'TicketObject:setArrivalPoint(string)'");
		}
	} else {
		throw LuaCallbackException(L, "invalid argument at 0 for lua method 'TicketObject:setArrivalPoint(string)'");
	}
	return 0;
}

int LuaTicketObject::getDeparturePlanet(lua_State *L) {
	int parameterCount = lua_gettop(L) - 1;
	
	if (parameterCount == 0) {
		String result = realObject->getDeparturePlanet();

		lua_pushstring(L, result.toCharArray());
		return 1;
	} else {
		throw LuaCallbackException(L, "invalid argument count " + String::valueOf(parameterCount) + " for lua method 'TicketObject:getDeparturePlanet()'");
	}
	return 0;
}

int LuaTicketObject::getDeparturePoint(lua_State *L) {
	int parameterCount = lua_gettop(L) - 1;
	
	if (parameterCount == 0) {
		String result = realObject->getDeparturePoint();

		lua_pushstring(L, result.toCharArray());
		return 1;
	} else {
		throw LuaCallbackException(L, "invalid argument count " + String::valueOf(parameterCount) + " for lua method 'TicketObject:getDeparturePoint()'");
	}
	return 0;
}

int LuaTicketObject::getArrivalPlanet(lua_State *L) {
	int parameterCount = lua_gettop(L) - 1;
	
	if (parameterCount == 0) {
		String result = realObject->getArrivalPlanet();

		lua_pushstring(L, result.toCharArray());
		return 1;
	} else {
		throw LuaCallbackException(L, "invalid argument count " + String::valueOf(parameterCount) + " for lua method 'TicketObject:getArrivalPlanet()'");
	}
	return 0;
}

int LuaTicketObject::getArrivalPoint(lua_State *L) {
	int parameterCount = lua_gettop(L) - 1;
	
	if (parameterCount == 0) {
		String result = realObject->getArrivalPoint();

		lua_pushstring(L, result.toCharArray());
		return 1;
	} else {
		throw LuaCallbackException(L, "invalid argument count " + String::valueOf(parameterCount) + " for lua method 'TicketObject:getArrivalPoint()'");
	}
	return 0;
}

int LuaTicketObject::isTicketObject(lua_State *L) {
	int parameterCount = lua_gettop(L) - 1;
	
	if (parameterCount == 0) {
		bool result = realObject->isTicketObject();

		lua_pushboolean(L, result);
		return 1;
	} else {
		throw LuaCallbackException(L, "invalid argument count " + String::valueOf(parameterCount) + " for lua method 'TicketObject:isTicketObject()'");
	}
	return 0;
}

