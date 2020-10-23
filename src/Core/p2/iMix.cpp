#include "iMix.h"

#include <types.h>

// func_800C64A8
#pragma GLOBAL_ASM("asm/Core/p2/iMix.s", "__MIXGetVolume__Fi")

// func_800C64E4
#pragma GLOBAL_ASM("asm/Core/p2/iMix.s", "__MIXSetPan__FP10MIXChannel")

// func_800C658C
#pragma GLOBAL_ASM("asm/Core/p2/iMix.s", "__MIXResetChannel__FP10MIXChannel")

// func_800C6604
#pragma GLOBAL_ASM("asm/Core/p2/iMix.s", "__MIXClampPan__Fi")

// func_800C662C
#pragma GLOBAL_ASM("asm/Core/p2/iMix.s", "MIXInit")

// func_800C6690
#pragma GLOBAL_ASM("asm/Core/p2/iMix.s", "MIXInitChannel")

// func_800C6D94
#pragma GLOBAL_ASM("asm/Core/p2/iMix.s", "MIXReleaseChannel")

// func_800C6DB0
#pragma GLOBAL_ASM("asm/Core/p2/iMix.s", "MIXAdjustInput")

// func_800C6DE0
#pragma GLOBAL_ASM("asm/Core/p2/iMix.s", "MIXGetInput")

// func_800C6DFC
#pragma GLOBAL_ASM("asm/Core/p2/iMix.s", "MIXAdjustPan")

// func_800C6E58
#pragma GLOBAL_ASM("asm/Core/p2/iMix.s", "MIXGetPan")

// func_800C6E74
#pragma GLOBAL_ASM("asm/Core/p2/iMix.s", "MIXUnMute")

// func_800C6EA4
#pragma GLOBAL_ASM("asm/Core/p2/iMix.s", "MIXAdjustFader")

// func_800C6ED4
#pragma GLOBAL_ASM("asm/Core/p2/iMix.s", "MIXGetFader")

// func_800C6EF0
#pragma GLOBAL_ASM("asm/Core/p2/iMix.s", "MIXUpdateSettings")
