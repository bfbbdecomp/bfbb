#include "xSpline.h"

#include <types.h>

// Tridiag_Solve(float*,float*,float*,xVec3*,xVec3*,int)
#pragma GLOBAL_ASM("asm/Core/x/xSpline.s", "Tridiag_Solve__FPfPfPfP5xVec3P5xVec3i")

// Interpolate_Bspline(xVec3*,xVec3*,float*,unsigned int)
#pragma GLOBAL_ASM("asm/Core/x/xSpline.s", "Interpolate_Bspline__FP5xVec3P5xVec3PfUi")

// ArcLength3(xCoef3*,double,double)
#pragma GLOBAL_ASM("asm/Core/x/xSpline.s", "ArcLength3__FP6xCoef3dd")

#pragma GLOBAL_ASM("asm/Core/x/xSpline.s", "sqrt")

// EvalCoef3(xCoef3*,float,unsigned int,xVec3*)
#pragma GLOBAL_ASM("asm/Core/x/xSpline.s", "EvalCoef3__FP6xCoef3fUiP5xVec3")

// BasisToCoef3(xCoef3*,float (*)[4],xVec3*,xVec3*,xVec3*,xVec3*)
#pragma GLOBAL_ASM("asm/Core/x/xSpline.s", "BasisToCoef3__FP6xCoef3PA4_fP5xVec3P5xVec3P5xVec3P5xVec3")

// CoefToUnity3(xCoef3*,xCoef3*,float,float)
#pragma GLOBAL_ASM("asm/Core/x/xSpline.s", "CoefToUnity3__FP6xCoef3P6xCoef3ff")

// BasisBspline(float (*)[4],float*)
#pragma GLOBAL_ASM("asm/Core/x/xSpline.s", "BasisBspline__FPA4_fPf")

// ClampBspline(xSpline3*,float)
#pragma GLOBAL_ASM("asm/Core/x/xSpline.s", "ClampBspline__FP8xSpline3f")

// SegBspline(xSpline3*,float)
#pragma GLOBAL_ASM("asm/Core/x/xSpline.s", "SegBspline__FP8xSpline3f")

// EvalBspline3(xSpline3*,float,unsigned int,xVec3*)
#pragma GLOBAL_ASM("asm/Core/x/xSpline.s", "EvalBspline3__FP8xSpline3fUiP5xVec3")

// CoefSeg3(xSpline3*,unsigned int,xCoef3*)
#pragma GLOBAL_ASM("asm/Core/x/xSpline.s", "CoefSeg3__FP8xSpline3UiP6xCoef3")

// xSpline3_EvalSeg(xSpline3*,float,unsigned int,xVec3*)
#pragma GLOBAL_ASM("asm/Core/x/xSpline.s", "xSpline3_EvalSeg__FP8xSpline3fUiP5xVec3")

// ArcEvalIterate(xSpline3*,float,unsigned int,xVec3*,unsigned int)
#pragma GLOBAL_ASM("asm/Core/x/xSpline.s", "ArcEvalIterate__FP8xSpline3fUiP5xVec3Ui")

// xSpline3_EvalArcApprox(xSpline3*,float,unsigned int,xVec3*)
#pragma GLOBAL_ASM("asm/Core/x/xSpline.s", "xSpline3_EvalArcApprox__FP8xSpline3fUiP5xVec3")

// xSpline3_ArcInit(xSpline3*,unsigned int)
#pragma GLOBAL_ASM("asm/Core/x/xSpline.s", "xSpline3_ArcInit__FP8xSpline3Ui")

// AllocSpline3(xVec3*,float*,unsigned int,unsigned int,unsigned int,unsigned int)
#pragma GLOBAL_ASM("asm/Core/x/xSpline.s", "AllocSpline3__FP5xVec3PfUiUiUiUi")

// xSpline3_Bezier(xVec3*,float*,unsigned int,unsigned int,xVec3*,xVec3*)
#pragma GLOBAL_ASM("asm/Core/x/xSpline.s", "xSpline3_Bezier__FP5xVec3PfUiUiP5xVec3P5xVec3")

// xSpline3_Update(xSpline3*)
#pragma GLOBAL_ASM("asm/Core/x/xSpline.s", "xSpline3_Update__FP8xSpline3")

// xSpline3_Catmullize(xSpline3*)
#pragma GLOBAL_ASM("asm/Core/x/xSpline.s", "xSpline3_Catmullize__FP8xSpline3")
