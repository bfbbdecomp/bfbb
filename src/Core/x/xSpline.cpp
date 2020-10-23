#include "xSpline.h"

#include <types.h>

// func_800499E4
#pragma GLOBAL_ASM("asm/Core/x/xSpline.s", "Tridiag_Solve__FPfPfPfP5xVec3P5xVec3i")

// func_80049C20
#pragma GLOBAL_ASM("asm/Core/x/xSpline.s", "Interpolate_Bspline__FP5xVec3P5xVec3PfUi")

// func_80049E0C
#pragma GLOBAL_ASM("asm/Core/x/xSpline.s", "ArcLength3__FP6xCoef3dd")

// func_8004A020
#pragma GLOBAL_ASM("asm/Core/x/xSpline.s", "sqrt")

// func_8004A0B0
#pragma GLOBAL_ASM("asm/Core/x/xSpline.s", "EvalCoef3__FP6xCoef3fUiP5xVec3")

// func_8004A26C
#pragma GLOBAL_ASM("asm/Core/x/xSpline.s", "BasisToCoef3__FP6xCoef3PA4_fP5xVec3P5xVec3P5xVec3P5xVec3")

// func_8004A320
#pragma GLOBAL_ASM("asm/Core/x/xSpline.s", "CoefToUnity3__FP6xCoef3P6xCoef3ff")

// func_8004A3BC
#pragma GLOBAL_ASM("asm/Core/x/xSpline.s", "BasisBspline__FPA4_fPf")

// func_8004A5FC
#pragma GLOBAL_ASM("asm/Core/x/xSpline.s", "ClampBspline__FP8xSpline3f")

// func_8004A630
#pragma GLOBAL_ASM("asm/Core/x/xSpline.s", "SegBspline__FP8xSpline3f")

// func_8004A680
#pragma GLOBAL_ASM("asm/Core/x/xSpline.s", "EvalBspline3__FP8xSpline3fUiP5xVec3")

// func_8004A730
#pragma GLOBAL_ASM("asm/Core/x/xSpline.s", "CoefSeg3__FP8xSpline3UiP6xCoef3")

// func_8004A874
#pragma GLOBAL_ASM("asm/Core/x/xSpline.s", "xSpline3_EvalSeg__FP8xSpline3fUiP5xVec3")

// func_8004AA00
#pragma GLOBAL_ASM("asm/Core/x/xSpline.s", "ArcEvalIterate__FP8xSpline3fUiP5xVec3Ui")

// func_8004ACFC
#pragma GLOBAL_ASM("asm/Core/x/xSpline.s", "xSpline3_EvalArcApprox__FP8xSpline3fUiP5xVec3")

// func_8004AD44
#pragma GLOBAL_ASM("asm/Core/x/xSpline.s", "xSpline3_ArcInit__FP8xSpline3Ui")

// func_8004AEA0
#pragma GLOBAL_ASM("asm/Core/x/xSpline.s", "AllocSpline3__FP5xVec3PfUiUiUiUi")

// func_8004AFB0
#pragma GLOBAL_ASM("asm/Core/x/xSpline.s", "xSpline3_Bezier__FP5xVec3PfUiUiP5xVec3P5xVec3")

// func_8004B084
#pragma GLOBAL_ASM("asm/Core/x/xSpline.s", "xSpline3_Update__FP8xSpline3")

// func_8004B0E8
#pragma GLOBAL_ASM("asm/Core/x/xSpline.s", "xSpline3_Catmullize__FP8xSpline3")
