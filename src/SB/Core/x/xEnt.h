#ifndef XENT_H
#define XENT_H

#include <rwcore.h>
#include <rpworld.h>
#include <string.h>

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
    U8 flags;
    U8 subtype;
    U8 pflags;
    U8 moreFlags;
    U8 pad;
    //U8 padding[3]; // this padding is added automatically. it should not be here

    // Offset: 0x10
    U32 surfaceID;

    // Offset: 0x14
    xVec3 ang;

    // Offset: 0x20
    xVec3 pos;

    // Offset: 0x2C
    xVec3 scale;

    // Offset: 0x38
    F32 redMult;
    F32 greenMult;
    F32 blueMult;
    F32 seeThru;

    // Offset: 0x48
    F32 seeThruSpeed;
    U32 modelInfoID;
    U32 animListID;
};

struct xEnt;
struct xScene;

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
    U32 mode;
};

struct xEntCollis
{
    U8 chk;
    U8 pen;
    U8 env_sidx;
    U8 env_eidx;

    U8 npc_sidx;
    U8 npc_eidx;
    U8 dyn_sidx;
    U8 dyn_eidx;

    U8 stat_sidx;
    U8 stat_eidx;
    U8 idx;

    xCollis colls[18];
    void (*post)(xEnt*, xScene*, F32, xEntCollis*);
    U32 (*depenq)(xEnt*, xEnt*, xScene*, F32, xCollis*);
};

struct xShadowSimpleCache;
struct xEntShadow;

typedef void (*xEntUpdateCallback)(xEnt*, xScene*, F32);
typedef void (*xEntBoundUpdateCallback)(xEnt*, xVec3*);
typedef void (*xEntMoveCallback)(xEnt*, xScene*, F32, xEntFrame*);
typedef void (*xEntRenderCallback)(xEnt*);
typedef void (*xEntTranslateCallback)(xEnt*, xVec3*, xMat4x3*);

// Size: 0xD0
struct xEnt : xBase
{
    struct anim_coll_data
    {
        U32 flags;
        U32 bones;
        xMat4x3 old_mat;
        xMat4x3 new_mat;
        U32 verts_size;
        xVec3* verts;
        xVec3* normals;
    };

    // Offset: 0x10
    xEntAsset* asset;
    U16 idx; //0x14
    U16 num_updates;

    // Offset: 0x18
    U8 flags;
    U8 miscflags;
    U8 subType;

    // Offset: 0x1B
    U8 pflags; // p -> physics flags
    U8 moreFlags; //0x1c
    U8 isCulled;
    U8 driving_count;
    U8 num_ffx;

    // Offset: 0x20
    U8 collType; // XENT_COLLTYPE_* (defined below)
    U8 collLev;
    U8 chkby; // XENT_COLLTYPE_* bitmask
    U8 penby; // XENT_COLLTYPE_* bitmask

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
    xEntCollis* collis; //0x4c

    // Offset: 0x50
    xGridBound gridb;

    // Offset: 0x64
    xBound bound;

    // Offset: 0xB0
    xEntTranslateCallback transl; //0xb0
    xFFX* ffx; //0xb4
    xEnt* driver;
    S32 driveMode;

    // Offset: 0xC0
    xShadowSimpleCache* simpShadow;
    xEntShadow* entShadow;
    anim_coll_data* anim_coll;
    void* user_data; // 0xCC
};

// Ent flags (xEnt::flags)
#define k_XENT_IS_VISIBLE ((U8)(1 << 0))
#define k_XENT_IS_STACKED ((U8)(1 << 1))
#define k_XENT_0x10 ((U8)(1 << 4))
#define k_XENT_0x40 ((U8)(1 << 6))
#define k_XENT_0x80 ((U8)(1 << 7))

// Physics flags (xEnt::pflags)
#define k_XENT_IS_MOVING ((U8)(1 << 0))
#define k_XENT_HAS_VELOCITY ((U8)(1 << 1))
#define k_XENT_HAS_GRAVITY ((U8)(1 << 2))
#define k_XENT_HAS_DRAG ((U8)(1 << 3))
#define k_XENT_HAS_FRICTION ((U8)(1 << 4))

// More ent flags (xEnt::moreFlags)
#define k_MORE_FLAGS_0x8 ((U8)1 << 3)
#define k_MORE_FLAGS_HITTABLE ((U8)1 << 4)
#define k_MORE_FLAGS_ANIM_COLL ((U8)1 << 5)

