#include "xCollide.h"

#include <types.h>

// xCollideGetCollsIdx(const xCollis*,const xVec3*,const xMat3x3*)
#pragma GLOBAL_ASM("asm/Core/x/xCollide.s", "xCollideGetCollsIdx__FPC7xCollisPC5xVec3PC7xMat3x3")

// xCollideInit(xScene*)
#pragma GLOBAL_ASM("asm/Core/x/xCollide.s", "xCollideInit__FP6xScene")

// xSphereHitsSphere(const xSphere*,const xSphere*,xCollis*)
#pragma GLOBAL_ASM("asm/Core/x/xCollide.s", "xSphereHitsSphere__FPC7xSpherePC7xSphereP7xCollis")

// xSphereHitsBox(const xSphere*,const xBox*,xCollis*)
#pragma GLOBAL_ASM("asm/Core/x/xCollide.s", "xSphereHitsBox__FPC7xSpherePC4xBoxP7xCollis")

// xSphereHitsOBB_nu(const xSphere*,const xBox*,const xMat4x3*,xCollis*)
#pragma GLOBAL_ASM("asm/Core/x/xCollide.s", "xSphereHitsOBB_nu__FPC7xSpherePC4xBoxPC7xMat4x3P7xCollis")

// xSphereHitsModel(const xSphere*,const xModelInstance*,xCollis*)
#pragma GLOBAL_ASM("asm/Core/x/xCollide.s", "xSphereHitsModel__FPC7xSpherePC14xModelInstanceP7xCollis")

// xParabolaRecenter(xParabola*,float)
#pragma GLOBAL_ASM("asm/Core/x/xCollide.s", "xParabolaRecenter__FP9xParabolaf")

// xParabolaHitsEnv(xParabola*,const xEnv*,xCollis*)
#pragma GLOBAL_ASM("asm/Core/x/xCollide.s", "xParabolaHitsEnv__FP9xParabolaPC4xEnvP7xCollis")

// RwV3d::operator =(const RwV3d&)
#pragma GLOBAL_ASM("asm/Core/x/xCollide.s", "__as__5RwV3dFRC5RwV3d")

// RwBBox::operator =(const RwBBox&)
#pragma GLOBAL_ASM("asm/Core/x/xCollide.s", "__as__6RwBBoxFRC6RwBBox")

// xCollis::operator =(const xCollis&)
#pragma GLOBAL_ASM("asm/Core/x/xCollide.s", "__as__7xCollisFRC7xCollis")

// xBoxHitsSphere(const xBox*,const xSphere*,xCollis*)
#pragma GLOBAL_ASM("asm/Core/x/xCollide.s", "xBoxHitsSphere__FPC4xBoxPC7xSphereP7xCollis")

// Mgc_BoxBoxTest(const xBox*,const xMat4x3*,const xBox*,const xMat4x3*)
#pragma GLOBAL_ASM("asm/Core/x/xCollide.s", "Mgc_BoxBoxTest__FPC4xBoxPC7xMat4x3PC4xBoxPC7xMat4x3")

// xBoxHitsObb(const xBox*,const xBox*,const xMat4x3*,xCollis*)
#pragma GLOBAL_ASM("asm/Core/x/xCollide.s", "xBoxHitsObb__FPC4xBoxPC4xBoxPC7xMat4x3P7xCollis")

// xCollideCalcTri(xCollis::tri_data&,const xModelInstance&,const xVec3&,const xVec3&)
#pragma GLOBAL_ASM("asm/Core/x/xCollide.s", "xCollideCalcTri__FRQ27xCollis8tri_dataRC14xModelInstanceRC5xVec3RC5xVec3")

#pragma GLOBAL_ASM("asm/Core/x/xCollide.s", "render_tri__22_esc__2_unnamed_esc__2_xCollide_cpp_esc__2_FRQ27xCollis8tri_dataRC14xModelInstance")

