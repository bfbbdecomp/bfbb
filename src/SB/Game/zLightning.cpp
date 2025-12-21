#include "zLightning.h"

#include "xDebug.h"
#include "zGlobals.h"
#include "xstransvc.h"

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

const char* lightning_type_names[4] = { "Line", "Rotating", "Zeus", "Func" };
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

static void lightningTweakStart(const tweak_info& t);

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

void zLightningInit()
{
    for (S32 i = 0; i < NUM_LIGHTNING; i++)
    {
        sLightning[i] = NULL;
    }

    zSceneFindObject(xStrHash("PAREMIT_EG_SPARK"));
    RwTexture* tex = (RwTexture*)xSTFindAsset(xStrHash("LIGHTNING"), NULL);
    if (tex != NULL)
    {
        sLightningRaster = tex->raster;
    }

    for (S32 i = 0; i < 9; i++)
    {
        sLFuncX[i].next = &sLFuncX[i + 1];
        sLFuncY[i].next = &sLFuncY[i + 2];
        sLFuncZ[i].next = &sLFuncZ[i + 3];
    }

    sLFuncX[9].next = NULL;
    sLFuncY[9].next = NULL;
    sLFuncZ[9].next = NULL;

    for (S32 i = 0; i < 10; i++) {
        xVec3Init(&sLFuncVal[i], 2.0f * (xurand() - 0.5f), 2.0f * (xurand() - 0.5f), 2.0f * (xurand() - 0.5f));
        xVec3Init(&sLFuncSlope[i][0], 2.0f * (2.0f * (xurand() - 0.5f)), 2.0f * (2.0f * (xurand() - 0.5f)), 2.0f * (2.0f * (xurand() - 0.5f)));
        xVec3Init(&sLFuncSlope[i][1], 2.0f * (2.0f * (xurand() - 0.5f)), 2.0f * (2.0f * (xurand() - 0.5f)), 2.0f * (2.0f * (xurand() - 0.5f)));

        sLFuncEnd[i] = 0.25f * (xurand() - 0.5f) + (i + 1);
    }

    sLFuncEnd[9] = 10.0f;

    for (S32 i = 0; i < 10; i++)
    {
        S32 j;
        F32 prevEnd;
        if (i == 0)
        {
            prevEnd = 0.0f;
            j = 9;
        }
        else
        {
            j = i - 1;
            prevEnd = sLFuncEnd[j];
        }

        xFuncPiece_EndPoints(&sLFuncX[i], prevEnd, sLFuncEnd[i], sLFuncVal[i].x, sLFuncVal[j].x);
        xFuncPiece_EndPoints(&sLFuncY[i], prevEnd, sLFuncEnd[i], sLFuncVal[i].y, sLFuncVal[j].y);
        xFuncPiece_EndPoints(&sLFuncZ[i], prevEnd, sLFuncEnd[i], sLFuncVal[i].z, sLFuncVal[j].z);
    }

    sLFuncJerkTime = 0.0f;

    gLightningTweakAddInfo.type = 0x3;
    gLightningTweakAddInfo.flags = 0x1428;
    gLightningTweakAddInfo.time = 5.0f;
    xVec3Init(&sTweakStart, -5.0f, 6.0f, 0.0f);
    xVec3Init(&sTweakEnd, -5.0f, 2.0f, 0.0f);
    gLightningTweakAddInfo.color.r = 0xC8;
    gLightningTweakAddInfo.color.g = 0xC8;
    gLightningTweakAddInfo.color.b = 0xC8;
    gLightningTweakAddInfo.color.a = 0xC8;
    gLightningTweakAddInfo.arc_height = 0.5f;
    gLightningTweakAddInfo.rot_radius = 0.15f;
    gLightningTweakAddInfo.thickness = 0.25f;
    gLightningTweakAddInfo.rand_radius = 8.0f;
    gLightningTweakAddInfo.move_degrees = -2500.0f;
    gLightningTweakAddInfo.setup_degrees = 66.0f;
    gLightningTweakAddInfo.total_points = 16;
    gLightningTweakAddInfo.zeus_normal_offset = 0.75f;
    gLightningTweakAddInfo.zeus_back_offset = 0.2f;
    gLightningTweakAddInfo.zeus_side_offset = 0.0f;

    sLightningStartCB.on_change = &lightningTweakStart;
    sLightningChangeCB.on_change = &lightningTweakChangeType;

    xDebugAddTweak("Lightning|\01\01Go", "Start Lightning", &sLightningStartCB, NULL, 0x2);
    xDebugAddTweak("Lightning|\01Globals|\01\01JerkFrequency", &sLFuncJerkFreq, 0.0f, 1000000000.0f, NULL, NULL, 0x2);
    xDebugAddTweak("Lightning|\01Globals|\01\01ShiftSpeed", &sLFuncShift, 0.0f, 1000000000.0f, NULL, NULL, 0x2);
    xDebugAddTweak("Lightning|\01Globals|\01\02MinPStep", &sLFuncMinPStep, 0.0f, 1000000000.0f, NULL, NULL, 0x2);
    xDebugAddTweak("Lightning|\01Globals|\01\03MaxPStep", &sLFuncMaxPStep, 0.0f, 1000000000.0f, NULL, NULL, 0x2);
    xDebugAddTweak("Lightning|\01Globals|\01\03MinScale", &sLFuncMinScale, 0.0f, 1000000000.0f, NULL, NULL, 0x2);
    xDebugAddTweak("Lightning|\01Globals|\02\01MaxScale", &sLFuncMaxScale, 0.0f, 1000000000.0f, NULL, NULL, 0x2);
    xDebugAddTweak("Lightning|\01Globals|\02\01ScalePerLength", &sLFuncScalePerLength, 0.0f, 1000000000.0f, NULL, NULL, 0x2);
    xDebugAddTweak("Lightning|\01Globals|\02\02MinSpan", &sLFuncMinSpan, 0.0f, 1000000000.0f, NULL, NULL, 0x2);
    xDebugAddTweak("Lightning|\01Globals|\02\02SpanPerLength", &sLFuncSpanPerLength, 0.0f, 1000000000.0f, NULL, NULL, 0x2);
    xDebugAddTweak("Lightning|\01Globals|\02\03SlopeRange", &sLFuncSlopeRange, 0.0f, 1000000000.0f, NULL, NULL, 0x2);
    xDebugAddTweak("Lightning|\01Globals|\02\03UVSpeed", &sLFuncUVSpeed, -1000000000.0f, 1000000000.0f, NULL, NULL, 0x2);
    xDebugAddTweak("Lightning|\01Time", &gLightningTweakAddInfo.time, 0.0f, 1000000000.0f, NULL, NULL, 0x2);
    xDebugAddTweak("Lightning|\01Total Points", &gLightningTweakAddInfo.total_points, 2, 16, NULL, NULL, 0x2);
    
    xDebugAddSelectTweak("Lightning|\01Type", &gLightningTweakAddInfo.type, lightning_type_names, NULL, 4, &sLightningChangeCB, NULL, 0x2);
    
    tweak_info info;
    lightningTweakChangeType((const tweak_info&)info);

    xDebugAddFlagTweak("Lightning|\02Flag|Rot Scalar", &gLightningTweakAddInfo.flags, 0x8, NULL, NULL, 0x2);
    xDebugAddFlagTweak("Lightning|\02Flag|No Fade Out", &gLightningTweakAddInfo.flags, 0x1000, NULL, NULL, 0x2);
    xDebugAddFlagTweak("Lightning|\02Flag|Arc", &gLightningTweakAddInfo.flags, 0x20, NULL, NULL, 0x2);
    xDebugAddFlagTweak("Lightning|\02Flag|Vertical Orientation", &gLightningTweakAddInfo.flags, 0x200, NULL, NULL, 0x2);
    xDebugAddFlagTweak("Lightning|\02Flag|Taper Thickness At End", &gLightningTweakAddInfo.flags, 0x400, NULL, NULL, 0x2);
    xDebugAddFlagTweak("Lightning|\02Flag|Taper Thickness At Start", &gLightningTweakAddInfo.flags, 0x800, NULL, NULL, 0x2);
    xDebugAddTweak("Lightning|\02Start|x", &sTweakStart.x, -50.0f, 50.0f, NULL, NULL, 0x2);
    xDebugAddTweak("Lightning|\02Start|y", &sTweakStart.y, -50.0f, 50.0f, NULL, NULL, 0x2);
    xDebugAddTweak("Lightning|\02Start|z", &sTweakStart.z, -50.0f, 50.0f, NULL, NULL, 0x2);
    xDebugAddTweak("Lightning|\03End|x", &sTweakEnd.x, -50.0f, 50.0f, NULL, NULL, 0x2);
    xDebugAddTweak("Lightning|\03End|y", &sTweakEnd.y, -50.0f, 50.0f, NULL, NULL, 0x2);
    xDebugAddTweak("Lightning|\03End|z", &sTweakEnd.z, -50.0f, 50.0f, NULL, NULL, 0x2);
    xDebugAddTweak("Lightning|\04Color|\01R", &gLightningTweakAddInfo.color.r, 0x0, 0xFF, NULL, NULL, 0x2);
    xDebugAddTweak("Lightning|\04Color|\02G", &gLightningTweakAddInfo.color.g, 0x0, 0xFF, NULL, NULL, 0x2);
    xDebugAddTweak("Lightning|\04Color|\03B", &gLightningTweakAddInfo.color.b, 0x0, 0xFF, NULL, NULL, 0x2);
    xDebugAddTweak("Lightning|\04Color|\04A", &gLightningTweakAddInfo.color.a, 0x0, 0xFF, NULL, NULL, 0x2);
    xDebugAddTweak("Lightning|Lengths|Rot Radius", &gLightningTweakAddInfo.rot_radius, -1000000000.0f, 1000000000.0f, NULL, NULL, 0x2);
    xDebugAddTweak("Lightning|Lengths|Arc Height", &gLightningTweakAddInfo.arc_height, -1000000000.0f, 1000000000.0f, NULL, NULL, 0x2);
    xDebugAddTweak("Lightning|Lengths|Thickness", &gLightningTweakAddInfo.thickness, 0.0f, 100.0f, NULL, NULL, 0x2);
    xDebugAddTweak("Lightning|Randomness|Rand Radius", &gLightningTweakAddInfo.rand_radius, 0.0f, 1000000000.0f, NULL, NULL, 0x2);
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
