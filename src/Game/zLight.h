#ifndef ZLIGHT_H
#define ZLIGHT_H

#include "zVolume.h"

#include "../Core/x/xEnt.h"
#include "../Core/x/xEnv.h"
#include "../Core/p2/iLight.h"

struct zLightAsset : xBaseAsset
{
    uint8 lightType;
    uint8 lightEffect;
    uint8 lightPad[2];
    uint32 lightFlags;
    float32 lightColor[4];
    xVec3 lightDir;
    float32 lightConeAngle;
    xSphere lightSphere;
    uint32 attachID;
};

struct _zLight : xBase
{
    uint32 flags;
    zLightAsset* tasset;
    iLight light;
    xBase* attached_to;
    int32 true_idx;
    float32* reg;
    int32 effect_idx;
};

struct xScene;

void zLightInit(void* b, void* tasset);
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