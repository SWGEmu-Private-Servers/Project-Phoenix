/*
 *	autogen/server/zone/objects/creature/buffs/DelayedBuff.h generated by engine3 IDL compiler 0.60
 */

#ifndef DELAYEDBUFF_H_
#define DELAYEDBUFF_H_

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
namespace objects {
namespace creature {
namespace buffs {

class BuffDurationEvent;

} // namespace buffs
} // namespace creature
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::creature::buffs;

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace consumable {

class DelayedBuffObserver;

} // namespace consumable
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::consumable;

#include "server/zone/ZoneProcessServer.h"

#include "server/zone/objects/creature/buffs/BuffType.h"

#include "server/zone/managers/object/ObjectManager.h"

#include "server/chat/StringIdChatParameter.h"

#include "engine/core/ManagedObject.h"

#include "system/util/VectorMap.h"

#include "system/lang/ref/Reference.h"

#include "system/lang/Time.h"

#include "server/zone/objects/creature/buffs/Buff.h"

namespace server {
namespace zone {
namespace objects {
namespace creature {
namespace buffs {

class DelayedBuff : public Buff {
public:
	DelayedBuff(CreatureObject* creo, unsigned int buffcrc, int effectCount);

	void init(Vector<int>* events);

	void activate();

	void deactivate();

	void useCharge();

	void setUsesRemaining(int uses);

	DistributedObjectServant* _getImplementation();
	DistributedObjectServant* _getImplementationForRead() const;

	void _setImplementation(DistributedObjectServant* servant);

protected:
	DelayedBuff(DummyConstructorParameter* param);

	virtual ~DelayedBuff();

	friend class DelayedBuffHelper;
};

} // namespace buffs
} // namespace creature
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::creature::buffs;

namespace server {
namespace zone {
namespace objects {
namespace creature {
namespace buffs {

class DelayedBuffImplementation : public BuffImplementation {
protected:
	int usesRemaining;

	ManagedReference<CreatureObject* > player;

	ManagedReference<DelayedBuffObserver* > observer;

	Vector<int> eventTypes;

public:
	DelayedBuffImplementation(CreatureObject* creo, unsigned int buffcrc, int effectCount);

	DelayedBuffImplementation(DummyConstructorParameter* param);

	void init(Vector<int>* events);

	void activate();

	void deactivate();

	void useCharge();

	void setUsesRemaining(int uses);

private:
	void addObservers();

	void dropObservers();

public:
	WeakReference<DelayedBuff*> _this;

	operator const DelayedBuff*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~DelayedBuffImplementation();

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

	friend class DelayedBuff;
};

class DelayedBuffAdapter : public BuffAdapter {
public:
	DelayedBuffAdapter(DelayedBuff* impl);

	void invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void activate();

	void deactivate();

	void useCharge();

	void setUsesRemaining(int uses);

};

class DelayedBuffHelper : public DistributedObjectClassHelper, public Singleton<DelayedBuffHelper> {
	static DelayedBuffHelper* staticInitializer;

public:
	DelayedBuffHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<DelayedBuffHelper>;
};

} // namespace buffs
} // namespace creature
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::creature::buffs;

#endif /*DELAYEDBUFF_H_*/
