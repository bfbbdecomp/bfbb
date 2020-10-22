#include "xCM.h"

#include <types.h>

// xCMprep(xCreditsData*)
#pragma GLOBAL_ASM("asm/Core/x/xCM.s", "xCMprep__FP12xCreditsData")

// xCMcolor_scale(iColor_tag,float)
#pragma GLOBAL_ASM("asm/Core/x/xCM.s", "xCMcolor_scale__F10iColor_tagf")

// xColorInit(iColor_tag*,unsigned char,unsigned char,unsigned char,unsigned char)
#pragma GLOBAL_ASM("asm/Core/x/xCM.s", "xColorInit__FP10iColor_tagUcUcUcUc")

// xCMrender(float,xCreditsData*)
#pragma GLOBAL_ASM("asm/Core/x/xCM.s", "xCMrender__FfP12xCreditsData")

// xCMupdate(float)
#pragma GLOBAL_ASM("asm/Core/x/xCM.s", "xCMupdate__Ff")

// xCMrender()
#pragma GLOBAL_ASM("asm/Core/x/xCM.s", "xCMrender__Fv")

// xCMstart(xCreditsData*,float,xBase*)
#pragma GLOBAL_ASM("asm/Core/x/xCM.s", "xCMstart__FP12xCreditsDatafP5xBase")

// xCMstop()
#pragma GLOBAL_ASM("asm/Core/x/xCM.s", "xCMstop__Fv")
