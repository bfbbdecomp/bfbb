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

    zThrownStruct& operator=(const zThrownStruct& rhs)
    {
        ent = rhs.ent;
        stackEnt = rhs.stackEnt;
        stackTgt = rhs.stackTgt;
        patLauncher = rhs.patLauncher;
        oldupdate = rhs.oldupdate;
        *(S32*)(&vel.x) = *(S32*)(&rhs.vel.x);
        *(S32*)(&vel.y) = *(S32*)(&rhs.vel.y);
        *(S32*)(&vel.z) = *(S32*)(&rhs.vel.z);
        *(S32*)(&oldcollpos.x) = *(S32*)(&rhs.oldcollpos.x);
        *(S32*)(&oldcollpos.y) = *(S32*)(&rhs.oldcollpos.y);
        *(S32*)(&oldcollpos.z) = *(S32*)(&rhs.oldcollpos.z);
        collResetTimer = rhs.collResetTimer;
        killTimer = rhs.killTimer;
        stats = rhs.stats;
        oldRecShadow = rhs.oldRecShadow;
        drv = rhs.drv;
        driveDebounce = rhs.driveDebounce;
        driveLastFloor = rhs.driveLastFloor;
        frame = rhs.frame;
        return *this;
    }
};

void zThrown_Setup(zScene* sc);
void zThrown_Reset();
void zThrown_PatrickLauncher(xEnt* ent, xEnt* launcher);
S32 zThrown_KillFruit(xEnt* ent);
void zThrown_AddFruit(xEnt* ent);
S32 zThrown_IsFruit(xEnt* ent, F32* stackHeight);
S32 zThrown_IsStacked(xEnt* ent);
void xDrawSphere(const xSphere* s, U32 unk);
void zThrown_LaunchDir(xEnt* ent, xVec3* dir);

#endif
