#ifndef ZTHROWN_H
#define ZTHROWN_H

#include <types.h>
#include "xEntDrive.h"
#include "zShrapnel.h"

struct zScene;
struct zThrownStruct;

struct CarryableStats
{
    F32 killTimer;
};

struct LaunchStats
{
    F32 throwSpeedXZ;
    F32 throwSpeedY;
    F32 collResetTimer;
};

struct ThrowableStats
{
    char* name;
    void (*collCB)(zThrownStruct*, xEntCollis*, F32*, F32*);
    CarryableStats* carry;
    LaunchStats* launch;
    iColor_tag glowColor;
    char* shrapName;
    F32 stackHeight;
    U32 nameHash;
    U32 nameHashMINF;
    zShrapnelAsset* shrapAsset;
};

struct zThrownStruct
{
    xEnt* ent;
    xEnt* stackEnt;
    xEnt* stackTgt;
    xEnt* patLauncher;
    void (*oldupdate)(xEnt*, xScene*, F32);
    xVec3 vel;
    xVec3 oldcollpos;
    F32 collResetTimer;
    F32 killTimer;
    ThrowableStats* stats;
    U32 oldRecShadow;
    xEntDrive drv;
    S32 driveDebounce;
    xEnt* driveLastFloor;
    xEntFrame frame;
};

void zThrown_Setup(zScene* sc);
void zThrown_AddTempFrame(zThrownStruct* thrown);
void Recurse_TranslateStack(xEnt* ent, xVec3* delta);
void zThrown_Reset();
void zThrown_PatrickLauncher(xEnt* ent, xEnt* launcher);
S32 zThrownCollide_CauseDamage(zThrownStruct* thrown, xEntCollis* collis);
void zThrownCollide_ThrowFruit(zThrownStruct* thrown, xEntCollis* collis, F32* bounce,
                               F32* friction);
void zThrownCollide_ThrowFreeze(zThrownStruct* thrown, xEntCollis* collis, F32* bounce,
                                F32* friction);
void zThrownCollide_DestructObj(zThrownStruct* thrown, xEntCollis* collis, F32* bounce,
                                F32* friction);
void zThrownCollide_BSandyHead(zThrownStruct* thrown, xEntCollis* collis, F32* bounce,
                               F32* friction);
void zThrownCollide_Tiki(zThrownStruct* thrown, xEntCollis* collis, F32* bounce, F32* friction);
void zThrown_AddFruit(xEnt* ent);
S32 zThrown_IsFruit(xEnt* ent, F32* stackHeight);
void checkAgainstButtons(xEnt* ent);
xBase* zThrown_ButtonIteratorCB(xBase* b, zScene* scn, void* user);
void xDrawSphere(xSphere* s, U32 unk);
S32 zThrown_KillFruit(xEnt* ent);
void zThrown_LaunchDir(xEnt* ent, xVec3* dir);

#endif
