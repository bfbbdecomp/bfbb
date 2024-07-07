#ifndef ZGUST_H
#define ZGUST_H

#include "xBase.h"
#include "xMath3.h"

#include "zVolume.h"

#include <types.h>

struct zGustAsset : xBaseAsset
{
    U32 flags;
    U32 volumeID;
    U32 effectID;
    xVec3 vel;
    F32 fade;
    F32 partMod;
};

struct zGust : xBase
{
    U32 flags;
    zGustAsset* asset;
    zVolume* volume;
    zVolume* fx_volume;
    F32 debris_timer;
};

void zGustInit();
void zGustSetup();
zGust* zGustGetGust(U16 n);
void zGustSave(zGust* ent, xSerial* s);
void zGustLoad(zGust* ent, xSerial* s);
void zGustUpdateFX(F32 seconds);

#endif
