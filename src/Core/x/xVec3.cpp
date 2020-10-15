#include "xVec3.h"

#include <types.h>

// xVec3Normalize(xVec3*,const xVec3*)
#pragma GLOBAL_ASM("asm/Core/x/xVec3.s", "xVec3Normalize__FP5xVec3PC5xVec3")

// xVec3NormalizeFast(xVec3*,const xVec3*)
#pragma GLOBAL_ASM("asm/Core/x/xVec3.s", "xVec3NormalizeFast__FP5xVec3PC5xVec3")

// xVec3Copy(xVec3*,const xVec3*)
#pragma GLOBAL_ASM("asm/Core/x/xVec3.s", "xVec3Copy__FP5xVec3PC5xVec3")

// xVec3Dot(const xVec3*,const xVec3*)
#pragma GLOBAL_ASM("asm/Core/x/xVec3.s", "xVec3Dot__FPC5xVec3PC5xVec3")
