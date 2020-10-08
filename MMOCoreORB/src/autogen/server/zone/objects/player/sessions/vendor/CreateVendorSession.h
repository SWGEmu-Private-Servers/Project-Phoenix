/*
 *	autogen/server/zone/objects/player/sessions/vendor/CreateVendorSession.h generated by engine3 IDL compiler 0.60
 */

#ifndef CREATEVENDORSESSION_H_
#define CREATEVENDORSESSION_H_

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
namespace tangible {

class TangibleObject;

} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible;

#include "engine/core/ManagedObject.h"

#include "server/zone/objects/scene/SessionFacadeType.h"

#include "server/zone/objects/player/sui/listbox/SuiListBox.h"

#include "server/zone/objects/player/sui/inputbox/SuiInputBox.h"

#include "server/zone/managers/vendor/VendorSelectionNode.h"

#include "templates/creature/VendorCreatureTemplate.h"

#include "engine/log/Logger.h"

#include "engine/core/ManagedReference.h"

#include "engine/util/Facade.h"

#include "system/lang/ref/Reference.h"

namespace server {
namespace zone {
namespace objects {
namespace player {
namespace sessions {
namespace vendor {

class CreateVendorSession : public Facade {
public:
	CreateVendorSession(CreatureObject* play);

	int initializeSession();

	int cancelSession();

	int clearSession();

	void handleVendorSelection(byte menuID);

	void createVendor(String& name);

	void randomizeVendorLooks(CreatureObject* vendor);

	DistributedObjectServant* _getImplementation();
	DistributedObjectServant* _getImplementationForRead() const;

	void _setImplementation(DistributedObjectServant* servant);

protected:
	CreateVendorSession(DummyConstructorParameter* param);

	virtual ~CreateVendorSession();

	friend class CreateVendorSessionHelper;
};

} // namespace vendor
} // namespace sessions
} // namespace player
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::player::sessions::vendor;

namespace server {
namespace zone {
namespace objects {
namespace player {
namespace sessions {
namespace vendor {

class CreateVendorSessionImplementation : public FacadeImplementation {
protected:
	ManagedWeakReference<CreatureObject* > player;

private:
	Reference<VendorSelectionNode* > currentNode;

protected:
	ManagedReference<SuiListBox* > suiSelectVendor;

	ManagedReference<SuiInputBox* > suiNameVendor;

private:
	String templatePath;

public:
	CreateVendorSessionImplementation(CreatureObject* play);

	CreateVendorSessionImplementation(DummyConstructorParameter* param);

	int initializeSession();

	int cancelSession();

	int clearSession();

	void handleVendorSelection(byte menuID);

	void createVendor(String& name);

	void randomizeVendorLooks(CreatureObject* vendor);

private:
	void randomizeVendorClothing(CreatureObject* vendor, VendorCreatureTemplate* vendorTempl);

	void randomizeVendorHair(CreatureObject* vendor, VendorCreatureTemplate* vendorTempl);

	void randomizeVendorFeatures(CreatureObject* vendor, VendorCreatureTemplate* vendorTempl);

	void randomizeVendorHeight(CreatureObject* vendor, VendorCreatureTemplate* vendorTempl);

public:
	WeakReference<CreateVendorSession*> _this;

	operator const CreateVendorSession*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~CreateVendorSessionImplementation();

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

	friend class CreateVendorSession;
};

class CreateVendorSessionAdapter : public FacadeAdapter {
public:
	CreateVendorSessionAdapter(CreateVendorSession* impl);

	void invokeMethod(sys::uint32 methid, DistributedMethod* method);

	int initializeSession();

	int cancelSession();

	int clearSession();

	void handleVendorSelection(byte menuID);

	void createVendor(String& name);

	void randomizeVendorLooks(CreatureObject* vendor);

};

class CreateVendorSessionHelper : public DistributedObjectClassHelper, public Singleton<CreateVendorSessionHelper> {
	static CreateVendorSessionHelper* staticInitializer;

public:
	CreateVendorSessionHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<CreateVendorSessionHelper>;
};

} // namespace vendor
} // namespace sessions
} // namespace player
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::player::sessions::vendor;

#endif /*CREATEVENDORSESSION_H_*/
