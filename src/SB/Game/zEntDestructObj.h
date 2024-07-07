#ifndef ZENTDESTRUCTOBJ_H
#define ZENTDESTRUCTOBJ_H

#include "zEnt.h"

struct zEntDestructObjAsset
{
    F32 animSpeed;
    U32 initAnimState;
    U32 health;
    U32 spawnItemID;
    U32 dflags;
    U8 collType;
    U8 fxType;
    U8 pad[2];
    F32 blast_radius;
    F32 blast_strength;
    U32 shrapnelID_destroy;
    U32 shrapnelID_hit;
    U32 sfx_destroy;
    U32 sfx_hit;
    U32 hitModel;
    U32 destroyModel;
};

struct zParEmitter;
struct zShrapnelAsset;
struct xSFXAsset;

struct zEntDestructObj : zEnt
{
    zEntDestructObjAsset* dasset;
    U32 state;
    U32 healthCnt;
    F32 fx_timer;
    zParEmitter* fx_emitter;
    F32 respawn_timer;
    U32 throw_target;
    zShrapnelAsset* shrapnel_destroy;
    zShrapnelAsset* shrapnel_hit;
    xModelInstance* base_model;
    xModelInstance* hit_model;
    xModelInstance* destroy_model;
    void (*destroy_notify)(zEntDestructObj&, void*);
    void* notify_context;
    xSFXAsset* sfx_destroy;
    xSFXAsset* sfx_hit;
};

void zEntDestructObj_FindFX();
void zEntDestructObj_Init(void* ent, void* asset);
void zEntDestructObj_Save(zEntDestructObj* ent, xSerial* s);
void zEntDestructObj_Load(zEntDestructObj* ent, xSerial* s);
void zEntDestructObj_Setup(zEntDestructObj* ent);
U32 zEntDestructObj_isDestroyed(zEntDestructObj* ent);
void zEntDestructObj_Hit(zEntDestructObj* ent, U32 mask);

#endif
