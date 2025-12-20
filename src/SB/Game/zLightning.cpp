#include "zLightning.h"
#include "zGlobals.h"

#include "xDebug.h"

#include <types.h>
#include <rwcore.h>

#define NUM_LIGHTNING 48

_tagLightningAdd gLightningTweakAddInfo;

static zLightning* sLightning[NUM_LIGHTNING];
static xFuncPiece sLFuncX[10];
static xFuncPiece sLFuncY[10];
static xFuncPiece sLFuncZ[10];
static xVec3 sLFuncVal[10];
static xVec3 sLFuncSlope[10][2];
static F32 sLFuncEnd[10];
static xVec3 sTweakStart;
static xVec3 sTweakEnd;
static tweak_callback sLightningStartCB;
static tweak_callback sLightningChangeCB;
static xVec3 sPoint[5];
static F32 sSize[5];

char* lightning_type_names[4] = { "Line", "Rotating", "Zeus", "Func" };
static zParEmitter* sSparkEmitter;
static RwRaster* sLightningRaster;
static F32 sLFuncJerkTime;
static F32 sLFuncUVOffset;

static F32 sLFuncJerkFreq = 20.0f;
static F32 sLFuncShift = 15.0f;
static F32 sLFuncMaxPStep = 1.0f / 16.0f;
static F32 sLFuncMinPStep = 1.0f / 16.0f;
static F32 sLFuncMinScale = 3.0f / 10.0f;
static F32 sLFuncMaxScale = 1.0f;
static F32 sLFuncScalePerLength = 0.15f;
static F32 sLFuncMinSpan = 3.0f;
static F32 sLFuncSpanPerLength = 1.5f;
static F32 sLFuncSlopeRange = 2.0f;
static F32 sLFuncUVSpeed = 1.0f;

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
        xDebugAddTweak("Lightning|\x01Type Info|Setup Degrees",
                       &gLightningTweakAddInfo.setup_degrees, -1e9, 1e9, NULL, NULL, 2);

        xDebugAddTweak("Lightning|\x01Type Info|Move Degrees", &gLightningTweakAddInfo.move_degrees,
                       -1e9, 1e9, NULL, NULL, 2);
        break;

    case 2:
        xDebugAddTweak("Lightning|\x01Type Info|Normal Offset",
                       &gLightningTweakAddInfo.zeus_normal_offset, -100.0, 100.0, NULL, NULL, 2);

        xDebugAddTweak("Lightning|\x01Type Info|Back Offset",
                       &gLightningTweakAddInfo.zeus_back_offset, -100.0, 100.0, NULL, NULL, 2);

        xDebugAddTweak("Lightning|\x01Type Info|Side Offset",
                       &gLightningTweakAddInfo.zeus_side_offset, 0.0, 100.0, NULL, NULL, 2);
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

void zLightningUpdate(F32 dt)
{
    S32 i;
    for (i = 0; i < NUM_LIGHTNING; i++)
    {
        if (sLightning[i] != NULL && sLightning[i]->flags & 0x1)
        {
            UpdateLightning(sLightning[i], dt);
        }
    }

    sLFuncUVOffset = 1.0f * dt + sLFuncUVOffset;
    if (sLFuncUVOffset > 1.0f)
    {
        sLFuncUVOffset -= 1.0f;
    }

    sLFuncJerkTime += 20.0f * dt;
    if (!(sLFuncJerkTime > 1.0f))
    {
        return;
    }

    S32 picker = 9.0f * xurand();
    if (picker >= 9)
    {
        picker = 8;
    }
    if (picker < 0)
    {
        picker = 0;
    }

    xVec3Init(&sLFuncVal[picker], 2.0f * (xurand() - 0.5f), 2.0f * (xurand() - 0.5f), 2.0f * (xurand() - 0.5f));
    xVec3Init(&sLFuncSlope[picker][0], 2.0f * (xurand() - 0.5f), 2.0f * (xurand() - 0.5f), 2.0f * (xurand() - 0.5f));
    xVec3Init(&sLFuncSlope[picker][1], 2.0f * (xurand() - 0.5f), 2.0f * (xurand() - 0.5f), 2.0f * (xurand() - 0.5f));

    sLFuncEnd[picker] = 0.25f * (xurand() * 0.5f) + (picker + 1);

    for (S32 j = 0; j <= picker + 1; j++)
    {
        F32 prevEnd;
        if (picker == 0)
        {
            i = 9;
            prevEnd = 0.0f;
        }
        else
        {
            i = picker - 1;
            prevEnd = sLFuncEnd[i];
        }

        xFuncPiece_EndPoints(&sLFuncX[j], prevEnd, sLFuncEnd[j], sLFuncVal[j].x, sLFuncVal[i].x);
        xFuncPiece_EndPoints(&sLFuncY[j], prevEnd, sLFuncEnd[j], sLFuncVal[j].y, sLFuncVal[i].y);
        xFuncPiece_EndPoints(&sLFuncZ[j], prevEnd, sLFuncEnd[j], sLFuncVal[j].z, sLFuncVal[i].z);
    }

    sLFuncJerkTime = 0.0f;
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
