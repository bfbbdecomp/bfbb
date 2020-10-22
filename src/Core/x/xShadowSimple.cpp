#include "xShadowSimple.h"

#include <types.h>

// shadowRayCB(RpIntersection*,RpWorldSector*,RpCollisionTriangle*,float,void *)
#pragma GLOBAL_ASM("asm/Core/x/xShadowSimple.s", "shadowRayCB__FP14RpIntersectionP13RpWorldSectorP19RpCollisionTrianglefPv")

// xShadowSimple_SceneCollide(xShadowSimpleCache*,xVec3*,float)
#pragma GLOBAL_ASM("asm/Core/x/xShadowSimple.s", "xShadowSimple_SceneCollide__FP18xShadowSimpleCacheP5xVec3f")

// xShadowSimple_CalcCorners(xShadowSimpleCache*,xEnt*,float,float)
#pragma GLOBAL_ASM("asm/Core/x/xShadowSimple.s", "xShadowSimple_CalcCorners__FP18xShadowSimpleCacheP4xEntff")

// xShadowSimple_AddVerts(xShadowSimpleCache*)
#pragma GLOBAL_ASM("asm/Core/x/xShadowSimple.s", "xShadowSimple_AddVerts__FP18xShadowSimpleCache")

// xShadowSimple_Init()
#pragma GLOBAL_ASM("asm/Core/x/xShadowSimple.s", "xShadowSimple_Init__Fv")

// xShadowSimple_CacheInit(xShadowSimpleCache*,xEnt*,unsigned char)
#pragma GLOBAL_ASM("asm/Core/x/xShadowSimple.s", "xShadowSimple_CacheInit__FP18xShadowSimpleCacheP4xEntUc")

// xShadowSimple_Add(xShadowSimpleCache*,xEnt*,float,float)
#pragma GLOBAL_ASM("asm/Core/x/xShadowSimple.s", "xShadowSimple_Add__FP18xShadowSimpleCacheP4xEntff")

// xShadowSimpleQueue::operator =(const xShadowSimpleQueue&)
#pragma GLOBAL_ASM("asm/Core/x/xShadowSimple.s", "__as__18xShadowSimpleQueueFRC18xShadowSimpleQueue")

// xShadowSimple_Render()
#pragma GLOBAL_ASM("asm/Core/x/xShadowSimple.s", "xShadowSimple_Render__Fv")

// xMat3x3RMulVec(xVec3*,const xMat3x3*,const xVec3*)
namespace {
#pragma GLOBAL_ASM("asm/Core/x/xShadowSimple.s", "xMat3x3RMulVec__FP5xVec3PC7xMat3x3PC5xVec3")
}

// xQuickCullForLine(xQCData*,const xLine3*)
#pragma GLOBAL_ASM("asm/Core/x/xShadowSimple.s", "xQuickCullForLine__FP7xQCDataPC6xLine3")
