#include "xMath3.h"

#include <types.h>

// xMath3Init()
#pragma GLOBAL_ASM("asm/Core/x/xMath3.s", "xMath3Init__Fv")

// xLine3VecDist2(const xVec3*,const xVec3*,const xVec3*,xIsect*)
#pragma GLOBAL_ASM("asm/Core/x/xMath3.s", "xLine3VecDist2__FPC5xVec3PC5xVec3PC5xVec3P6xIsect")

// xPointInBox(const xBox*,const xVec3*)
#pragma GLOBAL_ASM("asm/Core/x/xMath3.s", "xPointInBox__FPC4xBoxPC5xVec3")

// xBoxInitBoundOBB(xBox*,const xBox*,const xMat4x3*)
#pragma GLOBAL_ASM("asm/Core/x/xMath3.s", "xBoxInitBoundOBB__FP4xBoxPC4xBoxPC7xMat4x3")

// xBoxInitBoundCapsule(xBox*,const xCapsule*)
#pragma GLOBAL_ASM("asm/Core/x/xMath3.s", "xBoxInitBoundCapsule__FP4xBoxPC8xCapsule")

// xBoxFromCone(xBox&,const xVec3&,const xVec3&,float,float,float)
#pragma GLOBAL_ASM("asm/Core/x/xMath3.s", "xBoxFromCone__FR4xBoxRC5xVec3RC5xVec3fff")

// xMat3x3Normalize(xMat3x3*,const xMat3x3*)
#pragma GLOBAL_ASM("asm/Core/x/xMath3.s", "xMat3x3Normalize__FP7xMat3x3PC7xMat3x3")

// xMat3x3GetEuler(const xMat3x3*,xVec3*)
#pragma GLOBAL_ASM("asm/Core/x/xMath3.s", "xMat3x3GetEuler__FPC7xMat3x3P5xVec3")

// xMat4x3MoveLocalRight(xMat4x3*,float)
#pragma GLOBAL_ASM("asm/Core/x/xMath3.s", "xMat4x3MoveLocalRight__FP7xMat4x3f")

// xMat4x3MoveLocalUp(xMat4x3*,float)
#pragma GLOBAL_ASM("asm/Core/x/xMath3.s", "xMat4x3MoveLocalUp__FP7xMat4x3f")

// xMat4x3MoveLocalAt(xMat4x3*,float)
#pragma GLOBAL_ASM("asm/Core/x/xMath3.s", "xMat4x3MoveLocalAt__FP7xMat4x3f")

// xMat3x3LookVec(xMat3x3*,const xVec3*)
#pragma GLOBAL_ASM("asm/Core/x/xMath3.s", "xMat3x3LookVec__FP7xMat3x3PC5xVec3")

// xMat3x3Euler(xMat3x3*,const xVec3*)
#pragma GLOBAL_ASM("asm/Core/x/xMath3.s", "xMat3x3Euler__FP7xMat3x3PC5xVec3")

// xMat3x3Euler(xMat3x3*,float,float,float)
#pragma GLOBAL_ASM("asm/Core/x/xMath3.s", "xMat3x3Euler__FP7xMat3x3fff")

// xMat3x3RotC(xMat3x3*,float,float,float,float)
#pragma GLOBAL_ASM("asm/Core/x/xMath3.s", "xMat3x3RotC__FP7xMat3x3ffff")

// xMat3x3RotX(xMat3x3*,float)
#pragma GLOBAL_ASM("asm/Core/x/xMath3.s", "xMat3x3RotX__FP7xMat3x3f")

// xMat3x3RotY(xMat3x3*,float)
#pragma GLOBAL_ASM("asm/Core/x/xMath3.s", "xMat3x3RotY__FP7xMat3x3f")

// xMat3x3RotZ(xMat3x3*,float)
#pragma GLOBAL_ASM("asm/Core/x/xMath3.s", "xMat3x3RotZ__FP7xMat3x3f")

// xMat3x3ScaleC(xMat3x3*,float,float,float)
#pragma GLOBAL_ASM("asm/Core/x/xMath3.s", "xMat3x3ScaleC__FP7xMat3x3fff")

// xMat3x3RMulRotY(xMat3x3*,const xMat3x3*,float)
#pragma GLOBAL_ASM("asm/Core/x/xMath3.s", "xMat3x3RMulRotY__FP7xMat3x3PC7xMat3x3f")

