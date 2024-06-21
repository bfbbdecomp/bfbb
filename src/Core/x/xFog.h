#ifndef XFOG_H
#define XFOG_H

#include "xEnt.h"
#include "xBase.h"

#include <types.h>

struct xFogAsset : xBaseAsset
{
    uint8 bkgndColor[4];
    uint8 fogColor[4];
    float32 fogDensity;
    float32 fogStart;
    float32 fogStop;
    float32 transitionTime;
    uint8 fogType;
    uint8 padFog[3];
};

struct _xFog : xBase
{
    xFogAsset* tasset;
};

void xFogClearFog();
void xFogInit(void* b, void* tasset);
void xFogInit(xBase* ent, xFogAsset* tasset);
void xFogReset(_xFog* ent);
void xFogSave(_xFog* ent, xSerial* s);
void xFogLoad(_xFog* ent, xSerial* s);
int32 xFogEventCB(xBase* to, xBase* from, uint32 toEvent, const float32* toParam, xBase* b3);
void xFogUpdate(xBase* ent, xScene* sc, float32 dt);

#endif