#include "xAnim.h"

#include <types.h>

// _xSingleCompare(char,char)
#pragma GLOBAL_ASM("asm/Core/x/xAnim.s", "_xSingleCompare__Fcc")

// _xSingleCompare(char,const char*)
#pragma GLOBAL_ASM("asm/Core/x/xAnim.s", "_xSingleCompare__FcPCc")

// _xCharIn(char,const char*)
#pragma GLOBAL_ASM("asm/Core/x/xAnim.s", "_xCharIn__FcPCc")

// _xCheckAnimNameInner(const char*,const char*,int,char*,int*,int*)
#pragma GLOBAL_ASM("asm/Core/x/xAnim.s", "_xCheckAnimNameInner__FPCcPCciPcPiPi")

// _xCheckAnimName(const char*,const char*,char*)
#pragma GLOBAL_ASM("asm/Core/x/xAnim.s", "_xCheckAnimName__FPCcPCcPc")

// xAnimInit()
#pragma GLOBAL_ASM("asm/Core/x/xAnim.s", "xAnimInit__Fv")

// xAnimTempTransitionInit(unsigned int)
#pragma GLOBAL_ASM("asm/Core/x/xAnim.s", "xAnimTempTransitionInit__FUi")

// xatan2(float,float)
#pragma GLOBAL_ASM("asm/Core/x/xAnim.s", "xatan2__Fff")

// std::atan2f(float,float)
#pragma GLOBAL_ASM("asm/Core/x/xAnim.s", "atan2f__3stdFff")

// CalcRecipBlendMax(unsigned short*)
#pragma GLOBAL_ASM("asm/Core/x/xAnim.s", "CalcRecipBlendMax__FPUs")

// StateHasTransition(xAnimState*,xAnimTransition*)
#pragma GLOBAL_ASM("asm/Core/x/xAnim.s", "StateHasTransition__FP10xAnimStateP15xAnimTransition")

// DefaultHasTransition(xAnimState*,xAnimTransition*,unsigned int*)
#pragma GLOBAL_ASM("asm/Core/x/xAnim.s", "DefaultHasTransition__FP10xAnimStateP15xAnimTransitionPUi")

// DefaultOverride(xAnimState*,xAnimTransition*)
#pragma GLOBAL_ASM("asm/Core/x/xAnim.s", "DefaultOverride__FP10xAnimStateP15xAnimTransition")

// TransitionTimeInit(xAnimSingle*,xAnimTransition*)
#pragma GLOBAL_ASM("asm/Core/x/xAnim.s", "TransitionTimeInit__FP11xAnimSingleP15xAnimTransition")

// xAnimFileNewBilinear(void**,const char*,unsigned int,xAnimFile**,unsigned int,unsigned int)
#pragma GLOBAL_ASM("asm/Core/x/xAnim.s", "xAnimFileNewBilinear__FPPvPCcUiPP9xAnimFileUiUi")

// xAnimFileNew(void*,const char*,unsigned int,xAnimFile**)
#pragma GLOBAL_ASM("asm/Core/x/xAnim.s", "xAnimFileNew__FPvPCcUiPP9xAnimFile")

// xAnimFileSetTime(xAnimFile*,float,float)
#pragma GLOBAL_ASM("asm/Core/x/xAnim.s", "xAnimFileSetTime__FP9xAnimFileff")

// xAnimFileEval(xAnimFile*,float,float*,unsigned int,xVec3*,xQuat*,float*)
#pragma GLOBAL_ASM("asm/Core/x/xAnim.s", "xAnimFileEval__FP9xAnimFilefPfUiP5xVec3P5xQuatPf")

// std::floorf(float)
#pragma GLOBAL_ASM("asm/Core/x/xAnim.s", "floorf__3stdFf")

// xAnimStateNewEffect(xAnimState*,unsigned int,float,float,unsigned int (*)(unsigned int, xAnimActiveEffect*, xAnimSingle*, void*),unsigned int)
#pragma GLOBAL_ASM("asm/Core/x/xAnim.s", "xAnimStateNewEffect__FP10xAnimStateUiffPFUiP17xAnimActiveEffectP11xAnimSinglePv_UiUi")

