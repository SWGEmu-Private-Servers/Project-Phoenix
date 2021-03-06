/*
 *	autogen/server/zone/objects/tangible/consumable/Drink.h generated by engine3 IDL compiler 0.60
 */

#ifndef DRINK_H_
#define DRINK_H_

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
namespace scene {

class SceneObject;

} // namespace scene
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::scene;

namespace server {
namespace zone {

class Zone;

} // namespace zone
} // namespace server

using namespace server::zone;

#include "server/zone/objects/tangible/consumable/Consumable.h"

#include "engine/lua/LuaObject.h"

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace consumable {

class Drink : public Consumable {
public:
	Drink();

	void initializeTransientMembers();

	void initializePrivateData();

	DistributedObjectServant* _getImplementation();
	DistributedObjectServant* _getImplementationForRead() const;

	void _setImplementation(DistributedObjectServant* servant);

protected:
	Drink(DummyConstructorParameter* param);

	virtual ~Drink();

	friend class DrinkHelper;
};

} // namespace consumable
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::consumable;

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace consumable {

class DrinkImplementation : public ConsumableImplementation {

public:
	DrinkImplementation();

	DrinkImplementation(DummyConstructorParameter* param);

	void initializeTransientMembers();

	void initializePrivateData();

	WeakReference<Drink*> _this;

	operator const Drink*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~DrinkImplementation();

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

	friend class Drink;
};

class DrinkAdapter : public ConsumableAdapter {
public:
	DrinkAdapter(Drink* impl);

	void invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void initializeTransientMembers();

	void initializePrivateData();

};

class DrinkHelper : public DistributedObjectClassHelper, public Singleton<DrinkHelper> {
	static DrinkHelper* staticInitializer;

public:
	DrinkHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<DrinkHelper>;
};

} // namespace consumable
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::consumable;

#endif /*DRINK_H_*/
