#ifndef ZSHRAPNEL_H
#define ZSHRAPNEL_H

#include "xModel.h"
#include "xParEmitter.h"
#include "xCurveAsset.h"
#include "xCollide.h"

#include "zParEmitter.h"
#include "zLightning.h"

#include <rwcore.h>
#include <rpworld.h>

typedef struct zFrag;
typedef struct zShrapnelAsset;

enum zFragLocType
{
    eFragLocBone,
    eFragLocBoneUpdated,
    eFragLocBoneLocal,
    eFragLocBoneLocalUpdated,
    eFragLocTag,
    eFragLocTagUpdated,
    eFragLocCount,
    eFragLocForceSize = 0x7fffffff
};

struct zFragBone
{
    S32 index;
    xVec3 offset;
};

struct zFragLocInfo
{
    union
    {
        zFragBone bone;
        xModelTag tag;
    };
};

struct zFragLocation
{
    zFragLocType type;
    zFragLocInfo info;
};

enum zFragType
{
    eFragInactive,
    eFragGroup,
    eFragShrapnel,
    eFragParticle,
    eFragProjectile,
    eFragLightning,
    eFragSound,
    eFragShockwave,
    eFragCount,
    eFragForceSize = 0x7fffffff
};

struct zFragAsset
{
    zFragType type;
    U32 id;
    U32 parentID[2];
    F32 lifetime;
    F32 delay;
};

struct zFragGroup
{
    zFrag* list[21];
};

struct zFragParticleAsset : zFragAsset
{
    zFragLocation source;
    zFragLocation vel;
    xParEmitterCustomSettings emit;
    U32 parEmitterID;
    zParEmitter* parEmitter;
};

struct zFragParticle
{
    zFragParticleAsset* fasset;
};

struct zFragProjectileAsset : zFragAsset
{
    U32 modelInfoID;
    RpAtomic* modelFile;
    zFragLocation launch;
    zFragLocation vel;
    F32 bounce;
    S32 maxBounces;
    U32 flags;
    U32 childID;
    zShrapnelAsset* child;
    F32 minScale;
    F32 maxScale;
    U32 scaleCurveID;
    xCurveAsset* scaleCurve;
    F32 gravity;
};

struct zFragProjectile
{
    zFragProjectileAsset* fasset;
    xModelInstance* model;
    xParabola path;
    F32 angVel;
    F32 t;
    F32 tColl;
    S32 numBounces;
    F32 scale;
    F32 parentScale;
    F32 alpha;
    xVec3 N;
    xVec3 axis;
};

struct zFragLightningAsset : zFragAsset
{
    zFragLocation start;
    zFragLocation end;
    U32 startParentID;
    U32 endParentID;
};

struct zFragLightning
{
    zFragLightningAsset* fasset;
    xModelInstance* startParent;
    xModelInstance* endParent;
    zLightning* lightning;
};

struct zFragSoundAsset : zFragAsset
{
    U32 assetID;
    zFragLocation source;
    F32 volume;
    F32 innerRadius;
    F32 outerRadius;
};

struct zFragSound
{
    zFragSoundAsset* fasset;
    xVec3 location;
    U32 soundID;
};

struct zFragShockwaveAsset : zFragAsset
{
    U32 modelInfoID;
    F32 birthRadius;
    F32 deathRadius;
    F32 birthVelocity;
    F32 deathVelocity;
    F32 birthSpin;
    F32 deathSpin;
    F32 birthColor[4];
    F32 deathColor[4];
};

struct zFragShockwave
{
    zFragShockwaveAsset* fasset;
    F32 currSize;
    F32 currVelocity;
    F32 deltVelocity;
    F32 currSpin;
    F32 deltSpin;
    F32 currColor[4];
    F32 deltColor[4];
};

struct zFragInfo
{
    union
    {
        zFragGroup group;
        zFragParticle particle;
        zFragProjectile projectile;
        zFragLightning lightning;
        zFragSound sound;
        zFragShockwave shockwave;
    };
};

struct zFrag
{
    zFragType type;
    zFragInfo info;
    F32 delay;
    F32 alivetime;
    F32 lifetime;
    void (*update)(zFrag*, F32);
    xModelInstance* parent[2];
    zFrag* prev;
    zFrag* next;
};

struct zShrapnelAsset
{
    S32 fassetCount;
    U32 shrapnelID;
    void (*initCB)(zShrapnelAsset*, xModelInstance*, xVec3*, void (*)(zFrag*, zFragAsset*));
};

struct zScene;

void zShrapnel_GameInit();
void zShrapnel_SceneInit(zScene*);
void zShrapnel_Update(F32 dt);
void zShrapnel_Reset();
void zShrapnel_Render();

#endif
