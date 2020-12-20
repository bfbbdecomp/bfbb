#ifndef XENT_H
#define XENT_H

#include <rwcore.h>
#include <rpworld.h>

#include "xBase.h"
#include "xMath3.h"
#include "xModel.h"
#include "xLightKit.h"
#include "xGrid.h"
#include "xBound.h"
#include "xFFX.h"
#include "xCollide.h"

struct xEntAsset : xBaseAsset
{
    // Offset: 0x8
    uint8 flags;
    uint8 subtype;
    uint8 pflags;
    uint8 moreFlags;
    uint8 pad;
    uint8 padding[3];

    // Offset: 0x10
    uint32 surfaceID;

    // Offset: 0x14
    xVec3 ang;

    // Offset: 0x20
    xVec3 pos;

    // Offset: 0x2C
    xVec3 scale;

    // Offset: 0x38
    float32 redMult;
    float32 greenMult;
    float32 blueMult;
    float32 seeThru;

    // Offset: 0x48
    float32 seeThruSpeed;
    uint32 modelInfoID;
    uint32 animListID;
};

struct xEnt;
struct xScene;

struct xRot
{
    xVec3 axis;
    float32 angle;
};

struct xEntFrame
{
    xMat4x3 mat;

    // Offset: 0x40
    xMat4x3 oldmat;

    // Offset: 0x80
    xVec3 oldvel;

    // Offset: 0x8C
    xRot oldrot;

    // Offset: 0x9C
    xRot drot;
    xRot rot;

    // Offset: 0xBC
    xVec3 dpos;

    // Offset: 0xC8
    xVec3 dvel;

    // Offset: 0xD4
    xVec3 vel;

    // Offset: 0xE0
    uint32 mode;
};

struct xEntCollis
{
    uint8 chk;
    uint8 pen;
    uint8 env_sidx;
    uint8 env_eidx;
    uint8 npc_sidx;
    uint8 npc_eidx;
    uint8 dyn_sidx;
    uint8 dyn_eidx;
    uint8 stat_sidx;
    uint8 stat_eidx;
    uint8 idx;
    xCollis colls[18];
    void (*post)(xEnt*, xScene*, float32, xEntCollis*);
    uint32 (*depenq)(xEnt*, xEnt*, xScene*, float32, xCollis*);
};

struct xShadowSimpleCache;
struct xEntShadow;

typedef void (*xEntUpdateCallback)(xEnt*, xScene*, float32);
typedef void (*xEntBoundUpdateCallback)(xEnt*, xVec3*);
typedef void (*xEntMoveCallback)(xEnt*, xScene*, float32, xEntFrame*);
typedef void (*xEntRenderCallback)(xEnt*);
typedef void (*xEntTranslateCallback)(xEnt*, xVec3*, xMat4x3*);

// Size: 0xD0
struct xEnt : xBase
{
    struct anim_coll_data
    {
        uint32 flags;
        uint32 bones;
        xMat4x3 old_mat;
        xMat4x3 new_mat;
        uint32 verts_size;
        xVec3* verts;
        xVec3* normals;
    };

    // Offset: 0x10
    xEntAsset* asset;
    uint16 idx;
    uint16 num_updates;

    // Offset: 0x18
    uint8 flags;
    uint8 miscflags;
    uint8 subType;

    // Offset: 0x1B
    uint8 pflags; // p -> physics flags
    uint8 moreFlags;
    uint8 isCulled;
    uint8 driving_count;
    uint8 num_ffx;

    // Offset: 0x20
    uint8 collType;
    uint8 collLev;
    uint8 chkby;
    uint8 penby;

    // Offset: 0x24
    xModelInstance* model;
    xModelInstance* collModel;
    xModelInstance* camcollModel;
    xLightKit* lightKit;

    // Offset: 0x34
    xEntUpdateCallback update;
    xEntUpdateCallback endUpdate;
    xEntBoundUpdateCallback bupdate;
    xEntMoveCallback move;

