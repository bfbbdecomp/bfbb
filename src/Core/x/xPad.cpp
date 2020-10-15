#include "xPad.h"

#include <types.h>

// xPadInit()
#pragma GLOBAL_ASM("asm/Core/x/xPad.s", "xPadInit__Fv")

// xPadEnable(int)
#pragma GLOBAL_ASM("asm/Core/x/xPad.s", "xPadEnable__Fi")

// xPadRumbleEnable(int,int)
#pragma GLOBAL_ASM("asm/Core/x/xPad.s", "xPadRumbleEnable__Fii")

// xPadUpdate(int,float)
#pragma GLOBAL_ASM("asm/Core/x/xPad.s", "xPadUpdate__Fif")

// xPadNormalizeAnalog(_tagxPad&,int,int)
#pragma GLOBAL_ASM("asm/Core/x/xPad.s", "xPadNormalizeAnalog__FR8_tagxPadii")

// xPadKill()
#pragma GLOBAL_ASM("asm/Core/x/xPad.s", "xPadKill__Fv")

// xPadGetRumbleSlot()
#pragma GLOBAL_ASM("asm/Core/x/xPad.s", "xPadGetRumbleSlot__Fv")

// xPadDestroyRumbleChain(_tagxPad*)
#pragma GLOBAL_ASM("asm/Core/x/xPad.s", "xPadDestroyRumbleChain__FP8_tagxPad")

// xPadDestroyRumbleChain(int)
#pragma GLOBAL_ASM("asm/Core/x/xPad.s", "xPadDestroyRumbleChain__Fi")

// xPadAddRumble(int,_tagRumbleType,float,int,unsigned int)
#pragma GLOBAL_ASM("asm/Core/x/xPad.s", "xPadAddRumble__Fi14_tagRumbleTypefiUi")

// xPadAnalogIsDigital(int,int)
#pragma GLOBAL_ASM("asm/Core/x/xPad.s", "xPadAnalogIsDigital__Fii")

// xVec2::operator /=(float)
#pragma GLOBAL_ASM("asm/Core/x/xPad.s", "__adv__5xVec2Ff")

// xVec2::length() const
#pragma GLOBAL_ASM("asm/Core/x/xPad.s", "length__5xVec2CFv")

// normalize_analog(int,int,int,int,int,int)
#pragma GLOBAL_ASM("asm/Core/x/xPad.s", "normalize_analog__Fiiiiii")
