#include "iSystem.h"

#include <types.h>

// psGetMemoryFunctions()
#pragma GLOBAL_ASM("asm/Core/p2/iSystem.s", "psGetMemoryFunctions__Fv")

// iVSync()
#pragma GLOBAL_ASM("asm/Core/p2/iSystem.s", "iVSync__Fv")

// TRCInit()
#pragma GLOBAL_ASM("asm/Core/p2/iSystem.s", "TRCInit__Fv")

// iSystemInit(unsigned int)
#pragma GLOBAL_ASM("asm/Core/p2/iSystem.s", "iSystemInit__FUi")

// iSystemExit()
#pragma GLOBAL_ASM("asm/Core/p2/iSystem.s", "iSystemExit__Fv")

// RWAttachPlugins()
#pragma GLOBAL_ASM("asm/Core/p2/iSystem.s", "RWAttachPlugins__Fv")

// RenderWareInit()
#pragma GLOBAL_ASM("asm/Core/p2/iSystem.s", "RenderWareInit__Fv")

// RenderWareExit()
#pragma GLOBAL_ASM("asm/Core/p2/iSystem.s", "RenderWareExit__Fv")

// null_func()
#pragma GLOBAL_ASM("asm/Core/p2/iSystem.s", "null_func__Fv")

#pragma GLOBAL_ASM("asm/Core/p2/iSystem.s", "mem_null")

#pragma GLOBAL_ASM("asm/Core/p2/iSystem.s", "malloc")

#pragma GLOBAL_ASM("asm/Core/p2/iSystem.s", "func_800D3794")

// _rwDolphinHeapFree(void*)
#pragma GLOBAL_ASM("asm/Core/p2/iSystem.s", "_rwDolphinHeapFree__FPv")

// _rwDolphinHeapAlloc(unsigned long)
#pragma GLOBAL_ASM("asm/Core/p2/iSystem.s", "_rwDolphinHeapAlloc__FUl")

// DolphinInitMemorySystem(RwMemoryFunctions*)
#pragma GLOBAL_ASM("asm/Core/p2/iSystem.s", "DolphinInitMemorySystem__FP17RwMemoryFunctions")

// dlAccessToMode(const char*)
#pragma GLOBAL_ASM("asm/Core/p2/iSystem.s", "dlAccessToMode__FPCc")

// dlFread(void*,unsigned long,unsigned long,void*)
#pragma GLOBAL_ASM("asm/Core/p2/iSystem.s", "dlFread__FPvUlUlPv")

// dlFseek(void*,long,int)
#pragma GLOBAL_ASM("asm/Core/p2/iSystem.s", "dlFseek__FPvli")

// RwFileFunctions::operator =(const RwFileFunctions&)
#pragma GLOBAL_ASM("asm/Core/p2/iSystem.s", "__as__15RwFileFunctionsFRC15RwFileFunctions")

// DolphinInstallFileSystem()
#pragma GLOBAL_ASM("asm/Core/p2/iSystem.s", "DolphinInstallFileSystem__Fv")
