#include "iMath3.h"
#include <types.h>
// func_800C4F18
void iMath3Init(){

}
// func_800C4F1C
void iSphereIsectVec(const xSphere *param_1,const xVec3 *param_2,xIsect *param_3)
{
  float fVar1;
  xVec3Sub(&param_3->norm,param_2,&param_1->center);
  fVar1 = xVec3Length(&param_3->norm);
  param_3->dist = (float)fVar1;
  param_3->penned = param_3->dist - param_1->r;
  return;
}
// func_800C4F78
#if 1
#pragma GLOBAL_ASM("asm/Core/p2/iMath3.s", "iSphereIsectRay__FPC7xSpherePC5xRay3P6xIsect")
#else
void iSphereIsectRay(const xSphere * o, const xRay3 * r, xIsect * isct){
  #if 0
  #else
  int unaff_r2;
  int iVar1;
  //undefined4 in_GQR0;
  float32 in_GQR0;
  double dVar2;
  //undefined8 in_f30;
  float32 in_f30;
  double dVar3;
  //undefined8 in_f31;
  float32 in_f31;
  double dVar4;
  float local_38;
  float local_34 [2];
  //undefined auStack24 [16];
  //undefined auStack8 [8];
    float32 auStack24 [16];
  float32 auStack8 [8];
  __psq_st0(auStack8,(int)((unsigned long long)in_f31 >> 0x20),in_GQR0);
  __psq_st1(auStack8,(int)in_f31,in_GQR0);
  __psq_st0(auStack24,(int)((unsigned long long)in_f30 >> 0x20),in_GQR0);
  __psq_st1(auStack24,(int)in_f30,in_GQR0);
  if ((r->flags & 0x400) == 0) {
    r->min_t = *(float32 *)(unaff_r2 + -0x68c4);
  }
  if ((r->flags & 0x800) == 0) {
    r->max_t = *(float32 *)(unaff_r2 + -0x68c0);
  }
  xVec3Sub((xVec3 *)(isct + 0x1c),(xVec3 *)r,(xVec3 *)o);
  dVar2 = (double)xVec3Dot((xVec3 *)(isct + 0x1c),(xVec3 *)(isct + 0x1c));
  dVar3 = (double)(float)(dVar2 - (double)(*(float *)(o + 0xc) * *(float *)(o + 0xc)));
  dVar2 = (double)xVec3Dot((xVec3 *)(isct + 0x1c),(xVec3 *)(r + 0xc));
  dVar4 = (double)(float)((double)*(float *)(unaff_r2 + -0x68b8) * dVar2);
  dVar2 = (double)xVec3Dot((xVec3 *)(r + 0xc),(xVec3 *)(r + 0xc));
  iVar1 = xMathSolveQuadratic((float)dVar2,(float)dVar4,(float)dVar3,local_34,&local_38);
  if (iVar1 == 0) {
    isct->penned = (float32)(unaff_r2 + -0x68c0);
    isct->contained = (float32)(unaff_r2 + -0x68c0);
  }
  else {
    if (iVar1 == 1) {
      if ((local_34[0] < *(float *)(r + 0x18)) || (*(float *)(r + 0x1c) < local_34[0]))
      {
        *(float *)(isct + 0x28) = local_34[0];
        *(float32 *)(isct + 4) = *(float32 *)(unaff_r2 + -0x68c0);
        *(float32 *)(isct + 8) = *(float32 *)(unaff_r2 + -0x68c0);
      }
      else {
        *(float *)(isct + 0x28) = local_34[0];
        *(float32 *)(isct + 4) = *(float32 *)(unaff_r2 + -0x68b4);
        *(float32 *)(isct + 8) = *(float32 *)(unaff_r2 + -0x68c0);
      }
    }
    else {
      if (*(float *)(r + 0x18) <= local_34[0]) {
        if (*(float *)(r + 0x1c) < local_34[0]) {
          *(float *)(isct + 0x28) = local_34[0];
          *(float32 *)(isct + 4) = *(float32 *)(unaff_r2 + -0x68c0);
          *(float32 *)(isct + 8) = *(float32 *)(unaff_r2 + -0x68c0);
        }
        else {
          *(float *)(isct + 0x28) = local_34[0];
          *(float32 *)(isct + 4) = *(float32 *)(unaff_r2 + -0x68b4);
          *(float32 *)(isct + 8) = *(float32 *)(unaff_r2 + -0x68c0);
        }
      }
      else {
        if (*(float *)(r + 0x18) <= local_38) {
          *(float *)(isct + 0x28) = local_38;
          *(float32 *)(isct + 4) = *(float32 *)(unaff_r2 + -0x68b4);
          *(float32 *)(isct + 8) = *(float32 *)(unaff_r2 + -0x68b4);
        }
        else {
          *(float *)(isct + 0x28) = local_38;
          *(float32 *)(isct + 4) = *(float32 *)(unaff_r2 + -0x68c0);
          *(float32 *)(isct + 8) = *(float32 *)(unaff_r2 + -0x68c0);
        }
      }
    }
  }
  __psq_l0(auStack8,in_GQR0);
  __psq_l1(auStack8,in_GQR0);
  __psq_l0(auStack24,in_GQR0);
  __psq_l1(auStack24,in_GQR0);
  return;
  #endif
}
#endif
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
