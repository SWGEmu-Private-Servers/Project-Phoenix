/*
 *	autogen/server/zone/ZoneClientSession.h generated by engine3 IDL compiler 0.60
 */

#ifndef ZONECLIENTSESSION_H_
#define ZONECLIENTSESSION_H_

#include "engine/core/Core.h"

#include "engine/core/ManagedReference.h"

#include "engine/core/ManagedWeakReference.h"

#ifndef likely
#ifdef __GNUC__
#define likely(x)       __builtin_expect(!!(x), 1)
#define unlikely(x)     __builtin_expect(!!(x), 0)
#else
#define likely(x)       (x)
#define unlikely(x)     (x)
#endif
#endif
namespace server {
namespace zone {
namespace objects {
namespace creature {

class CreatureObject;

} // namespace creature
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::creature;

namespace server {
namespace zone {

class ZoneServer;

} // namespace zone
} // namespace server

using namespace server::zone;

#include "engine/service/proto/BaseClientProxy.h"

#include "engine/service/proto/BasePacket.h"

#include "engine/core/ManagedObject.h"

#include "system/lang/ref/Reference.h"

#include "system/net/SocketAddress.h"

#include "system/net/Socket.h"

#include "engine/service/proto/events/BaseClientNetStatusCheckupEvent.h"

#include "engine/service/proto/events/BaseClientCleanupEvent.h"

#include "engine/service/proto/events/BaseClientNetStatusRequestEvent.h"

#include "engine/service/proto/events/BaseClientEvent.h"

#include "system/lang/Time.h"

#include "system/util/HashSet.h"

#include "system/util/HashTable.h"

#include "system/util/VectorMap.h"

#include "engine/log/Logger.h"

namespace server {
namespace zone {

class ZoneClientSession : public ManagedObject {
public:
	ZoneClientSession(BaseClientProxy* session);

	void disconnect();

	void disconnect(bool doLock);

	void sendMessage(BasePacket* msg);

	void balancePacketCheckupTime();

	void resetPacketCheckupTime();

	void closeConnection(bool lockPlayer, bool doLock = true);

	void info(const String& msg, bool force = false);

	void error(const String& msg);

	String getAddress();

	void setPlayer(CreatureObject* playerCreature);

	void setSessionID(unsigned int id);

	void setAccountID(unsigned int acc);

	int getCommandCount();

	void increaseCommandCount();

	void resetCommandCount();

	Time* getCommandSpamCooldown();

	BaseClientProxy* getSession();

	Reference<CreatureObject* > getPlayer();

	unsigned int getSessionID();

	unsigned int getAccountID();

	bool hasCharacter(unsigned long long cid, unsigned int galaxyId);

	void addCharacter(unsigned long long cid, unsigned int galaxyId);

	void addBannedCharacter(unsigned long long cid, unsigned int galaxyId);

	int getCharacterCount();

	int getCharacterCount(int galaxyId);

	void resetCharacters();

	DistributedObjectServant* _getImplementation();
	DistributedObjectServant* _getImplementationForRead() const;

	void _setImplementation(DistributedObjectServant* servant);

protected:
	ZoneClientSession(DummyConstructorParameter* param);

	virtual ~ZoneClientSession();

	friend class ZoneClientSessionHelper;
};

} // namespace zone
} // namespace server

using namespace server::zone;

namespace server {
namespace zone {

class ZoneClientSessionImplementation : public ManagedObjectImplementation {
protected:
	Reference<BaseClientProxy* > session;

	VectorMap<unsigned int, unsigned long long> characters;

	VectorMap<unsigned int, unsigned long long> bannedCharacters;

	ManagedWeakReference<CreatureObject* > player;

	unsigned int sessionID;

	unsigned int accountID;

private:
	bool disconnecting;

protected:
	Time commandSpamCooldown;

	int commandCount;

public:
	ZoneClientSessionImplementation(BaseClientProxy* session);

	ZoneClientSessionImplementation(DummyConstructorParameter* param);

	void disconnect();

	void disconnect(bool doLock);

	void sendMessage(BasePacket* msg);

	void balancePacketCheckupTime();

	void resetPacketCheckupTime();

	void closeConnection(bool lockPlayer, bool doLock = true);

	void info(const String& msg, bool force = false);

	void error(const String& msg);

	String getAddress();

	void setPlayer(CreatureObject* playerCreature);

	void setSessionID(unsigned int id);

	void setAccountID(unsigned int acc);

	int getCommandCount();

	void increaseCommandCount();

	void resetCommandCount();

	Time* getCommandSpamCooldown();

	BaseClientProxy* getSession();

	Reference<CreatureObject* > getPlayer();

	unsigned int getSessionID();

	unsigned int getAccountID();

	bool hasCharacter(unsigned long long cid, unsigned int galaxyId);

	void addCharacter(unsigned long long cid, unsigned int galaxyId);

	void addBannedCharacter(unsigned long long cid, unsigned int galaxyId);

	int getCharacterCount();

	int getCharacterCount(int galaxyId);

	void resetCharacters();

	WeakReference<ZoneClientSession*> _this;

	operator const ZoneClientSession*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~ZoneClientSessionImplementation();

	void finalize();

	void _initializeImplementation();

	void _setStub(DistributedObjectStub* stub);

	void lock(bool doLock = true);

	void lock(ManagedObject* obj);

	void rlock(bool doLock = true);

	void wlock(bool doLock = true);

	void wlock(ManagedObject* obj);

	void unlock(bool doLock = true);

	void runlock(bool doLock = true);

	void _serializationHelperMethod();
	bool readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode);
	int writeObjectMembers(ObjectOutputStream* stream);

	friend class ZoneClientSession;
};

class ZoneClientSessionAdapter : public ManagedObjectAdapter {
public:
	ZoneClientSessionAdapter(ZoneClientSession* impl);

	void invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void disconnect();

	void disconnect(bool doLock);

	void sendMessage(BasePacket* msg);

	void balancePacketCheckupTime();

	void resetPacketCheckupTime();

	void closeConnection(bool lockPlayer, bool doLock);

	void info(const String& msg, bool force);

	void error(const String& msg);

	String getAddress();

	void setPlayer(CreatureObject* playerCreature);

	void setSessionID(unsigned int id);

	void setAccountID(unsigned int acc);

	int getCommandCount();

	void increaseCommandCount();

	void resetCommandCount();

	Reference<CreatureObject* > getPlayer();

	unsigned int getSessionID();

	unsigned int getAccountID();

	bool hasCharacter(unsigned long long cid, unsigned int galaxyId);

	void addCharacter(unsigned long long cid, unsigned int galaxyId);

	void addBannedCharacter(unsigned long long cid, unsigned int galaxyId);

	int getCharacterCount();

	int getCharacterCount(int galaxyId);

	void resetCharacters();

};

class ZoneClientSessionHelper : public DistributedObjectClassHelper, public Singleton<ZoneClientSessionHelper> {
	static ZoneClientSessionHelper* staticInitializer;

public:
	ZoneClientSessionHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<ZoneClientSessionHelper>;
};

} // namespace zone
} // namespace server

using namespace server::zone;

#endif /*ZONECLIENTSESSION_H_*/
