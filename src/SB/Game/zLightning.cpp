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
    for (S32 i = 0; i < 0x30; i++)
    {
        if (&sLightning[i] != NULL && sLightning[i].flags & 0x41 == 0x41)
        {
            RenderLightning(&sLightning[i]);
        }
    }
}

#endif

void zLightningShow(zLightning* l, S32 show)
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

void xDebugAddTweak(const char*, S16*, S16, S16, const tweak_callback*, void*, U32)
{
}

void xDebugAddTweak(const char*, U8*, U8, U8, const tweak_callback*, void*, U32)
{
}

void xDebugAddFlagTweak(const char*, U32*, U32, const tweak_callback*, void*, U32)
{
}

void xDebugAddSelectTweak(const char*, U32*, const char**, const U32*, U32, const tweak_callback*,
                          void*, U32)
{
}
