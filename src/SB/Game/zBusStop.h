#ifndef ZBUSSTOP_H
#define ZBUSSTOP_H

#include "xVec3.h"
#include "xBase.h"
#include "xDynAsset.h"

#include "zEnt.h"

struct busstop_asset : xDynAsset
{
    U32 marker;
    U32 character;
    U32 cameraID;
    U32 busID;
    F32 delay;
};

struct zBusStop : xBase
{
    // 0x10
    busstop_asset* basset;
    zEnt* bus;

    // 0x18
    xVec3 pos;

    // 0x24
    U32 currState;
    U32 prevState;
    F32 switchTimer;
};

extern U32 gBusStopIsRunning;

struct xScene;

S32 zBusStopEventCB(xBase*, xBase*, U32, const F32*, xBase*);
void zBusStop_Init(xBase& base, xDynAsset& asset, size_t);
void zBusStop_Init(zBusStop* bstop, busstop_asset* asset);
void zBusStop_Setup(zBusStop* bstop);
void zBusStop_Update(xBase* to, xScene*, F32 dt);

#endif
