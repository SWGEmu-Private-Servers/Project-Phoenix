/*
 *	autogen/server/zone/managers/minigames/ForageManager.h generated by engine3 IDL compiler 0.60
 */

#ifndef FORAGEMANAGER_H_
#define FORAGEMANAGER_H_

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

class Zone;

} // namespace zone
} // namespace server

using namespace server::zone;

namespace server {
namespace zone {

class ZoneServer;

} // namespace zone
} // namespace server

using namespace server::zone;

#include "server/zone/objects/area/ForageMap.h"

#include "engine/log/Logger.h"

#include "engine/lua/Lua.h"

#include "system/util/VectorMap.h"

#include "system/util/Vector.h"

#include "engine/util/Observer.h"

namespace server {
namespace zone {
namespace managers {
namespace minigames {

class ForageManager : public Observer {
public:
	static const int SCOUT = 1;

	static const int MEDICAL = 2;

	static const int LAIR = 3;

	static const int SHELLFISH = 4;

	ForageManager();

	void deleteForageAreaCollection(String& playerName);

	/**
	 * Starts foraging.
	 * Checks the player's pending tasks to see if they are already foraging. If so, cancels forage.
	 * Checks if the player is inside a structure. If so, cancels forage.
	 * Deducts the foraging action cost from the player.
	 * Collects the player's current position so we can compare it after the forage animation is done.
	 * Creates the forage task and puts it into the player's pending tasks, it will activate in 8.5 
	 * seconds and will activate finishForaging().
	 * @pre { this object is not locked, player is locked }
	 * @post { this object is not locked, player is not locked }
	 * @param player CreatureObject who is trying to forage.
	 * @param scoutForage Determines if the player is using /forage or /medicalforage.
	 */
	void startForaging(CreatureObject* player, int forageType);

	/**
	 * Finishes foraging.
	 * Checks if the player moved since first foraging. If so, cancels forage.
	 * Checks if the player entered combat. If so, cancels forage.
	 * Checks the forage areas to see if the player is allowed to forage here again. If not, cancels forage.
	 * Determines if the player is successful or not in the forage attempt.
	 * If successful, activates forageGiveItems().
	 * @pre { this object is locked, player is locked }
	 * @post { this object is not locked, player is not locked }
	 * @param player CreatureObject who is foraging.
	 * @param scoutForage Determines if the player is using /forage or /medicalforage.
	 * @param forageX The x coordinate of the player's position when they first started foraging.
	 * @param forageY The y coordinate of the player's position when they first started foraging.
	 * @param planet The planet (zone ID) the player was on when they first started foraging.
	 */
	void finishForaging(CreatureObject* player, int forageType, float forageX, float forageY, const String& planet);

	/**
	 * Gives the player items for a successful forage.
	 * Checks player's inventory space and discards items they could have received if they had space.
 	 * Determines which loot group they will get an item from. If resource, calls giveForageResource().
	 * @pre { this object is not locked, player is locked }
	 * @post { this object is not locked, player is not locked }
	 * @param player CreatureObject who is foraging.
	 * @param scoutForage Determines if the player is using /forage or /medicalforage.
	 * @param forageX The x coordinate of the player's position when they first started foraging.
	 * @param forageY The y coordinate of the player's position when they first started foraging.
	 * @param planet The planet (zone ID) the player was on when they first started foraging.
	 */
	bool forageGiveItems(CreatureObject* player, int forageType, float forageX, float forageY, const String& planet);

	/**
	 * Gives the player resources for a successful forage.
	 * Pulls a list of all the flora resource spawns on that planet.
 	 * Picks a random flora from the list and gives it to the player if there is some under them.
	 * If the density of the flora is zero, it picks a different resource.
	 * @pre { this object is not locked, player is locked }
	 * @post { this object is not locked, player is not locked }
	 * @param player CreatureObject who is foraging.
	 * @param forageX The x coordinate of the player's position when they first started foraging.
	 * @param forageY The y coordinate of the player's position when they first started foraging.
	 * @param planet The planet (zone ID) the player was on when they first started foraging.
	 */
	bool forageGiveResource(CreatureObject* player, float forageX, float forageY, const String& planet, String& resType);

	DistributedObjectServant* _getImplementation();
	DistributedObjectServant* _getImplementationForRead() const;

	void _setImplementation(DistributedObjectServant* servant);

protected:
	ForageManager(DummyConstructorParameter* param);

	virtual ~ForageManager();

	friend class ForageManagerHelper;
};

} // namespace minigames
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::minigames;

namespace server {
namespace zone {
namespace managers {
namespace minigames {

class ForageManagerImplementation : public ObserverImplementation, public Logger {
public:
	static const int SCOUT = 1;

