#include "xShadowSimple.h"

#include <types.h>

// func_80139218
#pragma GLOBAL_ASM("asm/Core/x/xShadowSimple.s",                                                   \
                   "shadowRayCB__FP14RpIntersectionP13RpWorldSectorP19RpCollisionTrianglefPv")

// func_801392FC
#pragma GLOBAL_ASM("asm/Core/x/xShadowSimple.s",                                                   \
                   "shadowRayModelCB__FP14RpIntersectionP19RpCollisionTrianglefPv")

// func_80139328
#pragma GLOBAL_ASM("asm/Core/x/xShadowSimple.s", "shadowRayEntCB__FP4xEntPv")

// func_80139674
#pragma GLOBAL_ASM("asm/Core/x/xShadowSimple.s",                                                   \
                   "xShadowSimple_SceneCollide__FP18xShadowSimpleCacheP5xVec3f")

// func_80139864
#pragma GLOBAL_ASM("asm/Core/x/xShadowSimple.s",                                                   \
                   "xShadowSimple_CalcCorners__FP18xShadowSimpleCacheP4xEntff")

// func_80139A48
#pragma GLOBAL_ASM("asm/Core/x/xShadowSimple.s", "xShadowSimple_AddVerts__FP18xShadowSimpleCache")

// func_80139BB4
#pragma GLOBAL_ASM("asm/Core/x/xShadowSimple.s", "xShadowSimple_Init__Fv")

// func_80139CFC
#pragma GLOBAL_ASM("asm/Core/x/xShadowSimple.s",                                                   \
                   "xShadowSimple_CacheInit__FP18xShadowSimpleCacheP4xEntUc")

// func_80139E5C
#pragma GLOBAL_ASM("asm/Core/x/xShadowSimple.s",                                                   \
                   "xShadowSimple_Add__FP18xShadowSimpleCacheP4xEntff")

// func_8013A2F4
#pragma GLOBAL_ASM("asm/Core/x/xShadowSimple.s",                                                   \
                   "__as__18xShadowSimpleQueueFRC18xShadowSimpleQueue")

// func_8013A320
#pragma GLOBAL_ASM("asm/Core/x/xShadowSimple.s", "xShadowSimple_Render__Fv")

void xMat3x3RMulVec(xVec3* o, const xMat3x3* m, const xVec3* v)
{
    float32 x = m->right.x * v->x + m->up.x * v->y + m->at.x * v->z;
    float32 y = m->right.y * v->x + m->up.y * v->y + m->at.y * v->z;
    float32 z = m->right.z * v->x + m->up.z * v->y + m->at.z * v->z;

    o->x = x;
    o->y = y;
    o->z = z;
}

// func_8013A59C
#pragma GLOBAL_ASM("asm/Core/x/xShadowSimple.s", "xQuickCullForLine__FP7xQCDataPC6xLine3")
