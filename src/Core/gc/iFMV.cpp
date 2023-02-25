#include "iFMV.h"

#include "../x/xPar.h"

#include <types.h>
#include <dolphin.h>

extern uint32 Bink_surface_type[5];
extern volatile uint32 frame_num;

void* iFMVmalloc(size_t size)
{
    return RwMalloc(size);
}

void iFMVfree(void* mem)
{
    RwFree(mem);
}

#if 1

// func_800C39F0
#pragma GLOBAL_ASM("asm/Core/p2/iFMV.s", "iFMVPlay__FPcUifbb")

#else

// For some reason, the check for frame_num is always optimized to true.
uint32 iFMVPlay(char* filename, uint32 buttons, float32 time, bool skippable, bool lockController)
{
    if (filename == NULL)
    {
        return 1;
    }
    else
    {
        frame_num = 0;
        while (frame_num >= 0)
        {
            PlayFMV(filename, buttons, time);
        }
        return 0;
    }
}

#endif

static void Setup_surface_array()
{
    Bink_surface_type[0] = BINKSURFACE32;
    Bink_surface_type[1] = BINKSURFACE32A;
    Bink_surface_type[2] = BINKSURFACE565;
    Bink_surface_type[3] = BINKSURFACE4444;
    Bink_surface_type[4] = BINKSURFACEYUY2;
}

#if 1

// func_800C3A9C
#pragma GLOBAL_ASM("asm/Core/p2/iFMV.s", "Decompress_frame__FP4BINKP10RAD3DIMAGEl")

#else

// WIP.
void Decompress_frame(HBINK bnk, HRAD3DIMAGE rad_image, int64 flags)
{
    BinkDoFrame(bnk);
    int32 code = Lock_RAD_3D_image(rad_image, dfgdfgdfgdfg);
    if (code != 0)
    {
        BinkCopyToBuffer(wefwefewfew);
        Unlock_RAD_3D_image(rad_image);
    }
}

#endif

// func_800C3B54
#pragma GLOBAL_ASM("asm/Core/p2/iFMV.s", "DrawFrame__Fffff")

// func_800C3E7C
#pragma GLOBAL_ASM("asm/Core/p2/iFMV.s", "GXSetTexCoordGen")

// func_800C3EA4
#pragma GLOBAL_ASM("asm/Core/p2/iFMV.s", "Show_frame__Fv")

void arammalloc(size_t size)
{
    ARAlloc(size);
}

#if 1

// func_800C3FB0
#pragma GLOBAL_ASM("asm/Core/p2/iFMV.s", "aramfree__FPv")

#else

// Something weird is going on here...
void aramfree(void* mem)
{
    ARFree(mem);
}

#endif

// func_800C3FD4
#pragma GLOBAL_ASM("asm/Core/p2/iFMV.s", "PlayFMV__FPcUlf")

// func_800C434C
#pragma GLOBAL_ASM("asm/Core/p2/iFMV.s", "InitDisplay__4iFMVFP16_GXRenderModeObj")

// func_800C4514
#pragma GLOBAL_ASM("asm/Core/p2/iFMV.s", "InitGX__4iFMVFv")

#if 1

// func_800C4638
#pragma GLOBAL_ASM("asm/Core/p2/iFMV.s", "InitVI__4iFMVFv")

#else

// WIP.
void iFMV::InitVI()
{
    VISetNextFrameBuffer(FWFWEFEWFWEF);
    EWDEWDEWDEWD = WEDEDWEWDE;
    VIFlush();
    VIWaitForRetrace();
    if (*WEFWEFEWEF & 1)
    {
        VIWaitForRetrace();
    }
}

#endif

void iFMV::Suspend()
{
}

void iFMV::Resume()
{
}

// func_800C468C
#pragma GLOBAL_ASM("asm/Core/p2/iFMV.s", "xDrawLine2D_LocaliFMVVersion__Fffff")
