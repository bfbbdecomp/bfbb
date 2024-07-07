#ifndef ZBUSSTOP_H
#define ZBUSSTOP_H

#include "xVec3.h"
#include "xBase.h"
#include "xDynAsset.h"

#include "zEnt.h"

struct busstop_asset : xDynAsset
{
    uint32 marker;
    uint32 character;
    uint32 cameraID;
    uint32 busID;
    float32 delay;
};

struct zBusStop : xBase
{
    // 0x10
    busstop_asset* basset;
    zEnt* bus;

    // 0x18
    xVec3 pos;

    // 0x24
    uint32 currState;
    uint32 prevState;
    float32 switchTimer;
};

extern uint32 gBusStopIsRunning;

struct xScene;

int32 zBusStopEventCB(xBase*, xBase*, uint32, const float32*, xBase*);
void zBusStop_Init(xBase& base, xDynAsset& asset, ulong32);
void zBusStop_Init(zBusStop* bstop, busstop_asset* asset);
void zBusStop_Setup(zBusStop* bstop);
void zBusStop_Update(xBase* to, xScene*, float32 dt);

#endif
