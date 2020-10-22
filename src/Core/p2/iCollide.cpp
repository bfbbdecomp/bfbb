#include "iCollide.h"

#include <types.h>

// iCollideInit(xScene*)
#pragma GLOBAL_ASM("asm/Core/p2/iCollide.s", "iCollideInit__FP6xScene")

// PointWithinTriangle(xVec3*,xVec3**,xVec3*)
#pragma GLOBAL_ASM("asm/Core/p2/iCollide.s", "PointWithinTriangle__FP5xVec3PP5xVec3P5xVec3")

// FindNearestPointOnLine(xVec3*,xVec3*,xVec3*,xVec3*)
#pragma GLOBAL_ASM("asm/Core/p2/iCollide.s", "FindNearestPointOnLine__FP5xVec3P5xVec3P5xVec3P5xVec3")

// properSphereIsectTri(const xVec3*,float,xVec3*,float*,RpCollisionTriangle*)
#pragma GLOBAL_ASM("asm/Core/p2/iCollide.s", "properSphereIsectTri__FPC5xVec3fP5xVec3PfP19RpCollisionTriangle")

// sphereHitsEnvCB(RpIntersection*,RpWorldSector*,RpCollisionTriangle*,float, void*)
#pragma GLOBAL_ASM("asm/Core/p2/iCollide.s", "sphereHitsEnvCB__FP14RpIntersectionP13RpWorldSectorP19RpCollisionTrianglefPv")

// sphereHitsEnv3CB(RpIntersection*,RpWorldSector*,RpCollisionTriangle*,float ,void*)
#pragma GLOBAL_ASM("asm/Core/p2/iCollide.s", "sphereHitsEnv3CB__FP14RpIntersectionP13RpWorldSectorP19RpCollisionTrianglefPv")

// rayHitsEnvCB(RpIntersection*,RpWorldSector*,RpCollisionTriangle*,float,voi d*)
#pragma GLOBAL_ASM("asm/Core/p2/iCollide.s", "rayHitsEnvCB__FP14RpIntersectionP13RpWorldSectorP19RpCollisionTrianglefPv")

// rayHitsEnvBackwardCB(RpIntersection*,RpWorldSector*,RpCollisionTriangle*,f loat,void*)
#pragma GLOBAL_ASM("asm/Core/p2/iCollide.s", "rayHitsEnvBackwardCB__FP14RpIntersectionP13RpWorldSectorP19RpCollisionTrianglefPv")

// iSphereHitsEnv(const xSphere*,const xEnv*,xCollis*)
#pragma GLOBAL_ASM("asm/Core/p2/iCollide.s", "iSphereHitsEnv__FPC7xSpherePC4xEnvP7xCollis")

// iSphereHitsEnv3(const xSphere*,const xEnv*,xCollis*,unsigned char,float)
#pragma GLOBAL_ASM("asm/Core/p2/iCollide.s", "iSphereHitsEnv3__FPC7xSpherePC4xEnvP7xCollisUcf")

// iSphereHitsEnv4(const xSphere*,const xEnv*,const xMat3x3*,xCollis*)
#pragma GLOBAL_ASM("asm/Core/p2/iCollide.s", "iSphereHitsEnv4__FPC7xSpherePC4xEnvPC7xMat3x3P7xCollis")

// iSphereHitsModel3(const xSphere*,const xModelInstance*,xCollis*,unsigned char,float)
#pragma GLOBAL_ASM("asm/Core/p2/iCollide.s", "iSphereHitsModel3__FPC7xSpherePC14xModelInstanceP7xCollisUcf")

// iRayHitsEnv(const xRay3*,const xEnv*,xCollis*)
#pragma GLOBAL_ASM("asm/Core/p2/iCollide.s", "iRayHitsEnv__FPC5xRay3PC4xEnvP7xCollis")

// xRay3::operator =(const xRay3&)
#pragma GLOBAL_ASM("asm/Core/p2/iCollide.s", "__as__5xRay3FRC5xRay3")

// iRayHitsModel(const xRay3*,const xModelInstance*,xCollis*)
#pragma GLOBAL_ASM("asm/Core/p2/iCollide.s", "iRayHitsModel__FPC5xRay3PC14xModelInstanceP7xCollis")

// iSphereForModel(xSphere*,const xModelInstance*)
#pragma GLOBAL_ASM("asm/Core/p2/iCollide.s", "iSphereForModel__FP7xSpherePC14xModelInstance")

// iBoxForModel(xBox*,const xModelInstance*)
#pragma GLOBAL_ASM("asm/Core/p2/iCollide.s", "iBoxForModel__FP4xBoxPC14xModelInstance")

// iBoxForModelLocal(xBox*,const xModelInstance*)
#pragma GLOBAL_ASM("asm/Core/p2/iCollide.s", "iBoxForModelLocal__FP4xBoxPC14xModelInstance")

// xMat3x3RMulVec(xVec3*,const xMat3x3*,const xVec3*)
namespace {
#pragma GLOBAL_ASM("asm/Core/p2/iCollide.s", "xMat3x3RMulVec__FP5xVec3PC7xMat3x3PC5xVec3")
}
