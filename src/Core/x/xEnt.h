#ifndef XENT_H
#define XENT_H

#include "xBase.h"
#include "xMath3.h"
#include "xModel.h"
#include "xLightKit.h"
#include "xGrid.h"
#include "xBound.h"
#include "xFFX.h"

#include <rwcore.h>

struct xEntAsset : xBaseAsset
{
    unsigned char flags;
    unsigned char subtype;
    unsigned char pflags;
    unsigned char moreFlags;
    unsigned char pad;
    unsigned int surfaceID;
    xVec3 ang;
    xVec3 pos;
    xVec3 scale;
    float redMult;
    float greenMult;
    float blueMult;
    float seeThru;
    float seeThruSpeed;
    unsigned int modelInfoID;
    unsigned int animListID;
};

struct xEnt;
struct xScene;
struct xEntFrame;
struct xEntCollis;
struct xShadowSimpleCache;
struct xEntShadow;

typedef void (*xEntUpdateCallback)(xEnt*, xScene*, float);
typedef void (*xEntBoundUpdateCallback)(xEnt*, xVec3*);
typedef void (*xEntMoveCallback)(xEnt*, xScene*, float, xEntFrame*);
typedef void (*xEntRenderCallback)(xEnt*);
typedef void (*xEntTranslateCallback)(xEnt*, xVec3*, xMat4x3*);

struct xEnt : xBase
{
    struct anim_coll_data
    {
        unsigned int flags;
        unsigned int bones;
        xMat4x3 old_mat;
        xMat4x3 new_mat;
        unsigned int verts_size;
        xVec3* verts;
        xVec3* normals;
    };

    xEntAsset* asset;
    unsigned short idx;
    unsigned short num_updates;
    unsigned char flags;
    unsigned char miscflags;
    unsigned char subType;
    unsigned char pflags;
    unsigned char moreFlags;
    unsigned char isCulled;
    unsigned char driving_count;
    unsigned char num_ffx;
    unsigned char collType;
    unsigned char collLev;
    unsigned char chkby;
    unsigned char penby;
    xModelInstance* model;
    xModelInstance* collModel;
    xModelInstance* camcollModel;
    xLightKit* lightKit;
    xEntUpdateCallback update;
    xEntUpdateCallback endUpdate;
    xEntBoundUpdateCallback bupdate;
    xEntMoveCallback move;
    xEntRenderCallback render;
    xEntFrame* frame;
    xEntCollis* collis;
    xGridBound gridb;
    xBound bound;
    xEntTranslateCallback transl;
    xFFX* ffx;
    xEnt* driver;
    int driveMode;
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
    float dst_cast;
    float radius[2];
};

#endif