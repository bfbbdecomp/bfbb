#ifndef ZCAMERATWEAK_H
#define ZCAMERATWEAK_H

#include "xDynAsset.h"

struct CameraTweak_asset : xDynAsset
{
    int32 priority;
    float32 time;
    float32 pitch_adjust;
    float32 dist_adjust;
};

struct zCameraTweak : xBase
{
    CameraTweak_asset* casset;
};

float32 zCameraTweakGlobal_GetPitch();
float32 zCameraTweakGlobal_GetH();
float32 zCameraTweakGlobal_GetD();
void zCameraTweakGlobal_Update(float32 dt);
void zCameraTweakGlobal_Reset();
void zCameraTweak_Init(xBase& data, xDynAsset& asset, ulong32);
void zCameraTweak_Save(zCameraTweak* tweak, xSerial* s);
void zCameraTweak_Load(zCameraTweak* tweak, xSerial* s);

#endif
