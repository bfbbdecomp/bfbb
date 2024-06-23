#include "zLightning.h"
#include "zGlobals.h"

#include <types.h>
#include <rwcore.h>

extern _tagLightningAdd gLightningTweakAddInfo;
extern zLightning sLightning[0x30];
extern RwRaster* sLightningRaster;
extern xVec3 sTweakStart;
extern xVec3 sTweakEnd;

#if 0
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

#if 0
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

#if 0
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
