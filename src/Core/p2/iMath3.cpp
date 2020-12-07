#include "iMath3.h"
#include "../x/xVec3Inlines.h"
#include <types.h>

// func_800C4F18
#if 0
#pragma GLOBAL_ASM("asm/Core/p2/iMath3.s", "iMath3Init__Fv")
#else
void iMath3Init(){

}
#endif
// func_800C4F1C
#if 0
#pragma GLOBAL_ASM("asm/Core/p2/iMath3.s", "iSphereIsectVec__FPC7xSpherePC5xVec3P6xIsect")
#else
void iSphereIsectVec(const xSphere *param_1,const xVec3 *param_2,xIsect *param_3)

{
    #if 0
  double dVar1;
  xVec3Sub(&param_3.normal,param_2,&param_1.center);
  dVar1 = (double)xVec3Length(&param_3.normal);
  param_3.normal = (float)dVar1;
  param_3.penned = *(float*)(void*)&param_3.normal - param_1.r;
  return;
  #else

  double dVar1;
  
  xVec3Sub((xVec3 *)(param_3 + 0x1c),param_2,(xVec3 *)param_1);
  dVar1 = (double)xVec3Length((const xVec3 *)(param_3 + 0x1c));
  *(float *)(param_3 + 0x28) = (float)dVar1;
  *(float *)(param_3 + 4) = *(float *)(param_3 + 0x28) - *(float *)(param_1 + 0xc);
  return;


  #endif
}


#endif
// func_800C4F78
#pragma GLOBAL_ASM("asm/Core/p2/iMath3.s", "iSphereIsectRay__FPC7xSpherePC5xRay3P6xIsect")

// func_800C5154
#pragma GLOBAL_ASM("asm/Core/p2/iMath3.s", "iSphereIsectSphere__FPC7xSpherePC7xSphereP6xIsect")

// func_800C51D0
#pragma GLOBAL_ASM("asm/Core/p2/iMath3.s", "iSphereInitBoundVec__FP7xSpherePC5xVec3")

// func_800C5204
#pragma GLOBAL_ASM("asm/Core/p2/iMath3.s", "iSphereBoundVec__FP7xSpherePC7xSpherePC5xVec3")

// func_800C5318
#pragma GLOBAL_ASM("asm/Core/p2/iMath3.s", "iCylinderIsectVec__FPC9xCylinderPC5xVec3P6xIsect")

// func_800C53B0
#pragma GLOBAL_ASM("asm/Core/p2/iMath3.s", "iBoxVecDist__FPC4xBoxPC5xVec3P6xIsect")

// func_800C5B2C
#pragma GLOBAL_ASM("asm/Core/p2/iMath3.s", "iBoxIsectVec__FPC4xBoxPC5xVec3P6xIsect")

// func_800C5BB0
#pragma GLOBAL_ASM("asm/Core/p2/iMath3.s", "ClipPlane__FffPfPf")

// func_800C5C44
#pragma GLOBAL_ASM("asm/Core/p2/iMath3.s", "ClipBox__FPC5xVec3PC5xVec3PC5xVec3PfPf")

// func_800C5D78
#pragma GLOBAL_ASM("asm/Core/p2/iMath3.s", "iBoxIsectRay__FPC4xBoxPC5xRay3P6xIsect")

// func_800C5F44
#pragma GLOBAL_ASM("asm/Core/p2/iMath3.s", "iBoxIsectSphere__FPC4xBoxPC7xSphereP6xIsect")

// func_800C61E0
#pragma GLOBAL_ASM("asm/Core/p2/iMath3.s", "iBoxInitBoundVec__FP4xBoxPC5xVec3")

// func_800C6228
#pragma GLOBAL_ASM("asm/Core/p2/iMath3.s", "iBoxBoundVec__FP4xBoxPC4xBoxPC5xVec3")

// func_800C6308
#pragma GLOBAL_ASM("asm/Core/p2/iMath3.s", "xVec2Dist__Fffff")

// func_800C6338
#pragma GLOBAL_ASM("asm/Core/p2/iMath3.s", "xVec2Dot__FPC5xVec2PC5xVec2")

// func_800C6354
#pragma GLOBAL_ASM("asm/Core/p2/iMath3.s", "xVec2Init__FP5xVec2ff")
