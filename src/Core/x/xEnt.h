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

struct xEntAsset : xBaseAsset
{
    uint8 flags;
    uint8 subtype;
    uint8 pflags;
    uint8 moreFlags;
    uint8 pad;
    uint32 surfaceID;
    xVec3 ang;
    xVec3 pos;
    xVec3 scale;
    float32 redMult;
    float32 greenMult;
    float32 blueMult;
    float32 seeThru;
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
    xMat4x3 oldmat;
    xVec3 oldvel;
    xRot oldrot;
    xRot drot;
    xRot rot;
    xVec3 dpos;
    xVec3 dvel;
    xVec3 vel;
    uint32 mode;
};

struct xEntCollis;
struct xShadowSimpleCache;
struct xEntShadow;

typedef void (*xEntUpdateCallback)(xEnt*, xScene*, float32);
typedef void (*xEntBoundUpdateCallback)(xEnt*, xVec3*);
typedef void (*xEntMoveCallback)(xEnt*, xScene*, float32, xEntFrame*);
typedef void (*xEntRenderCallback)(xEnt*);
typedef void (*xEntTranslateCallback)(xEnt*, xVec3*, xMat4x3*);

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
    uint8 pflags;
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
    xEntTranslateCallback transl;
    xFFX* ffx;
    xEnt* driver;
    int32 driveMode;
    xShadowSimpleCache* simpShadow;
    xEntShadow* entShadow;
    anim_coll_data* anim_coll;
    void* user_data;
};

struct xEntShadow
{
    xVec3 pos;
    xVec3 vec;
    RpAtomic* shadowModel;
    float32 dst_cast;
    float32 radius[2];
};

uint32 xEntIsVisible(const xEnt* ent);

#endif