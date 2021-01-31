#ifndef XMODELBUCKET_H
#define XMODELBUCKET_H

#include "xModel.h"

struct xModelBucket
{
    RpAtomic* Data;
    RpAtomic* OriginalData;
    xModelInstance* List;
    int32 ClipFlags;
    uint32 PipeFlags;
};

void xModelBucket_RenderAlpha();

void xModelBucket_PreCountReset();
void xModelBucket_PreCountBucket(RpAtomic* data, uint32 pipeFlags, uint32 subObjects);
void xModelBucket_PreCountAlloc(int32 maxAlphaModels);
void xModelBucket_InsertBucket(RpAtomic* data, uint32 pipeFlags, uint32 subObjects);
void xModelBucket_Init();
void xModelBucket_Deinit();
void xModelBucket_Begin();
void xModelBucket_RenderOpaque();
void xModelBucket_RenderAlphaBegin();
void xModelBucket_RenderAlphaLayer(int32 maxLayer);
void xModelBucket_RenderAlphaEnd();

#endif