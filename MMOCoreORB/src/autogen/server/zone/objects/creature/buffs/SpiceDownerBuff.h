/*
 *	autogen/server/zone/objects/creature/buffs/SpiceDownerBuff.h generated by engine3 IDL compiler 0.60
 */

#ifndef SPICEDOWNERBUFF_H_
#define SPICEDOWNERBUFF_H_

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

#include "server/zone/ZoneProcessServer.h"

#include "server/zone/objects/creature/buffs/BuffType.h"

#include "server/chat/StringIdChatParameter.h"

#include "templates/params/ObserverEventType.h"

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

class SpiceDownerBuff : public Buff {
public:
	SpiceDownerBuff(CreatureObject* creo, const String& name, unsigned int buffCRC, int duration);

	void activate(bool applyModifiers);

	void deactivate(bool applyModifiers);

	DistributedObjectServant* _getImplementation();
	DistributedObjectServant* _getImplementationForRead() const;

	void _setImplementation(DistributedObjectServant* servant);

protected:
	SpiceDownerBuff(DummyConstructorParameter* param);

	virtual ~SpiceDownerBuff();

	friend class SpiceDownerBuffHelper;
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

class SpiceDownerBuffImplementation : public BuffImplementation {

public:
	SpiceDownerBuffImplementation(CreatureObject* creo, const String& name, unsigned int buffCRC, int duration);

	SpiceDownerBuffImplementation(DummyConstructorParameter* param);

	void activate(bool applyModifiers);

	void deactivate(bool applyModifiers);

	WeakReference<SpiceDownerBuff*> _this;

	operator const SpiceDownerBuff*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~SpiceDownerBuffImplementation();

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

	friend class SpiceDownerBuff;
};

class SpiceDownerBuffAdapter : public BuffAdapter {
public:
	SpiceDownerBuffAdapter(SpiceDownerBuff* impl);

	void invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void activate(bool applyModifiers);

	void deactivate(bool applyModifiers);

};

class SpiceDownerBuffHelper : public DistributedObjectClassHelper, public Singleton<SpiceDownerBuffHelper> {
	static SpiceDownerBuffHelper* staticInitializer;

public:
	SpiceDownerBuffHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<SpiceDownerBuffHelper>;
};

} // namespace buffs
} // namespace creature
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::creature::buffs;

#endif /*SPICEDOWNERBUFF_H_*/
