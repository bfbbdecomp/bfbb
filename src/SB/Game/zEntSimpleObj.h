#ifndef ZENTSIMPLEOBJ_H
#define ZENTSIMPLEOBJ_H

#include "zEnt.h"

struct xSimpleObjAsset
{
    F32 animSpeed;
    U32 initAnimState;
    U8 collType;
    U8 flags;
};

struct zEntSimpleObj : zEnt
{
    xSimpleObjAsset* sasset;
    U32 sflags;
    void* anim;
    F32 animTime;
};

struct zScene;

void zEntSimpleObj_MgrInit(zEntSimpleObj** entList, U32 entCount);
void zEntSimpleObj_MgrUpdateRender(RpWorld*, F32 dt);
void zEntSimpleObj_MgrCustomUpdate(zScene* s, F32 dt);
void zEntSimpleObj_MgrCustomRender();
void zEntTrackPhysics_Init(void* ent, void* asset);
void zEntSimpleObj_Init(void* ent, void* asset);
void zEntSimpleObj_Setup(zEntSimpleObj* ent);
void zEntSimpleObj_Save(zEntSimpleObj* ent, xSerial* s);
void zEntSimpleObj_Load(zEntSimpleObj* ent, xSerial* s);

#endif
