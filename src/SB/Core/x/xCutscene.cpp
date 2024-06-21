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

extern xCutscene sActiveCutscene;
extern xCutsceneInfo* sCutTocInfo;
extern uint32 sCutTocCount;
extern void* RwEngineInstance;
extern xModelInstance sCutsceneFakeModel[8];

extern float32 _672; // 1.0

extern float32 lbl_803CCB3C; // 0.0
extern float32 lbl_803CCB40; // 0.033333335


#ifdef NON_MATCHING
// Non-matching: scheduling
void xCutscene_Init(void* toc)
{
    memset(&sActiveCutscene, 0, 0x198);
    sCutTocCount = 0;
    sCutTocInfo = 0;
    if (toc != NULL)
    {
        sCutTocCount = *(int32*)toc;
        sCutTocInfo = (xCutsceneInfo*)((int32*)toc + 1);
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
#endif


#if 0
// Damn RwEngineInstance ruining this (as well as the members being accessed incorrectly by Ghidra)
xCutscene* xCutscene_Create(uint32 id)
{
    xCutscene* csn;
    xCutsceneInfo* cnfo;
    uint32 maxload;

    xSndPauseAll(1, 1);
    memset(&sActiveCutscene, 0, 0x198);
    sActiveCutscene.PlaybackSpeed = _672;

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
    sActiveCutscene.RawBuf = RwFree(maxload + 0x3c);
    sActiveCutscene.AlignBuf = sActiveCutscene.RawBuf;
    while ((int)sActiveCutscene.AlignBuf & 0x3f != 0)
    {
        sActiveCutscene.AlignBuf = (void*)((int)sActiveCutscene.AlignBuf + 4);
    }
    sActiveCutscene.TimeChunkOffs = (uint32*)(cnfo[1].SoundLeft + cnfo->NumData * 0x10 + -0x30);
    sActiveCutscene.Info = cnfo;
    sActiveCutscene.Data = (xCutsceneData*)(cnfo + 1);
    sActiveCutscene.Visibility = sActiveCutscene.TimeChunkOffs + cnfo->NumTime + 1;
    sActiveCutscene.BreakList =
        (xCutsceneBreak*)(sActiveCutscene.TimeChunkOffs + cnfo->NumTime + 1 + cnfo->VisSize);
    sActiveCutscene.Play = (xCutsceneTime*)sActiveCutscene.AlignBuf;
    sActiveCutscene.Stream = (xCutsceneTime*)((int)sActiveCutscene.AlignBuf + cnfo->MaxBufEven);
    return &sActiveCutscene;
}
#endif


#if 0
// WIP
int32 xCutscene_Destroy(xCutscene* csn)
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
        if ((((uint32*)csn->Data->DataType + i) & 0x80000000) &&
            ((RpAtomic*)((uint32*)((uint32*)csn->Data->DataType + i) + 3) != NULL))
        {
            if ((((uint32*)csn->Data->DataType + i) & 0xfffffff) == 6)
            {
                RwFree();
            }
            else
            {
                iModelUnload((RpAtomic*)((uint32*)((uint32*)csn->Data->DataType + i) + 3));
            }
            // (uint32)((uint32*)csn->Data->DataType + i) =
            //     (((uint32*)csn->Data->DataType + i) & 0xfffffff);
        }
    }
    RwFree(csn->RawBuf);
    memset(csn, 0, sizeof(xCutscene));
    return 1;
}
#endif


int32 xCutscene_LoadStart(xCutscene* csn)
{
    uint32 cnt;

    cnt = iCSFileOpen(csn);

    if (cnt <= 0)
    {
        return 0;
    }

    csn->Opened = 1;
    return 1;
}


#if 0
// WIP
float32 xCutsceneConvertBreak(float param_1, xCutsceneBreak* param_2, uint32 param_3, int param_4)
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
        if (param_2[i].Time - param_1 <= lbl_803CCB3C)
        {
            break;
        }
        if (lbl_803CCB40 <= param_2[i].Time - param_1)
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
    return param_2[i].Time - lbl_803CCB40;
}
#endif





























xCutscene* xCutscene_CurrentCutscene()
{
    return &sActiveCutscene;
}
