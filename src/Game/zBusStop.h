#ifndef ZBUSSTOP_H
#define ZBUSSTOP_H

#include "../Core/x/xVec3.h"
#include "../Core/x/xBase.h"
#include "../Core/x/xDynAsset.h"

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

void zBusStop_Init(zBusStop* bstop, busstop_asset* asset);
void zBusStop_Init(xBase& base, xDynAsset& asset, unsigned long);

#endif