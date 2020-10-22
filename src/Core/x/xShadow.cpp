#include "xShadow.h"

#include <types.h>

// xShadowInit()
#pragma GLOBAL_ASM("asm/Core/x/xShadow.s", "xShadowInit__Fv")

// xShadowRender(xVec3*,float,float)
#pragma GLOBAL_ASM("asm/Core/x/xShadow.s", "xShadowRender__FP5xVec3ff")

// SetupShadow()
#pragma GLOBAL_ASM("asm/Core/x/xShadow.s", "SetupShadow__Fv")

// xShadowSetWorld(RpWorld*)
#pragma GLOBAL_ASM("asm/Core/x/xShadow.s", "xShadowSetWorld__FP7RpWorld")

// xShadowSetLight(xVec3*,xVec3*,float)
#pragma GLOBAL_ASM("asm/Core/x/xShadow.s", "xShadowSetLight__FP5xVec3P5xVec3f")

// xShadowCameraCreate()
#pragma GLOBAL_ASM("asm/Core/x/xShadow.s", "xShadowCameraCreate__Fv")

// xShadowCameraUpdate(void*,void (*)(void*),xVec3*,float,int)
#pragma GLOBAL_ASM("asm/Core/x/xShadow.s", "xShadowCameraUpdate__FPvPFPv_vP5xVec3fi")

// xShadowRenderWorld(xVec3*,float,float)
#pragma GLOBAL_ASM("asm/Core/x/xShadow.s", "xShadowRenderWorld__FP5xVec3ff")

// xShadowReceiveShadowSetup(xEnt*)
#pragma GLOBAL_ASM("asm/Core/x/xShadow.s", "xShadowReceiveShadowSetup__FP4xEnt")

// xShadowReceiveShadow(xEnt*,float,int,RwMatrixTag*,RwRaster*)
#pragma GLOBAL_ASM("asm/Core/x/xShadow.s", "xShadowReceiveShadow__FP4xEntfiP11RwMatrixTagP8RwRaster")

// xShadowRender(xEnt*,float)
#pragma GLOBAL_ASM("asm/Core/x/xShadow.s", "xShadowRender__FP4xEntf")

// xShadow_ListAdd(xEnt*)
#pragma GLOBAL_ASM("asm/Core/x/xShadow.s", "xShadow_ListAdd__FP4xEnt")

// Im2DRenderQuad(float,float,float,float,float,float,float)
#pragma GLOBAL_ASM("asm/Core/x/xShadow.s", "Im2DRenderQuad__Ffffffff")

// InvertRaster(RwCamera*)
#pragma GLOBAL_ASM("asm/Core/x/xShadow.s", "InvertRaster__FP8RwCamera")

// ShadowCameraDestroy(RwCamera*)
#pragma GLOBAL_ASM("asm/Core/x/xShadow.s", "ShadowCameraDestroy__FP8RwCamera")

// ShadowCameraUpdate(RwCamera*,void*,void (*)(void*),xVec3*,float,int)
#pragma GLOBAL_ASM("asm/Core/x/xShadow.s", "ShadowCameraUpdate__FP8RwCameraPvPFPv_vP5xVec3fi")

// ShadowRasterCreate(int)
#pragma GLOBAL_ASM("asm/Core/x/xShadow.s", "ShadowRasterCreate__Fi")

// ShadowRenderTriangleCB(RpIntersection*,RpWorldSector*,RpCollisionTriangle* ,float,void*)
#pragma GLOBAL_ASM("asm/Core/x/xShadow.s", "ShadowRenderTriangleCB__FP14RpIntersectionP13RpWorldSectorP19RpCollisionTrianglefPv")

// ShadowRender(RwCamera*,RwRaster*,RpIntersection*,float,float)
#pragma GLOBAL_ASM("asm/Core/x/xShadow.s", "ShadowRender__FP8RwCameraP8RwRasterP14RpIntersectionff")

// GCSaveFrameBuffer()
#pragma GLOBAL_ASM("asm/Core/x/xShadow.s", "GCSaveFrameBuffer__Fv")

// GCRestoreFrameBuffer()
#pragma GLOBAL_ASM("asm/Core/x/xShadow.s", "GCRestoreFrameBuffer__Fv")

// ShadowCameraCreatePersp(int)
#pragma GLOBAL_ASM("asm/Core/x/xShadow.s", "ShadowCameraCreatePersp__Fi")

// ShadowCameraSetSpherePersp(RwCamera*,RwV3d*,float)
#pragma GLOBAL_ASM("asm/Core/x/xShadow.s", "ShadowCameraSetSpherePersp__FP8RwCameraP5RwV3df")

// xShadowVertical_FillCache(xShadowCache*,xVec3*,float,float,float)
#pragma GLOBAL_ASM("asm/Core/x/xShadow.s", "xShadowVertical_FillCache__FP12xShadowCacheP5xVec3fff")

// xShadowVertical_DrawCache(xShadowCache*,float,float,int,RwMatrixTag*,RwRas ter*)
#pragma GLOBAL_ASM("asm/Core/x/xShadow.s", "xShadowVertical_DrawCache__FP12xShadowCacheffiP11RwMatrixTagP8RwRaster")

// xShadowManager_Init(int)
#pragma GLOBAL_ASM("asm/Core/x/xShadow.s", "xShadowManager_Init__Fi")

// xShadowManager_Reset()
#pragma GLOBAL_ASM("asm/Core/x/xShadow.s", "xShadowManager_Reset__Fv")

// xShadowManager_Add(xEnt*)
#pragma GLOBAL_ASM("asm/Core/x/xShadow.s", "xShadowManager_Add__FP4xEnt")

// xShadowManager_Remove(xEnt*)
#pragma GLOBAL_ASM("asm/Core/x/xShadow.s", "xShadowManager_Remove__FP4xEnt")

// xShadowMgr::operator =(const xShadowMgr&)
#pragma GLOBAL_ASM("asm/Core/x/xShadow.s", "__as__10xShadowMgrFRC10xShadowMgr")

// xShadowManager_Render()
#pragma GLOBAL_ASM("asm/Core/x/xShadow.s", "xShadowManager_Render__Fv")

// xShadow_PickByRayCast(xShadowMgr*)
#pragma GLOBAL_ASM("asm/Core/x/xShadow.s", "xShadow_PickByRayCast__FP10xShadowMgr")

// xShadow_PickEntForNPC(xShadowMgr*)
#pragma GLOBAL_ASM("asm/Core/x/xShadow.s", "xShadow_PickEntForNPC__FP10xShadowMgr")

// xDrawSphere(const xVec3*,float,unsigned int)
#pragma GLOBAL_ASM("asm/Core/x/xShadow.s", "xDrawSphere__FPC5xVec3fUi")

// xDrawSetColor(unsigned char,unsigned char,unsigned char,unsigned char)
#pragma GLOBAL_ASM("asm/Core/x/xShadow.s", "xDrawSetColor__FUcUcUcUc")

// SQ(float)
#pragma GLOBAL_ASM("asm/Core/x/xShadow.s", "SQ__Ff")
