#ifndef XENTBOULDER_H
#define XENTBOULDER_H

#include "xEnt.h"
#include "xDynAsset.h"
#include "xShadowSimple.h"

struct xEntBoulderAsset
{
    float32 gravity;
    float32 mass;
    float32 bounce;
    float32 friction;
    float32 statFric;
    float32 maxVel;
    float32 maxAngVel;
    float32 stickiness;
    float32 bounceDamp;
    uint32 flags;
    float32 killtimer;
    uint32 hitpoints;
    uint32 soundID;
    float32 volume;
    float32 minSoundVel;
    float32 maxSoundVel;
    float32 innerRadius;
    float32 outerRadius;
};

struct xEntBoulder : xEnt
{
    xEntBoulderAsset* basset;
    xShadowSimpleCache simpShadow_embedded;
    xEntShadow entShadow_embedded;
    xVec3 localCenter;
    xVec3 vel;
    xVec3 rotVec;
    xVec3 force;
    xVec3 instForce;
    float32 angVel;
    float32 timeToLive;
    int32 hitpoints;
    float32 lastRolling;
    uint32 rollingID;
    uint8 collis_chk;
    uint8 collis_pen;
    uint8 pad1[2];
};

struct xBoulderGeneratorAsset : xDynAsset
{
    uint32 object;
    xVec3 offset;
    float32 offsetRand;
    xVec3 initvel;
    float32 velAngleRand;
    float32 velMagRand;
    xVec3 initaxis;
    float32 angvel;
};

struct xBoulderGenerator : xBase
{
    xBoulderGeneratorAsset* bgasset;
    int32 numBoulders;
    int32 nextBoulder;
    xEntBoulder** boulderList;
    int32* boulderAges;
    uint32 isMarker;
    void* objectPtr;
    float32 lengthOfInitVel;
    xVec3 perp1;
    xVec3 perp2;
};

void xEntBoulder_Init(void* ent, void* asset);
void xBoulderGenerator_Init(xBase& data, xDynAsset& asset, ulong32);
void xEntBoulder_BubbleBowl(float32 multiplier);

#endif