// xAnimTableNew(const char*,xAnimTable**,unsigned int)
#pragma GLOBAL_ASM("asm/Core/x/xAnim.s", "xAnimTableNew__FPCcPP10xAnimTableUi")

// xAnimDefaultBeforeEnter(xAnimPlay*,xAnimState*)
#pragma GLOBAL_ASM("asm/Core/x/xAnim.s", "xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState")

// xAnimTableNewState(xAnimTable*,const char*,unsigned int,unsigned int,float,float*,float*,float,unsigned short*,void*,void (*)(xAnimPlay*, xAnimState*),void (*)(xAnimState*, xAnimSingle*, void*),void (*)(xAnimPlay*, xQuat*, xVec3*, int))
#pragma GLOBAL_ASM("asm/Core/x/xAnim.s", "xAnimTableNewState__FP10xAnimTablePCcUiUifPfPffPUsPvPFP9xAnimPlayP10xAnimState_vPFP10xAnimStateP11xAnimSinglePv_vPFP9xAnimPlayP5xQuatP5xVec3i_v")

// _xAnimTableAddTransitionHelper(xAnimState*,xAnimTransition*,unsigned int&,unsigned int&,xAnimState**)
#pragma GLOBAL_ASM("asm/Core/x/xAnim.s", "_xAnimTableAddTransitionHelper__FP10xAnimStateP15xAnimTransitionRUiRUiPP10xAnimState")

// _xAnimTableAddTransition(xAnimTable*,xAnimTransition*,const char*,const char*)
#pragma GLOBAL_ASM("asm/Core/x/xAnim.s", "_xAnimTableAddTransition__FP10xAnimTableP15xAnimTransitionPCcPCc")

// xAnimTableAddTransition(xAnimTable*,xAnimTransition*,const char*)
#pragma GLOBAL_ASM("asm/Core/x/xAnim.s", "xAnimTableAddTransition__FP10xAnimTableP15xAnimTransitionPCc")

// xAnimTableNewTransition(xAnimTable*,const char*,const char*,unsigned int (*)(xAnimTransition*, xAnimSingle*, void*),unsigned int (*)(xAnimTransition*, xAnimSingle*, void*),unsigned int,unsigned int,float,float,unsigned short,unsigned short,float,unsigned short*)
#pragma GLOBAL_ASM("asm/Core/x/xAnim.s", "xAnimTableNewTransition__FP10xAnimTablePCcPCcPFP15xAnimTransitionP11xAnimSinglePv_UiPFP15xAnimTransitionP11xAnimSinglePv_UiUiUiffUsUsfPUs")

// xAnimTableAddFile(xAnimTable*,xAnimFile*,const char*)
#pragma GLOBAL_ASM("asm/Core/x/xAnim.s", "xAnimTableAddFile__FP10xAnimTableP9xAnimFilePCc")

// xAnimTableAddFileID(xAnimTable*,xAnimFile*,unsigned int,unsigned int,unsigned int)
#pragma GLOBAL_ASM("asm/Core/x/xAnim.s", "xAnimTableAddFileID__FP10xAnimTableP9xAnimFileUiUiUi")

// xAnimTableGetStateID(xAnimTable*,unsigned int)
#pragma GLOBAL_ASM("asm/Core/x/xAnim.s", "xAnimTableGetStateID__FP10xAnimTableUi")

// xAnimTableGetState(xAnimTable*,const char*)
#pragma GLOBAL_ASM("asm/Core/x/xAnim.s", "xAnimTableGetState__FP10xAnimTablePCc")

// EffectActiveInsert(xAnimSingle*,xAnimActiveEffect*)
#pragma GLOBAL_ASM("asm/Core/x/xAnim.s", "EffectActiveInsert__FP11xAnimSingleP17xAnimActiveEffect")

// xAnimActiveEffect::operator =(const xAnimActiveEffect&)
#pragma GLOBAL_ASM("asm/Core/x/xAnim.s", "__as__17xAnimActiveEffectFRC17xAnimActiveEffect")

// EffectActiveRemove(xAnimActiveEffect*,unsigned int,unsigned int)
#pragma GLOBAL_ASM("asm/Core/x/xAnim.s", "EffectActiveRemove__FP17xAnimActiveEffectUiUi")

// EffectPlaying(xAnimSingle*,xAnimEffect*)
#pragma GLOBAL_ASM("asm/Core/x/xAnim.s", "EffectPlaying__FP11xAnimSingleP11xAnimEffect")

