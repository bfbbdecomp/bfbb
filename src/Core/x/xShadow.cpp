#include "xShadow.h"

#include <types.h>

// func_80044778
#pragma GLOBAL_ASM("asm/Core/x/xShadow.s", "xShadowInit__Fv")

// func_800447E8
#pragma GLOBAL_ASM("asm/Core/x/xShadow.s", "xShadowRender__FP5xVec3ff")

// func_80044808
#pragma GLOBAL_ASM("asm/Core/x/xShadow.s", "SetupShadow__Fv")

// func_80044894
#pragma GLOBAL_ASM("asm/Core/x/xShadow.s", "xShadowSetWorld__FP7RpWorld")

// func_800448C0
#pragma GLOBAL_ASM("asm/Core/x/xShadow.s", "xShadowSetLight__FP5xVec3P5xVec3f")

// func_80044940
#pragma GLOBAL_ASM("asm/Core/x/xShadow.s", "xShadowCameraCreate__Fv")

// func_8004496C
#pragma GLOBAL_ASM("asm/Core/x/xShadow.s", "xShadowCameraUpdate__FPvPFPv_vP5xVec3fi")

// func_800449F4
#pragma GLOBAL_ASM("asm/Core/x/xShadow.s", "xShadowRenderWorld__FP5xVec3ff")

// func_80044DB8
#pragma GLOBAL_ASM("asm/Core/x/xShadow.s", "modelRenderCB__FPv")

// func_80044DD8
#pragma GLOBAL_ASM("asm/Core/x/xShadow.s", "xShadowReceiveShadowSetup__FP4xEnt")

// func_80044E48
#pragma GLOBAL_ASM("asm/Core/x/xShadow.s",                                                         \
                   "xShadowReceiveShadow__FP4xEntfiP11RwMatrixTagP8RwRaster")

// func_800455CC
#pragma GLOBAL_ASM("asm/Core/x/xShadow.s", "xShadowRender__FP4xEntf")

// func_80045644
#pragma GLOBAL_ASM("asm/Core/x/xShadow.s", "xShadow_ListAdd__FP4xEnt")

// func_80045664
#pragma GLOBAL_ASM("asm/Core/x/xShadow.s", "Im2DRenderQuad__Ffffffff")

// func_80045730
#pragma GLOBAL_ASM("asm/Core/x/xShadow.s", "InvertRaster__FP8RwCamera")

// func_800458E4
#pragma GLOBAL_ASM("asm/Core/x/xShadow.s", "ShadowCameraDestroy__FP8RwCamera")

// func_80045974
#pragma GLOBAL_ASM("asm/Core/x/xShadow.s", "ShadowCameraUpdate__FP8RwCameraPvPFPv_vP5xVec3fi")

// func_80045B14
#pragma GLOBAL_ASM("asm/Core/x/xShadow.s", "ShadowRasterCreate__Fi")

// func_80045B40
#pragma GLOBAL_ASM(                                                                                \
    "asm/Core/x/xShadow.s",                                                                        \
    "ShadowRenderTriangleCB__FP14RpIntersectionP13RpWorldSectorP19RpCollisionTrianglefPv")

// func_80045E08
#pragma GLOBAL_ASM("asm/Core/x/xShadow.s", "ShadowRender__FP8RwCameraP8RwRasterP14RpIntersectionff")

// func_800460C4
#pragma GLOBAL_ASM("asm/Core/x/xShadow.s", "GCSaveFrameBuffer__Fv")

// func_800460EC
#pragma GLOBAL_ASM("asm/Core/x/xShadow.s", "GCRestoreFrameBuffer__Fv")

// func_800461C8
#pragma GLOBAL_ASM("asm/Core/x/xShadow.s", "ShadowCameraCreatePersp__Fi")

// func_8004626C
#pragma GLOBAL_ASM("asm/Core/x/xShadow.s", "ShadowCameraSetSpherePersp__FP8RwCameraP5RwV3df")

// func_80046370
#pragma GLOBAL_ASM(                                                                                \
    "asm/Core/x/xShadow.s",                                                                        \
    "shadowCacheEnvCB__FP14RpIntersectionP13RpWorldSectorP19RpCollisionTrianglefPv")

// func_80046710
#pragma GLOBAL_ASM("asm/Core/x/xShadow.s", "shadowCacheLeafCB__FiiPv")

// func_80046CA4
#pragma GLOBAL_ASM("asm/Core/x/xShadow.s", "shadowCacheEntityCB__FP4xEntPv")

// func_80046FD0
#pragma GLOBAL_ASM("asm/Core/x/xShadow.s", "xShadowVertical_FillCache__FP12xShadowCacheP5xVec3fff")

// func_800472C0
#pragma GLOBAL_ASM("asm/Core/x/xShadow.s",                                                         \
                   "xShadowVertical_DrawCache__FP12xShadowCacheffiP11RwMatrixTagP8RwRaster")

// func_80047600
#pragma GLOBAL_ASM("asm/Core/x/xShadow.s", "xShadowManager_Init__Fi")

// func_80047648
#pragma GLOBAL_ASM("asm/Core/x/xShadow.s", "xShadowManager_Reset__Fv")

// func_80047654
#pragma GLOBAL_ASM("asm/Core/x/xShadow.s", "xShadowManager_Add__FP4xEnt")

// func_800476E8
#pragma GLOBAL_ASM("asm/Core/x/xShadow.s", "xShadowManager_Remove__FP4xEnt")

// func_800477A4
#pragma GLOBAL_ASM("asm/Core/x/xShadow.s", "__as__10xShadowMgrFRC10xShadowMgr")

// func_800477C8
#pragma GLOBAL_ASM("asm/Core/x/xShadow.s", "CmpShadowMgr__FPCvPCv")

// func_800478C8
#pragma GLOBAL_ASM("asm/Core/x/xShadow.s", "xShadowManager_Render__Fv")

// func_80047F38
#pragma GLOBAL_ASM("asm/Core/x/xShadow.s", "xShadow_PickByRayCast__FP10xShadowMgr")

// func_80048054
#pragma GLOBAL_ASM("asm/Core/x/xShadow.s", "xShadow_PickEntForNPC__FP10xShadowMgr")

// func_800480A0
#pragma GLOBAL_ASM("asm/Core/x/xShadow.s", "xDrawSphere__FPC5xVec3fUi")

// func_800480A4
#pragma GLOBAL_ASM("asm/Core/x/xShadow.s", "xDrawSetColor__FUcUcUcUc")

// func_800480A8
#pragma GLOBAL_ASM("asm/Core/x/xShadow.s", "SQ__Ff")
