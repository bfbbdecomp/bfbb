#ifndef ZLIGHT_H
#define ZLIGHT_H

#include "zVolume.h"

#include "../Core/x/xEnt.h"
#include "../Core/x/xEnv.h"
#include "../Core/p2/iLight.h"

// Size: 0x38
struct zLightAsset : xBaseAsset
{
    // 0x8
    uint8 lightType;
    uint8 lightEffect;
    uint8 lightPad[2];
    uint32 lightFlags;

    // 0x10
    float32 lightColor[4];
    xVec3 lightDir;

    // 0x20
    float32 lightConeAngle;
    xSphere lightSphere;
    uint32 attachID;
};

// Size: 0x64
struct _zLight : xBase
{
    // 0x10
    uint32 flags;
    zLightAsset* tasset;

    // 0x18
    iLight light;
    xBase* attached_to;
    int32 true_idx;
    float32* reg;

    // 0x60
    int32 effect_idx;
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
void zLightUpdate(xBase* to, xScene*, float32 dt);

#endif