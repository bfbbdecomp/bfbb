#include "xParGroup.h"

#include <types.h>

// xParGroupInit(xParGroup*)
#pragma GLOBAL_ASM("asm/Core/x/xParGroup.s", "xParGroupInit__FP9xParGroup")

// xParGroupRegisterInit()
#pragma GLOBAL_ASM("asm/Core/x/xParGroup.s", "xParGroupRegisterInit__Fv")

// xParGroupSetAging(xParGroup*,int)
#pragma GLOBAL_ASM("asm/Core/x/xParGroup.s", "xParGroupSetAging__FP9xParGroupi")

// xParGroupSetBack2Life(xParGroup*,int)
#pragma GLOBAL_ASM("asm/Core/x/xParGroup.s", "xParGroupSetBack2Life__FP9xParGroupi")

// xParGroupSetVisibility(xParGroup*,int)
#pragma GLOBAL_ASM("asm/Core/x/xParGroup.s", "xParGroupSetVisibility__FP9xParGroupi")

// xParGroupSetPriority(xParGroup*,unsigned char)
#pragma GLOBAL_ASM("asm/Core/x/xParGroup.s", "xParGroupSetPriority__FP9xParGroupUc")

// xParGroupRegister(xParGroup*)
#pragma GLOBAL_ASM("asm/Core/x/xParGroup.s", "xParGroupRegister__FP9xParGroup")

// xParGroupUnregister(xParGroup*)
#pragma GLOBAL_ASM("asm/Core/x/xParGroup.s", "xParGroupUnregister__FP9xParGroup")

// xParGroupSetActive(xParGroup*,unsigned int)
#pragma GLOBAL_ASM("asm/Core/x/xParGroup.s", "xParGroupSetActive__FP9xParGroupUi")

// xParGroupKillAllParticles(xParGroup*)
#pragma GLOBAL_ASM("asm/Core/x/xParGroup.s", "xParGroupKillAllParticles__FP9xParGroup")

// xParGroupAnimate(xParGroup*,float)
#pragma GLOBAL_ASM("asm/Core/x/xParGroup.s", "xParGroupAnimate__FP9xParGroupf")

// xParGroupAddParP(xParGroup*,xPar*)
#pragma GLOBAL_ASM("asm/Core/x/xParGroup.s", "xParGroupAddParP__FP9xParGroupP4xPar")

// xParGroupAddPar(xParGroup*)
#pragma GLOBAL_ASM("asm/Core/x/xParGroup.s", "xParGroupAddPar__FP9xParGroup")

// xParGroupKillPar(xParGroup*,xPar*)
#pragma GLOBAL_ASM("asm/Core/x/xParGroup.s", "xParGroupKillPar__FP9xParGroupP4xPar")

// xParGroupAddParToDeadList(xParGroup*,xPar*)
#pragma GLOBAL_ASM("asm/Core/x/xParGroup.s", "xParGroupAddParToDeadList__FP9xParGroupP4xPar")
