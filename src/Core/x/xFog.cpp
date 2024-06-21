#include "xFog.h"
#include "xEvent.h"

#include "iCamera.h"

#include <types.h>

extern float32 lbl_803CCC50; // 0.0f.

void xFogClearFog()
{
    iCameraSetFogParams(0, lbl_803CCC50);
}

void xFogInit(void* b, void* tasset)
{
    xFogInit((xBase*)b, (xFogAsset*)tasset);
}

void xFogInit(xBase* ent, xFogAsset* tasset)
{
    xBaseInit(ent, (xBaseAsset*)tasset);
    ent->eventFunc = xFogEventCB;
    ((_xFog*)ent)->tasset = tasset;
    if (ent->linkCount != 0)
    {
        ent->link = (xLinkAsset*)(((_xFog*)ent)->tasset + 1);
    }
    else
    {
        ent->link = NULL;
    }
}

void xFogReset(_xFog* ent)
{
    xBaseReset((xBase*)ent, (xBaseAsset*)ent->tasset);
}

void xFogSave(_xFog* ent, xSerial* s)
{
    xBaseSave((xBase*)ent, s);
}

void xFogLoad(_xFog* ent, xSerial* s)
{
    xBaseLoad((xBase*)ent, s);
}

int32 xFogEventCB(xBase* to, xBase* from, uint32 toEvent, const float32* toParam, xBase* b3)
{
    switch (toEvent)
    {
    case eEventOn:
        iFogParams fog;
        fog.type = rwFOGTYPELINEAR;
        xFogAsset* fromFog = ((_xFog*)from)->tasset;
        fog.start = fromFog->fogStart;
        fog.stop = fromFog->fogStop;
        fog.density = fromFog->fogDensity;
        fog.fogcolor.red = fromFog->fogColor[0];
        fog.fogcolor.green = fromFog->fogColor[1];
        fog.fogcolor.blue = fromFog->fogColor[2];
        fog.fogcolor.alpha = fromFog->fogColor[3];
        fog.bgcolor.red = fromFog->bkgndColor[0];
        fog.bgcolor.green = fromFog->bkgndColor[1];
        fog.bgcolor.blue = fromFog->bkgndColor[2];
        fog.bgcolor.alpha = fromFog->bkgndColor[3];
        fog.table = NULL;
        iCameraSetFogParams(&fog, fromFog->transitionTime);
        break;
    case eEventOff:
        iCameraSetFogParams(NULL, lbl_803CCC50);
        break;
    case eEventReset:
        xFogReset((_xFog*)from);
        break;
    }
    return eEventEnable;
}

void xFogUpdate(xBase* ent, xScene* sc, float32 dt)
{
}