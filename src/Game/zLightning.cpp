#include "zLightning.h"
#include "zGlobals.h"

#include <types.h>
#include <rwcore.h>

extern _tagLightningAdd gLightningTweakAddInfo;
extern zLightning sLightning[0x30];
extern RwRaster* sLightningRaster;
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

#if 1

// func_800A17F8
#pragma GLOBAL_ASM("asm/Game/zLightning.s", "zLightningRender__Fv")

#else

// WIP.
void zLightningRender()
{
    if (sLightningRaster != NULL)
    {
        RwRenderStateSet(rwRENDERSTATETEXTURERASTER, sLightningRaster);
    }
    RwRenderStateSet(rwRENDERSTATESRCBLEND, (void*)rwBLENDSRCALPHA);
    RwRenderStateSet(rwRENDERSTATEDESTBLEND, (void*)rwBLENDONE);
    for (int32 i = 0; i < 0x30; i++)
    {
        if (&sLightning[i] != NULL && sLightning[i].flags & 0x41 == 0x41)
        {
            RenderLightning(&sLightning[i]);
        }
    }
}

#endif

void zLightningShow(zLightning* l, int32 show)
{
    if (show)
    {
        l->flags |= 0x40;
    }
    else
    {
        l->flags &= 0xffffffbf;
    }
}

void zLightningKill(zLightning* l)
{
    l->flags &= 0xfffffefe;
}

// func_800A18C8
#pragma GLOBAL_ASM("asm/Game/zLightning.s",                                                        \
                   "zLightningModifyEndpoints__FP10zLightningP5xVec3P5xVec3")

void xDebugAddTweak(char* name, uint8* property, uint8 param_3, uint8 param_4,
                    tweak_callback* callback, void* param_6, uint32 param_7)
{
    // Redacted. :}
}

void xDebugAddFlagTweak(char* name, uint32* property, uint32 param_3, tweak_callback* callback,
                        void* param_5, uint32 param_6)
{
    // Redacted. :}
}

void xDebugAddSelectTweak(char* name, uint32* param_2, char** param_3, uint32* param_4,
                          uint32 param_5, tweak_callback* callback, void* param_7, uint32 param_8)
{
    // Redacted. :}
}

void xDebugAddTweak(char* name, int16* property, int16 param_3, int16 param_4,
                    tweak_callback* callback, void* param_6, uint32 param_7)
{
    // Redacted. :}
}