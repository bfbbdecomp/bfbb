#include "iCollide.h"

#include <types.h>

// func_800C0D20
#pragma GLOBAL_ASM("asm/Core/p2/iCollide.s", "iCollideInit__FP6xScene")

// func_800C0D24
#pragma GLOBAL_ASM("asm/Core/p2/iCollide.s", "PointWithinTriangle__FP5xVec3PP5xVec3P5xVec3")

// func_800C0FC4
#pragma GLOBAL_ASM("asm/Core/p2/iCollide.s", "FindNearestPointOnLine__FP5xVec3P5xVec3P5xVec3P5xVec3")

// func_800C10BC
#pragma GLOBAL_ASM("asm/Core/p2/iCollide.s", "properSphereIsectTri__FPC5xVec3fP5xVec3PfP19RpCollisionTriangle")

// func_800C1230
#pragma GLOBAL_ASM("asm/Core/p2/iCollide.s", "sphereHitsEnvCB__FP14RpIntersectionP13RpWorldSectorP19RpCollisionTrianglefPv")

// func_800C13A0
#pragma GLOBAL_ASM("asm/Core/p2/iCollide.s", "sphereHitsEnv3CB__FP14RpIntersectionP13RpWorldSectorP19RpCollisionTrianglefPv")

// func_800C186C
#pragma GLOBAL_ASM("asm/Core/p2/iCollide.s", "sphereHitsEnv4CB__FP14RpIntersectionP13RpWorldSectorP19RpCollisionTrianglefPv")

// func_800C1A50
#pragma GLOBAL_ASM("asm/Core/p2/iCollide.s", "sphereHitsModel3CB__FP14RpIntersectionP19RpCollisionTrianglefPv")

// func_800C1A88
#pragma GLOBAL_ASM("asm/Core/p2/iCollide.s", "rayHitsEnvCB__FP14RpIntersectionP13RpWorldSectorP19RpCollisionTrianglefPv")

// func_800C1B7C
#pragma GLOBAL_ASM("asm/Core/p2/iCollide.s", "rayHitsEnvBackwardCB__FP14RpIntersectionP13RpWorldSectorP19RpCollisionTrianglefPv")

// func_800C1C10
#pragma GLOBAL_ASM("asm/Core/p2/iCollide.s", "rayHitsModelCB__FP14RpIntersectionP19RpCollisionTrianglefPv")

// func_800C1C3C
#pragma GLOBAL_ASM("asm/Core/p2/iCollide.s", "rayHitsModelBackwardCB__FP14RpIntersectionP19RpCollisionTrianglefPv")

// func_800C1C68
#pragma GLOBAL_ASM("asm/Core/p2/iCollide.s", "iSphereHitsEnv__FPC7xSpherePC4xEnvP7xCollis")

// func_800C1D4C
#pragma GLOBAL_ASM("asm/Core/p2/iCollide.s", "iSphereHitsEnv3__FPC7xSpherePC4xEnvP7xCollisUcf")

// func_800C1F70
#pragma GLOBAL_ASM("asm/Core/p2/iCollide.s", "iSphereHitsEnv4__FPC7xSpherePC4xEnvPC7xMat3x3P7xCollis")

// func_800C21CC
#pragma GLOBAL_ASM("asm/Core/p2/iCollide.s", "iSphereHitsModel3__FPC7xSpherePC14xModelInstanceP7xCollisUcf")

// func_800C2564
#pragma GLOBAL_ASM("asm/Core/p2/iCollide.s", "iRayHitsEnv__FPC5xRay3PC4xEnvP7xCollis")

// func_800C2834
#pragma GLOBAL_ASM("asm/Core/p2/iCollide.s", "__as__5xRay3FRC5xRay3")

// func_800C2880
#pragma GLOBAL_ASM("asm/Core/p2/iCollide.s", "iRayHitsModel__FPC5xRay3PC14xModelInstanceP7xCollis")

// func_800C2B9C
#pragma GLOBAL_ASM("asm/Core/p2/iCollide.s", "iSphereForModel__FP7xSpherePC14xModelInstance")

// func_800C2C6C
#pragma GLOBAL_ASM("asm/Core/p2/iCollide.s", "iBoxForModel__FP4xBoxPC14xModelInstance")

// func_800C2CC4
#pragma GLOBAL_ASM("asm/Core/p2/iCollide.s", "iBoxForModelLocal__FP4xBoxPC14xModelInstance")

// func_800C2DD4
#pragma GLOBAL_ASM("asm/Core/p2/iCollide.s", "xMat3x3RMulVec__FP5xVec3PC7xMat3x3PC5xVec3")
