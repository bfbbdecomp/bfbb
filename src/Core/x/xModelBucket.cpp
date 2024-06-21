#include "xModelBucket.h"

#include "iCamera.h"

#include <types.h>
#include <stdlib.h>

extern RpWorld* sBucketDummyWorld;
extern RwCamera* sBucketDummyCamera;
extern int32 xModelBucketEnabled;
extern int32 sBucketCurr;
extern int32 sBucketCount;
extern xModelBucket* sBucketList;
extern int32 sBucketClipCullCurr;
extern int32 sBucketClipCullCount;
extern xModelBucket** sBucketClipCullList;
extern int32 sAlphaCurr;
extern int32 sAlphaStart;
extern int32 sAlphaCount;
extern xModelAlphaBucket* sAlphaList;
extern float32 xModelBucket_f675; // 100000.0f
extern float32 xModelBucket_f676; // -100000.0f

int32 CmpAlphaBucket(const void* _a, const void* _b)
{
    xModelAlphaBucket* a = (xModelAlphaBucket*)_a;
    xModelAlphaBucket* b = (xModelAlphaBucket*)_b;
    if (a->Layer > b->Layer)
    {
        return 1;
    }
    if (a->Layer < b->Layer)
    {
        return -1;
    }
    if (a->SortValue < b->SortValue)
    {
        return 1;
    }
    if (a->SortValue > b->SortValue)
    {
        return -1;
    }
    return 0;
}

void xModelBucket_PreCountReset()
{
    sBucketCurr = 0;
    sBucketCount = 0;
    sBucketList = NULL;
    sBucketClipCullCurr = 0;
    sBucketClipCullCount = 0;
    sBucketClipCullList = NULL;
    sAlphaCurr = 0;
    sAlphaCount = 0;
    sAlphaList = NULL;
}

// func_8012643C
#pragma GLOBAL_ASM("asm/Core/x/xModelBucket.s", "xModelBucket_PreCountBucket__FP8RpAtomicUiUi")

#if 1

// func_8012652C
#pragma GLOBAL_ASM("asm/Core/x/xModelBucket.s", "xModelBucket_PreCountAlloc__Fi")

#else

// Idk.
void xModelBucket_PreCountAlloc(int32 maxAlphaModels)
{
    sAlphaCount = maxAlphaModels;
    sBucketList = (xModelBucket*)xMemAllocSize(sBucketCount * sizeof(xModelBucket));
    sBucketClipCullList =
        (xModelBucket**)xMemAllocSize(sBucketClipCullCount * sizeof(xModelBucket*));
    sAlphaList = (xModelAlphaBucket*)xMemAllocSize(sAlphaCount * sizeof(xModelAlphaBucket));
    RwBBox boundingBox;
    boundingBox.sup.x = xModelBucket_f675;
    boundingBox.sup.y = xModelBucket_f675;
    boundingBox.sup.z = xModelBucket_f675;
    boundingBox.inf.x = xModelBucket_f676;
    boundingBox.inf.y = xModelBucket_f676;
    boundingBox.inf.z = xModelBucket_f676;
    sBucketDummyWorld = RpWorldCreate(&boundingBox);
    sBucketDummyCamera = iCameraCreate(0, 0, 0);
    RpWorldAddCamera(sBucketDummyWorld, sBucketDummyCamera);
}

#endif

// func_801265E0
#pragma GLOBAL_ASM("asm/Core/x/xModelBucket.s", "FullAtomicDupe__FP8RpAtomiciPP8RpAtomic")

// func_801267B8
#pragma GLOBAL_ASM("asm/Core/x/xModelBucket.s", "xModelBucket_InsertBucket__FP8RpAtomicUiUi")

void xModelBucket_Init()
{
    if (sBucketDummyCamera != NULL)
    {
        RpWorldRemoveCamera(sBucketDummyWorld, sBucketDummyCamera);
        iCameraDestroy(sBucketDummyCamera);
        RpWorldDestroy(sBucketDummyWorld);
        sBucketDummyCamera = NULL;
        sBucketDummyWorld = NULL;
    }
}

// func_80126A44
#pragma GLOBAL_ASM("asm/Core/x/xModelBucket.s", "xModelBucket_GetBuckets__FP8RpAtomic")

void xModelBucket_Begin()
{
    for (int32 i = 0; i < sBucketCount; i++)
    {
        sBucketList[i].List = NULL;
    }
    xModelBucketEnabled = 1;
}

// func_80126AD4
#pragma GLOBAL_ASM("asm/Core/x/xModelBucket.s", "xModelBucket_Add__FP14xModelInstance")

// func_80126D40
#pragma GLOBAL_ASM("asm/Core/x/xModelBucket.s", "xModelBucket_RenderOpaque__Fv")

#if 1

// func_80126EA4
#pragma GLOBAL_ASM("asm/Core/x/xModelBucket.s", "xModelBucket_RenderAlphaBegin__Fv")

#else

// Scheduling!
void xModelBucket_RenderAlphaBegin()
{
    sAlphaStart = 0;
    xModelBucketEnabled = 0;
    if (sAlphaCurr)
    {
        qsort(sAlphaList, sAlphaCurr, sizeof(xModelAlphaBucket), CmpAlphaBucket);
    }
}

#endif

// func_80126EEC
#pragma GLOBAL_ASM("asm/Core/x/xModelBucket.s", "xModelBucket_RenderAlphaLayer__Fi")

// func_80127264
#pragma GLOBAL_ASM("asm/Core/x/xModelBucket.s", "xModelBucket_RenderAlphaEnd__Fv")

// func_80127270
#pragma GLOBAL_ASM("asm/Core/x/xModelBucket.s", "xModelBucket_Deinit__Fv")
