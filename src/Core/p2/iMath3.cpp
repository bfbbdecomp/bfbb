#include "iMath3.h"

#include <types.h>

// iMath3Init()
#pragma GLOBAL_ASM("asm/Core/p2/iMath3.s", "iMath3Init__Fv")

// iSphereIsectVec(const xSphere*,const xVec3*,xIsect*)
#pragma GLOBAL_ASM("asm/Core/p2/iMath3.s", "iSphereIsectVec__FPC7xSpherePC5xVec3P6xIsect")

// iSphereIsectRay(const xSphere*,const xRay3*,xIsect*)
#pragma GLOBAL_ASM("asm/Core/p2/iMath3.s", "iSphereIsectRay__FPC7xSpherePC5xRay3P6xIsect")

// iSphereIsectSphere(const xSphere*,const xSphere*,xIsect*)
#pragma GLOBAL_ASM("asm/Core/p2/iMath3.s", "iSphereIsectSphere__FPC7xSpherePC7xSphereP6xIsect")

// iSphereInitBoundVec(xSphere*,const xVec3*)
#pragma GLOBAL_ASM("asm/Core/p2/iMath3.s", "iSphereInitBoundVec__FP7xSpherePC5xVec3")

// iSphereBoundVec(xSphere*,const xSphere*,const xVec3*)
#pragma GLOBAL_ASM("asm/Core/p2/iMath3.s", "iSphereBoundVec__FP7xSpherePC7xSpherePC5xVec3")

// iCylinderIsectVec(const xCylinder*,const xVec3*,xIsect*)
#pragma GLOBAL_ASM("asm/Core/p2/iMath3.s", "iCylinderIsectVec__FPC9xCylinderPC5xVec3P6xIsect")

// iBoxVecDist(const xBox*,const xVec3*,xIsect*)
#pragma GLOBAL_ASM("asm/Core/p2/iMath3.s", "iBoxVecDist__FPC4xBoxPC5xVec3P6xIsect")

// iBoxIsectVec(const xBox*,const xVec3*,xIsect*)
#pragma GLOBAL_ASM("asm/Core/p2/iMath3.s", "iBoxIsectVec__FPC4xBoxPC5xVec3P6xIsect")

// ClipPlane(float,float,float*,float*)
#pragma GLOBAL_ASM("asm/Core/p2/iMath3.s", "ClipPlane__FffPfPf")

// ClipBox(const xVec3*,const xVec3*,const xVec3*,float*,float*)
#pragma GLOBAL_ASM("asm/Core/p2/iMath3.s", "ClipBox__FPC5xVec3PC5xVec3PC5xVec3PfPf")

// iBoxIsectRay(const xBox*,const xRay3*,xIsect*)
#pragma GLOBAL_ASM("asm/Core/p2/iMath3.s", "iBoxIsectRay__FPC4xBoxPC5xRay3P6xIsect")

// iBoxIsectSphere(const xBox*,const xSphere*,xIsect*)
#pragma GLOBAL_ASM("asm/Core/p2/iMath3.s", "iBoxIsectSphere__FPC4xBoxPC7xSphereP6xIsect")

// iBoxInitBoundVec(xBox*,const xVec3*)
#pragma GLOBAL_ASM("asm/Core/p2/iMath3.s", "iBoxInitBoundVec__FP4xBoxPC5xVec3")

// iBoxBoundVec(xBox*,const xBox*,const xVec3*)
#pragma GLOBAL_ASM("asm/Core/p2/iMath3.s", "iBoxBoundVec__FP4xBoxPC4xBoxPC5xVec3")

// xVec2Dist(float,float,float,float)
#pragma GLOBAL_ASM("asm/Core/p2/iMath3.s", "xVec2Dist__Fffff")

// xVec2Dot(const xVec2*,const xVec2*)
#pragma GLOBAL_ASM("asm/Core/p2/iMath3.s", "xVec2Dot__FPC5xVec2PC5xVec2")

// xVec2Init(xVec2*,float,float)
#pragma GLOBAL_ASM("asm/Core/p2/iMath3.s", "xVec2Init__FP5xVec2ff")
