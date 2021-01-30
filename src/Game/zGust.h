#ifndef ZGUST_H
#define ZGUST_H

#include "../Core/x/xBase.h"
#include "../Core/x/xMath3.h"

#include "zVolume.h"

#include <types.h>

struct zGustAsset : xBaseAsset
{
    uint32 flags;
    uint32 volumeID;
    uint32 effectID;
    xVec3 vel;
    float32 fade;
    float32 partMod;
};

struct zGust : xBase
{
    uint32 flags;
    zGustAsset* asset;
    zVolume* volume;
    zVolume* fx_volume;
    float32 debris_timer;
};

void zGustInit();
void zGustSetup();
zGust* zGustGetGust(uint16 n);
void zGustSave(zGust* ent, xSerial* s);
void zGustLoad(zGust* ent, xSerial* s);
void zGustUpdateFX(float32 seconds);

#endif