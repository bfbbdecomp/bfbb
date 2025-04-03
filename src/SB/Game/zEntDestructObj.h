#ifndef ZENTDESTRUCTOBJ_H
#define ZENTDESTRUCTOBJ_H

#include "zEnt.h"
#include "xSFX.h"
#include "zParEmitter.h"
#include "zGlobals.h"
#include "zRumble.h"
#include "xVec3.h"
#include "xString.h"
#include "xstransvc.h"
#include "zShrapnel.h"
#include "zCollGeom.h"
#include "iCollide.h"

#define DOBJ_STATE_INIT 0
#define DOBJ_STATE_RESET 1
#define DOBJ_STATE_DESTROYED 2

struct zEntDestructObjAsset
{
    F32 animSpeed;
    U32 initAnimState;
    U32 health;
    U32 spawnItemID;
    U32 dflags; // 0x10
    U8 collType;
    U8 fxType;
    U8 pad[2];
    F32 blast_radius;
    F32 blast_strength;
    U32 shrapnelID_destroy; // 0x20
    U32 shrapnelID_hit; // 0x24
    U32 sfx_destroy; // 0x28
    U32 sfx_hit; // 0x2C
    U32 hitModelId; // 0x30
    U32 destroyModelId; // 0x34
};

struct zEntDestructObj : zEnt
{
    zEntDestructObjAsset* dasset; // Offset 0xD4
    U32 state;
    U32 healthCnt;
    F32 fx_timer; // Offset 0xE0
    zParEmitter* fx_emitter;
    F32 respawn_timer;
    U32 throw_target;
    zShrapnelAsset* shrapnel_destroy; // Offset 0xF0
    zShrapnelAsset* shrapnel_hit;
    xModelInstance* base_model;
    xModelInstance* hit_model;
    xModelInstance* destroy_model; // Offset 0x100
    void (*destroy_notify)(zEntDestructObj&, void*);
    void* notify_context;
    xSFXAsset* sfx_destroy; // 0x10C
    xSFXAsset* sfx_hit; // 0x110
};

void zEntDestructObj_FindFX();
void zEntDestructObj_Init(void* ent, void* asset);
void zEntDestructObj_Init(zEntDestructObj* ent, xEntAsset* asset);

// TODO: update unk with callback signatures from zEnt
void zEntDestructObj_Move(zEntDestructObj* ent, xScene* scene, F32 unk, xEntFrame* frame);
void zEntDestructObj_Update(zEntDestructObj* ent, xScene* scene, F32 unk);
void zEntDestructObj_Hit(zEntDestructObj* ent, U32 mask);
U32 zEntDestructObj_GetHit(zEntDestructObj* ent, U32 mask);
void zEntDestructObj_Save(zEntDestructObj* ent, xSerial* s);
void zEntDestructObj_Load(zEntDestructObj* ent, xSerial* s);
void zEntDestructObj_Setup(zEntDestructObj* ent);
void zEntDestructObj_Reset(zEntDestructObj* ent, xScene* scene);
U32 zEntDestructObj_isDestroyed(zEntDestructObj* ent);
void zEntDestructObj_DestroyFX(zEntDestructObj* ent);
S32 zEntDestructObjEventCB(xBase* from, xBase* to, U32 toEvent, const F32* toParam,
                           xBase* baseUnk3);

#endif
