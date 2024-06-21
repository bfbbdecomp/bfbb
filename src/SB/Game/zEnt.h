#ifndef ZENT_H
#define ZENT_H

#include "xEnt.h"
#include "xAnim.h"

#include "zScene.h"
#include "zEvent.h"

//For inline/weak functions
#include "xSnd.h"

struct zScene;

struct _ShadowParams
{
    uint32 type;
    float32 at;
    float32 rad;
};

struct zEnt : xEnt
{
    xAnimTable* atbl;
};

void checkpoint_collision_hack(zEnt* ent);
int8* zParamGetString(xModelAssetParam* param, uint32 size, int8* tok, int8* def);
int32 zParamGetFloatList(xModelAssetParam* param, uint32 size, const int8* tok, int32 count,
                         float32* def, float32* result);
void zEntGetShadowParams(xEnt* ent, xVec3* center, float32* radius, xEntShadow::radius_enum rtype);
int32 zParamGetVector(xModelAssetParam* param, uint32 size, const int8* tok, xVec3 result, xVec3*);
int32 zParamGetVector(xModelAssetParam* param, uint32 size, int8* tok, xVec3 result, xVec3*);
int32 zParamGetFloatList(xModelAssetParam* param, uint32 size, int8* tok, int32 count, float32* def,
                         float32* result);
int32 zParamGetFloatList(xModelAssetParam* param, uint32 size, int8* tok, int32 count, float32* def,
                         float32* result);
float32 zParamGetFloat(xModelAssetParam* param, uint32 size, const int8* tok, float32 def);
float32 zParamGetFloat(xModelAssetParam* param, uint32 size, int8* tok, float32 def);
int32 zParamGetInt(xModelAssetParam* param, uint32 size, const int8* tok, int32 def);
int32 zParamGetInt(xModelAssetParam* param, uint32 size, int8* tok, int32 def);
xModelAssetParam* zEntGetModelParams(uint32 assetID, uint32* size);
void zEntAnimEvent_AutoAnim(zEnt* ent, uint32 animEvent, const float32* animParam);
xAnimTable* xEnt_AnimTable_AutoEventSmall();
void zEntAnimEvent(zEnt* ent, uint32 animEvent, const float32* animParam);
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

// TODO: Misplaced Inlines/Weak functions
WEAK void xModelAnimCollStop(xModelInstance& m);
WEAK xMat4x3* xEntGetFrame(const xEnt* ent);
WEAK void xSndPlay3D(uint32 id, float32 vol, float32 pitch, uint32 priority, uint32 flags,
                     const xVec3* pos, float32 radius, sound_category category, float32 delay);

#endif
