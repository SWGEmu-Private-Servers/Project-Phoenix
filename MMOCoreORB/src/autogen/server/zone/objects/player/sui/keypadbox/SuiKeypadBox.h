/*
 *	autogen/server/zone/objects/player/sui/keypadbox/SuiKeypadBox.h generated by engine3 IDL compiler 0.60
 */

#ifndef SUIKEYPADBOX_H_
#define SUIKEYPADBOX_H_

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

#include "server/zone/packets/ui/SuiCreatePageMessage.h"

#include "engine/lua/LuaObject.h"

#include "engine/service/proto/BaseMessage.h"

#include "server/zone/objects/player/sui/SuiBox.h"

namespace server {
namespace zone {
namespace objects {
namespace player {
namespace sui {
namespace keypadbox {

class SuiKeypadBox : public SuiBox {
public:
	SuiKeypadBox(CreatureObject* player, unsigned int windowType);

	BaseMessage* generateMessage();

	bool isKeypadBox();

	DistributedObjectServant* _getImplementation();
	DistributedObjectServant* _getImplementationForRead() const;

	void _setImplementation(DistributedObjectServant* servant);

protected:
	SuiKeypadBox(DummyConstructorParameter* param);

	virtual ~SuiKeypadBox();

	friend class SuiKeypadBoxHelper;
};

} // namespace keypadbox
} // namespace sui
} // namespace player
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::player::sui::keypadbox;

namespace server {
namespace zone {
namespace objects {
namespace player {
namespace sui {
namespace keypadbox {

class SuiKeypadBoxImplementation : public SuiBoxImplementation {

public:
	SuiKeypadBoxImplementation(CreatureObject* player, unsigned int windowType);

	SuiKeypadBoxImplementation(DummyConstructorParameter* param);

	BaseMessage* generateMessage();

	bool isKeypadBox();

	WeakReference<SuiKeypadBox*> _this;

	operator const SuiKeypadBox*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~SuiKeypadBoxImplementation();

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

	friend class SuiKeypadBox;
};

class SuiKeypadBoxAdapter : public SuiBoxAdapter {
public:
	SuiKeypadBoxAdapter(SuiKeypadBox* impl);

	void invokeMethod(sys::uint32 methid, DistributedMethod* method);

	BaseMessage* generateMessage();

	bool isKeypadBox();

};

class SuiKeypadBoxHelper : public DistributedObjectClassHelper, public Singleton<SuiKeypadBoxHelper> {
	static SuiKeypadBoxHelper* staticInitializer;

public:
	SuiKeypadBoxHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<SuiKeypadBoxHelper>;
};

} // namespace keypadbox
} // namespace sui
} // namespace player
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::player::sui::keypadbox;

#endif /*SUIKEYPADBOX_H_*/
