#include "zGoo.h"

#include <types.h>

// zGooInit(int)
#pragma GLOBAL_ASM("asm/Game/zGoo.s", "zGooInit__Fi")

// zGooExit()
#pragma GLOBAL_ASM("asm/Game/zGoo.s", "zGooExit__Fv")

// zGooAdd(xEnt*,float,int)
#pragma GLOBAL_ASM("asm/Game/zGoo.s", "zGooAdd__FP4xEntfi")

// zGooIs(xEnt*,float&,unsigned int)
#pragma GLOBAL_ASM("asm/Game/zGoo.s", "zGooIs__FP4xEntRfUi")

// zGooCollsBegin()
#pragma GLOBAL_ASM("asm/Game/zGoo.s", "zGooCollsBegin__Fv")

// zGooCollsEnd()
#pragma GLOBAL_ASM("asm/Game/zGoo.s", "zGooCollsEnd__Fv")

// zGooStopTide()
#pragma GLOBAL_ASM("asm/Game/zGoo.s", "zGooStopTide__Fv")

// zGooMeltFinished(RpAtomic*)
#pragma GLOBAL_ASM("asm/Game/zGoo.s", "zGooMeltFinished__FP8RpAtomic")
