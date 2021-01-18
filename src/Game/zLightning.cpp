#include "zLightning.h"
#include "zGlobals.h"

#include <types.h>

extern _tagLightningAdd gLightningTweakAddInfo;
extern xVec3 sTweakStart;
extern xVec3 sTweakEnd;

#if 1

// func_8009EC78
#pragma GLOBAL_ASM("asm/Game/zLightning.s", "lightningTweakChangeType__FRC10tweak_info")

#else

// WIP.
void lightningTweakChangeType(tweak_info& t)
{
    xDebugRemoveTweak(WEFEW);
    if (gLightningTweakAddInfo.type == 1)
    {
        xDebugAddTweaK(WEFEWFEF, &gLightningTweakAddInfo.setup_degrees, @668, @669, NULL, NULL, 2);
        xDebugAddTweaK(WEFEWFEF, &gLightningTweakAddInfo.move_degrees, @668, @669, NULL, NULL, 2);
    }
    else if (FFWEFEWF)
    {
        // TODO!!!
    }
}

#endif

#if 1

// func_8009EDB0
#pragma GLOBAL_ASM("asm/Game/zLightning.s", "lightningTweakStart__FRC10tweak_info")

#else

// Structure is off?
void lightningTweakStart(tweak_info& t)
{
    xVec3 s, e;
    xVec3Add(&s, (xVec3*)&globals.player.ent.collModel->Mat->pos, &sTweakStart);
    xVec3Add(&e, (xVec3*)&globals.player.ent.collModel->Mat->pos, &sTweakEnd);
    gLightningTweakAddInfo.start = &s;
    gLightningTweakAddInfo.end = &e;
    zLightningAdd(&gLightningTweakAddInfo);
}

#endif

// func_8009EE30
#pragma GLOBAL_ASM("asm/Game/zLightning.s", "zLightningInit__Fv")

// func_8009F8D4
#pragma GLOBAL_ASM("asm/Game/zLightning.s", "FindFreeLightning__Fv")

// func_8009F970
#pragma GLOBAL_ASM("asm/Game/zLightning.s", "zLightningAdd__FP16_tagLightningAdd")

// func_8009FE68
#pragma GLOBAL_ASM("asm/Game/zLightning.s", "UpdateLightning__FP10zLightningf")

// func_800A0348
#pragma GLOBAL_ASM("asm/Game/zLightning.s", "zLightningUpdate__Ff")

// func_800A0648
#pragma GLOBAL_ASM("asm/Game/zLightning.s", "zLightningFunc_Render__FP10zLightning")

// func_800A0C74
#pragma GLOBAL_ASM("asm/Game/zLightning.s", "RenderLightning__FP10zLightning")

// func_800A17F8
#pragma GLOBAL_ASM("asm/Game/zLightning.s", "zLightningRender__Fv")

// func_800A188C
#pragma GLOBAL_ASM("asm/Game/zLightning.s", "zLightningShow__FP10zLightningi")

// func_800A18B4
#pragma GLOBAL_ASM("asm/Game/zLightning.s", "zLightningKill__FP10zLightning")

// func_800A18C8
#pragma GLOBAL_ASM("asm/Game/zLightning.s",                                                        \
                   "zLightningModifyEndpoints__FP10zLightningP5xVec3P5xVec3")

// func_800A1D08
#pragma GLOBAL_ASM("asm/Game/zLightning.s", "xDebugAddTweak__FPCcPUcUcUcPC14tweak_callbackPvUi")

// func_800A1D0C
#pragma GLOBAL_ASM("asm/Game/zLightning.s", "xDebugAddFlagTweak__FPCcPUiUiPC14tweak_callbackPvUi")

// func_800A1D10
#pragma GLOBAL_ASM("asm/Game/zLightning.s",                                                        \
                   "xDebugAddSelectTweak__FPCcPUiPPCcPCUiUiPC14tweak_callbackPvUi")

// func_800A1D14
#pragma GLOBAL_ASM("asm/Game/zLightning.s", "xDebugAddTweak__FPCcPsssPC14tweak_callbackPvUi")
