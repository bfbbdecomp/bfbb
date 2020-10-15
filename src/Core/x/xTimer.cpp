#include "xTimer.h"

#include <types.h>

// GetRandomizedTime(xTimerAsset*)
#pragma GLOBAL_ASM("asm/Core/x/xTimer.s", "GetRandomizedTime__FP11xTimerAsset")

// xTimer_ObjIDIsPauseTimer(unsigned int)
#pragma GLOBAL_ASM("asm/Core/x/xTimer.s", "xTimer_ObjIDIsPauseTimer__FUi")

// xTimerInit(xBase*,xTimerAsset*)
#pragma GLOBAL_ASM("asm/Core/x/xTimer.s", "xTimerInit__FP5xBaseP11xTimerAsset")

// xTimerReset(xTimer*)
#pragma GLOBAL_ASM("asm/Core/x/xTimer.s", "xTimerReset__FP6xTimer")

// xTimerSave(xTimer*,xSerial*)
#pragma GLOBAL_ASM("asm/Core/x/xTimer.s", "xTimerSave__FP6xTimerP7xSerial")

// xTimerLoad(xTimer*,xSerial*)
#pragma GLOBAL_ASM("asm/Core/x/xTimer.s", "xTimerLoad__FP6xTimerP7xSerial")

// xTimerUpdate(xBase*,xScene*,float)
#pragma GLOBAL_ASM("asm/Core/x/xTimer.s", "xTimerUpdate__FP5xBaseP6xScenef")
