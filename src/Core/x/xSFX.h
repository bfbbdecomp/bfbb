#ifndef XSFX_H
#define XSFX_H

#include "xBase.h"
#include "xMath3.h"

#include "../p2/iColor.h"

struct xSFXAsset : xBaseAsset
{
    uint16 flagsSFX;
    uint16 freq;
    float32 freqm;
    uint32 soundAssetID;
    uint32 attachID;
    uint8 loopCount;
    uint8 priority;
    uint8 volume;
    uint8 pad;
    xVec3 pos;
    float32 innerRadius;
    float32 outerRadius;
};

struct xSFX : xBase
{
    xSFXAsset* asset;
    uint32 sndID;
    float32 cachedOuterDistSquared;
};

void xSFXInit(void* t, void* asset);
void xSFXSave(xSFX* ent, xSerial* s);
void xSFXLoad(xSFX* ent, xSerial* s);
void xSFXEnvironmentalStreamSceneExit();
void xSFXUpdateEnvironmentalStreamSounds(xSFX* pSFXList, uint32 numSounds);

#endif