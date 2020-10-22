#include "iAnim.h"

#include <types.h>

// iAnimInit()
#pragma GLOBAL_ASM("asm/Core/p2/iAnim.s", "iAnimInit__Fv")

// iAnimEval(void*,float,unsigned int,xVec3*,xQuat*)
#pragma GLOBAL_ASM("asm/Core/p2/iAnim.s", "iAnimEval__FPvfUiP5xVec3P5xQuat")

// iAnimDuration(void*)
#pragma GLOBAL_ASM("asm/Core/p2/iAnim.s", "iAnimDuration__FPv")

// iAnimBoneCount(void*)
#pragma GLOBAL_ASM("asm/Core/p2/iAnim.s", "iAnimBoneCount__FPv")

// iAnimBlend(float,float,unsigned short*,float*,unsigned int,xVec3*,xQuat*,xVec3*,xQuat*,xVec3*,xQuat*)
#pragma GLOBAL_ASM("asm/Core/p2/iAnim.s", "iAnimBlend__FffPUsPfUiP5xVec3P5xQuatP5xVec3P5xQuatP5xVec3P5xQuat")

// RtQuat::operator =(const RtQuat&)
#pragma GLOBAL_ASM("asm/Core/p2/iAnim.s", "__as__6RtQuatFRC6RtQuat")
