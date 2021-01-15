#ifndef XCUTSCENEMGR_H
#define XCUTSCENEMGR_H

#include "xBase.h"
#include "xCutscene.h"

struct xCutsceneMgrAsset : xBaseAsset
{
    uint32 cutsceneAssetID;
    uint32 flags;
    float32 interpSpeed;
    float32 startTime[15];
    float32 endTime[15];
    uint32 emitID[15];
};

struct xCutsceneZbuffer
{
    float32 start;
    float32 end;
    float32 nearPlane;
    float32 farPlane;
};

struct xCutsceneZbufferHack
{
    int8* name;
    xCutsceneZbuffer times[4];
};

struct xCutsceneMgr : xBase
{
    xCutsceneMgrAsset* tasset;
    xCutscene* csn;
    uint32 stop;
    xCutsceneZbufferHack* zhack;
    float32 oldfov;
};

#endif