#ifndef XSFX_H
#define XSFX_H

#include "xBase.h"
#include "xMath3.h"

#include "iColor.h"

struct xSFXAsset : xBaseAsset
{
    U16 flagsSFX;
    U16 freq;
    F32 freqm;
    U32 soundAssetID;
    U32 attachID;
    U8 loopCount;
    U8 priority;
    U8 volume;
    U8 pad;
    xVec3 pos;
    F32 innerRadius;
    F32 outerRadius;
};

struct xSFX : xBase
{
    xSFXAsset* asset;
    U32 sndID;
    F32 cachedOuterDistSquared;
};

void xSFXInit(void* t, void* asset);
void xSFXInit(xSFX* t, xSFXAsset* asset);
void xSFXSave(xSFX* ent, xSerial* s);
void xSFXLoad(xSFX* ent, xSerial* s);
void xSFXEnvironmentalStreamSceneExit();
void xSFXUpdateEnvironmentalStreamSounds(xSFX* pSFXList, U32 numSounds);
S32 xSFXEventCB(xBase* to, xBase* from, U32 toEvent, const F32* toParam, xBase*);
S32 xSFXWillSendDone(xSFX*);

#endif
