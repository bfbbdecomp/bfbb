#include "xMath3.h"
#include "xVec3.h"
#include "xEntBoulder.h"

#include <types.h>

// func_8011F0B8
#pragma GLOBAL_ASM("asm/Core/x/xEntBoulder.s", "xEntBoulder_FitToModel__FP11xEntBoulder")

// func_8011F124
#pragma GLOBAL_ASM("asm/Core/x/xEntBoulder.s", "xEntBoulder_Render__FP4xEnt")

// func_8011F244
void xEntBoulder_Init(void* ent, void* asset)
{
    xEntBoulder_Init((xEntBoulder*)ent, (xEntAsset*)asset);
}

// func_8011F264
#pragma GLOBAL_ASM("asm/Core/x/xEntBoulder.s", "xEntBoulder_Init__FP11xEntBoulderP9xEntAsset")

// func_8011F478
#pragma GLOBAL_ASM("asm/Core/x/xEntBoulder.s", "xEntBoulder_ApplyForces__FP10xEntCollis")

// func_8011F564
void xEntBoulder_AddInstantForce(xEntBoulder* ent, xVec3* force)
{
    if (ent->update != 0)
    {
        xVec3* frcptr = &ent->instForce;
        xVec3AddTo(frcptr, force);
    }
}

// func_8011F594
void xEntBoulder_AddForce(xEntBoulder* ent, xVec3* force)
{
    if (ent->update != 0)
    {
        xVec3* frcptr = &ent->force;
        xVec3AddTo(frcptr, force);
    }
}

// func_8011F5C4
void xEntBoulder_BUpdate()
{
    //For some reason this seems to be a completely empty function
}

// func_8011F5C8
#pragma GLOBAL_ASM("asm/Core/x/xEntBoulder.s", "xEntBoulder_RealBUpdate__FP4xEntP5xVec3")

// func_8011F630
#pragma GLOBAL_ASM("asm/Core/x/xEntBoulder.s", "xEntBoulder_Update__FP11xEntBoulderP6xScenef")

// func_801203D8
#pragma GLOBAL_ASM("asm/Core/x/xEntBoulder.s",                                                     \
                   "xEntBoulder_KilledBySurface__FP11xEntBoulderP6xScenef")

// func_80120640
#pragma GLOBAL_ASM("asm/Core/x/xEntBoulder.s", "xEntBoulder_Kill__FP11xEntBoulder")

// func_801206B4
#pragma GLOBAL_ASM("asm/Core/x/xEntBoulder.s", "xEntBoulder_BubbleBowl__Ff")

// func_80120A08
#pragma GLOBAL_ASM("asm/Core/x/xEntBoulder.s", "xEntBoulder_Setup__FP11xEntBoulder")

// func_80120A74
#pragma GLOBAL_ASM("asm/Core/x/xEntBoulder.s", "xEntBoulder_Reset__FP11xEntBoulderP6xScene")

// func_80120BD0
#pragma GLOBAL_ASM("asm/Core/x/xEntBoulder.s", "xEntBoulderEventCB__FP5xBaseP5xBaseUiPCfP5xBase")

// func_80120F44
#pragma GLOBAL_ASM("asm/Core/x/xEntBoulder.s", "RecurseLinks__FP10xLinkAssetiPP11xEntBoulder")

// func_80120FD8
#pragma GLOBAL_ASM("asm/Core/x/xEntBoulder.s", "RecurseChild__FP5xBasePP11xEntBoulderRi")

// func_801210BC
#pragma GLOBAL_ASM("asm/Core/x/xEntBoulder.s", "xBoulderGenerator_Init__FR5xBaseR9xDynAssetUl")

// func_801210DC
#pragma GLOBAL_ASM("asm/Core/x/xEntBoulder.s",                                                     \
                   "xBoulderGenerator_Init__FP17xBoulderGeneratorP22xBoulderGeneratorAsset")

// func_80121288
#pragma GLOBAL_ASM("asm/Core/x/xEntBoulder.s", "xBoulderGenerator_Reset__FP17xBoulderGenerator")

// func_80121300
#pragma GLOBAL_ASM("asm/Core/x/xEntBoulder.s", "BoulderGen_GiveBirth__FP17xBoulderGeneratori")

// func_80121344
#pragma GLOBAL_ASM("asm/Core/x/xEntBoulder.s", "GetBoulderForGenerating__FP17xBoulderGenerator")

// func_801214AC
#pragma GLOBAL_ASM("asm/Core/x/xEntBoulder.s",                                                     \
                   "xBoulderGenerator_Launch__FP17xBoulderGeneratorP5xVec3f")

// func_80121654
#pragma GLOBAL_ASM("asm/Core/x/xEntBoulder.s",                                                     \
                   "xBoulderGenerator_EventCB__FP5xBaseP5xBaseUiPCfP5xBase")

// func_80121944
#pragma GLOBAL_ASM("asm/Core/x/xEntBoulder.s",                                                     \
                   "xBoulderGenerator_GenBoulder__FP17xBoulderGenerator")

// func_80121D5C
#pragma GLOBAL_ASM("asm/Core/x/xEntBoulder.s", "xVec3LengthFast__FPC5xVec3")

void xMat3x3RMulVec(xVec3* o, const xMat3x3* m, const xVec3* v)
{
    float32 x = m->right.x * v->x + m->up.x * v->y + m->at.x * v->z;
    float32 y = m->right.y * v->x + m->up.y * v->y + m->at.y * v->z;
    float32 z = m->right.z * v->x + m->up.z * v->y + m->at.z * v->z;

    o->x = x;
    o->y = y;
    o->z = z;
}