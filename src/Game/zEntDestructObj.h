#ifndef ZENTDESTRUCTOBJ_H
#define ZENTDESTRUCTOBJ_H

#include "zEnt.h"

struct zEntDestructObjAsset
{
    float32 animSpeed;
    uint32 initAnimState;
    uint32 health;
    uint32 spawnItemID;
    uint32 dflags;
    uint8 collType;
    uint8 fxType;
    uint8 pad[2];
    float32 blast_radius;
    float32 blast_strength;
    uint32 shrapnelID_destroy;
    uint32 shrapnelID_hit;
    uint32 sfx_destroy;
    uint32 sfx_hit;
    uint32 hitModel;
    uint32 destroyModel;
};

struct zParEmitter;
struct zShrapnelAsset;
struct xSFXAsset;

struct zEntDestructObj : zEnt
{
    zEntDestructObjAsset* dasset;
    uint32 state;
    uint32 healthCnt;
    float32 fx_timer;
    zParEmitter* fx_emitter;
    float32 respawn_timer;
    uint32 throw_target;
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
uint32 zEntDestructObj_isDestroyed(zEntDestructObj* ent);

#endif