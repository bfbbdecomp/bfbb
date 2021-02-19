#ifndef ZENT_H
#define ZENT_H

#include "../Core/x/xEnt.h"
#include "../Core/x/xAnim.h"

#include "zScene.h"
#include "zEvent.h"

struct zScene;

enum radius_enum
{
    RADIUS_CACHE,
    RADIUS_RASTER,
    MAX_RADIUS
};

struct zEnt : xEnt
{
    xAnimTable* atbl;
};

int32 zParamGetFloatList(xModelAssetParam* param, uint32 size, const int8* tok, int32 count,
                         float32* def, float32* result);
void zEntGetShadowParams(xEnt* ent, xVec3* center, float32* radius, radius_enum rtype);
int32 zParamGetVector(xModelAssetParam* param, uint32 size, int8* tok, xVec3* result);
int32 zParamGetVector(xModelAssetParam* param, uint32 size, int8* tok, xVec3* result);
int32 zParamGetFloatList(xModelAssetParam* param, uint32 size, int8* tok, int32 count, float32* def,
                         float32* result);
int32 zParamGetFloatList(xModelAssetParam* param, uint32 size, int8* tok, int32 count, float32* def,
                         float32* result);
float32 zParamGetFloat(xModelAssetParam* param, uint32 size, int8* tok, float32 def);
float32 zParamGetFloat(xModelAssetParam* param, uint32 size, int8* tok, float32 def);
int32 zParamGetInt(xModelAssetParam* param, uint32 size, int8* tok, int32 def);
int32 zParamGetInt(xModelAssetParam* param, uint32 size, int8* tok, int32 def);
xModelAssetParam* zEntGetModelParams(uint32 assetID, uint32* size);
void zEntAnimEvent_AutoAnim(zEnt* ent, uint32 animEvent, float32* animParam);
xAnimTable* xEnt_AnimTable_AutoEventSmall();
void zEntAnimEvent(zEnt* ent, uint32 animEvent, float32* animParam);
void zEntParseModelInfo(xEnt* ent, uint32 assetID);
xModelInstance* zEntRecurseModelInfo(void* info, xEnt* ent);
void zEntEventAllOfType(uint32 toEvent, uint32 type);
void zEntEventAll(xBase* from, uint32 fromEvent, uint32 toEvent, float32* toParam);
void zEntUpdate(zEnt* ent, zScene* scene, float32 elapsedSec);
void zEntReset(zEnt* ent);
void zEntLoad(zEnt* ent, xSerial* s);
void zEntSave(zEnt* ent, xSerial* s);
void zEntSetup(zEnt* ent);
void zEntInit(zEnt* ent, xEntAsset* asset, uint32 type);

#endif