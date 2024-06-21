#ifndef ZTHROWN_H
#define ZTHROWN_H

#include <types.h>
#include "xEntDrive.h"
#include "zShrapnel.h"

struct zScene;
struct zThrownStruct;

struct CarryableStats
{
    float32 killTimer;
};

struct LaunchStats
{
    float32 throwSpeedXZ;
    float32 throwSpeedY;
    float32 collResetTimer;
};

struct ThrowableStats
{
    char* name;
    void (*collCB)(zThrownStruct*, xEntCollis*, float32*, float32*);
    CarryableStats* carry;
    LaunchStats* launch;
    iColor_tag glowColor;
    char* shrapName;
    float32 stackHeight;
    uint32 nameHash;
    uint32 nameHashMINF;
    zShrapnelAsset* shrapAsset;
};

struct zThrownStruct
{
    xEnt* ent;
    xEnt* stackEnt;
    xEnt* stackTgt;
    xEnt* patLauncher;
    void (*oldupdate)(xEnt*, xScene*, float32);
    xVec3 vel;
    xVec3 oldcollpos;
    float32 collResetTimer;
    float32 killTimer;
    ThrowableStats* stats;
    uint32 oldRecShadow;
    xEntDrive drv;
    int32 driveDebounce;
    xEnt* driveLastFloor;
    xEntFrame frame;
};

void zThrown_Setup(zScene* sc);
void zThrown_AddTempFrame(zThrownStruct* thrown);
void Recurse_TranslateStack(xEnt* ent, xVec3* delta);
void zThrown_Reset();
void zThrown_PatrickLauncher(xEnt* ent, xEnt* launcher);
int32 zThrownCollide_CauseDamage(zThrownStruct* thrown, xEntCollis* collis);
void zThrownCollide_ThrowFruit(zThrownStruct* thrown, xEntCollis* collis, float32* bounce,
                               float32* friction);
void zThrownCollide_ThrowFreeze(zThrownStruct* thrown, xEntCollis* collis, float32* bounce,
                                float32* friction);
void zThrownCollide_DestructObj(zThrownStruct* thrown, xEntCollis* collis, float32* bounce,
                                float32* friction);
void zThrownCollide_BSandyHead(zThrownStruct* thrown, xEntCollis* collis, float32* bounce,
                               float32* friction);
void zThrownCollide_Tiki(zThrownStruct* thrown, xEntCollis* collis, float32* bounce,
                         float32* friction);
int32 zThrown_IsFruit(xEnt* ent, float32* stackHeight);
void checkAgainstButtons(xEnt* ent);
xBase* zThrown_ButtonIteratorCB(xBase* b, zScene* scn, void* user);
void xDrawSphere(xSphere* s, uint32 unk);
int32 zThrown_KillFruit(xEnt* ent);
void zThrown_LaunchDir(xEnt* ent, xVec3* dir);

#endif
