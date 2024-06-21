#include "xMath3.h"

#include <types.h>

// func_800318B8
#pragma GLOBAL_ASM("asm/Core/x/xMath3.s", "xMath3Init__Fv")

// func_8003195C
#pragma GLOBAL_ASM("asm/Core/x/xMath3.s", "xLine3VecDist2__FPC5xVec3PC5xVec3PC5xVec3P6xIsect")

// func_80031A64
#pragma GLOBAL_ASM("asm/Core/x/xMath3.s", "xPointInBox__FPC4xBoxPC5xVec3")

// func_80031AE0
#pragma GLOBAL_ASM("asm/Core/x/xMath3.s", "xBoxInitBoundOBB__FP4xBoxPC4xBoxPC7xMat4x3")

// func_80031C88
#pragma GLOBAL_ASM("asm/Core/x/xMath3.s", "xBoxInitBoundCapsule__FP4xBoxPC8xCapsule")

// func_80031D40
#pragma GLOBAL_ASM("asm/Core/x/xMath3.s", "xBoxFromCone__FR4xBoxRC5xVec3RC5xVec3fff")

// func_80031DE4
#pragma GLOBAL_ASM("asm/Core/x/xMath3.s", "xMat3x3Normalize__FP7xMat3x3PC7xMat3x3")

// func_80031E34
#pragma GLOBAL_ASM("asm/Core/x/xMath3.s", "xMat3x3GetEuler__FPC7xMat3x3P5xVec3")

// func_80031F14
#pragma GLOBAL_ASM("asm/Core/x/xMath3.s", "xMat4x3MoveLocalRight__FP7xMat4x3f")

// func_80031F48
#pragma GLOBAL_ASM("asm/Core/x/xMath3.s", "xMat4x3MoveLocalUp__FP7xMat4x3f")

// func_80031F7C
#pragma GLOBAL_ASM("asm/Core/x/xMath3.s", "xMat4x3MoveLocalAt__FP7xMat4x3f")

// func_80031FB0
#pragma GLOBAL_ASM("asm/Core/x/xMath3.s", "xMat3x3LookVec__FP7xMat3x3PC5xVec3")

// func_800321A4
#pragma GLOBAL_ASM("asm/Core/x/xMath3.s", "xMat3x3Euler__FP7xMat3x3PC5xVec3")

// func_800321D0
#pragma GLOBAL_ASM("asm/Core/x/xMath3.s", "xMat3x3Euler__FP7xMat3x3fff")

// func_80032314
#pragma GLOBAL_ASM("asm/Core/x/xMath3.s", "xMat3x3RotC__FP7xMat3x3ffff")

// func_80032438
#pragma GLOBAL_ASM("asm/Core/x/xMath3.s", "xMat3x3RotX__FP7xMat3x3f")

// func_800324DC
#pragma GLOBAL_ASM("asm/Core/x/xMath3.s", "xMat3x3RotY__FP7xMat3x3f")

// func_80032584
#pragma GLOBAL_ASM("asm/Core/x/xMath3.s", "xMat3x3RotZ__FP7xMat3x3f")

// func_8003262C
#pragma GLOBAL_ASM("asm/Core/x/xMath3.s", "xMat3x3ScaleC__FP7xMat3x3fff")

// func_800326B8
#pragma GLOBAL_ASM("asm/Core/x/xMath3.s", "xMat3x3RMulRotY__FP7xMat3x3PC7xMat3x3f")

// func_80032824
#pragma GLOBAL_ASM("asm/Core/x/xMath3.s", "xMat3x3Transpose__FP7xMat3x3PC7xMat3x3")

// func_800328B4
#pragma GLOBAL_ASM("asm/Core/x/xMath3.s", "xMat3x3Mul__FP7xMat3x3PC7xMat3x3PC7xMat3x3")

// func_80032A5C
#pragma GLOBAL_ASM("asm/Core/x/xMath3.s", "xMat3x3LMulVec__FP5xVec3PC7xMat3x3PC5xVec3")

// func_80032AC0
#pragma GLOBAL_ASM("asm/Core/x/xMath3.s", "xMat3x3Tolocal__FP5xVec3PC7xMat3x3PC5xVec3")

// func_80032BA0
#pragma GLOBAL_ASM("asm/Core/x/xMath3.s", "xMat4x3Rot__FP7xMat4x3PC5xVec3fPC5xVec3")

// func_80032C18
#pragma GLOBAL_ASM("asm/Core/x/xMath3.s", "xMat4x3Mul__FP7xMat4x3PC7xMat4x3PC7xMat4x3")

// func_80032C84
#pragma GLOBAL_ASM("asm/Core/x/xMath3.s", "xQuatFromMat__FP5xQuatPC7xMat3x3")

// func_80032E6C
#pragma GLOBAL_ASM("asm/Core/x/xMath3.s", "xQuatFromAxisAngle__FP5xQuatPC5xVec3f")

// func_80032F00
#pragma GLOBAL_ASM("asm/Core/x/xMath3.s", "xQuatToMat__FPC5xQuatP7xMat3x3")

// func_80032FB0
#pragma GLOBAL_ASM("asm/Core/x/xMath3.s", "xQuatToAxisAngle__FPC5xQuatP5xVec3Pf")

// func_80033010
#pragma GLOBAL_ASM("asm/Core/x/xMath3.s", "xQuatNormalize__FP5xQuatPC5xQuat")

// func_800330D0
#pragma GLOBAL_ASM("asm/Core/x/xMath3.s", "xQuatSlerp__FP5xQuatPC5xQuatPC5xQuatf")

// func_80033230
#pragma GLOBAL_ASM("asm/Core/x/xMath3.s", "xQuatMul__FP5xQuatPC5xQuatPC5xQuat")

// func_800332C4
#pragma GLOBAL_ASM("asm/Core/x/xMath3.s", "xQuatDiff__FP5xQuatPC5xQuatPC5xQuat")

// func_80033328
#pragma GLOBAL_ASM("asm/Core/x/xMath3.s", "xBoxUnion__FR4xBoxRC4xBoxRC4xBox")

// func_800333D4
#pragma GLOBAL_ASM("asm/Core/x/xMath3.s", "xBoxFromCircle__FR4xBoxRC5xVec3RC5xVec3f")

// func_800334D4
#pragma GLOBAL_ASM("asm/Core/x/xMath3.s", "xQuatSMul__FP5xQuatPC5xQuatf")

// func_80033500
#pragma GLOBAL_ASM("asm/Core/x/xMath3.s", "xQuatLength2__FPC5xQuat")

// func_80033524
#pragma GLOBAL_ASM("asm/Core/x/xMath3.s", "xQuatAdd__FP5xQuatPC5xQuatPC5xQuat")
