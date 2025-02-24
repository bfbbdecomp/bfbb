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

// Taken from zLightning.s
// Defining these here makes the stringBase0 offsets match in the later functions.
char* str1 = "Line";
char* str2 = "Rotating";
char* str3 = "Zeus";
char* str4 = "Func";
char* str5 = "Lightning|\x01Type Info";
char* str6 = "Lightning|\x01Type Info|Setup Degrees";
char* str7 = "Lightning|\x01Type Info|Move Degrees";
char* str8 = "Lightning|\x01Type Info|Normal Offset";
char* str9 = "Lightning|\x01Type Info|Back Offset";
char* str10 = "Lightning|\x01Type Info|Side Offset";
char* str11 = "PAREMIT_EG_SPARK";
char* str12 = "LIGHTNING";
char* str13 = "Lightning|\x01\x01Go";
char* str14 = "Start Lightning";
char* str15 = "Lightning|\x01Globals|\x01\x01JerkFrequency";
char* str16 = "Lightning|\x01Globals|\x01\x02ShiftSpeed";
char* str17 = "Lightning|\x01Globals|\x01\x03MinPStep";
char* str18 = "Lightning|\x01Globals|\x01\x03MaxPStep";
char* str19 = "Lightning|\x01Globals|\x02\x01MinScale";
char* str20 = "Lightning|\x01Globals|\x02\x01MaxScale";
char* str21 = "Lightning|\x01Globals|\x02\x01ScalePerLength";
char* str22 = "Lightning|\x01Globals|\x02\x02MinSpan";
char* str23 = "Lightning|\x01Globals|\x02\x02SpanPerLength";
char* str24 = "Lightning|\x01Globals|\x02\x03SlopeRange";
char* str25 = "Lightning|\x01Globals|\x02\x03UVSpeed";
char* str26 = "Lightning|\x01Time";
char* str27 = "Lightning|\x01Total Points";
char* str28 = "Lightning|\x01Type";
char* str29 = "Lightning|\x02Flag|Rot Scalar";
char* str30 = "Lightning|\x02Flag|No Fade Out";
char* str31 = "Lightning|\x02Flag|Arc";
char* str32 = "Lightning|\x02Flag|Vertical Orientation";
char* str33 = "Lightning|\x02Flag|Taper Thickness At End";
char* str34 = "Lightning|\x02Flag|Taper Thickness At Start";
char* str35 = "Lightning|\x02Start|x";
char* str36 = "Lightning|\x02Start|y";
char* str37 = "Lightning|\x02Start|z";
char* str38 = "Lightning|\x03End|x";
char* str39 = "Lightning|\x03End|y";
char* str40 = "Lightning|\x03End|z";
char* str41 = "Lightning|\x04Color|\x01R";
char* str42 = "Lightning|\x04Color|\x02G";
char* str43 = "Lightning|\x04Color|\x03B";
char* str44 = "Lightning|\x04Color|\x04A";
char* str45 = "Lightning|Lengths|Rot Radius";
char* str46 = "Lightning|Lengths|Arc Height";
char* str47 = "Lightning|Lengths|Thickness";
char* str48 = "Lightning|Randomness|Rand Radius";
char* str49 = "X to test lightning\n";
char* str50 = "               ";
char* str51 = "1";
char* str52 = "0";
char* str53 = "-";
char* str54 = "\n";

void xDebugAddTweak(const char*, F32*, F32, F32, const tweak_callback*, void*, U32)
{
}

void lightningTweakChangeType(const tweak_info& t)
{
    xDebugRemoveTweak("Lightning|\x01Type Info");

    switch (gLightningTweakAddInfo.type)
    {
        case 0:
            break;

        case 1:
            xDebugAddTweak("Lightning|\x01Type Info|Setup Degrees", &gLightningTweakAddInfo.setup_degrees, -1e9, 1e9, NULL, NULL, 2);

            xDebugAddTweak("Lightning|\x01Type Info|Move Degrees", &gLightningTweakAddInfo.move_degrees, -1e9, 1e9, NULL, NULL, 2);
            break;

        case 2:
            xDebugAddTweak("Lightning|\x01Type Info|Normal Offset", &gLightningTweakAddInfo.zeus_normal_offset, -100.0, 100.0, NULL, NULL, 2);

            xDebugAddTweak("Lightning|\x01Type Info|Back Offset", &gLightningTweakAddInfo.zeus_back_offset, -100.0, 100.0, NULL, NULL, 2);

            xDebugAddTweak("Lightning|\x01Type Info|Side Offset", &gLightningTweakAddInfo.zeus_side_offset,  0.0,   100.0, NULL, NULL, 2);
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

void xDebugAddFlagTweak(const char*, U32*, U32, const tweak_callback*, void*, U32)
{
}

void xDebugAddSelectTweak(const char*, U32*, const char**, const U32*, U32, const tweak_callback*,
                          void*, U32)
{
}
