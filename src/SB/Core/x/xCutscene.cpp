#include "xCutscene.h"
#include "xSnd.h"
#include "xAnim.h"
#include "xDebug.h"
#include "xModelBucket.h"
#include "xSnd.h"

#include "iCutscene.h"
#include "iModel.h"

#include <types.h>
#include <string.h>

xCutscene sActiveCutscene;
U32 sCutTocCount;
xCutsceneInfo* sCutTocInfo;
extern void* RwEngineInstance;
static xModelInstance sCutsceneFakeModel[8];

// Non-matching: scheduling
void xCutscene_Init(void* toc)
{
    memset(&sActiveCutscene, 0, 0x198);
    sCutTocCount = 0;
    sCutTocInfo = 0;
    if (toc != NULL)
    {
        sCutTocCount = *(S32*)toc;
        sCutTocInfo = (xCutsceneInfo*)((S32*)toc + 1);
    }
    for (int i = 0; i < 8; i++)
    {
        *(volatile int*)&sCutsceneFakeModel[i].Mat =
            (volatile int)xMemAlloc(gActiveHeap, sizeof(RwMatrixTag) * 65, 0);
        *(volatile int*)&sCutsceneFakeModel[i].Bucket =
            (volatile int)xMemAlloc(gActiveHeap, sizeof(xModelBucket*) * 2, 0);
        *(volatile int*)sCutsceneFakeModel[i].Bucket =
            (volatile int)xMemAlloc(gActiveHeap, sizeof(xModelBucket), 0);
        *(volatile int*)&sCutsceneFakeModel[i].Bucket[1] =
            (volatile int)*sCutsceneFakeModel[i].Bucket;
        *(volatile int*)&sCutsceneFakeModel[i].PipeFlags = (volatile int)0x6530;
        *(volatile float*)&sCutsceneFakeModel[i].RedMultiplier = (volatile float)1.0f;
        *(volatile float*)&sCutsceneFakeModel[i].GreenMultiplier = (volatile float)1.0f;
        *(volatile float*)&sCutsceneFakeModel[i].BlueMultiplier = (volatile float)1.0f;
        *(volatile float*)&sCutsceneFakeModel[i].Alpha = (volatile float)1.0f;
    }
}

// Damn RwEngineInstance ruining this (as well as the members being accessed incorrectly by Ghidra)
xCutscene* xCutscene_Create(U32 id)
{
    xCutscene* csn;
    xCutsceneInfo* cnfo;
    U32 maxload;

    xSndPauseAll(1, 1);
    memset(&sActiveCutscene, 0, 0x198);
    sActiveCutscene.PlaybackSpeed = 1.0f;

    for (int i = 0; i < sCutTocCount; i++)
    {
        cnfo = &sCutTocInfo[i];
        if (sCutTocInfo[i].AssetID == id)
        {
            break;
        }
    }
    maxload = cnfo->MaxBufEven + cnfo->MaxBufOdd;
    if (cnfo->MaxModel > maxload)
    {
        maxload = cnfo->MaxModel;
    }
    // sActiveCutscene.RawBuf = RwFree(maxload + 0x3c);
    sActiveCutscene.AlignBuf = sActiveCutscene.RawBuf;
    while ((int)sActiveCutscene.AlignBuf & 0x3f != 0)
    {
        sActiveCutscene.AlignBuf = (void*)((int)sActiveCutscene.AlignBuf + 4);
    }
    sActiveCutscene.TimeChunkOffs = (U32*)(cnfo[1].SoundLeft + cnfo->NumData * 0x10 + -0x30);
    sActiveCutscene.Info = cnfo;
    sActiveCutscene.Data = (xCutsceneData*)(cnfo + 1);
    sActiveCutscene.Visibility = sActiveCutscene.TimeChunkOffs + cnfo->NumTime + 1;
    sActiveCutscene.BreakList =
        (xCutsceneBreak*)(sActiveCutscene.TimeChunkOffs + cnfo->NumTime + 1 + cnfo->VisSize);
    sActiveCutscene.Play = (xCutsceneTime*)sActiveCutscene.AlignBuf;
    sActiveCutscene.Stream = (xCutsceneTime*)((int)sActiveCutscene.AlignBuf + cnfo->MaxBufEven);
    return &sActiveCutscene;
}

S32 xCutscene_Destroy(xCutscene* csn)
{
    csn->Ready = 0;
    xSndSetExternalCallback(0);
    if (csn->SndStarted != 0)
    {
        xSndStop(csn->SndHandle[0]);
        if (csn->SndNumChannel == 2)
        {
            xSndStop(csn->SndHandle[1]);
        }
        xSndUpdate();
        csn->SndStarted = 0;
    }
    xSndPauseAll(0, 0);
    xSndUpdate();
    if (csn->Opened != 0)
    {
        iCSFileClose(csn);
    }
    for (int i = 0; i < csn->Info->NumData; i++)
    {
        // if ((((U32*)csn->Data->DataType + i) & 0x80000000) &&
        //     ((RpAtomic*)((U32*)((U32*)csn->Data->DataType + i) + 3) != NULL))
        // {
        //     if ((((U32*)csn->Data->DataType + i) & 0xfffffff) == 6)
        //     {
        //         RwFree();
        //     }
        //     else
        //     {
        //         iModelUnload((RpAtomic*)((U32*)((U32*)csn->Data->DataType + i) + 3));
        //     }
        //     (U32)((U32*)csn->Data->DataType + i) = (((U32*)csn->Data->DataType + i) & 0xfffffff);
        // }
    }
    RwFree(csn->RawBuf);
    memset(csn, 0, sizeof(xCutscene));
    return 1;
}

