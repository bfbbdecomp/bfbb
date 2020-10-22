#include "xParCmd.h"

#include <types.h>

// xParCmdInit()
#pragma GLOBAL_ASM("asm/Core/x/xParCmd.s", "xParCmdInit__Fv")

// xParCmdRegister(unsigned int,unsigned int,void (*)(xParCmd*, xParGroup*, float))
#pragma GLOBAL_ASM("asm/Core/x/xParCmd.s", "xParCmdRegister__FUiUiPFP7xParCmdP9xParGroupf_v")

// xParCmdGetSize(unsigned int)
#pragma GLOBAL_ASM("asm/Core/x/xParCmd.s", "xParCmdGetSize__FUi")

// xParCmdGetUpdateFunc(unsigned int)
#pragma GLOBAL_ASM("asm/Core/x/xParCmd.s", "xParCmdGetUpdateFunc__FUi")

// xVec3LengthFast(float,float,float)
#pragma GLOBAL_ASM("asm/Core/x/xParCmd.s", "xVec3LengthFast__Ffff")

// xMat3x3RMulVec(xVec3*,const xMat3x3*,const xVec3*)
namespace {
#pragma GLOBAL_ASM("asm/Core/x/xParCmd.s", "xMat3x3RMulVec__FP5xVec3PC7xMat3x3PC5xVec3")
}
