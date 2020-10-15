#include "xEntBoulder.h"

#include <types.h>

// xEntBoulder_FitToModel(xEntBoulder*)
#pragma GLOBAL_ASM("asm/Core/x/xEntBoulder.s", "xEntBoulder_FitToModel__FP11xEntBoulder")

// xEntBoulder_Init(xEntBoulder*,xEntAsset*)
#pragma GLOBAL_ASM("asm/Core/x/xEntBoulder.s", "xEntBoulder_Init__FP11xEntBoulderP9xEntAsset")

// xEntBoulder_ApplyForces(xEntCollis*)
#pragma GLOBAL_ASM("asm/Core/x/xEntBoulder.s", "xEntBoulder_ApplyForces__FP10xEntCollis")

// xEntBoulder_AddInstantForce(xEntBoulder*,xVec3*)
#pragma GLOBAL_ASM("asm/Core/x/xEntBoulder.s", "xEntBoulder_AddInstantForce__FP11xEntBoulderP5xVec3")

// xEntBoulder_AddForce(xEntBoulder*,xVec3*)
#pragma GLOBAL_ASM("asm/Core/x/xEntBoulder.s", "xEntBoulder_AddForce__FP11xEntBoulderP5xVec3")

// xEntBoulder_RealBUpdate(xEnt*,xVec3*)
#pragma GLOBAL_ASM("asm/Core/x/xEntBoulder.s", "xEntBoulder_RealBUpdate__FP4xEntP5xVec3")

// xEntBoulder_Update(xEntBoulder*,xScene*,float)
#pragma GLOBAL_ASM("asm/Core/x/xEntBoulder.s", "xEntBoulder_Update__FP11xEntBoulderP6xScenef")

// xEntBoulder_KilledBySurface(xEntBoulder*,xScene*,float)
#pragma GLOBAL_ASM("asm/Core/x/xEntBoulder.s", "xEntBoulder_KilledBySurface__FP11xEntBoulderP6xScenef")

// xEntBoulder_Kill(xEntBoulder*)
#pragma GLOBAL_ASM("asm/Core/x/xEntBoulder.s", "xEntBoulder_Kill__FP11xEntBoulder")

// xEntBoulder_BubbleBowl(float)
#pragma GLOBAL_ASM("asm/Core/x/xEntBoulder.s", "xEntBoulder_BubbleBowl__Ff")

// xEntBoulder_Setup(xEntBoulder*)
#pragma GLOBAL_ASM("asm/Core/x/xEntBoulder.s", "xEntBoulder_Setup__FP11xEntBoulder")

// xEntBoulder_Reset(xEntBoulder*,xScene*)
#pragma GLOBAL_ASM("asm/Core/x/xEntBoulder.s", "xEntBoulder_Reset__FP11xEntBoulderP6xScene")

// xEntBoulderEventCB(xBase*,xBase*,unsigned int,const float*,xBase*)
#pragma GLOBAL_ASM("asm/Core/x/xEntBoulder.s", "xEntBoulderEventCB__FP5xBaseP5xBaseUiPCfP5xBase")

// RecurseLinks(xLinkAsset*,int,xEntBoulder**)
#pragma GLOBAL_ASM("asm/Core/x/xEntBoulder.s", "RecurseLinks__FP10xLinkAssetiPP11xEntBoulder")

// RecurseChild(xBase*,xEntBoulder**,int&)
#pragma GLOBAL_ASM("asm/Core/x/xEntBoulder.s", "RecurseChild__FP5xBasePP11xEntBoulderRi")

// xBoulderGenerator_Init(xBoulderGenerator*,xBoulderGeneratorAsset*)
#pragma GLOBAL_ASM("asm/Core/x/xEntBoulder.s", "xBoulderGenerator_Init__FP17xBoulderGeneratorP22xBoulderGeneratorAsset")

// xBoulderGenerator_Reset(xBoulderGenerator*)
#pragma GLOBAL_ASM("asm/Core/x/xEntBoulder.s", "xBoulderGenerator_Reset__FP17xBoulderGenerator")

// BoulderGen_GiveBirth(xBoulderGenerator*,int)
#pragma GLOBAL_ASM("asm/Core/x/xEntBoulder.s", "BoulderGen_GiveBirth__FP17xBoulderGeneratori")

// GetBoulderForGenerating(xBoulderGenerator*)
#pragma GLOBAL_ASM("asm/Core/x/xEntBoulder.s", "GetBoulderForGenerating__FP17xBoulderGenerator")

// xBoulderGenerator_Launch(xBoulderGenerator*,xVec3*,float)
#pragma GLOBAL_ASM("asm/Core/x/xEntBoulder.s", "xBoulderGenerator_Launch__FP17xBoulderGeneratorP5xVec3f")

// xBoulderGenerator_GenBoulder(xBoulderGenerator*)
#pragma GLOBAL_ASM("asm/Core/x/xEntBoulder.s", "xBoulderGenerator_GenBoulder__FP17xBoulderGenerator")

// xVec3LengthFast(const xVec3*)
#pragma GLOBAL_ASM("asm/Core/x/xEntBoulder.s", "xVec3LengthFast__FPC5xVec3")

// xMat3x3RMulVec(xVec3*,const xMat3x3*,const xVec3*)
namespace {
#pragma GLOBAL_ASM("asm/Core/x/xEntBoulder.s", "xMat3x3RMulVec__FP5xVec3PC7xMat3x3PC5xVec3")
}