// xCollisTriHit(const xCollis::tri_data&,const xModelInstance&)
#pragma GLOBAL_ASM("asm/Core/x/xCollide.s", "xCollisTriHit__FRCQ27xCollis8tri_dataRC14xModelInstance")

// _rpCollBSPTreeForAllCapsuleLeafNodeIntersections(RpCollBSPTree*,RwLine*,fl oat,RpV3dGradient*,int (*)(int, int, void*),void*)
#pragma GLOBAL_ASM("asm/Core/x/xCollide.s", "_rpCollBSPTreeForAllCapsuleLeafNodeIntersections__FP13RpCollBSPTreeP6RwLinefP13RpV3dGradientPFiiPv_iPv")

// nodeInfo::operator =(const nodeInfo&)
#pragma GLOBAL_ASM("asm/Core/x/xCollide.s", "__as__8nodeInfoFRC8nodeInfo")

// RwLine::operator =(const RwLine&)
#pragma GLOBAL_ASM("asm/Core/x/xCollide.s", "__as__6RwLineFRC6RwLine")

// xSweptSpherePrepare(xSweptSphere*,xVec3*,xVec3*,float)
#pragma GLOBAL_ASM("asm/Core/x/xCollide.s", "xSweptSpherePrepare__FP12xSweptSphereP5xVec3P5xVec3f")

// xSweptSphereGetResults(xSweptSphere*)
#pragma GLOBAL_ASM("asm/Core/x/xCollide.s", "xSweptSphereGetResults__FP12xSweptSphere")

// xSweptSphereToTriangle(xSweptSphere*,xVec3*,xVec3*,xVec3*)
#pragma GLOBAL_ASM("asm/Core/x/xCollide.s", "xSweptSphereToTriangle__FP12xSweptSphereP5xVec3P5xVec3P5xVec3")

// xsqrtfast(float&,float)
#pragma GLOBAL_ASM("asm/Core/x/xCollide.s", "xsqrtfast__FRff")

// std::sqrtf(float)
#pragma GLOBAL_ASM("asm/Core/x/xCollide.s", "sqrtf__3stdFf")

// xSweptSphereToSphere(xSweptSphere*,xSphere*)
#pragma GLOBAL_ASM("asm/Core/x/xCollide.s", "xSweptSphereToSphere__FP12xSweptSphereP7xSphere")

// xSweptSphereToBox(xSweptSphere*,xBox*,xMat4x3*)
#pragma GLOBAL_ASM("asm/Core/x/xCollide.s", "xSweptSphereToBox__FP12xSweptSphereP4xBoxP7xMat4x3")

// xSweptSphereToEnv(xSweptSphere*,xEnv*)
#pragma GLOBAL_ASM("asm/Core/x/xCollide.s", "xSweptSphereToEnv__FP12xSweptSphereP4xEnv")

// xSweptSphereToModel(xSweptSphere*,RpAtomic*,RwMatrixTag*)
#pragma GLOBAL_ASM("asm/Core/x/xCollide.s", "xSweptSphereToModel__FP12xSweptSphereP8RpAtomicP11RwMatrixTag")

// xSweptSphereToScene(xSweptSphere*,xScene*,xEnt*,unsigned char)
#pragma GLOBAL_ASM("asm/Core/x/xCollide.s", "xSweptSphereToScene__FP12xSweptSphereP6xSceneP4xEntUc")

// xSweptSphereToStatDyn(xSweptSphere*,xScene*,xEnt*,unsigned char)
#pragma GLOBAL_ASM("asm/Core/x/xCollide.s", "xSweptSphereToStatDyn__FP12xSweptSphereP6xSceneP4xEntUc")

// xSweptSphereToNPC(xSweptSphere*,xScene*,xEnt*,unsigned char)
#pragma GLOBAL_ASM("asm/Core/x/xCollide.s", "xSweptSphereToNPC__FP12xSweptSphereP6xSceneP4xEntUc")

