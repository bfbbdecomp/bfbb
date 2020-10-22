#include "iPad.h"

#include <types.h>

// iPadInit()
#pragma GLOBAL_ASM("asm/Core/p2/iPad.s", "iPadInit__Fv")

// iPadEnable(_tagxPad*,short)
#pragma GLOBAL_ASM("asm/Core/p2/iPad.s", "iPadEnable__FP8_tagxPads")

// iPadConvStick(float)
#pragma GLOBAL_ASM("asm/Core/p2/iPad.s", "iPadConvStick__Ff")

// iPadUpdate(_tagxPad*,unsigned int*)
#pragma GLOBAL_ASM("asm/Core/p2/iPad.s", "iPadUpdate__FP8_tagxPadPUi")

// iPadConvFromGCN(unsigned int,unsigned int,unsigned int)
#pragma GLOBAL_ASM("asm/Core/p2/iPad.s", "iPadConvFromGCN__FUiUiUi")

// iPadRumbleFx(_tagxPad*,_tagxRumble*,float)
#pragma GLOBAL_ASM("asm/Core/p2/iPad.s", "iPadRumbleFx__FP8_tagxPadP11_tagxRumblef")

// iPadStopRumble(_tagxPad*)
#pragma GLOBAL_ASM("asm/Core/p2/iPad.s", "iPadStopRumble__FP8_tagxPad")

#pragma GLOBAL_ASM("asm/Core/p2/iPad.s", "ipad_rename_me")

// iPadStartRumble(_tagxPad*,_tagxRumble*)
#pragma GLOBAL_ASM("asm/Core/p2/iPad.s", "iPadStartRumble__FP8_tagxPadP11_tagxRumble")

// iPadKill()
#pragma GLOBAL_ASM("asm/Core/p2/iPad.s", "iPadKill__Fv")
