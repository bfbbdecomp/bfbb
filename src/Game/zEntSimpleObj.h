#ifndef ZENTSIMPLEOBJ_H
#define ZENTSIMPLEOBJ_H

#include "zEnt.h"

struct xSimpleObjAsset
{
    float32 animSpeed;
    uint32 initAnimState;
    uint8 collType;
    uint8 flags;
};

struct zEntSimpleObj : zEnt
{
    xSimpleObjAsset* sasset;
    uint32 sflags;
    void* anim;
    float32 animTime;
};

struct zScene;

void zEntTrackPhysics_Init(void* ent, void* asset);
void zEntSimpleObj_Init(void* ent, void* asset);
void zEntSimpleObj_MgrUpdateRender(RpWorld*, float32 dt);
void zEntSimpleObj_MgrCustomUpdate(zScene* s, float32 dt);
void zEntSimpleObj_MgrCustomRender();
void zEntSimpleObj_Save(zEntSimpleObj* ent, xSerial* s);
void zEntSimpleObj_Load(zEntSimpleObj* ent, xSerial* s);

#endif