// xSweptSphereToNonMoving(xSweptSphere*,xScene*,xEnt*,unsigned char)
#pragma GLOBAL_ASM("asm/Core/x/xCollide.s", "xSweptSphereToNonMoving__FP12xSweptSphereP6xSceneP4xEntUc")

// xSphereHitsCapsule(const xVec3&,float,const xVec3&,const xVec3&,float)
#pragma GLOBAL_ASM("asm/Core/x/xCollide.s", "xSphereHitsCapsule__FRC5xVec3fRC5xVec3RC5xVec3f")

// xSphereHitsBound(const xSphere&,const xBound&)
#pragma GLOBAL_ASM("asm/Core/x/xCollide.s", "xSphereHitsBound__FRC7xSphereRC6xBound")

// xOBBHitsOBB(const xBox&,const xMat4x3&,const xBox&,const xMat4x3&)
#pragma GLOBAL_ASM("asm/Core/x/xCollide.s", "xOBBHitsOBB__FRC4xBoxRC7xMat4x3RC4xBoxRC7xMat4x3")

// xSphereHitsVCylinder(const xVec3&,float,const xVec3&,float,float)
#pragma GLOBAL_ASM("asm/Core/x/xCollide.s", "xSphereHitsVCylinder__FRC5xVec3fRC5xVec3ff")

// xSphereHitsVCircle(const xVec3&,float,const xVec3&,float)
#pragma GLOBAL_ASM("asm/Core/x/xCollide.s", "xSphereHitsVCircle__FRC5xVec3fRC5xVec3f")

// xVec3AddScaled(xVec3*,const xVec3*,float)
#pragma GLOBAL_ASM("asm/Core/x/xCollide.s", "xVec3AddScaled__FP5xVec3PC5xVec3f")

// xVec3Cross(xVec3*,const xVec3*,const xVec3*)
#pragma GLOBAL_ASM("asm/Core/x/xCollide.s", "xVec3Cross__FP5xVec3PC5xVec3PC5xVec3")

// xVec3Length2(const xVec3*)
#pragma GLOBAL_ASM("asm/Core/x/xCollide.s", "xVec3Length2__FPC5xVec3")

// xVec3Dist(const xVec3*,const xVec3*)
#pragma GLOBAL_ASM("asm/Core/x/xCollide.s", "xVec3Dist__FPC5xVec3PC5xVec3")

// xMat3x3RMulVec(xVec3*,const xMat3x3*,const xVec3*)
namespace {
#pragma GLOBAL_ASM("asm/Core/x/xCollide.s", "xMat3x3RMulVec__FP5xVec3PC7xMat3x3PC5xVec3")
}

// xMat4x3OrthoInv(xMat4x3*,const xMat4x3*)
#pragma GLOBAL_ASM("asm/Core/x/xCollide.s", "xMat4x3OrthoInv__FP7xMat4x3PC7xMat4x3")

// xMat3x3LookVec3(xMat3x3&,const xVec3&)
#pragma GLOBAL_ASM("asm/Core/x/xCollide.s", "xMat3x3LookVec3__FR7xMat3x3RC5xVec3")

// xModelAnimCollRestore(const xModelInstance&)
#pragma GLOBAL_ASM("asm/Core/x/xCollide.s", "xModelAnimCollRestore__FRC14xModelInstance")

// xModelAnimCollApply(const xModelInstance&)
#pragma GLOBAL_ASM("asm/Core/x/xCollide.s", "xModelAnimCollApply__FRC14xModelInstance")

// xModelAnimCollDirty(const xModelInstance&)
#pragma GLOBAL_ASM("asm/Core/x/xCollide.s", "xModelAnimCollDirty__FRC14xModelInstance")

// xVec3::operator +(const xVec3&) const
#pragma GLOBAL_ASM("asm/Core/x/xCollide.s", "__pl__5xVec3CFRC5xVec3")

