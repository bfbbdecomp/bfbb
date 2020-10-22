#include "xhipio.h"

#include <types.h>

// get_HIPLFuncs()
#pragma GLOBAL_ASM("asm/Core/x/xhipio.s", "get_HIPLFuncs__Fv")

// HIPLDestroy(st_HIPLOADDATA*)
#pragma GLOBAL_ASM("asm/Core/x/xhipio.s", "HIPLDestroy__FP14st_HIPLOADDATA")

// HIPLBlockRead(st_HIPLOADDATA*,void*,int,int)
#pragma GLOBAL_ASM("asm/Core/x/xhipio.s", "HIPLBlockRead__FP14st_HIPLOADDATAPvii")

// HIPLBypassRead(st_HIPLOADDATA*,void*,int,int)
#pragma GLOBAL_ASM("asm/Core/x/xhipio.s", "HIPLBypassRead__FP14st_HIPLOADDATAPvii")

// HIPLReadAsync(st_HIPLOADDATA*,int,char*,int,int)
#pragma GLOBAL_ASM("asm/Core/x/xhipio.s", "HIPLReadAsync__FP14st_HIPLOADDATAiPcii")

// HIPLReadLongs(st_HIPLOADDATA*,int*,int)
#pragma GLOBAL_ASM("asm/Core/x/xhipio.s", "HIPLReadLongs__FP14st_HIPLOADDATAPii")
