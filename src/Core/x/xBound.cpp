#include "xBound.h"

#include <types.h>

// xBoundUpdate(xBound*)
#pragma GLOBAL_ASM("asm/Core/x/xBound.s", "xBoundUpdate__FP6xBound")

// xBoundGetBox(xBox&,const xBound&)
#pragma GLOBAL_ASM("asm/Core/x/xBound.s", "xBoundGetBox__FR4xBoxRC6xBound")

// xBox::operator =(const xBox&)
#pragma GLOBAL_ASM("asm/Core/x/xBound.s", "__as__4xBoxFRC4xBox")

// xBoundGetSphere(xSphere&,const xBound&)
#pragma GLOBAL_ASM("asm/Core/x/xBound.s", "xBoundGetSphere__FR7xSphereRC6xBound")

// xsqrt(float)
#pragma GLOBAL_ASM("asm/Core/x/xBound.s", "xsqrt__Ff")

// xBoundSphereHitsOBB(const xSphere*,const xBox*,const xMat4x3*,xCollis*)
#pragma GLOBAL_ASM("asm/Core/x/xBound.s",                                                          \
                   "xBoundSphereHitsOBB__FPC7xSpherePC4xBoxPC7xMat4x3P7xCollis")

// xBoundHitsBound(const xBound*,const xBound*,xCollis*)
#pragma GLOBAL_ASM("asm/Core/x/xBound.s", "xBoundHitsBound__FPC6xBoundPC6xBoundP7xCollis")

// xBoundOBBIsectRay(const xBox*,const xMat4x3*,const xRay3*,xIsect*)
#pragma GLOBAL_ASM("asm/Core/x/xBound.s", "xBoundOBBIsectRay__FPC4xBoxPC7xMat4x3PC5xRay3P6xIsect")

// xRayHitsBound(const xRay3*,const xBound*,xCollis*)
#pragma GLOBAL_ASM("asm/Core/x/xBound.s", "xRayHitsBound__FPC5xRay3PC6xBoundP7xCollis")

// xSphereHitsBound(const xSphere*,const xBound*,xCollis*)
#pragma GLOBAL_ASM("asm/Core/x/xBound.s", "xSphereHitsBound__FPC7xSpherePC6xBoundP7xCollis")

// xVecHitsBound(const xVec3*,const xBound*,xCollis*)
#pragma GLOBAL_ASM("asm/Core/x/xBound.s", "xVecHitsBound__FPC5xVec3PC6xBoundP7xCollis")

// xBoundDraw(const xBound*)
#pragma GLOBAL_ASM("asm/Core/x/xBound.s", "xBoundDraw__FPC6xBound")

// xQuickCullForBound(xQCData*,const xBound*)
#pragma GLOBAL_ASM("asm/Core/x/xBound.s", "xQuickCullForBound__FP7xQCDataPC6xBound")

// xMat4x3Toworld(xVec3*,const xMat4x3*,const xVec3*)
#pragma GLOBAL_ASM("asm/Core/x/xBound.s", "xMat4x3Toworld__FP5xVec3PC7xMat4x3PC5xVec3")

// xMat3x3RMulVec(xVec3*,const xMat3x3*,const xVec3*)
namespace
{
#pragma GLOBAL_ASM("asm/Core/x/xBound.s", "xMat3x3RMulVec__FP5xVec3PC7xMat3x3PC5xVec3")
}

// xMat4x3Tolocal(xVec3*,const xMat4x3*,const xVec3*)
#pragma GLOBAL_ASM("asm/Core/x/xBound.s", "xMat4x3Tolocal__FP5xVec3PC7xMat4x3PC5xVec3")

// xVec3SMul(xVec3*,const xVec3*,float)
#pragma GLOBAL_ASM("asm/Core/x/xBound.s", "xVec3SMul__FP5xVec3PC5xVec3f")

// xVec3Add(xVec3*,const xVec3*,const xVec3*)
#pragma GLOBAL_ASM("asm/Core/x/xBound.s", "xVec3Add__FP5xVec3PC5xVec3PC5xVec3")

// xVec3::assign(float,float,float)
#pragma GLOBAL_ASM("asm/Core/x/xBound.s", "assign__5xVec3Ffff")

// xVec3::length2() const
#pragma GLOBAL_ASM("asm/Core/x/xBound.s", "length2__5xVec3CFv")

// xVec3::operator *(float) const
#pragma GLOBAL_ASM("asm/Core/x/xBound.s", "__ml__5xVec3CFf")

// xVec3::operator *=(float)
#pragma GLOBAL_ASM("asm/Core/x/xBound.s", "__amu__5xVec3Ff")

// xVec3::length() const
#pragma GLOBAL_ASM("asm/Core/x/xBound.s", "length__5xVec3CFv")

// xVec3::operator -(const xVec3&) const
#pragma GLOBAL_ASM("asm/Core/x/xBound.s", "__mi__5xVec3CFRC5xVec3")

// xVec3::operator -=(const xVec3&)
#pragma GLOBAL_ASM("asm/Core/x/xBound.s", "__ami__5xVec3FRC5xVec3")

// xVec3::operator =(const xVec3&)
#pragma GLOBAL_ASM("asm/Core/x/xBound.s", "__as__5xVec3FRC5xVec3")

// xSphere::operator =(const xSphere&)
#pragma GLOBAL_ASM("asm/Core/x/xBound.s", "__as__7xSphereFRC7xSphere")

// xDrawBox(const xBox*)
#pragma GLOBAL_ASM("asm/Core/x/xBound.s", "xDrawBox__FPC4xBox")

// xDrawOBB(const xBox*,const xMat4x3*)
#pragma GLOBAL_ASM("asm/Core/x/xBound.s", "xDrawOBB__FPC4xBoxPC7xMat4x3")

// xDrawSphere2(const xSphere*,unsigned int)
#pragma GLOBAL_ASM("asm/Core/x/xBound.s", "xDrawSphere2__FPC7xSphereUi")