S32 xCutscene_LoadStart(xCutscene* csn)
{
    U32 cnt;

    cnt = iCSFileOpen(csn);

    if (cnt <= 0)
    {
        return 0;
    }

    csn->Opened = 1;
    return 1;
}

S32 xCutscene_Update(xCutscene *csn, F32 dt)
{
    if ((csn->SndStarted == FALSE) && (csn->SndNumChannel != 0))
    {
        if (csn->SndNumChannel == 1)
        {
            xSndSetPitch(csn->SndHandle[0], 0.0f);
        }
        else if (csn->SndNumChannel == 2)
        {
            xSndStartStereo(csn->SndHandle[0], csn->SndHandle[1], 0.0f);
        }
        csn->SndStarted = TRUE;
    }

    csn->Time = csn->PlaybackSpeed * dt + csn->Time;
    csn->CamTime = xCutsceneConvertBreak(csn->Time, csn->BreakList, csn->Info->BreakCount, -1);

    if (csn->Time > csn->Play->EndTime || csn->BadReadPause)
    {
        if (csn->PlayIndex == csn->Info->NumTime - 1)
        {
            csn->Time = csn->Play->EndTime;
            return 0;
        }

        if (csn->BadReadPause && csn->Waiting == FALSE)
        {
            csn->BadReadPause = FALSE;
            xCutscene_SetSpeed(csn, csn->BadReadSpeed);
        }

        if (csn->CamTime != csn->Time)
        {
            return 1;
        }

        if (csn->Waiting)
        {
            csn->Time = csn->Play->EndTime;
            csn->CamTime = xCutsceneConvertBreak(csn->Time, csn->BreakList, csn->Info->BreakCount, -1);

            if (csn->BadReadPause == FALSE)
            {
                csn->BadReadSpeed = csn->PlaybackSpeed;
                xCutscene_SetSpeed(csn, 0.0f);
                csn->BadReadPause = TRUE;
            }

            return 1;
        }

        xCutsceneTime* oldChunk = csn->Play;
        csn->Play = csn->Stream;
        csn->Stream = oldChunk;
        csn->PlayIndex = csn->PlayIndex + 1;

        if (csn->PlayIndex + 1 < csn->Info->NumTime)
        {
            iCSFileAsyncRead(csn, csn->Stream, csn->TimeChunkOffs[csn->PlayIndex + 2] - csn->TimeChunkOffs[csn->PlayIndex + 1]);
        }
    }

    return 1;
}

void xCutscene_SetSpeed(xCutscene* csn, F32 speed)
{
    if (csn->BadReadPause)
        return;

    if (speed > 4.0f)
    {
        speed = 4.0f;
    }

    if (speed < 0.001f)
    {
        speed = 0.0f;
    }

    csn->PlaybackSpeed = speed;

    F32 semitones;
    if (speed != 0.0f)
    {
        semitones = xlog(speed) / 0.057762269f;
    }
    else
    {
        semitones = -99999.0f;
    }

    for (S32 i = 0; i < (S32)csn->SndNumChannel; i++)
    {
        xSndSetPitch(csn->SndHandle[i], semitones);
    }
}

F32 xlog(F32 x)
{
   return std::logf(x);
}

float std::logf(float x)
{
    return (float)log((double)x);
}

void xVec3Lerp(xVec3* out, const xVec3* a, const xVec3* b, float alpha)
{
    out->x = a->x + (b->x - a->x) * alpha;
    out->y = a->y + (b->y - a->y) * alpha;
    out->z = a->z + (b->z - a->z) * alpha;
}

F32 xCutsceneConvertBreak(float param_1, xCutsceneBreak* param_2, U32 param_3, int param_4)
{
    int i = 0;
    if (param_3 == 0)
    {
        return param_1;
    }
    while (true)
    {
        if (param_4 != param_2[i].Index)
        {
            break;
        }
        if (param_2[i].Time - param_1 <= 0.0f)
        {
            break;
        }
        if (0.03333333f <= param_2[i].Time - param_1)
        {
            break;
        }
        i++;
        param_3--;
        if (param_3 == 0)
        {
            return param_1;
        }
    }
    return param_2[i].Time - 0.03333333f;
}

void CutsceneShadowRender(CutsceneShadowModel* smod)
{
    RpAtomic* model = smod->model;
    U32 bits = smod->shadowBits;

    while (model != NULL)
    {
        if ((bits & 1) != 0)
        {
            iModelRender(model, smod->animMat);
        }
        model = iModelFile_RWMultiAtomic(model);
        bits >>= 1;
    }
}

void xCutscene_Render(xCutscene*, xEnt**, S32*, F32*)
{
}

xCutscene* xCutscene_CurrentCutscene()
{
    return &sActiveCutscene;
}

void XCSNNosey::CanRenderNow()
{
}

void XCSNNosey::UpdatedAnimated(RpAtomic*, RwMatrixTag*, U32, U32)
{
}
