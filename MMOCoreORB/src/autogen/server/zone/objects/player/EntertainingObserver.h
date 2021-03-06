/*
 *	autogen/server/zone/objects/player/EntertainingObserver.h generated by engine3 IDL compiler 0.60
 */

#ifndef ENTERTAININGOBSERVER_H_
#define ENTERTAININGOBSERVER_H_

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

#include "engine/core/ManagedObject.h"

#include "templates/params/ObserverEventType.h"

#include "engine/log/Logger.h"

#include "engine/core/ManagedReference.h"

#include "engine/util/Facade.h"

#include "system/lang/ref/Reference.h"

#include "engine/core/Task.h"

#include "engine/util/Observer.h"

#include "engine/util/Observable.h"

namespace server {
namespace zone {
namespace objects {
namespace player {

class EntertainingObserver : public Observer {
public:
	EntertainingObserver();

	int notifyObserverEvent(unsigned int eventType, Observable* observable, ManagedObject* arg1, long long arg2);

	DistributedObjectServant* _getImplementation();
	DistributedObjectServant* _getImplementationForRead() const;

	void _setImplementation(DistributedObjectServant* servant);

protected:
	EntertainingObserver(DummyConstructorParameter* param);

	virtual ~EntertainingObserver();

	friend class EntertainingObserverHelper;
};

} // namespace player
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::player;

namespace server {
namespace zone {
namespace objects {
namespace player {

class EntertainingObserverImplementation : public ObserverImplementation {

public:
	EntertainingObserverImplementation();

	EntertainingObserverImplementation(DummyConstructorParameter* param);

	int notifyObserverEvent(unsigned int eventType, Observable* observable, ManagedObject* arg1, long long arg2);

	WeakReference<EntertainingObserver*> _this;

	operator const EntertainingObserver*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~EntertainingObserverImplementation();

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

	friend class EntertainingObserver;
};

class EntertainingObserverAdapter : public ObserverAdapter {
public:
	EntertainingObserverAdapter(EntertainingObserver* impl);

	void invokeMethod(sys::uint32 methid, DistributedMethod* method);

	int notifyObserverEvent(unsigned int eventType, Observable* observable, ManagedObject* arg1, long long arg2);

};

class EntertainingObserverHelper : public DistributedObjectClassHelper, public Singleton<EntertainingObserverHelper> {
	static EntertainingObserverHelper* staticInitializer;

public:
	EntertainingObserverHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<EntertainingObserverHelper>;
};

} // namespace player
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::player;

#endif /*ENTERTAININGOBSERVER_H_*/