    // Offset: 0x44
    xEntRenderCallback render;
    xEntFrame* frame;
    xEntCollis* collis;

    // Offset: 0x50
    xGridBound gridb;

    // Offset: 0x64
    xBound bound;

    // Offset: 0xB0
    xEntTranslateCallback transl;
    xFFX* ffx;
    xEnt* driver;
    int32 driveMode;

    // Offset: 0xC0
    xShadowSimpleCache* simpShadow;
    xEntShadow* entShadow;
    anim_coll_data* anim_coll;
    void* user_data;
};

// Size: 0x40
struct xEntShadow
{
    xVec3 pos;
    xVec3 vec;
    RpAtomic* shadowModel;
    float32 dst_cast;
    float32 radius[2];
};

uint32 xEntIsVisible(const xEnt* ent);
void xEntInitShadow(xEnt& ent, xEntShadow& shadow);
void xEntReposition(xEnt& ent, xMat4x3& mat);
uint8 xEntValidType(uint8 type);
void xEntAnimateCollision(xEnt& ent, uint8 on);
xBox* xEntGetAllEntsBox();
void xEntSetNostepNormAngle(float32 angle);
void xEntCollideWalls(xEnt* p, xScene* sc, float32 dt);
void xEntCollideCeiling(xEnt* p, xScene* sc, float32 dt);
void xEntCollideFloor(xEnt* p, xScene* sc, float32 dt);
xEnt* xEntCollCheckOneEntNoDepen(xEnt* ent, void* data);
void xEntCollCheckNPCs(xEnt* p, xScene* sc, xEnt* (*hitIt)(xEnt*, xScene*, void*));
void xEntCollCheckDyns(xEnt* p, xScene* sc, xEnt* (*hitIt)(xEnt*, xScene*, void*));
void xEntCollCheckStats(xEnt* p, xScene* sc, xEnt* (*hitIt)(xEnt*, xScene*, void*));
void xEntCollCheckNPCsByGrid(xEnt* p, xScene* sc, xEnt* (*hitIt)(xEnt*, xScene*, void*));
void xEntCollCheckByGrid(xEnt* p, xScene* sc, xEnt* (*hitIt)(xEnt*, xScene*, void*));
void xEntCollCheckEnv(xEnt* p, xScene* sc);
void xEntEndCollide(xEnt* ent, xScene* sc, float32 dt);
void xEntBeginCollide(xEnt* ent);
void xEntCollide(xEnt* ent, xScene* sc, float32 dt);
void xEntApplyPhysics(xEnt* ent, xScene* sc, float32 dt);
void xEntMove(xEnt* ent, xScene* sc, float32 dt);
void xEntMotionToMatrix(xEnt* ent, xEntFrame* frame);
void xEntDefaultTranslate(xEnt* ent, xVec3* dpos, xMat4x3* dmat);
void xEntDefaultBoundUpdate(xEnt* ent, xVec3* pos);
void xEntEndUpdate(xEnt* ent, xScene* sc, float32 dt);
void xEntBeginUpdate(xEnt* ent, xScene* sc, float32 dt);
void xEntUpdate(xEnt* ent, xScene* sc, float32 dt);
void xEntRender(xEnt* ent);
void xEntRestorePipeline(RpAtomic* model);
void xEntRestorePipeline(xModelInstance* model);
void xEntSetupPipeline(xSurface* surf, RpAtomic* model);
void xEntSetupPipeline(xModelInstance* model);
xModelInstance* xEntLoadModel(xEnt* ent, RpAtomic* imodel);
void xEntReset(xEnt* ent);
void xEntLoad(xEnt* ent, xSerial* s);
void xEntSave(xEnt* ent, xSerial* s);
void xEntSetup(xEnt* ent);
void xEntInitForType(xEnt* ent);
void xEntInit(xEnt* ent, xEntAsset* asset);
void xEntAddHittableFlag(xEnt* ent);
void xEntSceneExit();
void xEntSceneInit();
void xEntSetTimePassed(float32 sec);
xVec3* xEntGetPos(const xEnt* ent);

#endif