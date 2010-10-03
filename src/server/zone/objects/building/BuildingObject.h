/*
 *	server/zone/objects/building/BuildingObject.h generated by engine3 IDL compiler 0.60
 */

#ifndef BUILDINGOBJECT_H_
#define BUILDINGOBJECT_H_

#include "engine/orb/DistributedObjectBroker.h"

#include "engine/core/ManagedReference.h"

#include "engine/core/ManagedWeakReference.h"

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
namespace player {

class PlayerCreature;

} // namespace player
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::player;

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace sign {

class SignObject;

} // namespace sign
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::sign;

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace terminal {
namespace structure {

class StructureTerminal;

} // namespace structure
} // namespace terminal
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::terminal::structure;

namespace server {
namespace zone {

class ZoneServer;

} // namespace zone
} // namespace server

using namespace server::zone;

namespace server {
namespace zone {

class Zone;

} // namespace zone
} // namespace server

using namespace server::zone;

namespace server {
namespace zone {
namespace templates {

class SharedObjectTemplate;

} // namespace templates
} // namespace zone
} // namespace server

using namespace server::zone::templates;

#include "server/zone/objects/cell/CellObject.h"

#include "server/zone/objects/structure/StructureObject.h"

#include "engine/lua/LuaObject.h"

#include "engine/util/QuadTree.h"

#include "engine/util/QuadTreeEntry.h"

#include "system/util/SortedVector.h"

#include "system/util/Vector.h"

#include "engine/util/Vector3.h"

namespace server {
namespace zone {
namespace objects {
namespace building {

class BuildingObject : public StructureObject {
public:
	BuildingObject();

	void createCellObjects();

	void destroyObjectFromDatabase(bool destroyContainedObjects = false);

	void loadTemplateData(SharedObjectTemplate* templateData);

	void initializeTransientMembers();

	void sendContainerObjectsTo(SceneObject* player);

	void updateCellPermissionsTo(SceneObject* player);

	int notifyStructurePlaced(PlayerCreature* player);

	Vector3 getEjectionPoint();

	void removeFromZone();

	void notifyInsert(QuadTreeEntry* obj);

	void notifyDissapear(QuadTreeEntry* obj);

	void notifyInsertToZone(SceneObject* object);

	void insert(QuadTreeEntry* obj);

	void remove(QuadTreeEntry* obj);

	void update(QuadTreeEntry* obj);

	void inRange(QuadTreeEntry* obj, float range);

	void sendTo(SceneObject* player, bool doClose);

	void sendBaselinesTo(SceneObject* player);

	void sendDestroyTo(SceneObject* player);

	void addCell(CellObject* cell);

	bool isStaticBuilding();

	CellObject* getCell(int idx);

	int getTotalCellNumber();

	void setStaticBuilding(bool value);

	void onEnter(PlayerCreature* player);

	void onExit(PlayerCreature* player);

	bool isBuildingObject();

	bool isMedicalBuildingObject();

	void setSignObject(SignObject* sign);

	SignObject* getSignObject();

	bool isCityHallBuilding();

	bool isDeclaredResidency();

	void setDeclaredResidency(bool value);

	void setAccessFee(int fee);

	int getAccessFee();

	DistributedObjectServant* _getImplementation();

	void _setImplementation(DistributedObjectServant* servant);

protected:
	BuildingObject(DummyConstructorParameter* param);

	virtual ~BuildingObject();

	friend class BuildingObjectHelper;
};

} // namespace building
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::building;

namespace server {
namespace zone {
namespace objects {
namespace building {

class BuildingObjectImplementation : public StructureObjectImplementation, public QuadTree {
protected:
	Vector<ManagedReference<CellObject* > > cells;

	ManagedReference<StructureTerminal* > structureTerminal;

	int totalCellNumber;

	ManagedReference<SignObject* > signObject;

	unsigned long long deedObjectID;

	int accessFee;

	bool declaredResidency;

public:
	BuildingObjectImplementation();

	BuildingObjectImplementation(DummyConstructorParameter* param);

	void createCellObjects();

	void destroyObjectFromDatabase(bool destroyContainedObjects = false);

	void loadTemplateData(SharedObjectTemplate* templateData);

	void initializeTransientMembers();

	void sendContainerObjectsTo(SceneObject* player);

	void updateCellPermissionsTo(SceneObject* player);

	virtual int notifyStructurePlaced(PlayerCreature* player);

	Vector3 getEjectionPoint();

	void removeFromZone();

	void notifyInsert(QuadTreeEntry* obj);

	void notifyDissapear(QuadTreeEntry* obj);

	void notifyInsertToZone(SceneObject* object);

	void insert(QuadTreeEntry* obj);

	void remove(QuadTreeEntry* obj);

	void update(QuadTreeEntry* obj);

	void inRange(QuadTreeEntry* obj, float range);

	void sendTo(SceneObject* player, bool doClose);

	void sendBaselinesTo(SceneObject* player);

	void sendDestroyTo(SceneObject* player);

	void addCell(CellObject* cell);

	bool isStaticBuilding();

	CellObject* getCell(int idx);

	int getTotalCellNumber();

	void setStaticBuilding(bool value);

	virtual void onEnter(PlayerCreature* player);

	virtual void onExit(PlayerCreature* player);

	bool isBuildingObject();

	virtual bool isMedicalBuildingObject();

	void setSignObject(SignObject* sign);

	SignObject* getSignObject();

	virtual bool isCityHallBuilding();

	bool isDeclaredResidency();

	void setDeclaredResidency(bool value);

	void setAccessFee(int fee);

	int getAccessFee();

	BuildingObject* _this;

	operator const BuildingObject*();

	DistributedObjectStub* _getStub();
protected:
	virtual ~BuildingObjectImplementation();

	TransactionalObject* clone();

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

	friend class BuildingObject;
	friend class TransactionalObjectHandle<BuildingObjectImplementation*>;
};

class BuildingObjectAdapter : public StructureObjectAdapter {
public:
	BuildingObjectAdapter(BuildingObjectImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void createCellObjects();

	void destroyObjectFromDatabase(bool destroyContainedObjects);

	void initializeTransientMembers();

	void sendContainerObjectsTo(SceneObject* player);

	void updateCellPermissionsTo(SceneObject* player);

	int notifyStructurePlaced(PlayerCreature* player);

	void removeFromZone();

	void notifyInsertToZone(SceneObject* object);

	void sendTo(SceneObject* player, bool doClose);

	void sendBaselinesTo(SceneObject* player);

	void sendDestroyTo(SceneObject* player);

	void addCell(CellObject* cell);

	bool isStaticBuilding();

	CellObject* getCell(int idx);

	int getTotalCellNumber();

	void setStaticBuilding(bool value);

	void onEnter(PlayerCreature* player);

	void onExit(PlayerCreature* player);

	bool isBuildingObject();

	bool isMedicalBuildingObject();

	void setSignObject(SignObject* sign);

	SignObject* getSignObject();

	bool isCityHallBuilding();

	bool isDeclaredResidency();

	void setDeclaredResidency(bool value);

	void setAccessFee(int fee);

	int getAccessFee();

};

class BuildingObjectHelper : public DistributedObjectClassHelper, public Singleton<BuildingObjectHelper> {
	static BuildingObjectHelper* staticInitializer;

public:
	BuildingObjectHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<BuildingObjectHelper>;
};

} // namespace building
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::building;

#endif /*BUILDINGOBJECT_H_*/
