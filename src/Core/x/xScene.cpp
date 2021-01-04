#include "xScene.h"

#include <types.h>

// func_8003F3A4
#pragma GLOBAL_ASM("asm/Core/x/xScene.s", "xSceneInit__FP6xSceneUsUsUsUs")

// func_8003F50C
#pragma GLOBAL_ASM("asm/Core/x/xScene.s", "xSceneExit__FP6xScene")

// func_8003F510
#pragma GLOBAL_ASM("asm/Core/x/xScene.s", "xSceneSave__FP6xSceneP7xSerial")

// func_8003F514
#pragma GLOBAL_ASM("asm/Core/x/xScene.s", "xSceneLoad__FP6xSceneP7xSerial")

// func_8003F518
#pragma GLOBAL_ASM("asm/Core/x/xScene.s", "xSceneSetup__FP6xScene")

// func_8003F53C
#pragma GLOBAL_ASM("asm/Core/x/xScene.s", "xSceneAddEnt__FP6xSceneP4xEnt")

// func_8003F5E8
#pragma GLOBAL_ASM("asm/Core/x/xScene.s", "xSceneResolvID__FP6xSceneUi")

// func_8003F624
#pragma GLOBAL_ASM("asm/Core/x/xScene.s", "xSceneID2Name__FP6xSceneUi")

// func_8003F660
#pragma GLOBAL_ASM("asm/Core/x/xScene.s", "xSceneForAllEnts__FP6xScenePFP4xEntP6xScenePv_P4xEntPv")

// func_8003F6EC
#pragma GLOBAL_ASM("asm/Core/x/xScene.s",                                                          \
                   "xSceneForAllStatics__FP6xScenePFP4xEntP6xScenePv_P4xEntPv")

// func_8003F778
#pragma GLOBAL_ASM("asm/Core/x/xScene.s",                                                          \
                   "xSceneForAllDynamics__FP6xScenePFP4xEntP6xScenePv_P4xEntPv")

// func_8003F804
#pragma GLOBAL_ASM("asm/Core/x/xScene.s", "xSceneForAllNPCs__FP6xScenePFP4xEntP6xScenePv_P4xEntPv")

// func_8003F890
#pragma GLOBAL_ASM(                                                                                \
    "asm/Core/x/xScene.s",                                                                         \
    "xRayHitsGrid__FP5xGridP6xSceneP5xRay3PFP6xSceneP5xRay3P7xQCDataP4xEntPv_vP7xQCDataPv")

// func_800400EC
#pragma GLOBAL_ASM("asm/Core/x/xScene.s",                                                          \
                   "xRayHitsTikiLandableEnt__FP6xSceneP5xRay3P7xQCDataP4xEntPv")

// func_800401D8
#pragma GLOBAL_ASM("asm/Core/x/xScene.s", "xRayHitsEnt__FP6xSceneP5xRay3P7xQCDataP4xEntPv")

// func_80040284
#pragma GLOBAL_ASM("asm/Core/x/xScene.s", "xRayHitsTikiLandableScene__FP6xSceneP5xRay3P7xCollis")

// func_800403A4
#pragma GLOBAL_ASM("asm/Core/x/xScene.s", "xRayHitsScene__FP6xSceneP5xRay3P7xCollis")

// func_800404C4
#pragma GLOBAL_ASM("asm/Core/x/xScene.s", "xRayHitsSceneFlags__FP6xSceneP5xRay3P7xCollisUcUc")

// func_80040658
#pragma GLOBAL_ASM(                                                                                \
    "asm/Core/x/xScene.s",                                                                         \
    "__ct__Q220_esc__2_unnamed_esc__2_xScene_cpp_esc__2_15cb_ray_hits_entFRC5xRay3R7xCollisUcUc")

// func_8004066C
#pragma GLOBAL_ASM("asm/Core/x/xScene.s", "ProjectTriangle__FP5xVec3P5xVec3PfPf")

// func_80040730
#pragma GLOBAL_ASM("asm/Core/x/xScene.s", "ProjectBox__FP5xVec3P4xBoxPfPf")

// func_800407C4
#pragma GLOBAL_ASM("asm/Core/x/xScene.s", "Mgc_TriBoxTest__FP5xVec3P4xBox")

// func_80040A7C
#pragma GLOBAL_ASM("asm/Core/x/xScene.s",                                                          \
                   "nearestFloorCB__FP14RpIntersectionP19RpCollisionTrianglefPv")

// func_80040EB4
#pragma GLOBAL_ASM("asm/Core/x/xScene.s",                                                          \
                   "boxNearestFloorCB__FP14RpIntersectionP19RpCollisionTrianglefPv")

// func_80040F94
#pragma GLOBAL_ASM(                                                                                \
    "asm/Core/x/xScene.s",                                                                         \
    "sectorNearestFloorCB__FP14RpIntersectionP13RpWorldSectorP19RpCollisionTrianglefPv")

// func_80040FBC
#pragma GLOBAL_ASM("asm/Core/x/xScene.s", "gridNearestFloorCB__FP4xEntPv")

// func_800410CC
#pragma GLOBAL_ASM("asm/Core/x/xScene.s", "xSceneNearestFloorPoly__FP6xSceneP14xNearFloorPolyUcUc")

// func_800412F8
#pragma GLOBAL_ASM(                                                                                \
    "asm/Core/x/xScene.s",                                                                         \
    "__cl__Q220_esc__2_unnamed_esc__2_xScene_cpp_esc__2_15cb_ray_hits_entFR4xEntR10xGridBound")

// func_80041428
#pragma GLOBAL_ASM("asm/Core/x/xScene.s", "__as__10grid_indexFRC10grid_index")

// func_8004143C
#pragma GLOBAL_ASM("asm/Core/x/xScene.s", "xEntEnable__FP4xEnt")

// func_8004145C
#pragma GLOBAL_ASM(                                                                                \
    "asm/Core/x/xScene.s",                                                                         \
    "xGridCheckBound_esc__0_Q220_esc__2_unnamed_esc__2_xScene_cpp_esc__2_15cb_ray_hits_ent_esc__1___FR5xGridRC6xBoundRC7xQCDataQ220_esc__2_unnamed_esc__2_xScene_cpp_esc__2_15cb_ray_hits_ent")

// func_80041614
#pragma GLOBAL_ASM("asm/Core/x/xScene.s", "get_grid_index__FRC5xGridff")

// func_800416C0
#pragma GLOBAL_ASM("asm/Core/x/xScene.s", "range_limit_esc__0_Us_esc__1___FUsUsUs")

// func_800416EC
#pragma GLOBAL_ASM("asm/Core/x/xScene.s", "xBoxFromRay__FR4xBoxRC5xRay3")

// func_80041810
#pragma GLOBAL_ASM("asm/Core/x/xScene.s", "xBoxFromLine__FR4xBoxRC6xLine3")

void xMat3x3RMulVec(xVec3* o, const xMat3x3* m, const xVec3* v)
{
    float32 x = m->right.x * v->x + m->up.x * v->y + m->at.x * v->z;
    float32 y = m->right.y * v->x + m->up.y * v->y + m->at.y * v->z;
    float32 z = m->right.z * v->x + m->up.z * v->y + m->at.z * v->z;

    o->x = x;
    o->y = y;
    o->z = z;
}
