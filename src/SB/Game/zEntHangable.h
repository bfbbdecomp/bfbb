#ifndef ZENTHANGABLE_H
#define ZENTHANGABLE_H

#include "zEnt.h"

struct xEntHangableAsset
{
    U32 flags;
    F32 pivotOffset;
    F32 leverArm;
    F32 gravity;
    F32 accel;
    F32 decay;
    F32 grabDelay;
    F32 stopDecel;
};

struct zEntHangable : zEnt
{
    xEntHangableAsset* hangInfo;
    xVec3 pivot;
    xVec3 endpos;
    xVec3 vel;
    xVec3 swingplane;
    F32 grabTimer;
    F32 spin;
    U32 state;
    zEnt* shaggy;
    S32 enabled;
    zEnt* follow;
    S32 moving;
    F32 candle_timer;
    S32 candle_state;
};

void zEntHangable_SetupFX();
void zEntHangable_Init(void* ent, void* asset);
void zEntHangable_Init(zEntHangable*, xEntAsset*);
void zEntHangable_Save(zEntHangable* ent, xSerial* s);
void zEntHangable_Load(zEntHangable* ent, xSerial* s);
void zEntHangable_Reset(zEntHangable* ent);

#endif
