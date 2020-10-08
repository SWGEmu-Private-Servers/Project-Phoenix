/*
 *	autogen/server/zone/objects/tangible/terminal/spaceship/SpaceshipTerminal.h generated by engine3 IDL compiler 0.60
 */

#ifndef SPACESHIPTERMINAL_H_
#define SPACESHIPTERMINAL_H_

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

#include "server/zone/objects/tangible/terminal/Terminal.h"

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace terminal {
namespace spaceship {

class SpaceshipTerminal : public Terminal {
public:
	SpaceshipTerminal();

	int handleObjectMenuSelect(CreatureObject* player, byte selectedID);

	DistributedObjectServant* _getImplementation();
	DistributedObjectServant* _getImplementationForRead() const;

	void _setImplementation(DistributedObjectServant* servant);

protected:
	SpaceshipTerminal(DummyConstructorParameter* param);

	virtual ~SpaceshipTerminal();

	friend class SpaceshipTerminalHelper;
};

} // namespace spaceship
} // namespace terminal
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::terminal::spaceship;

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace terminal {
namespace spaceship {

class SpaceshipTerminalImplementation : public TerminalImplementation {

public:
	SpaceshipTerminalImplementation();

	SpaceshipTerminalImplementation(DummyConstructorParameter* param);

	int handleObjectMenuSelect(CreatureObject* player, byte selectedID);

	WeakReference<SpaceshipTerminal*> _this;

	operator const SpaceshipTerminal*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~SpaceshipTerminalImplementation();

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

	friend class SpaceshipTerminal;
};

class SpaceshipTerminalAdapter : public TerminalAdapter {
public:
	SpaceshipTerminalAdapter(SpaceshipTerminal* impl);

	void invokeMethod(sys::uint32 methid, DistributedMethod* method);

	int handleObjectMenuSelect(CreatureObject* player, byte selectedID);

};

class SpaceshipTerminalHelper : public DistributedObjectClassHelper, public Singleton<SpaceshipTerminalHelper> {
	static SpaceshipTerminalHelper* staticInitializer;

public:
	SpaceshipTerminalHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<SpaceshipTerminalHelper>;
};

} // namespace spaceship
} // namespace terminal
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::terminal::spaceship;

#endif /*SPACESHIPTERMINAL_H_*/
