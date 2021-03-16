#include "zAssetTypes.h"

#include "../Core/x/xstransvc.h"
#include "../Core/x/xDebug.h"

#include <types.h>
#include <rwcore.h>
#include <rpworld.h>

extern xJSPHeader* sTempJSP;
extern xJSPHeader sDummyEmptyJSP;

extern const uint32* lbl_803D0820;

// func_8004EBEC
#pragma GLOBAL_ASM("asm/Game/zAssetTypes.s", "zAssetStartup__Fv")

void zAssetShutdown()
{
    xSTShutdown();
}

// func_8004EC38
#pragma GLOBAL_ASM("asm/Game/zAssetTypes.s", "Model_Read__FPvUiPvUiPUi")

// func_8004ED14
#pragma GLOBAL_ASM("asm/Game/zAssetTypes.s", "Curve_Read__FPvUiPvUiPUi")

// func_8004ED7C
#pragma GLOBAL_ASM("asm/Game/zAssetTypes.s", "Model_Unload__FPvUi")

// func_8004EDA4
#if 1
#pragma GLOBAL_ASM("asm/Game/zAssetTypes.s", "BSP_Read__FPvUiPvUiPUi")
#else
// Ghidra's output here is not helpful
void* BSP_Read(void* param_1, uint32 param_2, void* indata, uint32 insize, uint32* outsize)
{
    // Not sure how this is used. defined in dwarf but not used in ghidra
    RwMemory rwmem;
    RwChunkHeaderInfo chunkHeaderInfo;

    RpWorld* bsp;

    RwStream* stream = RwStreamOpen(rwSTREAMMEMORY, rwSTREAMREAD, &indata);
    if (stream == 0)
    {
        xprintf("BSP_Read RwStreamOpen failed\n");
    }
    if (RwStreamFindChunk(stream, 11, 0, 0) == 0)
    {
        RwStreamReadChunkHeaderInfo(stream, &chunkHeaderInfo);
        bsp = 0;
        *outsize = 0;
    }
    else
    {
        bsp = RpWorldStreamRead(stream);
        if (bsp == 0)
        {
            xprintf("BSP_Read RpWorldStreamRead failed\n");
        }
        RwStreamClose(stream, 0);
        *outsize = 4;
    }
    return bsp;
}
#endif

// func_8004EE90
#pragma GLOBAL_ASM("asm/Game/zAssetTypes.s", "BSP_Unload__FPvUi")

// func_8004EEC0
#pragma GLOBAL_ASM("asm/Game/zAssetTypes.s", "jsp_shadow_hack_atomic_cb__FP8RpAtomicPv")

// func_8004EF84
#pragma GLOBAL_ASM("asm/Game/zAssetTypes.s", "jsp_shadow_hack_match__FP8RpAtomic")

// func_8004F028
#pragma GLOBAL_ASM("asm/Game/zAssetTypes.s", "jsp_shadow_hack__FP10xJSPHeader")

// func_8004F0A0
void* JSP_Read(void* param_1, uint32 param_2, void* indata, uint32 insize, uint32* outsize)
{
    xJSPHeader* retjsp = &sDummyEmptyJSP;
    *outsize = 32;
    xJSP_MultiStreamRead(indata, insize, &sTempJSP);
    if (sTempJSP->jspNodeList != NULL)
    {
        retjsp = sTempJSP;
        sTempJSP = 0;
        *outsize = 4;
    }
    jsp_shadow_hack(retjsp);
    return retjsp;
}

// func_8004F124
#pragma GLOBAL_ASM("asm/Game/zAssetTypes.s", "JSP_Unload__FPvUi")

// func_8004F154
#pragma GLOBAL_ASM("asm/Game/zAssetTypes.s", "TexCB__FP9RwTexturePv")

// func_8004F168
#pragma GLOBAL_ASM("asm/Game/zAssetTypes.s", "RWTX_Read__FPvUiPvUiPUi")

// func_8004F2AC
#pragma GLOBAL_ASM("asm/Game/zAssetTypes.s", "TextureRW3_Unload__FPvUi")

// func_8004F2DC
#pragma GLOBAL_ASM("asm/Game/zAssetTypes.s", "ATBL_Init__Fv")

// func_8004F330
#pragma GLOBAL_ASM("asm/Game/zAssetTypes.s", "FootstepHackSceneEnter__Fv")

// func_8004F3C4
#pragma GLOBAL_ASM("asm/Game/zAssetTypes.s",                                                       \
                   "dummyEffectCB__FUiP17xAnimActiveEffectP11xAnimSinglePv")

// func_8004F3CC
#pragma GLOBAL_ASM("asm/Game/zAssetTypes.s",                                                       \
                   "soundEffectCB__FUiP17xAnimActiveEffectP11xAnimSinglePv")

// func_8004F5E4
#pragma GLOBAL_ASM("asm/Game/zAssetTypes.s", "FindAssetCB__FUiPc")

// func_8004F608
#pragma GLOBAL_ASM("asm/Game/zAssetTypes.s", "ATBL_Read__FPvUiPvUiPUi")

// func_8004FAB8
#pragma GLOBAL_ASM("asm/Game/zAssetTypes.s", "Anim_Unload__FPvUi")

// func_8004FABC
#pragma GLOBAL_ASM("asm/Game/zAssetTypes.s", "LightKit_Unload__FPvUi")

// func_8004FADC
#pragma GLOBAL_ASM("asm/Game/zAssetTypes.s", "Anim_ATBL_getTable__FPFv_P10xAnimTable")

// func_8004FB04
#pragma GLOBAL_ASM("asm/Game/zAssetTypes.s", "MovePoint_Unload__FPvUi")

// func_8004FB24
#pragma GLOBAL_ASM("asm/Game/zAssetTypes.s", "SndInfoRead__FPvUiPvUiPUi")

// func_8004FBCC
#pragma GLOBAL_ASM("asm/Game/zAssetTypes.s", "xSndPlay3D__FUiffUiUiP4xEntf14sound_categoryf")
