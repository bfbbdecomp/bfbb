#include "zEntTeleportBox.h"

#include <types.h>

// func_8012C0A8
#pragma GLOBAL_ASM("asm/Game/zEntTeleportBox.s", "VecFromAngle__FfP5xVec3")

// func_8012C130
#pragma GLOBAL_ASM("asm/Game/zEntTeleportBox.s", "OpenCheck__FP15xAnimTransitionP11xAnimSinglePv")

// func_8012C148
#pragma GLOBAL_ASM("asm/Game/zEntTeleportBox.s", "JumpInCheck__FP15xAnimTransitionP11xAnimSinglePv")

// func_8012C15C
#pragma GLOBAL_ASM("asm/Game/zEntTeleportBox.s", "JumpInCB__FP15xAnimTransitionP11xAnimSinglePv")

// func_8012C16C
#pragma GLOBAL_ASM("asm/Game/zEntTeleportBox.s", "JumpOutCheck__FP15xAnimTransitionP11xAnimSinglePv")

// func_8012C180
#pragma GLOBAL_ASM("asm/Game/zEntTeleportBox.s", "JumpOutCB__FP15xAnimTransitionP11xAnimSinglePv")

// func_8012C190
#pragma GLOBAL_ASM("asm/Game/zEntTeleportBox.s", "JItoOCheck__FP15xAnimTransitionP11xAnimSinglePv")

// func_8012C1A4
#pragma GLOBAL_ASM("asm/Game/zEntTeleportBox.s", "JItoOCB__FP15xAnimTransitionP11xAnimSinglePv")

// func_8012C1B8
#pragma GLOBAL_ASM("asm/Game/zEntTeleportBox.s", "JOtoOCheck__FP15xAnimTransitionP11xAnimSinglePv")

// func_8012C1CC
#pragma GLOBAL_ASM("asm/Game/zEntTeleportBox.s", "JOtoOCB__FP15xAnimTransitionP11xAnimSinglePv")

// func_8012C1DC
#pragma GLOBAL_ASM("asm/Game/zEntTeleportBox.s", "CtoOCheck__FP15xAnimTransitionP11xAnimSinglePv")

// func_8012C230
#pragma GLOBAL_ASM("asm/Game/zEntTeleportBox.s", "CtoOCB__FP15xAnimTransitionP11xAnimSinglePv")

// func_8012C2B0
#pragma GLOBAL_ASM("asm/Game/zEntTeleportBox.s", "JumpInEffectPlrInvisibleCB__FUiP17xAnimActiveEffectP11xAnimSinglePv")

// func_8012C2E4
#pragma GLOBAL_ASM("asm/Game/zEntTeleportBox.s", "JumpInEffectPlrTeleportCB__FUiP17xAnimActiveEffectP11xAnimSinglePv")

// func_8012C2F4
#pragma GLOBAL_ASM("asm/Game/zEntTeleportBox.s", "JumpInEffectJIAnimCB__FUiP17xAnimActiveEffectP11xAnimSinglePv")

// func_8012C304
#pragma GLOBAL_ASM("asm/Game/zEntTeleportBox.s", "CtoOEffectTboxEnableCB__FUiP17xAnimActiveEffectP11xAnimSinglePv")

// func_8012C320
#pragma GLOBAL_ASM("asm/Game/zEntTeleportBox.s", "JumpOutEffectPlrVisibleCB__FUiP17xAnimActiveEffectP11xAnimSinglePv")

// func_8012C35C
#pragma GLOBAL_ASM("asm/Game/zEntTeleportBox.s", "JumpOutEffectPlrEjectCB__FUiP17xAnimActiveEffectP11xAnimSinglePv")

// func_8012C3BC
#pragma GLOBAL_ASM("asm/Game/zEntTeleportBox.s", "JumpOutEffectJOAnimCB__FUiP17xAnimActiveEffectP11xAnimSinglePv")

// func_8012C3CC
#pragma GLOBAL_ASM("asm/Game/zEntTeleportBox.s", "zEntTeleportBox_Init__FR5xBaseR9xDynAssetUl")

// func_8012C3EC
#pragma GLOBAL_ASM("asm/Game/zEntTeleportBox.s", "zEntTeleportBox_Init__FP16_zEntTeleportBoxP14teleport_asset")

// func_8012CDD4
#pragma GLOBAL_ASM("asm/Game/zEntTeleportBox.s", "zEntTeleportBox_InitAll__Fv")

// func_8012CDE0
#pragma GLOBAL_ASM("asm/Game/zEntTeleportBox.s", "zEntTeleportBox_Setup__FP16_zEntTeleportBox")

// func_8012CFF8
#pragma GLOBAL_ASM("asm/Game/zEntTeleportBox.s", "zEntTeleportBox_Update__FP4xEntP6xScenef")

// func_8012D610
#pragma GLOBAL_ASM("asm/Game/zEntTeleportBox.s", "zEntTeleportBox_Save__FP16_zEntTeleportBoxP7xSerial")

// func_8012D67C
#pragma GLOBAL_ASM("asm/Game/zEntTeleportBox.s", "zEntTeleportBox_Load__FP16_zEntTeleportBoxP7xSerial")

// func_8012D6F4
#pragma GLOBAL_ASM("asm/Game/zEntTeleportBox.s", "zEntTeleportBox_Open__FP16_zEntTeleportBox")

// func_8012D70C
#pragma GLOBAL_ASM("asm/Game/zEntTeleportBox.s", "zEntTeleportBox_Close__FP16_zEntTeleportBox")

// func_8012D724
#pragma GLOBAL_ASM("asm/Game/zEntTeleportBox.s", "zEntTeleportBox_isOpen__FP16_zEntTeleportBox")

// func_8012D750
#pragma GLOBAL_ASM("asm/Game/zEntTeleportBox.s", "zEntTeleportBox_isClosed__FP16_zEntTeleportBox")

// func_8012D778
#pragma GLOBAL_ASM("asm/Game/zEntTeleportBox.s", "zEntTeleportBox_playerIn__Fv")

// func_8012D780
#pragma GLOBAL_ASM("asm/Game/zEntTeleportBox.s", "zEntTeleportBoxEventCB__FP5xBaseP5xBaseUiPCfP5xBase")
