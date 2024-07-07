#ifndef XCUTSCENEMGR_H
#define XCUTSCENEMGR_H

#include "xBase.h"
#include "xCutscene.h"

struct xCutsceneMgrAsset : xBaseAsset
{
    U32 cutsceneAssetID;
    U32 flags;
    F32 interpSpeed;
    F32 startTime[15];
    F32 endTime[15];
    U32 emitID[15];
};

struct xCutsceneZbuffer
{
    F32 start;
    F32 end;
    F32 nearPlane;
    F32 farPlane;
};

struct xCutsceneZbufferHack
{
    char* name;
    xCutsceneZbuffer times[4];
};

struct xCutsceneMgr : xBase
{
    xCutsceneMgrAsset* tasset;
    xCutscene* csn; // 0x14
    U32 stop; // 0x18
    xCutsceneZbufferHack* zhack;
    F32 oldfov;
};

#endif
