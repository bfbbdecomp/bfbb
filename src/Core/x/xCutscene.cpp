#include "xCutscene.h"
#include "xSnd.h"
#include "xAnim.h"
#include "xDebug.h"

#include <types.h>
#include <string.h>

extern uint32 gFrameCount;
extern xCutscene sActiveCutscene;
extern xCutsceneInfo* sCutTocInfo;
extern uint32 sCutTocCount;
extern void* RwEngineInstance;

extern void* lbl_803CC9B0(int maxload); // @1703, 803cc9b0, RwEngineInstance + 0x138, from xAnim

extern float32 _672; //1.0

// func_80015EA4
#pragma GLOBAL_ASM("asm/Core/x/xCutscene.s", "xCutscene_Init__FPv")

// func_80015F9C
#if 1
#pragma GLOBAL_ASM("asm/Core/x/xCutscene.s", "xCutscene_Create__FUi")
#else
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
    sActiveCutscene.RawBuf = lbl_803CC9B0(maxload + 0x3c);
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

// func_800160E0
#pragma GLOBAL_ASM("asm/Core/x/xCutscene.s", "xCutscene_Destroy__FP9xCutscene")

// func_80016220
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

// func_80016268
#pragma GLOBAL_ASM("asm/Core/x/xCutscene.s", "xCutsceneConvertBreak__FfP14xCutsceneBreakUii")

// func_800162C8
#pragma GLOBAL_ASM("asm/Core/x/xCutscene.s", "xCutscene_Update__FP9xCutscenef")

// func_800164C8
#pragma GLOBAL_ASM("asm/Core/x/xCutscene.s", "xCutscene_SetSpeed__FP9xCutscenef")

// func_80016590
#pragma GLOBAL_ASM("asm/Core/x/xCutscene.s", "xlog__Ff")

// func_800165B0
#pragma GLOBAL_ASM("asm/Core/x/xCutscene.s", "logf__3stdFf")

// func_800165D4
#pragma GLOBAL_ASM("asm/Core/x/xCutscene.s", "xCutscene_SetCamera__FP9xCutsceneP7xCamera")

// func_80016818
#pragma GLOBAL_ASM("asm/Core/x/xCutscene.s",                                                       \
                   "xcsCalcAnimMatrices__FP11RwMatrixTagP8RpAtomicP16xCutsceneAnimHdrfUi")

// func_80016A30
#pragma GLOBAL_ASM("asm/Core/x/xCutscene.s", "JDeltaEval__FP8RpAtomicPvPvf")

// func_800172A8
#pragma GLOBAL_ASM("asm/Core/x/xCutscene.s", "CutsceneShadowRender__FP19CutsceneShadowModel")

// func_80017318
#pragma GLOBAL_ASM("asm/Core/x/xCutscene.s", "xCutscene_Render__FP9xCutscenePP4xEntPiPf")

// func_80017CA4
xCutscene* xCutscene_CurrentCutscene()
{
    return &sActiveCutscene;
}

// func_80017CB0
#pragma GLOBAL_ASM("asm/Core/x/xCutscene.s", "atan__3stdFf")

// func_80017CD0
#pragma GLOBAL_ASM("asm/Core/x/xCutscene.s", "atanf__3stdFf")

// func_80017CF4
#pragma GLOBAL_ASM("asm/Core/x/xCutscene.s", "xVec3Lerp__FP5xVec3PC5xVec3PC5xVec3f")

// func_80017D34
#pragma GLOBAL_ASM("asm/Core/x/xCutscene.s", "CanRenderNow__9XCSNNoseyFv")

// func_80017D38
#pragma GLOBAL_ASM("asm/Core/x/xCutscene.s",                                                       \
                   "UpdatedAnimated__9XCSNNoseyFP8RpAtomicP11RwMatrixTagUiUi")
