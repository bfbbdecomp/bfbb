#ifndef ZCAMERATWEAK_H
#define ZCAMERATWEAK_H

#include "xDynAsset.h"

#include <stddef.h>

struct CameraTweak_asset : xDynAsset
{
    S32 priority;
    F32 time;
    F32 pitch_adjust;
    F32 dist_adjust;
};

struct zCameraTweak : xBase
{
    CameraTweak_asset* casset;
};

struct zCamTweak
{
    U32 owner;
    F32 priority;
    F32 time;
    F32 pitch;
    F32 distMult;
};

struct zCamTweakLook
{
    F32 h;
    F32 dist;
    F32 pitch;
};

void zCameraTweakGlobal_Init();
void zCameraTweakGlobal_Add(U32 owner, F32 priority, F32 time, F32 pitch, F32 distMult);
void zCameraTweakGlobal_Remove(U32 owner);
void zCameraTweakGlobal_Reset();
void zCameraTweakGlobal_Update(F32 dt);
F32 zCameraTweakGlobal_GetD();
F32 zCameraTweakGlobal_GetH();
F32 zCameraTweakGlobal_GetPitch();
void zCameraTweakGlobal_Update(F32 dt);
void zCameraTweakGlobal_Reset();
void zCameraTweak_Init(xBase& data, xDynAsset& asset, size_t);
void zCameraTweak_Init(zCameraTweak* tweak, CameraTweak_asset* asset);
void zCameraTweak_Save(zCameraTweak* tweak, xSerial* s);
void zCameraTweak_Load(zCameraTweak* tweak, xSerial* s);
S32 zCameraTweak_EventCB(xBase* from, xBase* to, U32 toEvent, const F32* toParam, xBase* b3);

#endif
