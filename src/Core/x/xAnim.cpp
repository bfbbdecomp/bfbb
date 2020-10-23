#include "xAnim.h"

#include <types.h>

// func_800058E0
#pragma GLOBAL_ASM("asm/Core/x/xAnim.s", "_xSingleCompare__Fcc")

// func_80005950
#pragma GLOBAL_ASM("asm/Core/x/xAnim.s", "_xSingleCompare__FcPCc")

// func_800059B4
#pragma GLOBAL_ASM("asm/Core/x/xAnim.s", "_xCharIn__FcPCc")

// func_800059E4
#pragma GLOBAL_ASM("asm/Core/x/xAnim.s", "_xCheckAnimNameInner__FPCcPCciPcPiPi")

// func_80005F4C
#pragma GLOBAL_ASM("asm/Core/x/xAnim.s", "_xCheckAnimName__FPCcPCcPc")

// func_80005FDC
#pragma GLOBAL_ASM("asm/Core/x/xAnim.s", "xAnimInit__Fv")

// func_80006010
#pragma GLOBAL_ASM("asm/Core/x/xAnim.s", "xAnimTempTransitionInit__FUi")

// func_80006070
#pragma GLOBAL_ASM("asm/Core/x/xAnim.s", "xatan2__Fff")

// func_80006094
#pragma GLOBAL_ASM("asm/Core/x/xAnim.s", "atan2f__3stdFff")

// func_800060B8
#pragma GLOBAL_ASM("asm/Core/x/xAnim.s", "CalcRecipBlendMax__FPUs")

// func_8000615C
#pragma GLOBAL_ASM("asm/Core/x/xAnim.s", "StateHasTransition__FP10xAnimStateP15xAnimTransition")

// func_8000618C
#pragma GLOBAL_ASM("asm/Core/x/xAnim.s", "DefaultHasTransition__FP10xAnimStateP15xAnimTransitionPUi")

// func_800061F0
#pragma GLOBAL_ASM("asm/Core/x/xAnim.s", "DefaultOverride__FP10xAnimStateP15xAnimTransition")

// func_8000623C
#pragma GLOBAL_ASM("asm/Core/x/xAnim.s", "TransitionTimeInit__FP11xAnimSingleP15xAnimTransition")

// func_80006300
#pragma GLOBAL_ASM("asm/Core/x/xAnim.s", "xAnimFileNewBilinear__FPPvPCcUiPP9xAnimFileUiUi")

// func_80006568
#pragma GLOBAL_ASM("asm/Core/x/xAnim.s", "xAnimFileNew__FPvPCcUiPP9xAnimFile")

// func_80006598
#pragma GLOBAL_ASM("asm/Core/x/xAnim.s", "xAnimFileSetTime__FP9xAnimFileff")

// func_80006658
#pragma GLOBAL_ASM("asm/Core/x/xAnim.s", "xAnimFileEval__FP9xAnimFilefPfUiP5xVec3P5xQuatPf")

// func_80006B78
#pragma GLOBAL_ASM("asm/Core/x/xAnim.s", "floorf__3stdFf")

// func_80006B9C
#pragma GLOBAL_ASM("asm/Core/x/xAnim.s", "xAnimStateNewEffect__FP10xAnimStateUiffPFUiP17xAnimActiveEffectP11xAnimSinglePv_UiUi")

// func_80006C70
#pragma GLOBAL_ASM("asm/Core/x/xAnim.s", "xAnimTableNew__FPCcPP10xAnimTableUi")

// func_80006CFC
#pragma GLOBAL_ASM("asm/Core/x/xAnim.s", "xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState")

// func_80006D58
#pragma GLOBAL_ASM("asm/Core/x/xAnim.s", "xAnimTableNewState__FP10xAnimTablePCcUiUifPfPffPUsPvPFP9xAnimPlayP10xAnimState_vPFP10xAnimStateP11xAnimSinglePv_vPFP9xAnimPlayP5xQuatP5xVec3i_v")

// func_80006E90
#pragma GLOBAL_ASM("asm/Core/x/xAnim.s", "_xAnimTableAddTransitionHelper__FP10xAnimStateP15xAnimTransitionRUiRUiPP10xAnimState")

// func_80006F40
#pragma GLOBAL_ASM("asm/Core/x/xAnim.s", "_xAnimTableAddTransition__FP10xAnimTableP15xAnimTransitionPCcPCc")

// func_8000739C
#pragma GLOBAL_ASM("asm/Core/x/xAnim.s", "xAnimTableAddTransition__FP10xAnimTableP15xAnimTransitionPCc")

// func_800073C0
#pragma GLOBAL_ASM("asm/Core/x/xAnim.s", "xAnimTableNewTransition__FP10xAnimTablePCcPCcPFP15xAnimTransitionP11xAnimSinglePv_UiPFP15xAnimTransitionP11xAnimSinglePv_UiUiUiffUsUsfPUs")

