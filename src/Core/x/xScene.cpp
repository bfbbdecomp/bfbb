#include "xScene.h"

#include <types.h>

// xSceneInit(xScene*,unsigned short,unsigned short,unsigned short,unsigned short)
#pragma GLOBAL_ASM("asm/Core/x/xScene.s", "xSceneInit__FP6xSceneUsUsUsUs")

// xSceneExit(xScene*)
#pragma GLOBAL_ASM("asm/Core/x/xScene.s", "xSceneExit__FP6xScene")

// xSceneSave(xScene*,xSerial*)
#pragma GLOBAL_ASM("asm/Core/x/xScene.s", "xSceneSave__FP6xSceneP7xSerial")

// xSceneLoad(xScene*,xSerial*)
#pragma GLOBAL_ASM("asm/Core/x/xScene.s", "xSceneLoad__FP6xSceneP7xSerial")

// xSceneSetup(xScene*)
#pragma GLOBAL_ASM("asm/Core/x/xScene.s", "xSceneSetup__FP6xScene")

// xSceneAddEnt(xScene*,xEnt*)
#pragma GLOBAL_ASM("asm/Core/x/xScene.s", "xSceneAddEnt__FP6xSceneP4xEnt")

// xSceneResolvID(xScene*,unsigned int)
#pragma GLOBAL_ASM("asm/Core/x/xScene.s", "xSceneResolvID__FP6xSceneUi")

// xSceneID2Name(xScene*,unsigned int)
#pragma GLOBAL_ASM("asm/Core/x/xScene.s", "xSceneID2Name__FP6xSceneUi")

// xSceneForAllEnts(xScene*,xEnt* (*)(xEnt*, xScene*, void*),void*)
#pragma GLOBAL_ASM("asm/Core/x/xScene.s", "xSceneForAllEnts__FP6xScenePFP4xEntP6xScenePv_P4xEntPv")

// xSceneForAllStatics(xScene*,xEnt* (*)(xEnt*, xScene*, void*),void*)
#pragma GLOBAL_ASM("asm/Core/x/xScene.s", "xSceneForAllStatics__FP6xScenePFP4xEntP6xScenePv_P4xEntPv")

// xSceneForAllDynamics(xScene*,xEnt* (*)(xEnt*, xScene*, void*),void*)
#pragma GLOBAL_ASM("asm/Core/x/xScene.s", "xSceneForAllDynamics__FP6xScenePFP4xEntP6xScenePv_P4xEntPv")

// xSceneForAllNPCs(xScene*,xEnt* (*)(xEnt*, xScene*, void*),void*)
#pragma GLOBAL_ASM("asm/Core/x/xScene.s", "xSceneForAllNPCs__FP6xScenePFP4xEntP6xScenePv_P4xEntPv")

// xRayHitsGrid(xGrid*,xScene*,xRay3*,void (*)(xScene*, xRay3*, xQCData*, xEnt*, void*),xQCData*,void*)
#pragma GLOBAL_ASM("asm/Core/x/xScene.s", "xRayHitsGrid__FP5xGridP6xSceneP5xRay3PFP6xSceneP5xRay3P7xQCDataP4xEntPv_vP7xQCDataPv")

#pragma GLOBAL_ASM("asm/Core/x/xScene.s", "xRayHitsEnt__FP6xSceneP5xRay3P7xQCDataP4xEntPv")

// xRayHitsTikiLandableScene(xScene*,xRay3*,xCollis*)
#pragma GLOBAL_ASM("asm/Core/x/xScene.s", "xRayHitsTikiLandableScene__FP6xSceneP5xRay3P7xCollis")

// xRayHitsScene(xScene*,xRay3*,xCollis*)
#pragma GLOBAL_ASM("asm/Core/x/xScene.s", "xRayHitsScene__FP6xSceneP5xRay3P7xCollis")

// xRayHitsSceneFlags(xScene*,xRay3*,xCollis*,unsigned char,unsigned char)
#pragma GLOBAL_ASM("asm/Core/x/xScene.s", "xRayHitsSceneFlags__FP6xSceneP5xRay3P7xCollisUcUc")

#pragma GLOBAL_ASM("asm/Core/x/xScene.s", "__ct__Q220_esc__2_unnamed_esc__2_xScene_cpp_esc__2_15cb_ray_hits_entFRC5xRay3R7xCollisUcUc")

// ProjectTriangle(xVec3*,xVec3*,float*,float*)
#pragma GLOBAL_ASM("asm/Core/x/xScene.s", "ProjectTriangle__FP5xVec3P5xVec3PfPf")

// ProjectBox(xVec3*,xBox*,float*,float*)
#pragma GLOBAL_ASM("asm/Core/x/xScene.s", "ProjectBox__FP5xVec3P4xBoxPfPf")

// Mgc_TriBoxTest(xVec3*,xBox*)
#pragma GLOBAL_ASM("asm/Core/x/xScene.s", "Mgc_TriBoxTest__FP5xVec3P4xBox")

// nearestFloorCB(RpIntersection*,RpCollisionTriangle*,float,void*)
#pragma GLOBAL_ASM("asm/Core/x/xScene.s", "nearestFloorCB__FP14RpIntersectionP19RpCollisionTrianglefPv")

// xSceneNearestFloorPoly(xScene*,xNearFloorPoly*,unsigned char,unsigned char)
#pragma GLOBAL_ASM("asm/Core/x/xScene.s", "xSceneNearestFloorPoly__FP6xSceneP14xNearFloorPolyUcUc")

#pragma GLOBAL_ASM("asm/Core/x/xScene.s", "__cl__Q220_esc__2_unnamed_esc__2_xScene_cpp_esc__2_15cb_ray_hits_entFR4xEntR10xGridBound")

// grid_index::operator =(const grid_index&)
#pragma GLOBAL_ASM("asm/Core/x/xScene.s", "__as__10grid_indexFRC10grid_index")

// xEntEnable(xEnt*)
#pragma GLOBAL_ASM("asm/Core/x/xScene.s", "xEntEnable__FP4xEnt")

#pragma GLOBAL_ASM("asm/Core/x/xScene.s", "xGridCheckBound_esc__0_Q220_esc__2_unnamed_esc__2_xScene_cpp_esc__2_15cb_ray_hits_ent_esc__1___FR5xGridRC6xBoundRC7xQCDataQ220_esc__2_unnamed_esc__2_xScene_cpp_esc__2_15cb_ray_hits_ent")

// get_grid_index(const xGrid&,float,float)
#pragma GLOBAL_ASM("asm/Core/x/xScene.s", "get_grid_index__FRC5xGridff")

#pragma GLOBAL_ASM("asm/Core/x/xScene.s", "range_limit_esc__0_Us_esc__1___FUsUsUs")

// xBoxFromRay(xBox&,const xRay3&)
#pragma GLOBAL_ASM("asm/Core/x/xScene.s", "xBoxFromRay__FR4xBoxRC5xRay3")

// xBoxFromLine(xBox&,const xLine3&)
#pragma GLOBAL_ASM("asm/Core/x/xScene.s", "xBoxFromLine__FR4xBoxRC6xLine3")

// xMat3x3RMulVec(xVec3*,const xMat3x3*,const xVec3*)
namespace {
#pragma GLOBAL_ASM("asm/Core/x/xScene.s", "xMat3x3RMulVec__FP5xVec3PC7xMat3x3PC5xVec3")
}