// xVec3::operator +=(const xVec3&)
#pragma GLOBAL_ASM("asm/Core/x/xCollide.s", "__apl__5xVec3FRC5xVec3")

// xVec3::get_abs() const
#pragma GLOBAL_ASM("asm/Core/x/xCollide.s", "get_abs__5xVec3CFv")

// xVec3::set_abs()
#pragma GLOBAL_ASM("asm/Core/x/xCollide.s", "set_abs__5xVec3Fv")

// xVec3::dot(const xVec3&) const
#pragma GLOBAL_ASM("asm/Core/x/xCollide.s", "dot__5xVec3CFRC5xVec3")

// xVec3::cross(const xVec3&) const
#pragma GLOBAL_ASM("asm/Core/x/xCollide.s", "cross__5xVec3CFRC5xVec3")

// xVec3::normalize()
#pragma GLOBAL_ASM("asm/Core/x/xCollide.s", "normalize__5xVec3Fv")

// xVec3::operator /(float) const
#pragma GLOBAL_ASM("asm/Core/x/xCollide.s", "__dv__5xVec3CFf")

// xParabolaEvalVel(const xParabola*,xVec3*,float)
#pragma GLOBAL_ASM("asm/Core/x/xCollide.s", "xParabolaEvalVel__FPC9xParabolaP5xVec3f")

// xParabolaEvalPos(const xParabola*,xVec3*,float)
#pragma GLOBAL_ASM("asm/Core/x/xCollide.s", "xParabolaEvalPos__FPC9xParabolaP5xVec3f")

// xSphereHitsOBB(const xSphere&,const xBox&,const xMat4x3&)
#pragma GLOBAL_ASM("asm/Core/x/xCollide.s", "xSphereHitsOBB__FRC7xSphereRC4xBoxRC7xMat4x3")

// xSphereHitsOBB(const xVec3&,float,const xBox&,const xMat4x3&)
#pragma GLOBAL_ASM("asm/Core/x/xCollide.s", "xSphereHitsOBB__FRC5xVec3fRC4xBoxRC7xMat4x3")

// xSphereHitsBox(const xVec3&,float,const xBox&)
#pragma GLOBAL_ASM("asm/Core/x/xCollide.s", "xSphereHitsBox__FRC5xVec3fRC4xBox")

// xSphereHitsBox(const xSphere&,const xBox&)
#pragma GLOBAL_ASM("asm/Core/x/xCollide.s", "xSphereHitsBox__FRC7xSphereRC4xBox")

// xSphereHitsSphere(const xSphere&,const xSphere&)
#pragma GLOBAL_ASM("asm/Core/x/xCollide.s", "xSphereHitsSphere__FRC7xSphereRC7xSphere")

// xSphereHitsSphere(const xVec3&,float,const xVec3&,float)
#pragma GLOBAL_ASM("asm/Core/x/xCollide.s", "xSphereHitsSphere__FRC5xVec3fRC5xVec3f")

// xQuickCullForRay(xQCData*,const xRay3*)
#pragma GLOBAL_ASM("asm/Core/x/xCollide.s", "xQuickCullForRay__FP7xQCDataPC5xRay3")

// xQuickCullForBox(xQCData*,const xBox*)
#pragma GLOBAL_ASM("asm/Core/x/xCollide.s", "xQuickCullForBox__FP7xQCDataPC4xBox")

// xVec2::length2() const
#pragma GLOBAL_ASM("asm/Core/x/xCollide.s", "length2__5xVec2CFv")

// xVec2::operator -(const xVec2&) const
#pragma GLOBAL_ASM("asm/Core/x/xCollide.s", "__mi__5xVec2CFRC5xVec2")

// xVec2::operator -=(const xVec2&)
#pragma GLOBAL_ASM("asm/Core/x/xCollide.s", "__ami__5xVec2FRC5xVec2")
