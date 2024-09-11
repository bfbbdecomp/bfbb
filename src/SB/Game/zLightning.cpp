#include "zLightning.h"
#include "zGlobals.h"

#include "xDebug.h"

#include <types.h>
#include <rwcore.h>

extern _tagLightningAdd gLightningTweakAddInfo;
extern zLightning* sLightning[0x30];
extern RwRaster* sLightningRaster;
extern xVec3 sTweakStart;
extern xVec3 sTweakEnd;

extern char stringBase0[];

void lightningTweakChangeType(const tweak_info& t)
{
    // "Lightning|\x01Type Info"
    xDebugRemoveTweak(stringBase0 + 0x18);

    switch (gLightningTweakAddInfo.type)
    {
        case 0:
            break;

        case 1:
            // "Lightning|\x01Type Info|Setup Degrees"
            xDebugAddTweak(stringBase0 + 0x2d, &gLightningTweakAddInfo.setup_degrees, -1e9, 1e9, NULL, NULL, 2);

            // "Lightning|\x01Type Info|Move Degrees"
            xDebugAddTweak(stringBase0 + 0x50, &gLightningTweakAddInfo.move_degrees, -1e9, 1e9, NULL, NULL, 2);
            break;

        case 2:
            // "Lightning|\x01Type Info|Normal Offset"
            xDebugAddTweak(stringBase0 + 0x72, &gLightningTweakAddInfo.zeus_normal_offset, -100.0, 100.0, NULL, NULL, 2);

            // "Lightning|\x01Type Info|Back Offset"
            xDebugAddTweak(stringBase0 + 0x95, &gLightningTweakAddInfo.zeus_back_offset, -100.0, 100.0, NULL, NULL, 2);

            // "Lightning|\x01Type Info|Side Offset"
            xDebugAddTweak(stringBase0 + 0xb6, &gLightningTweakAddInfo.zeus_side_offset,  0.0,   100.0, NULL, NULL, 2);
            break;
    }
}

static void lightningTweakStart(const tweak_info& t)
{
    xVec3 s, e;
    xVec3Add(&s, (xVec3*)&globals.player.ent.model->Mat->pos, &sTweakStart);
    xVec3Add(&e, (xVec3*)&globals.player.ent.model->Mat->pos, &sTweakEnd);
    gLightningTweakAddInfo.start = &s;
    gLightningTweakAddInfo.end = &e;
    zLightningAdd(&gLightningTweakAddInfo);
}

void zLightningRender()
{
    if (sLightningRaster != NULL)
    {
        RwRenderStateSet(rwRENDERSTATETEXTURERASTER, sLightningRaster);
    }
    RwRenderStateSet(rwRENDERSTATESRCBLEND, (void*)rwBLENDSRCALPHA);
    RwRenderStateSet(rwRENDERSTATEDESTBLEND, (void*)rwBLENDONE);
    for (S32 i = 0; i < (S32)(sizeof(sLightning) / sizeof(zLightning*)); i++)
    {
        if (sLightning[i] != NULL && (sLightning[i]->flags & 0x41) == 0x41)
        {
            RenderLightning(sLightning[i]);
        }
    }
}

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

static zLightning* FindFreeLightning()
{
    for (int i = 0; i != (sizeof(sLightning) / sizeof(zLightning*)); i++)
    {
        if (sLightning[i] != NULL)
        {
            if (!(sLightning[i]->flags & 1))
            {
                return sLightning[i];
            }
        }
        else
        {
            sLightning[i] = (zLightning*)xMemAlloc(gActiveHeap, 0x234, 0);
            return sLightning[i];
        }
    }

    return 0;
}

void xDebugAddTweak(const char*, S16*, S16, S16, const tweak_callback*, void*, U32)
{
}

void xDebugAddTweak(const char*, U8*, U8, U8, const tweak_callback*, void*, U32)
{
}

void xDebugAddTweak(const char*, F32*, F32, F32, const tweak_callback*, void*, U32)
{
}

void xDebugAddFlagTweak(const char*, U32*, U32, const tweak_callback*, void*, U32)
{
}

void xDebugAddSelectTweak(const char*, U32*, const char**, const U32*, U32, const tweak_callback*,
                          void*, U32)
{
}
