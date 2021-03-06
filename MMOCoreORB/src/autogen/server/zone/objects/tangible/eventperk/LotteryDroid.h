/*
 *	autogen/server/zone/objects/tangible/eventperk/LotteryDroid.h generated by engine3 IDL compiler 0.60
 */

#ifndef LOTTERYDROID_H_
#define LOTTERYDROID_H_

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
namespace tangible {
namespace tasks {

class RemoveEventPerkItemTask;

} // namespace tasks
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::tasks;

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace tasks {

class LotteryDroidPulseTask;

} // namespace tasks
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::tasks;

namespace server {
namespace zone {

class Zone;

} // namespace zone
} // namespace server

using namespace server::zone;

#include "server/zone/objects/creature/CreatureObject.h"

#include "system/util/VectorMap.h"

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace eventperk {

class LotteryDroid : public CreatureObject {
public:
	static const int GAMESETUP = 0;

	static const int GAMESTARTED = 1;

	static const int GAMEENDED = 2;

	LotteryDroid();

	void initializeTransientMembers();

	int handleObjectMenuSelect(CreatureObject* player, byte selectedID);

	void fillObjectMenuResponse(ObjectMenuResponse* menuResponse, CreatureObject* player);

	void endGame();

	void startLottery(CreatureObject* player);

	void sendDurationSUI(CreatureObject* player);

	void sendPayoutSUI(CreatureObject* player);

	void sendTicketCostSUI(CreatureObject* player);

	void sendAddCreditsSUI(CreatureObject* player);

	void sendLotteryInstructionsSUI(CreatureObject* player);

	void sendRegistrationSUI(CreatureObject* player);

	void sendLotteryInfoSUI(CreatureObject* player);

	String getTimeLeft(unsigned long long timeLeft);

	CreatureObject* getDeedOwner();

	void activateGamePulse();

	bool isEventPerkItem();

	Time* getPurchaseTime();

	int getGameStatus() const;

	int getGameDuration() const;

	int getTicketPrice() const;

	float getPayoutPercent() const;

	Time* getGameStartTime();

	void setGameDuration(int i);

	void setPayoutPercent(int i);

	void setTicketPrice(int price);

	void addToCreditPool(int amount);

	int getNumPlayers() const;

	void addNewPlayer(unsigned long long playerID);

	bool isCurrentPlayer(unsigned long long playerID);

	DistributedObjectServant* _getImplementation();
	DistributedObjectServant* _getImplementationForRead() const;

	void _setImplementation(DistributedObjectServant* servant);

protected:
	LotteryDroid(DummyConstructorParameter* param);

	virtual ~LotteryDroid();

	friend class LotteryDroidHelper;
};

} // namespace eventperk
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::eventperk;

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace eventperk {

class LotteryDroidImplementation : public CreatureObjectImplementation {
protected:
	Time purchaseTime;

	Time gameStartTime;

	int gameStatus;

	int ticketPrice;

	float payoutPercent;

	int gameDuration;

	int creditPool;

	unsigned long long winnerID;

public:
	static const int GAMESETUP = 0;

	static const int GAMESTARTED = 1;

	static const int GAMEENDED = 2;

protected:
	Vector<unsigned long long> playerList;

	Vector<unsigned int> gameDurationChoices;

	Vector<unsigned int> payoutPercentChoices;

	Reference<LotteryDroidPulseTask*> gamePulse;

	Reference<RemoveEventPerkItemTask*> removeEventPerkItemTask;

public:
	LotteryDroidImplementation();

	LotteryDroidImplementation(DummyConstructorParameter* param);

	void initializeTransientMembers();

	int handleObjectMenuSelect(CreatureObject* player, byte selectedID);

	void fillObjectMenuResponse(ObjectMenuResponse* menuResponse, CreatureObject* player);

	void endGame();

	void startLottery(CreatureObject* player);

	void sendDurationSUI(CreatureObject* player);

	void sendPayoutSUI(CreatureObject* player);

	void sendTicketCostSUI(CreatureObject* player);

	void sendAddCreditsSUI(CreatureObject* player);

	void sendLotteryInstructionsSUI(CreatureObject* player);

	void sendRegistrationSUI(CreatureObject* player);

	void sendLotteryInfoSUI(CreatureObject* player);

	String getTimeLeft(unsigned long long timeLeft);

	CreatureObject* getDeedOwner();

	void activateGamePulse();

	bool isEventPerkItem();

	Time* getPurchaseTime();

	int getGameStatus() const;

	int getGameDuration() const;

	int getTicketPrice() const;

	float getPayoutPercent() const;

	Time* getGameStartTime();

	void setGameDuration(int i);

	void setPayoutPercent(int i);

	void setTicketPrice(int price);

	void addToCreditPool(int amount);

	int getNumPlayers() const;

	void addNewPlayer(unsigned long long playerID);

	bool isCurrentPlayer(unsigned long long playerID);

	WeakReference<LotteryDroid*> _this;

	operator const LotteryDroid*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~LotteryDroidImplementation();

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

	friend class LotteryDroid;
};

class LotteryDroidAdapter : public CreatureObjectAdapter {
public:
	LotteryDroidAdapter(LotteryDroid* impl);

	void invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void initializeTransientMembers();

	int handleObjectMenuSelect(CreatureObject* player, byte selectedID);

	void endGame();

	void startLottery(CreatureObject* player);

	void sendDurationSUI(CreatureObject* player);

	void sendPayoutSUI(CreatureObject* player);

	void sendTicketCostSUI(CreatureObject* player);

	void sendAddCreditsSUI(CreatureObject* player);

	void sendLotteryInstructionsSUI(CreatureObject* player);

	void sendRegistrationSUI(CreatureObject* player);

	void sendLotteryInfoSUI(CreatureObject* player);

	String getTimeLeft(unsigned long long timeLeft);

	CreatureObject* getDeedOwner();

	void activateGamePulse();

	bool isEventPerkItem();

	int getGameStatus() const;

	int getGameDuration() const;

	int getTicketPrice() const;

	float getPayoutPercent() const;

	void setGameDuration(int i);

	void setPayoutPercent(int i);

	void setTicketPrice(int price);

	void addToCreditPool(int amount);

	int getNumPlayers() const;

	void addNewPlayer(unsigned long long playerID);

	bool isCurrentPlayer(unsigned long long playerID);

};

class LotteryDroidHelper : public DistributedObjectClassHelper, public Singleton<LotteryDroidHelper> {
	static LotteryDroidHelper* staticInitializer;

public:
	LotteryDroidHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<LotteryDroidHelper>;
};

} // namespace eventperk
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::eventperk;

#endif /*LOTTERYDROID_H_*/
