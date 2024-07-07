#ifndef ZLIGHT_H
#define ZLIGHT_H

#include "zVolume.h"

#include "xEnt.h"
#include "xEnv.h"
#include "iLight.h"

// Size: 0x38
struct zLightAsset : xBaseAsset
{
    // 0x8
    U8 lightType;
    U8 lightEffect;
    U8 lightPad[2];
    U32 lightFlags;

    // 0x10
    F32 lightColor[4];
    xVec3 lightDir;

    // 0x20
    F32 lightConeAngle;
    xSphere lightSphere;
    U32 attachID;
};

// Size: 0x64
struct _zLight : xBase
{
    // 0x10
    U32 flags;
    zLightAsset* tasset;

    // 0x18
    iLight light;
    xBase* attached_to;
    S32 true_idx;
    F32* reg;

    // 0x60
    S32 effect_idx;
};

struct xScene;

void zLightInit(void* b, void* tasset);
void zLightInit(xBase* b, zLightAsset* tasset);
void zLightResolveLinks();
void zLightSave(_zLight* ent, xSerial* s);
void zLightLoad(_zLight* ent, xSerial* s);
void zLightAddLocalEnv();
void zLightAddLocal(xEnt* ent);
void zLightRemoveLocalEnv();
void zLightResetAll(xEnv* env);
void zLightReset(_zLight* param_1);
void zLightSetVolume(zVolume* vol);
void zLightDestroyAll();
void zLightDestroy(_zLight* param_1);
void zLightUpdate(xBase* to, xScene*, F32 dt);
S32 zLightEventCB(xBase* param_1, xBase* to, U32 toEvent, const float* param_4,
                    xBase* param_5);

#endif