// func_80007574
#pragma GLOBAL_ASM("asm/Core/x/xAnim.s", "xAnimTableAddFile__FP10xAnimTableP9xAnimFilePCc")

// func_80007618
#pragma GLOBAL_ASM("asm/Core/x/xAnim.s", "xAnimTableAddFileID__FP10xAnimTableP9xAnimFileUiUiUi")

// func_80007734
#pragma GLOBAL_ASM("asm/Core/x/xAnim.s", "xAnimTableGetStateID__FP10xAnimTableUi")

// func_8000775C
#pragma GLOBAL_ASM("asm/Core/x/xAnim.s", "xAnimTableGetState__FP10xAnimTablePCc")

// func_80007798
#pragma GLOBAL_ASM("asm/Core/x/xAnim.s", "EffectActiveInsert__FP11xAnimSingleP17xAnimActiveEffect")

// func_80007814
#pragma GLOBAL_ASM("asm/Core/x/xAnim.s", "__as__17xAnimActiveEffectFRC17xAnimActiveEffect")

// func_80007828
#pragma GLOBAL_ASM("asm/Core/x/xAnim.s", "EffectActiveRemove__FP17xAnimActiveEffectUiUi")

// func_800078A4
#pragma GLOBAL_ASM("asm/Core/x/xAnim.s", "EffectPlaying__FP11xAnimSingleP11xAnimEffect")

// func_800078EC
#pragma GLOBAL_ASM("asm/Core/x/xAnim.s", "EffectSingleStart__FP11xAnimSingle")

// func_80007A4C
#pragma GLOBAL_ASM("asm/Core/x/xAnim.s", "EffectSingleDuration__FP11xAnimSingle")

// func_80007B3C
#pragma GLOBAL_ASM("asm/Core/x/xAnim.s", "EffectSingleRun__FP11xAnimSingle")

// func_80007C68
#pragma GLOBAL_ASM("asm/Core/x/xAnim.s", "EffectSingleLoop__FP11xAnimSingle")

// func_80007D44
#pragma GLOBAL_ASM("asm/Core/x/xAnim.s", "EffectSingleStop__FP11xAnimSingle")

// func_80007E84
#pragma GLOBAL_ASM("asm/Core/x/xAnim.s", "StopUpdate__FP11xAnimSingle")

// func_80007EAC
#pragma GLOBAL_ASM("asm/Core/x/xAnim.s", "LoopUpdate__FP11xAnimSingle")

// func_80007F1C
#pragma GLOBAL_ASM("asm/Core/x/xAnim.s", "xAnimPlaySetState__FP11xAnimSingleP10xAnimStatef")

// func_8000804C
#pragma GLOBAL_ASM("asm/Core/x/xAnim.s", "SingleUpdate__FP11xAnimSinglef")

// func_80008728
#pragma GLOBAL_ASM("asm/Core/x/xAnim.s", "SingleEval__FP11xAnimSingleP5xVec3P5xQuat")

// func_8000880C
#pragma GLOBAL_ASM("asm/Core/x/xAnim.s", "xAnimPlaySetup__FP9xAnimPlayPvP10xAnimTableP14xModelInstance")

// func_800088EC
#pragma GLOBAL_ASM("asm/Core/x/xAnim.s", "xAnimPlayChooseTransition__FP9xAnimPlay")

// func_80008A44
#pragma GLOBAL_ASM("asm/Core/x/xAnim.s", "xAnimPlayStartTransition__FP9xAnimPlayP15xAnimTransition")

// func_80008C68
#pragma GLOBAL_ASM("asm/Core/x/xAnim.s", "xAnimPlayUpdate__FP9xAnimPlayf")

// func_80008D08
#pragma GLOBAL_ASM("asm/Core/x/xAnim.s", "xAnimPlayEval__FP9xAnimPlay")

// func_80008FB4
#pragma GLOBAL_ASM("asm/Core/x/xAnim.s", "xAnimPoolCB__FP8xMemPoolPv")

// func_800090BC
#pragma GLOBAL_ASM("asm/Core/x/xAnim.s", "xAnimPoolInit__FP8xMemPoolUiUiUiUi")

// func_800092D4
#pragma GLOBAL_ASM("asm/Core/x/xAnim.s", "xAnimPoolAlloc__FP8xMemPoolPvP10xAnimTableP14xModelInstance")

// func_80009330
#pragma GLOBAL_ASM("asm/Core/x/xAnim.s", "xAnimPoolFree__FP9xAnimPlay")

// func_800093B8
#pragma GLOBAL_ASM("asm/Core/x/xAnim.s", "xAnimFileRawTime__FP9xAnimFilef")
