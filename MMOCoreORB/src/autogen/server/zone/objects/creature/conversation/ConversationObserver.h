/*
 *	autogen/server/zone/objects/creature/conversation/ConversationObserver.h generated by engine3 IDL compiler 0.60
 */

#ifndef CONVERSATIONOBSERVER_H_
#define CONVERSATIONOBSERVER_H_

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
#include "server/zone/objects/creature/conversation/ConversationTemplate.h"

#include "server/zone/objects/creature/conversation/ConversationScreen.h"

#include "server/zone/objects/creature/CreatureObject.h"

#include "server/zone/objects/creature/conversation/screenhandlers/ScreenHandler.h"

#include "engine/util/Observer.h"

#include "engine/util/Observable.h"

namespace server {
namespace zone {
namespace objects {
namespace creature {
namespace conversation {

class ConversationObserver : public Observer {
public:
	ConversationObserver(unsigned int convoTemplateCRC);

	int notifyObserverEvent(unsigned int eventType, Observable* observable, ManagedObject* arg1, long long arg2);

	ConversationScreen* getNextConversationScreen(CreatureObject* conversingPlayer, int selectedOption, CreatureObject* conversingNPC);

	ConversationScreen* runScreenHandlers(CreatureObject* conversingPlayer, CreatureObject* conversingNPC, int selectedOption, ConversationScreen* conversationScreen);

	ConversationTemplate* getConversationTemplate();

	DistributedObjectServant* _getImplementation();
	DistributedObjectServant* _getImplementationForRead() const;

	void _setImplementation(DistributedObjectServant* servant);

protected:
	ConversationObserver(DummyConstructorParameter* param);

	virtual ~ConversationObserver();

	friend class ConversationObserverHelper;
};

} // namespace conversation
} // namespace creature
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::creature::conversation;

namespace server {
namespace zone {
namespace objects {
namespace creature {
namespace conversation {

class ConversationObserverImplementation : public ObserverImplementation, public Logger {
protected:
	unsigned int conversationTemplateCRC;

private:
	VectorMap<String, ScreenHandler*> screenHandlers;

public:
	ConversationObserverImplementation(unsigned int convoTemplateCRC);

	ConversationObserverImplementation(DummyConstructorParameter* param);

	int notifyObserverEvent(unsigned int eventType, Observable* observable, ManagedObject* arg1, long long arg2);

private:
	ConversationScreen* getInitialScreen();

	ConversationScreen* getConversationScreen(const String& screenName);

protected:
	virtual void createConversationSession(CreatureObject* conversingPlayer, CreatureObject* npc);

	void registerScreenHandler(const String& screenId, ScreenHandler* screenHandler);

	void removeScreenHandler(const String& screenId);

	void createPositionObserver(CreatureObject* player);

private:
	void cancelConversationSession(CreatureObject* conversingPlayer, CreatureObject* npc, bool forceClose = false);

public:
	virtual ConversationScreen* getNextConversationScreen(CreatureObject* conversingPlayer, int selectedOption, CreatureObject* conversingNPC);

	virtual ConversationScreen* runScreenHandlers(CreatureObject* conversingPlayer, CreatureObject* conversingNPC, int selectedOption, ConversationScreen* conversationScreen);

private:
	void sendConversationScreenToPlayer(CreatureObject* conversingPlayer, CreatureObject* conversingNPC, ConversationScreen* conversationScreen);

public:
	ConversationTemplate* getConversationTemplate();

	WeakReference<ConversationObserver*> _this;

	operator const ConversationObserver*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~ConversationObserverImplementation();

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

	friend class ConversationObserver;
};

class ConversationObserverAdapter : public ObserverAdapter {
public:
	ConversationObserverAdapter(ConversationObserver* impl);

	void invokeMethod(sys::uint32 methid, DistributedMethod* method);

	int notifyObserverEvent(unsigned int eventType, Observable* observable, ManagedObject* arg1, long long arg2);

};

class ConversationObserverHelper : public DistributedObjectClassHelper, public Singleton<ConversationObserverHelper> {
	static ConversationObserverHelper* staticInitializer;

public:
	ConversationObserverHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<ConversationObserverHelper>;
};

} // namespace conversation
} // namespace creature
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::creature::conversation;

#endif /*CONVERSATIONOBSERVER_H_*/