	static const int MEDICAL = 2;

	static const int LAIR = 3;

	static const int SHELLFISH = 4;

protected:
	ForageMap forageAreas;

public:
	ForageManagerImplementation();

	ForageManagerImplementation(DummyConstructorParameter* param);

	void deleteForageAreaCollection(String& playerName);

	/**
	 * Starts foraging.
	 * Checks the player's pending tasks to see if they are already foraging. If so, cancels forage.
	 * Checks if the player is inside a structure. If so, cancels forage.
	 * Deducts the foraging action cost from the player.
	 * Collects the player's current position so we can compare it after the forage animation is done.
	 * Creates the forage task and puts it into the player's pending tasks, it will activate in 8.5 
	 * seconds and will activate finishForaging().
	 * @pre { this object is not locked, player is locked }
	 * @post { this object is not locked, player is not locked }
	 * @param player CreatureObject who is trying to forage.
	 * @param scoutForage Determines if the player is using /forage or /medicalforage.
	 */
	void startForaging(CreatureObject* player, int forageType);

	/**
	 * Finishes foraging.
	 * Checks if the player moved since first foraging. If so, cancels forage.
	 * Checks if the player entered combat. If so, cancels forage.
	 * Checks the forage areas to see if the player is allowed to forage here again. If not, cancels forage.
	 * Determines if the player is successful or not in the forage attempt.
	 * If successful, activates forageGiveItems().
	 * @pre { this object is locked, player is locked }
	 * @post { this object is not locked, player is not locked }
	 * @param player CreatureObject who is foraging.
	 * @param scoutForage Determines if the player is using /forage or /medicalforage.
	 * @param forageX The x coordinate of the player's position when they first started foraging.
	 * @param forageY The y coordinate of the player's position when they first started foraging.
	 * @param planet The planet (zone ID) the player was on when they first started foraging.
	 */
	void finishForaging(CreatureObject* player, int forageType, float forageX, float forageY, const String& planet);

	/**
	 * Gives the player items for a successful forage.
	 * Checks player's inventory space and discards items they could have received if they had space.
 	 * Determines which loot group they will get an item from. If resource, calls giveForageResource().
	 * @pre { this object is not locked, player is locked }
	 * @post { this object is not locked, player is not locked }
	 * @param player CreatureObject who is foraging.
	 * @param scoutForage Determines if the player is using /forage or /medicalforage.
	 * @param forageX The x coordinate of the player's position when they first started foraging.
	 * @param forageY The y coordinate of the player's position when they first started foraging.
	 * @param planet The planet (zone ID) the player was on when they first started foraging.
	 */
	bool forageGiveItems(CreatureObject* player, int forageType, float forageX, float forageY, const String& planet);

	/**
	 * Gives the player resources for a successful forage.
	 * Pulls a list of all the flora resource spawns on that planet.
 	 * Picks a random flora from the list and gives it to the player if there is some under them.
	 * If the density of the flora is zero, it picks a different resource.
	 * @pre { this object is not locked, player is locked }
	 * @post { this object is not locked, player is not locked }
	 * @param player CreatureObject who is foraging.
	 * @param forageX The x coordinate of the player's position when they first started foraging.
	 * @param forageY The y coordinate of the player's position when they first started foraging.
	 * @param planet The planet (zone ID) the player was on when they first started foraging.
	 */
	bool forageGiveResource(CreatureObject* player, float forageX, float forageY, const String& planet, String& resType);

	WeakReference<ForageManager*> _this;

	operator const ForageManager*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~ForageManagerImplementation();

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

	friend class ForageManager;
};

class ForageManagerAdapter : public ObserverAdapter {
public:
	ForageManagerAdapter(ForageManager* impl);

	void invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void deleteForageAreaCollection(String& playerName);

	void startForaging(CreatureObject* player, int forageType);

	void finishForaging(CreatureObject* player, int forageType, float forageX, float forageY, const String& planet);

	bool forageGiveItems(CreatureObject* player, int forageType, float forageX, float forageY, const String& planet);

	bool forageGiveResource(CreatureObject* player, float forageX, float forageY, const String& planet, String& resType);

};

class ForageManagerHelper : public DistributedObjectClassHelper, public Singleton<ForageManagerHelper> {
	static ForageManagerHelper* staticInitializer;

public:
	ForageManagerHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<ForageManagerHelper>;
};

} // namespace minigames
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::minigames;

#endif /*FORAGEMANAGER_H_*/
