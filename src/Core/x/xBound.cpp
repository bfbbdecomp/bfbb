#include "xBound.h"

#include <types.h>

// func_8000A528
#pragma GLOBAL_ASM("asm/Core/x/xBound.s", "xBoundUpdate__FP6xBound")

// func_8000A5D0
#pragma GLOBAL_ASM("asm/Core/x/xBound.s", "xBoundGetBox__FR4xBoxRC6xBound")

// func_8000A690
#pragma GLOBAL_ASM("asm/Core/x/xBound.s", "__as__4xBoxFRC4xBox")

// func_8000A6C4
#pragma GLOBAL_ASM("asm/Core/x/xBound.s", "xBoundGetSphere__FR7xSphereRC6xBound")

// func_8000A7FC
#pragma GLOBAL_ASM("asm/Core/x/xBound.s", "xsqrt__Ff")

// func_8000A8A8
#pragma GLOBAL_ASM("asm/Core/x/xBound.s", "xBoundSphereHitsOBB__FPC7xSpherePC4xBoxPC7xMat4x3P7xCollis")

// func_8000A8C8
#pragma GLOBAL_ASM("asm/Core/x/xBound.s", "xBoundHitsBound__FPC6xBoundPC6xBoundP7xCollis")

// func_8000A9C0
#pragma GLOBAL_ASM("asm/Core/x/xBound.s", "xBoundOBBIsectRay__FPC4xBoxPC7xMat4x3PC5xRay3P6xIsect")

// func_8000ACE8
#pragma GLOBAL_ASM("asm/Core/x/xBound.s", "xRayHitsBound__FPC5xRay3PC6xBoundP7xCollis")

// func_8000ADA4
#pragma GLOBAL_ASM("asm/Core/x/xBound.s", "xSphereHitsBound__FPC7xSpherePC6xBoundP7xCollis")

// func_8000AE14
#pragma GLOBAL_ASM("asm/Core/x/xBound.s", "xVecHitsBound__FPC5xVec3PC6xBoundP7xCollis")

// func_8000AEDC
#pragma GLOBAL_ASM("asm/Core/x/xBound.s", "xBoundDraw__FPC6xBound")

// func_8000AF3C
#pragma GLOBAL_ASM("asm/Core/x/xBound.s", "xQuickCullForBound__FP7xQCDataPC6xBound")

// func_8000AF70
#pragma GLOBAL_ASM("asm/Core/x/xBound.s", "xMat4x3Toworld__FP5xVec3PC7xMat4x3PC5xVec3")

// func_8000AFD8
#pragma GLOBAL_ASM("asm/Core/x/xBound.s", "xMat3x3RMulVec__FP5xVec3PC7xMat3x3PC5xVec3")

// func_8000B03C
#pragma GLOBAL_ASM("asm/Core/x/xBound.s", "xMat4x3Tolocal__FP5xVec3PC7xMat4x3PC5xVec3")

// func_8000B090
#pragma GLOBAL_ASM("asm/Core/x/xBound.s", "xVec3SMul__FP5xVec3PC5xVec3f")

// func_8000B0B8
#pragma GLOBAL_ASM("asm/Core/x/xBound.s", "xVec3Add__FP5xVec3PC5xVec3PC5xVec3")

// func_8000B0EC
#pragma GLOBAL_ASM("asm/Core/x/xBound.s", "assign__5xVec3Ffff")

// func_8000B0FC
#pragma GLOBAL_ASM("asm/Core/x/xBound.s", "length2__5xVec3CFv")

// func_8000B120
#pragma GLOBAL_ASM("asm/Core/x/xBound.s", "__ml__5xVec3CFf")

// func_8000B180
#pragma GLOBAL_ASM("asm/Core/x/xBound.s", "__amu__5xVec3Ff")

// func_8000B1A8
#pragma GLOBAL_ASM("asm/Core/x/xBound.s", "length__5xVec3CFv")

// func_8000B1CC
#pragma GLOBAL_ASM("asm/Core/x/xBound.s", "__mi__5xVec3CFRC5xVec3")

// func_8000B230
#pragma GLOBAL_ASM("asm/Core/x/xBound.s", "__ami__5xVec3FRC5xVec3")

// func_8000B264
#pragma GLOBAL_ASM("asm/Core/x/xBound.s", "__as__5xVec3FRC5xVec3")

// func_8000B280
#pragma GLOBAL_ASM("asm/Core/x/xBound.s", "__as__7xSphereFRC7xSphere")

// func_8000B2A4
#pragma GLOBAL_ASM("asm/Core/x/xBound.s", "xDrawBox__FPC4xBox")

// func_8000B2A8
#pragma GLOBAL_ASM("asm/Core/x/xBound.s", "xDrawOBB__FPC4xBoxPC7xMat4x3")

// func_8000B2AC
#pragma GLOBAL_ASM("asm/Core/x/xBound.s", "xDrawSphere2__FPC7xSphereUi")
