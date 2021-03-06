/*
 *	autogen/server/zone/objects/creature/buffs/SpiceBuff.h generated by engine3 IDL compiler 0.60
 */

#ifndef SPICEBUFF_H_
#define SPICEBUFF_H_

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
namespace creature {
namespace buffs {

class SpiceDownerBuff;

} // namespace buffs
} // namespace creature
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::creature::buffs;

#include "server/zone/ZoneProcessServer.h"

#include "server/zone/objects/creature/buffs/BuffType.h"

#include "server/zone/objects/creature/buffs/BuffCRC.h"

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

class SpiceBuff : public Buff {
public:
	SpiceBuff(CreatureObject* creo, const String& name, unsigned int buffCRC, int duration);

	void activate(bool applyModifiers);

	void deactivate(bool removeModifiers);

	void setDownerAttributes(CreatureObject* creature, Buff* buff);

	DistributedObjectServant* _getImplementation();
	DistributedObjectServant* _getImplementationForRead() const;

	void _setImplementation(DistributedObjectServant* servant);

protected:
	SpiceBuff(DummyConstructorParameter* param);

	virtual ~SpiceBuff();

	friend class SpiceBuffHelper;
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

class SpiceBuffImplementation : public BuffImplementation {

public:
	SpiceBuffImplementation(CreatureObject* creo, const String& name, unsigned int buffCRC, int duration);

	SpiceBuffImplementation(DummyConstructorParameter* param);

	void activate(bool applyModifiers);

	void deactivate(bool removeModifiers);

	void setDownerAttributes(CreatureObject* creature, Buff* buff);

	WeakReference<SpiceBuff*> _this;

	operator const SpiceBuff*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~SpiceBuffImplementation();

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

	friend class SpiceBuff;
};

class SpiceBuffAdapter : public BuffAdapter {
public:
	SpiceBuffAdapter(SpiceBuff* impl);

	void invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void activate(bool applyModifiers);

	void deactivate(bool removeModifiers);

	void setDownerAttributes(CreatureObject* creature, Buff* buff);

};

class SpiceBuffHelper : public DistributedObjectClassHelper, public Singleton<SpiceBuffHelper> {
	static SpiceBuffHelper* staticInitializer;

public:
	SpiceBuffHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<SpiceBuffHelper>;
};

} // namespace buffs
} // namespace creature
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::creature::buffs;

#endif /*SPICEBUFF_H_*/