// collision types
#define XENT_COLLTYPE_NONE 0x0
#define XENT_COLLTYPE_TRIG 0x1 // trigger (TRIG)
#define XENT_COLLTYPE_STAT 0x2 // static (SIMP)
#define XENT_COLLTYPE_DYN 0x4 // dynamic (PLAT)
#define XENT_COLLTYPE_NPC 0x8 // npc/enemy (VIL)
#define XENT_COLLTYPE_PLYR 0x10 // player (PLYR)

// Size: 0x40
struct xEntShadow
{
    enum radius_enum
    {
        RADIUS_CACHE,
        RADIUS_RASTER,
        MAX_RADIUS
    };

    xVec3 pos;
    xVec3 vec;
    RpAtomic* shadowModel;
    F32 dst_cast;
    F32 radius[2];
};

extern S32 xent_entent;

xMat4x3* xEntGetFrame(const xEnt* ent);
void xEntEnable(xEnt* ent);
xVec3* xEntGetCenter(const xEnt* ent);
xVec3* xEntGetPos(const xEnt* ent);
U32 xEntIsVisible(const xEnt* ent);
void xEntHide(xEnt* ent);
void xEntShow(xEnt* ent);
void xEntInitShadow(xEnt& ent, xEntShadow& shadow);
void xEntReposition(xEnt& ent, const xMat4x3& mat);
bool xEntValidType(U8 type);
void xEntAnimateCollision(xEnt& ent, bool on);
xBox* xEntGetAllEntsBox();
void xEntSetNostepNormAngle(F32 angle);
void xEntCollideWalls(xEnt* p, xScene* sc, F32 dt);
void xEntCollideCeiling(xEnt* p, xScene* sc, F32 dt);
void xEntCollideFloor(xEnt* p, xScene* sc, F32 dt);
xEnt* xEntCollCheckOneEntNoDepen(xEnt* ent, xScene* sc, void* data);
void xEntCollCheckNPCs(xEnt* p, xScene* sc, xEnt* (*hitIt)(xEnt*, xScene*, void*));
void xEntCollCheckDyns(xEnt* p, xScene* sc, xEnt* (*hitIt)(xEnt*, xScene*, void*));
void xEntCollCheckStats(xEnt* p, xScene* sc, xEnt* (*hitIt)(xEnt*, xScene*, void*));
void xEntCollCheckNPCsByGrid(xEnt* p, xScene* sc, xEnt* (*hitIt)(xEnt*, xScene*, void*));
void xEntCollCheckByGrid(xEnt* p, xScene* sc, xEnt* (*hitIt)(xEnt*, xScene*, void*));
void xEntCollCheckEnv(xEnt* p, xScene* sc);
void xEntEndCollide(xEnt* ent, xScene* sc, F32 dt);
void xEntBeginCollide(xEnt* ent, xScene* sc, F32 dt);
void xEntCollide(xEnt* ent, xScene* sc, F32 dt);
void xEntApplyPhysics(xEnt* ent, xScene* sc, F32 dt);
void xEntMove(xEnt* ent, xScene* sc, F32 dt);
void xEntMotionToMatrix(xEnt* ent, xEntFrame* frame);
void xEntDefaultTranslate(xEnt* ent, xVec3* dpos, xMat4x3* dmat);
void xEntDefaultBoundUpdate(xEnt* ent, xVec3* pos);
void xEntEndUpdate(xEnt* ent, xScene* sc, F32 dt);
void xEntBeginUpdate(xEnt* ent, xScene* sc, F32 dt);
void xEntUpdate(xEnt* ent, xScene* sc, F32 dt);
void xEntRender(xEnt* ent);
void xEntRestorePipeline(xSurface*, RpAtomic* model);
void xEntRestorePipeline(xModelInstance* model);
void xEntSetupPipeline(xSurface* surf, RpAtomic* model);
void xEntSetupPipeline(xModelInstance* model);
void xEntAddToPos(xEnt* ent, const xVec3* v);
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
void xEntSetTimePassed(F32 sec);

inline void xEntHide(xEnt* ent)
{
    ent->flags &= ~0x1;
}

inline void xEntShow(xEnt* ent)
{
    ent->flags |= 0x1;
}

inline xVec3* xEntGetPos(const xEnt* ent)
{
    return &xModelGetFrame(ent->model)->pos;
}

inline xVec3* xEntGetCenter(const xEnt* ent)
{
    return (xVec3*)xBoundCenter(&ent->bound);
}

#endif
