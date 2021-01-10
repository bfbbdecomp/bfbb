#include "iSystem.h"

#include <types.h>

#include <dolphin.h>
#include <rwcore.h>

#include "../x/xDebug.h"
#include "../x/xMath.h"
#include "../x/xSnd.h"
#include "../x/xPad.h"
#include "../x/xMemMgr.h"

#include "iSystem.h"
#include "iFile.h"
#include "iTime.h"

extern uint32 mem_base_alloc;
extern uint32 add;
extern uint32 size;
extern int32 gEmergencyMemLevel;
extern OSHeapHandle the_heap;
extern void* bad_val;

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

/*
void iSystemExit()
{
    xDebugExit();
    xMathExit();
    RenderWareExit();
    xSndExit();
    xPadKill();
    iFileExit();
    iTimeExit();
    xMemExit();
}
*/

// func_800D344C
#pragma GLOBAL_ASM("asm/Core/p2/iSystem.s", "iSystemExit__Fv")

// func_800D34A4
#pragma GLOBAL_ASM("asm/Core/p2/iSystem.s", "RWAttachPlugins__Fv")

// func_800D3544
#pragma GLOBAL_ASM("asm/Core/p2/iSystem.s", "RenderWareInit__Fv")

int32 RenderWareExit()
{
    RwEngineStop();
    RwEngineClose();
    return RwEngineTerm();
}

// func_800D3664
#pragma GLOBAL_ASM("asm/Core/p2/iSystem.s", "TextureRead__FPCcPCc")

void null_func()
{
    mem_base_alloc += 4;
}

extern "C" {
void mem_null(uint32 param_1, uint32 param_2)
{
    add = param_1;
    size = param_2;
}

void* malloc(uint32 __size)
{
    if ((int32)__size <= 0)
    {
        return NULL;
    }

    void* result = OSAllocFromHeap(the_heap, __size);

    if (result == NULL)
    {
        null_func();
    }

    return result;
}

void free(void* __ptr)
{
    if (__ptr != NULL)
    {
        OSFreeToHeap(the_heap, __ptr);
    }
}
}

void _rwDolphinHeapFree(void* __ptr)
{
    if (__ptr == bad_val)
    {
        mem_null(0, 0);
    }
    if (__ptr != NULL)
    {
        // TODO: clear this up
        // some number is compared against 0xbeef in the assembly.
        // 0xbeef was probably a hardcoded constant Heavy iron used.
        // if (*(uint32*)((int32)__ptr + -4) + 0x2153 == 0xbeef)
        if (*(int32*)((int32)__ptr + -4) == -0x21524111)
        {
            free((void*)((int32)__ptr - 32));
        }
        else
        {
            null_func();
            if (gEmergencyMemLevel != 0)
            {
                xMemPopBase(gEmergencyMemLevel);
                gEmergencyMemLevel = 0;
            }
        }
    }
}

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
