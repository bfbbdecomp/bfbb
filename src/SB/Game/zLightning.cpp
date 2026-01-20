#include "zLightning.h"

#include "xDebug.h"
#include "zGlobals.h"
#include "xstransvc.h"
#include "xParEmitter.h"

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
#define LYT_TYPE_LINE 0
#define LYT_TYPE_ROTATING 1
#define LYT_TYPE_ZEUS 2
#define LYT_TYPE_FUNC 3

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
        xVec3Init(&sLFuncSlope[i][0], sLFuncSlopeRange * (2.0f * (xurand() - 0.5f)), sLFuncSlopeRange * (2.0f * (xurand() - 0.5f)), sLFuncSlopeRange * (2.0f * (xurand() - 0.5f)));
        xVec3Init(&sLFuncSlope[i][1], sLFuncSlopeRange * (2.0f * (xurand() - 0.5f)), sLFuncSlopeRange * (2.0f * (xurand() - 0.5f)), sLFuncSlopeRange * (2.0f * (xurand() - 0.5f)));

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

    sLightningStartCB.on_change = (void (*)(tweak_info&))&lightningTweakStart;
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

// FIXME: Logic is nearly perfect but there are some incorrect values used causing register mismatches
//          inside the loop logic, as well as incorrect r1 local offsets throughout
zLightning* zLightningAdd(_tagLightningAdd* add)
{
    zLightning* new_lightning;
    if (!(new_lightning = FindFreeLightning()))
    {
        return NULL;
    }

    new_lightning->type = add->type;
    new_lightning->flags = add->flags | 0x41;
    new_lightning->color = add->color;

    if (new_lightning->type != LYT_TYPE_FUNC)
    {
        new_lightning->legacy.total_points = add->total_points;
        new_lightning->legacy.end_points = add->end_points;        
        new_lightning->legacy.arc_height = add->arc_height;
        new_lightning->legacy.rand_radius = add->rand_radius;
        
        S32 zeusOnStraightPoint = TRUE;
        F32 currot = 0.0f;

        switch (new_lightning->type)
        {
        case LYT_TYPE_LINE:
            break;
        case LYT_TYPE_ROTATING:
            new_lightning->legacy.rot.degrees = add->move_degrees;
            new_lightning->legacy.rot.height = add->rot_radius;
            break;
        case LYT_TYPE_ZEUS:
            new_lightning->legacy.zeus.normal_offset = add->zeus_normal_offset;
            new_lightning->legacy.zeus.back_offset = add->zeus_back_offset;
            new_lightning->legacy.zeus.side_offset = add->zeus_side_offset;
            break;
        }

        xVec3 dir;
        if (add->flags & 0x80)
        {
            if (add->end_points - 1 < 0)
            {
                xVec3Sub(&dir, &add->start[add->total_points - 1], add->start);
            }
            else
            {
                xVec3Sub(&dir, &add->end[add->end_points - 1], add->start);
            }
        }
        else
        {
            xVec3Sub(&dir, add->end, add->start);
        }

        xVec3Normalize(&dir, &dir);

        if (dir.y > 0.999f || dir.y < -0.999f)
        {
            xVec3Init(&new_lightning->legacy.arc_normal, 1.0f, 0.0f, 0.0f);
        }
        else
        {
            new_lightning->legacy.arc_normal.x = -(dir.x * dir.y);
            new_lightning->legacy.arc_normal.y = dir.z * dir.z + dir.x * dir.x;
            new_lightning->legacy.arc_normal.z = -(dir.z * dir.y);
            xVec3Normalize(&new_lightning->legacy.arc_normal, &new_lightning->legacy.arc_normal);
        }

        xVec3 arc_orthogonal;
        xVec3Cross(&arc_orthogonal, &new_lightning->legacy.arc_normal, &dir);

        F32 pos = 0.0f;
        F32 inc = 1.0f / (new_lightning->legacy.total_points - 1.0f);

        S32 i;
        S32 j = 0;
        for (i = 0; i < new_lightning->legacy.total_points; i++)
        {

            new_lightning[i].legacy.thickness[0] = add->thickness * 0.5f;

            if (add->flags & 0x400)
            {
                new_lightning[i].legacy.thickness[0] *= 1.0f - pos;
            }
            
            if (add->flags & 0x800)
            {
                new_lightning[i].legacy.thickness[0] *= pos;
            }
            
            if ((add->flags & 0x400) && (add->flags & 0x800))
            {
                new_lightning[i].legacy.thickness[0] *= 4.0f;
            }

            if (add->flags & 0x80)
            {
                if (i - (add->total_points - add->end_points) < 0)
                {
                    new_lightning[i].legacy.point[0] = add->start[j];
                }
                else
                {
                    new_lightning[i].legacy.point[0] = add->end[i - (add->total_points - add->end_points)];
                }
            }
            else
            {
                xVec3Lerp(&new_lightning[i].legacy.point[0], add->start, add->end, pos);
            }

            switch (new_lightning->type)
            {
            case LYT_TYPE_LINE:
                break;
            case LYT_TYPE_ROTATING:
                new_lightning[i].legacy.rot.deg[0] = currot;

                while (new_lightning[i].legacy.rot.deg[0] > 180.0f)
                {
                    new_lightning[i].legacy.rot.deg[0] -= 360.0f;
                }

                while (new_lightning[i].legacy.rot.deg[0] < -180.0f)
                {
                    new_lightning[i].legacy.rot.deg[0] += 360.0f;
                }

                currot += add->setup_degrees;
                break;
            case LYT_TYPE_ZEUS:
                if (i != 0 && i == new_lightning[i].legacy.total_points - 1)
                {
                    break;
                }

                xVec3 unk_r1_20;
                if (zeusOnStraightPoint)
                {
                    xVec3Copy(&unk_r1_20, new_lightning[i].legacy.point);
                    zeusOnStraightPoint = FALSE;
                }
                else
                {
                    xVec3Copy(new_lightning[i].legacy.point, &unk_r1_20);
                    xVec3AddScaled(new_lightning->legacy.point, &new_lightning->legacy.arc_normal, new_lightning->legacy.zeus.normal_offset);
                    xVec3AddScaled(new_lightning->legacy.point, &arc_orthogonal, -new_lightning->legacy.zeus.back_offset);
                    xVec3AddScaled(new_lightning->legacy.point, &dir, -new_lightning->legacy.zeus.side_offset);

                    zeusOnStraightPoint = TRUE;
                }

                break;
            }

            if (new_lightning->flags & 0x20)
            {
                F32 scalar = 4.0f * pos + pos * pos * -4.0f;
                if (scalar > 0.0f)
                {
                    xVec3AddScaled(&new_lightning[j].legacy.base_point[0], &new_lightning->legacy.arc_normal, scalar * new_lightning->legacy.arc_height);
                }
            }

            new_lightning->legacy.base_point[0] = new_lightning->legacy.point[0];

            pos += inc;
            j++;
        }
    }
    else
    {
        zLightningModifyEndpoints(new_lightning, add->start, add->end);

        new_lightning->func.endParam[0] = 10.0f * xurand();
        new_lightning->func.endParam[1] = 10.0f * xurand();
        new_lightning->func.endVel[0] = -1.0f;
        new_lightning->func.endVel[1] = 1.0f;
        new_lightning->func.width = add->thickness;
        new_lightning->func.arc_height = add->arc_height;
    }

    if (new_lightning->flags & 0x10)
    {
        new_lightning->time_left = new_lightning->time_total = 0.1f;
    }
    else
    {
        new_lightning->time_left = new_lightning->time_total = add->time;
    }

    return new_lightning;
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
