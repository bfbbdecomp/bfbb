#include "iFMV.h"

#include <types.h>

// iFMVmalloc(unsigned long)
#pragma GLOBAL_ASM("asm/Core/p2/iFMV.s", "iFMVmalloc__FUl")

// iFMVfree(void*)
#pragma GLOBAL_ASM("asm/Core/p2/iFMV.s", "iFMVfree__FPv")

// iFMVPlay(char*,unsigned int,float,bool,bool)
#pragma GLOBAL_ASM("asm/Core/p2/iFMV.s", "iFMVPlay__FPcUifbb")

// Setup_surface_array()
#pragma GLOBAL_ASM("asm/Core/p2/iFMV.s", "Setup_surface_array__Fv")

// Decompress_frame(BINK*,RAD3DIMAGE*,long)
#pragma GLOBAL_ASM("asm/Core/p2/iFMV.s", "Decompress_frame__FP4BINKP10RAD3DIMAGEl")

// DrawFrame(float,float,float,float)
#pragma GLOBAL_ASM("asm/Core/p2/iFMV.s", "DrawFrame__Fffff")

namespace {
#pragma GLOBAL_ASM("asm/Core/p2/iFMV.s", "GXSetTexCoordGen")
}

// Show_frame()
#pragma GLOBAL_ASM("asm/Core/p2/iFMV.s", "Show_frame__Fv")

// PlayFMV(char*,unsigned long,float)
#pragma GLOBAL_ASM("asm/Core/p2/iFMV.s", "PlayFMV__FPcUlf")

// iFMV::InitDisplay(_GXRenderModeObj*)
#pragma GLOBAL_ASM("asm/Core/p2/iFMV.s", "InitDisplay__4iFMVFP16_GXRenderModeObj")

// iFMV::InitGX()
#pragma GLOBAL_ASM("asm/Core/p2/iFMV.s", "InitGX__4iFMVFv")

// iFMV::InitVI()
#pragma GLOBAL_ASM("asm/Core/p2/iFMV.s", "InitVI__4iFMVFv")

#pragma GLOBAL_ASM("asm/Core/p2/iFMV.s", "iFMV_rename_me_1")

#pragma GLOBAL_ASM("asm/Core/p2/iFMV.s", "iFMV_rename_me_2")

// xDrawLine2D_LocaliFMVVersion(float,float,float,float)
#pragma GLOBAL_ASM("asm/Core/p2/iFMV.s", "xDrawLine2D_LocaliFMVVersion__Fffff")
