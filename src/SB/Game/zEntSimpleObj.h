#ifndef ZENTSIMPLEOBJ_H
#define ZENTSIMPLEOBJ_H

#include "zEnt.h"
#include "xShadow.h"
#include "xString.h"
#include "xstransvc.h"
#include "iAnim.h"
#include "iModel.h"
#include "zFX.h"
#include "xEnt.h"
#include "zCollGeom.h"
#include "zGlobals.h"
#include "xSkyDome.h"
#include "zGoo.h"
#include "zShrapnel.h"
#include "xMath.h"
#include "zGame.h"
#include "zLOD.h"

struct xSimpleObjAsset
{
    F32 animSpeed;
    U32 initAnimState;
    U8 collType;
    U8 flags;
};

struct zEntSimpleObj : zEnt
{
    xSimpleObjAsset* sasset; // 0xD4
    U32 sflags;
    void* anim;
    F32 animTime;
};

struct zScene;

extern void iModelAnimMatrices(RpAtomic*, xQuat*, xVec3*, RwMatrixTag*);

void zEntSimpleObj_MgrInit(zEntSimpleObj** entList, U32 entCount);
void zEntSimpleObj_MgrUpdateRender(RpWorld* world, F32 dt);
void zEntSimpleObj_MgrCustomUpdate(zScene* s, F32 dt);
void zEntSimpleObj_MgrCustomRender();
void zEntTrackPhysics_Init(void* ent, void* asset);
void zEntSimpleObj_Init(void* ent, void* asset);
void zEntSimpleObj_Render(xEnt* ent);
void zEntSimpleObj_Init(zEntSimpleObj* ent, xEntAsset* asset, bool arg2);
void zEntSimpleObj_Move(xEnt*, xScene*, F32, xEntFrame*);
void zEntSimpleObj_Setup(zEntSimpleObj* ent);
void zEntSimpleObj_Update(zEntSimpleObj* ent, xScene* scene, F32 dt);
void zEntSimpleObj_Save(zEntSimpleObj* ent, xSerial* s);
void zEntSimpleObj_Load(zEntSimpleObj* ent, xSerial* s);
void zEntSimpleObj_Reset(zEntSimpleObj* ent, xScene* scene);
s32 zEntSimpleObjEventCB(xBase* from, xBase* to, U32 toEvent, const F32* toParam, xBase* base3);

#endif
