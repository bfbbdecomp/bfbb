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

struct zShrapnelInitTable
{
    char* name;
    void (*initCB)(zShrapnelAsset*, xModelInstance*, xVec3*, void(*)(zFrag*, zFragAsset*));
    U32 ID;
};

struct zShrapnelParentList
{
    U32 parentID;
    xModelInstance* parentModel;
};

struct zScene;

zFrag* zFrag_Alloc(zFragType type);
void zFrag_Free(zFrag* frag);
void zShrapnel_GameInit();
void zShrapnel_ProjectileSceneInit(zFragProjectileAsset* asset);
void zShrapnel_ParticleSceneInit(zFragParticleAsset* asset);
void zShrapnel_SetShrapnelAssetInitCB(zShrapnelAsset* sasset);
void zShrapnel_Update(F32 dt);
void zShrapnel_Reset();
void zShrapnel_Render();
void zShrapnel_CinematicInit(zShrapnelAsset* shrap, RpAtomic* cinModel, RwMatrixTag* animMat, xVec3* initVel, void(*cb)(zFrag*, zFragAsset*));
void zFragLoc_Setup(zFragLocation* loc, xModelInstance* parent);
void zFragLoc_InitDir(zFragLocation* loc, xVec3* vec, xModelInstance* parent);
void zFrag_DefaultInit(zFrag* frag, zFragAsset* fasset);
void zFrag_DefaultParticleUpdate(zFrag* frag, F32 param_2);
void zFrag_ParticleManager(F32 dt);
void zFrag_ProjectileCollData(zFrag* frag);
void zFrag_DeleteProjectile(zFrag* frag);
void zFrag_ProjectileManager(F32 dt);
void zFrag_DefaultLightningUpdate(zFrag* frag, F32 param_2);
void zFrag_LightningManager(F32 dt);
void zFrag_DefaultSoundUpdate(zFrag* frag, F32 param_2);
void zFrag_SoundManager(F32 dt);
void zFrag_ProjectileRenderer();

void zShrapnel_SceneInit(zScene*);
void zFragLoc_InitMat(zFragLocation*, xMat4x3*, xModelInstance*);
void zFragLoc_InitVec(zFragLocation*, xVec3*, xModelInstance*);
void zShrapnel_DefaultInit(zShrapnelAsset* shrap, xModelInstance* parent, xVec3* initVel, void(*cb)(zFrag*, zFragAsset*));
void zFrag_ProjectileSetupPath(zFrag* frag, zFragProjectileAsset* passet);
void zFrag_DefaultProjectileUpdate(zFrag* frag, F32 param_2);

#endif