// EffectSingleStart(xAnimSingle*)
#pragma GLOBAL_ASM("asm/Core/x/xAnim.s", "EffectSingleStart__FP11xAnimSingle")

// EffectSingleDuration(xAnimSingle*)
#pragma GLOBAL_ASM("asm/Core/x/xAnim.s", "EffectSingleDuration__FP11xAnimSingle")

// EffectSingleRun(xAnimSingle*)
#pragma GLOBAL_ASM("asm/Core/x/xAnim.s", "EffectSingleRun__FP11xAnimSingle")

// EffectSingleLoop(xAnimSingle*)
#pragma GLOBAL_ASM("asm/Core/x/xAnim.s", "EffectSingleLoop__FP11xAnimSingle")

// EffectSingleStop(xAnimSingle*)
#pragma GLOBAL_ASM("asm/Core/x/xAnim.s", "EffectSingleStop__FP11xAnimSingle")

// StopUpdate(xAnimSingle*)
#pragma GLOBAL_ASM("asm/Core/x/xAnim.s", "StopUpdate__FP11xAnimSingle")

// LoopUpdate(xAnimSingle*)
#pragma GLOBAL_ASM("asm/Core/x/xAnim.s", "LoopUpdate__FP11xAnimSingle")

// xAnimPlaySetState(xAnimSingle*,xAnimState*,float)
#pragma GLOBAL_ASM("asm/Core/x/xAnim.s", "xAnimPlaySetState__FP11xAnimSingleP10xAnimStatef")

// SingleUpdate(xAnimSingle*,float)
#pragma GLOBAL_ASM("asm/Core/x/xAnim.s", "SingleUpdate__FP11xAnimSinglef")

// SingleEval(xAnimSingle*,xVec3*,xQuat*)
#pragma GLOBAL_ASM("asm/Core/x/xAnim.s", "SingleEval__FP11xAnimSingleP5xVec3P5xQuat")

// xAnimPlaySetup(xAnimPlay*,void*,xAnimTable*,xModelInstance*)
#pragma GLOBAL_ASM("asm/Core/x/xAnim.s", "xAnimPlaySetup__FP9xAnimPlayPvP10xAnimTableP14xModelInstance")

// xAnimPlayChooseTransition(xAnimPlay*)
#pragma GLOBAL_ASM("asm/Core/x/xAnim.s", "xAnimPlayChooseTransition__FP9xAnimPlay")

// xAnimPlayStartTransition(xAnimPlay*,xAnimTransition*)
#pragma GLOBAL_ASM("asm/Core/x/xAnim.s", "xAnimPlayStartTransition__FP9xAnimPlayP15xAnimTransition")

// xAnimPlayUpdate(xAnimPlay*,float)
#pragma GLOBAL_ASM("asm/Core/x/xAnim.s", "xAnimPlayUpdate__FP9xAnimPlayf")

// xAnimPlayEval(xAnimPlay*)
#pragma GLOBAL_ASM("asm/Core/x/xAnim.s", "xAnimPlayEval__FP9xAnimPlay")

// xAnimPoolCB(xMemPool*,void*)
#pragma GLOBAL_ASM("asm/Core/x/xAnim.s", "xAnimPoolCB__FP8xMemPoolPv")

// xAnimPoolInit(xMemPool*,unsigned int,unsigned int,unsigned int,unsigned int)
#pragma GLOBAL_ASM("asm/Core/x/xAnim.s", "xAnimPoolInit__FP8xMemPoolUiUiUiUi")

// xAnimPoolAlloc(xMemPool*,void*,xAnimTable*,xModelInstance*)
#pragma GLOBAL_ASM("asm/Core/x/xAnim.s", "xAnimPoolAlloc__FP8xMemPoolPvP10xAnimTableP14xModelInstance")

// xAnimPoolFree(xAnimPlay*)
#pragma GLOBAL_ASM("asm/Core/x/xAnim.s", "xAnimPoolFree__FP9xAnimPlay")

// xAnimFileRawTime(xAnimFile*,float)
#pragma GLOBAL_ASM("asm/Core/x/xAnim.s", "xAnimFileRawTime__FP9xAnimFilef")