// xMat3x3Transpose(xMat3x3*,const xMat3x3*)
#pragma GLOBAL_ASM("asm/Core/x/xMath3.s", "xMat3x3Transpose__FP7xMat3x3PC7xMat3x3")

// xMat3x3Mul(xMat3x3*,const xMat3x3*,const xMat3x3*)
#pragma GLOBAL_ASM("asm/Core/x/xMath3.s", "xMat3x3Mul__FP7xMat3x3PC7xMat3x3PC7xMat3x3")

// xMat3x3LMulVec(xVec3*,const xMat3x3*,const xVec3*)
#pragma GLOBAL_ASM("asm/Core/x/xMath3.s", "xMat3x3LMulVec__FP5xVec3PC7xMat3x3PC5xVec3")

// xMat3x3Tolocal(xVec3*,const xMat3x3*,const xVec3*)
#pragma GLOBAL_ASM("asm/Core/x/xMath3.s", "xMat3x3Tolocal__FP5xVec3PC7xMat3x3PC5xVec3")

// xMat4x3Rot(xMat4x3*,const xVec3*,float,const xVec3*)
#pragma GLOBAL_ASM("asm/Core/x/xMath3.s", "xMat4x3Rot__FP7xMat4x3PC5xVec3fPC5xVec3")

// xMat4x3Mul(xMat4x3*,const xMat4x3*,const xMat4x3*)
#pragma GLOBAL_ASM("asm/Core/x/xMath3.s", "xMat4x3Mul__FP7xMat4x3PC7xMat4x3PC7xMat4x3")

// xQuatFromMat(xQuat*,const xMat3x3*)
#pragma GLOBAL_ASM("asm/Core/x/xMath3.s", "xQuatFromMat__FP5xQuatPC7xMat3x3")

// xQuatFromAxisAngle(xQuat*,const xVec3*,float)
#pragma GLOBAL_ASM("asm/Core/x/xMath3.s", "xQuatFromAxisAngle__FP5xQuatPC5xVec3f")

// xQuatToMat(const xQuat*,xMat3x3*)
#pragma GLOBAL_ASM("asm/Core/x/xMath3.s", "xQuatToMat__FPC5xQuatP7xMat3x3")

// xQuatToAxisAngle(const xQuat*,xVec3*,float*)
#pragma GLOBAL_ASM("asm/Core/x/xMath3.s", "xQuatToAxisAngle__FPC5xQuatP5xVec3Pf")

// xQuatNormalize(xQuat*,const xQuat*)
#pragma GLOBAL_ASM("asm/Core/x/xMath3.s", "xQuatNormalize__FP5xQuatPC5xQuat")

// xQuatSlerp(xQuat*,const xQuat*,const xQuat*,float)
#pragma GLOBAL_ASM("asm/Core/x/xMath3.s", "xQuatSlerp__FP5xQuatPC5xQuatPC5xQuatf")

// xQuatMul(xQuat*,const xQuat*,const xQuat*)
#pragma GLOBAL_ASM("asm/Core/x/xMath3.s", "xQuatMul__FP5xQuatPC5xQuatPC5xQuat")

// xQuatDiff(xQuat*,const xQuat*,const xQuat*)
#pragma GLOBAL_ASM("asm/Core/x/xMath3.s", "xQuatDiff__FP5xQuatPC5xQuatPC5xQuat")

// xBoxUnion(xBox&,const xBox&,const xBox&)
#pragma GLOBAL_ASM("asm/Core/x/xMath3.s", "xBoxUnion__FR4xBoxRC4xBoxRC4xBox")

// xBoxFromCircle(xBox&,const xVec3&,const xVec3&,float)
#pragma GLOBAL_ASM("asm/Core/x/xMath3.s", "xBoxFromCircle__FR4xBoxRC5xVec3RC5xVec3f")

// xQuatSMul(xQuat*,const xQuat*,float)
#pragma GLOBAL_ASM("asm/Core/x/xMath3.s", "xQuatSMul__FP5xQuatPC5xQuatf")

// xQuatLength2(const xQuat*)
#pragma GLOBAL_ASM("asm/Core/x/xMath3.s", "xQuatLength2__FPC5xQuat")

// xQuatAdd(xQuat*,const xQuat*,const xQuat*)
#pragma GLOBAL_ASM("asm/Core/x/xMath3.s", "xQuatAdd__FP5xQuatPC5xQuatPC5xQuat")
