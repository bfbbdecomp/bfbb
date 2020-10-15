#include "xMath.h"

#include <types.h>

// xMathInit()
#pragma GLOBAL_ASM("asm/Core/x/xMath.s", "xMathInit__Fv")

// xMathExit()
#pragma GLOBAL_ASM("asm/Core/x/xMath.s", "xMathExit__Fv")

// xatof(const char*)
#pragma GLOBAL_ASM("asm/Core/x/xMath.s", "xatof__FPCc")

// xsrand(unsigned int)
#pragma GLOBAL_ASM("asm/Core/x/xMath.s", "xsrand__FUi")

// xrand()
#pragma GLOBAL_ASM("asm/Core/x/xMath.s", "xrand__Fv")

// xurand()
#pragma GLOBAL_ASM("asm/Core/x/xMath.s", "xurand__Fv")

// xMathSolveQuadratic(float,float,float,float*,float*)
#pragma GLOBAL_ASM("asm/Core/x/xMath.s", "xMathSolveQuadratic__FfffPfPf")

// xMathSolveCubic(float,float,float,float,float*,float*,float*)
#pragma GLOBAL_ASM("asm/Core/x/xMath.s", "xMathSolveCubic__FffffPfPfPf")

// xAngleClamp(float)
#pragma GLOBAL_ASM("asm/Core/x/xMath.s", "xAngleClamp__Ff")

// xAngleClampFast(float)
#pragma GLOBAL_ASM("asm/Core/x/xMath.s", "xAngleClampFast__Ff")

// xDangleClamp(float)
#pragma GLOBAL_ASM("asm/Core/x/xMath.s", "xDangleClamp__Ff")

// xAccelMove(float&,float&,float,float,float,float)
#pragma GLOBAL_ASM("asm/Core/x/xMath.s", "xAccelMove__FRfRfffff")

// xAccelMoveTime(float,float,float,float)
#pragma GLOBAL_ASM("asm/Core/x/xMath.s", "xAccelMoveTime__Fffff")

// xAccelMove(float&,float&,float,float,float)
#pragma GLOBAL_ASM("asm/Core/x/xMath.s", "xAccelMove__FRfRffff")

// xAccelStop(float&,float&,float,float)
#pragma GLOBAL_ASM("asm/Core/x/xMath.s", "xAccelStop__FRfRfff")

// xFuncPiece_Eval(xFuncPiece*,float,xFuncPiece**)
#pragma GLOBAL_ASM("asm/Core/x/xMath.s", "xFuncPiece_Eval__FP10xFuncPiecefPP10xFuncPiece")

// xFuncPiece_EndPoints(xFuncPiece*,float,float,float,float)
#pragma GLOBAL_ASM("asm/Core/x/xMath.s", "xFuncPiece_EndPoints__FP10xFuncPieceffff")

// xFuncPiece_ShiftPiece(xFuncPiece*,xFuncPiece*,float)
#pragma GLOBAL_ASM("asm/Core/x/xMath.s", "xFuncPiece_ShiftPiece__FP10xFuncPieceP10xFuncPiecef")
