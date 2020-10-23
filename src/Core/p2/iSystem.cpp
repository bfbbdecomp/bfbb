#include "iSystem.h"

#include <types.h>

// func_800D30B4
#pragma GLOBAL_ASM("asm/Core/p2/iSystem.s", "psGetMemoryFunctions__Fv")

// func_800D30C0
#pragma GLOBAL_ASM("asm/Core/p2/iSystem.s", "iVSync__Fv")

// func_800D30E0
#pragma GLOBAL_ASM("asm/Core/p2/iSystem.s", "my_dsc__FUs")

// func_800D30E4
#pragma GLOBAL_ASM("asm/Core/p2/iSystem.s", "FloatingPointErrorHandler__FUsP9OSContextUlUl")

// func_800D32BC
#pragma GLOBAL_ASM("asm/Core/p2/iSystem.s", "MemoryProtectionErrorHandler__FUsP9OSContextUlUl")

// func_800D32F0
#pragma GLOBAL_ASM("asm/Core/p2/iSystem.s", "TRCInit__Fv")

// func_800D3364
#pragma GLOBAL_ASM("asm/Core/p2/iSystem.s", "iSystemInit__FUi")

// func_800D344C
#pragma GLOBAL_ASM("asm/Core/p2/iSystem.s", "iSystemExit__Fv")

// func_800D34A4
#pragma GLOBAL_ASM("asm/Core/p2/iSystem.s", "RWAttachPlugins__Fv")

// func_800D3544
#pragma GLOBAL_ASM("asm/Core/p2/iSystem.s", "RenderWareInit__Fv")

// func_800D363C
#pragma GLOBAL_ASM("asm/Core/p2/iSystem.s", "RenderWareExit__Fv")

// func_800D3664
#pragma GLOBAL_ASM("asm/Core/p2/iSystem.s", "TextureRead__FPCcPCc")

// func_800D372C
#pragma GLOBAL_ASM("asm/Core/p2/iSystem.s", "null_func__Fv")

// func_800D373C
#pragma GLOBAL_ASM("asm/Core/p2/iSystem.s", "mem_null")

// func_800D3748
#pragma GLOBAL_ASM("asm/Core/p2/iSystem.s", "malloc")

// func_800D3794
#pragma GLOBAL_ASM("asm/Core/p2/iSystem.s", "free")

// func_800D37C0
#pragma GLOBAL_ASM("asm/Core/p2/iSystem.s", "_rwDolphinHeapFree__FPv")

// func_800D3840
#pragma GLOBAL_ASM("asm/Core/p2/iSystem.s", "_rwDolphinHeapAlloc__FUl")

// func_800D3910
#pragma GLOBAL_ASM("asm/Core/p2/iSystem.s", "_rwDolphinHeapCalloc__FUlUl")

// func_800D3960
#pragma GLOBAL_ASM("asm/Core/p2/iSystem.s", "_rwDolphinHeapRealloc__FPvUl")

// func_800D3A04
#pragma GLOBAL_ASM("asm/Core/p2/iSystem.s", "DolphinInitMemorySystem__FP17RwMemoryFunctions")

// func_800D3A3C
#pragma GLOBAL_ASM("asm/Core/p2/iSystem.s", "dlAccessToMode__FPCc")

// func_800D3B9C
#pragma GLOBAL_ASM("asm/Core/p2/iSystem.s", "dlFopen__FPCcPCc")

// func_800D3CC8
#pragma GLOBAL_ASM("asm/Core/p2/iSystem.s", "dlFclose__FPv")

// func_800D3D48
#pragma GLOBAL_ASM("asm/Core/p2/iSystem.s", "dlFexist__FPCc")

// func_800D3DB8
#pragma GLOBAL_ASM("asm/Core/p2/iSystem.s", "dlFread__FPvUlUlPv")

// func_800D3FDC
#pragma GLOBAL_ASM("asm/Core/p2/iSystem.s", "dlFwrite__FPCvUlUlPv")

// func_800D3FE4
#pragma GLOBAL_ASM("asm/Core/p2/iSystem.s", "dlFseek__FPvli")

// func_800D4188
#pragma GLOBAL_ASM("asm/Core/p2/iSystem.s", "dlFgets__FPciPv")

// func_800D428C
#pragma GLOBAL_ASM("asm/Core/p2/iSystem.s", "dlFputs__FPCcPv")

// func_800D4294
#pragma GLOBAL_ASM("asm/Core/p2/iSystem.s", "dlFeof__FPv")

// func_800D42B4
#pragma GLOBAL_ASM("asm/Core/p2/iSystem.s", "dlFflush__FPv")

// func_800D42BC
#pragma GLOBAL_ASM("asm/Core/p2/iSystem.s", "dlFtell__FPv")

// func_800D42C4
#pragma GLOBAL_ASM("asm/Core/p2/iSystem.s", "_rwDolphinFSOpen__FPvii")

// func_800D43EC
#pragma GLOBAL_ASM("asm/Core/p2/iSystem.s", "__as__15RwFileFunctionsFRC15RwFileFunctions")

// func_800D4448
#pragma GLOBAL_ASM("asm/Core/p2/iSystem.s", "_rwDolphinFSClose__FPvii")

// func_800D44AC
#pragma GLOBAL_ASM("asm/Core/p2/iSystem.s", "DolphinInstallFileSystem__Fv")
