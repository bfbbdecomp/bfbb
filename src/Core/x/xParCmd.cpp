#include "xParCmd.h"

#include <types.h>

// func_80036B8C
#pragma GLOBAL_ASM("asm/Core/x/xParCmd.s", "xParCmdInit__Fv")

// func_80036DC0
#pragma GLOBAL_ASM("asm/Core/x/xParCmd.s", "xParCmdRegister__FUiUiPFP7xParCmdP9xParGroupf_v")

// func_80036DE0
#pragma GLOBAL_ASM("asm/Core/x/xParCmd.s", "xParCmdGetSize__FUi")

// func_80036E2C
#pragma GLOBAL_ASM("asm/Core/x/xParCmd.s", "xParCmdGetUpdateFunc__FUi")

// func_80036E78
#pragma GLOBAL_ASM("asm/Core/x/xParCmd.s", "xParCmdKillSlow_Update__FP7xParCmdP9xParGroupf")

// func_80036F1C
#pragma GLOBAL_ASM("asm/Core/x/xParCmd.s", "xParCmdAge_Update__FP7xParCmdP9xParGroupf")

// func_80036F4C
#pragma GLOBAL_ASM("asm/Core/x/xParCmd.s", "xParCmdFollow_Update__FP7xParCmdP9xParGroupf")

// func_80037030
#pragma GLOBAL_ASM("asm/Core/x/xParCmd.s", "xParCmdOrbitPoint_Update__FP7xParCmdP9xParGroupf")

// func_80037114
#pragma GLOBAL_ASM("asm/Core/x/xParCmd.s", "xParCmdOrbitLine_Update__FP7xParCmdP9xParGroupf")

// func_80037228
#pragma GLOBAL_ASM("asm/Core/x/xParCmd.s", "xParCmdAccelerate_Update__FP7xParCmdP9xParGroupf")

// func_800372C4
#pragma GLOBAL_ASM("asm/Core/x/xParCmd.s", "xParCmdMove_Update__FP7xParCmdP9xParGroupf")

// func_80037338
#pragma GLOBAL_ASM("asm/Core/x/xParCmd.s", "xParCmdMoveRandom_Update__FP7xParCmdP9xParGroupf")

// func_80037414
#pragma GLOBAL_ASM("asm/Core/x/xParCmd.s", "xParCmdMoveRandomPar_Update__FP7xParCmdP9xParGroupf")

// func_800374B8
#pragma GLOBAL_ASM("asm/Core/x/xParCmd.s", "xParCmdScale3rdPolyReg_Update__FP7xParCmdP9xParGroupf")

// func_800374BC
#pragma GLOBAL_ASM("asm/Core/x/xParCmd.s", "xParCmdSmokeAlpha_Update__FP7xParCmdP9xParGroupf")

// func_800374C0
#pragma GLOBAL_ASM("asm/Core/x/xParCmd.s", "xParCmdScale_Update__FP7xParCmdP9xParGroupf")

// func_800374C4
#pragma GLOBAL_ASM("asm/Core/x/xParCmd.s", "xParCmdAlpha3rdPolyReg_Update__FP7xParCmdP9xParGroupf")

// func_800374C8
#pragma GLOBAL_ASM("asm/Core/x/xParCmd.s", "xParCmdRandomVelocityPar_Update__FP7xParCmdP9xParGroupf")

// func_800375BC
#pragma GLOBAL_ASM("asm/Core/x/xParCmd.s", "xParCmdApplyWind_Update__FP7xParCmdP9xParGroupf")

// func_80037608
#pragma GLOBAL_ASM("asm/Core/x/xParCmd.s", "xParCmdRotPar_Update__FP7xParCmdP9xParGroupf")

// func_80037780
#pragma GLOBAL_ASM("asm/Core/x/xParCmd.s", "xParCmdVelocityApply_Update__FP7xParCmdP9xParGroupf")

// func_800377C8
#pragma GLOBAL_ASM("asm/Core/x/xParCmd.s", "xParCmdRotateAround_Update__FP7xParCmdP9xParGroupf")

// func_800378F0
#pragma GLOBAL_ASM("asm/Core/x/xParCmd.s", "xParCmdTex_Update__FP7xParCmdP9xParGroupf")

// func_800378F4
#pragma GLOBAL_ASM("asm/Core/x/xParCmd.s", "xParCmdTexAnim_Update__FP7xParCmdP9xParGroupf")

// func_80037C98
#pragma GLOBAL_ASM("asm/Core/x/xParCmd.s", "xParCmdCollideFall_Update__FP7xParCmdP9xParGroupf")

// func_80037CF8
#pragma GLOBAL_ASM("asm/Core/x/xParCmd.s", "xParCmdCollideFallSticky_Update__FP7xParCmdP9xParGroupf")

// func_80037D7C
#pragma GLOBAL_ASM("asm/Core/x/xParCmd.s", "xParCmd_DampenSpeed_Update__FP7xParCmdP9xParGroupf")

// func_80037DEC
#pragma GLOBAL_ASM("asm/Core/x/xParCmd.s", "xParCmd_SizeInOut_Update__FP7xParCmdP9xParGroupf")

// func_80037F38
#pragma GLOBAL_ASM("asm/Core/x/xParCmd.s", "xParCmd_AlphaInOut_Update__FP7xParCmdP9xParGroupf")

// func_800380CC
#pragma GLOBAL_ASM("asm/Core/x/xParCmd.s", "xParCmd_Shaper_Update__FP7xParCmdP9xParGroupf")

// func_80038390
#pragma GLOBAL_ASM("asm/Core/x/xParCmd.s", "xVec3LengthFast__Ffff")

// func_800383C4
#pragma GLOBAL_ASM("asm/Core/x/xParCmd.s", "xMat3x3RMulVec__FP5xVec3PC7xMat3x3PC5xVec3")
