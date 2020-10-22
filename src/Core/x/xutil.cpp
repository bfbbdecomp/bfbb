#include "xutil.h"

#include <types.h>

// xUtilStartup()
#pragma GLOBAL_ASM("asm/Core/x/xutil.s", "xUtilStartup__Fv")

// xUtilShutdown()
#pragma GLOBAL_ASM("asm/Core/x/xutil.s", "xUtilShutdown__Fv")

// xUtil_idtag2string(unsigned int,int)
#pragma GLOBAL_ASM("asm/Core/x/xutil.s", "xUtil_idtag2string__FUii")

// xUtil_crc_init()
#pragma GLOBAL_ASM("asm/Core/x/xutil.s", "xUtil_crc_init__Fv")

// xUtil_crc_update(unsigned int,char*,int)
#pragma GLOBAL_ASM("asm/Core/x/xutil.s", "xUtil_crc_update__FUiPci")

// xUtil_yesno(float)
#pragma GLOBAL_ASM("asm/Core/x/xutil.s", "xUtil_yesno__Ff")

// xUtil_wtadjust(float*,int,float)
#pragma GLOBAL_ASM("asm/Core/x/xutil.s", "xUtil_wtadjust__FPfif")
