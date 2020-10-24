#ifndef ZSHRAPNEL_H
#define ZSHRAPNEL_H

#include "../Core/x/xModel.h"
#include "../Core/x/xParEmitter.h"
#include "../Core/x/xCurveAsset.h"
#include "../Core/x/xCollide.h"

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
    int32 index;
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
    uint32 id;
    uint32 parentID[2];
    float32 lifetime;
    float32 delay;
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
    uint32 parEmitterID;
    zParEmitter* parEmitter;
};

struct zFragParticle
{
    zFragParticleAsset* fasset;
};

struct zFragProjectileAsset : zFragAsset
{
    uint32 modelInfoID;
    RpAtomic* modelFile;
    zFragLocation launch;
    zFragLocation vel;
    float32 bounce;
    int32 maxBounces;
    uint32 flags;
    uint32 childID;
    zShrapnelAsset* child;
    float32 minScale;
    float32 maxScale;
    uint32 scaleCurveID;
    xCurveAsset* scaleCurve;
    float32 gravity;
};

struct zFragProjectile
{
    zFragProjectileAsset* fasset;
    xModelInstance* model;
    xParabola path;
    float32 angVel;
    float32 t;
    float32 tColl;
    int32 numBounces;
    float32 scale;
    float32 parentScale;
    float32 alpha;
    xVec3 N;
    xVec3 axis;
};

struct zFragLightningAsset : zFragAsset
{
    zFragLocation start;
    zFragLocation end;
    uint32 startParentID;
    uint32 endParentID;
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
    uint32 assetID;
    zFragLocation source;
    float32 volume;
    float32 innerRadius;
    float32 outerRadius;
};

struct zFragSound
{
    zFragSoundAsset* fasset;
    xVec3 location;
    uint32 soundID;
};

struct zFragShockwaveAsset : zFragAsset
{
    uint32 modelInfoID;
    float32 birthRadius;
    float32 deathRadius;
    float32 birthVelocity;
    float32 deathVelocity;
    float32 birthSpin;
    float32 deathSpin;
    float32 birthColor[4];
    float32 deathColor[4];
};

struct zFragShockwave
{
    zFragShockwaveAsset* fasset;
    float32 currSize;
    float32 currVelocity;
    float32 deltVelocity;
    float32 currSpin;
    float32 deltSpin;
    float32 currColor[4];
    float32 deltColor[4];
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
    float32 delay;
    float32 alivetime;
    float32 lifetime;
    void (*update)(zFrag*, float32);
    xModelInstance* parent[2];
    zFrag* prev;
    zFrag* next;
};

struct zShrapnelAsset
{
    int32 fassetCount;
    uint32 shrapnelID;
    void (*initCB)(zShrapnelAsset*, xModelInstance*, xVec3*, void (*)(zFrag*, zFragAsset*));
};

#endif