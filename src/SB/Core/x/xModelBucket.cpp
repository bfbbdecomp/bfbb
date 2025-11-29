#include "xModelBucket.h"

#include "iCamera.h"
#include "iDraw.h"
#include "iModel.h"
#include "xLightKit.h"
#include "xMathInlines.h"
#include "zGlobals.h"

#include <types.h>
#include <PowerPC_EABI_Support\MSL_C\MSL_Common\stdlib.h>
#include <rwsdk\driver\gcn\dlrendst.h>

static RpWorld* sBucketDummyWorld;
static RwCamera* sBucketDummyCamera;
static S32 sBucketCurr;
static S32 sBucketCount;
static xModelBucket* sBucketList;
static S32 sBucketClipCullCurr;
static S32 sBucketClipCullCount;
static xModelBucket** sBucketClipCullList;
static S32 sAlphaCurr;
static S32 sAlphaStart;
static S32 sAlphaCount;
static xModelAlphaBucket* sAlphaList;

static S32 CmpAlphaBucket(const void* _a, const void* _b)
{
    const xModelAlphaBucket* a = (xModelAlphaBucket*)_a;
    const xModelAlphaBucket* b = (xModelAlphaBucket*)_b;
    if (a->Layer > b->Layer)
        return 1;
    if (a->Layer < b->Layer)
        return -1;
    if (a->SortValue < b->SortValue)
        return 1;
    if (a->SortValue > b->SortValue)
        return -1;
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

void xModelBucket_PreCountBucket(RpAtomic* data, U32 pipeFlags, U32 subObjects)
{
    pipeFlags = (pipeFlags & ~0x3) | 0x2;

    S32 numbuckets;
    switch (pipeFlags & 0x3)
    {
    case 1:
        numbuckets = 1;
        break;
    case 2:
        numbuckets = 1;
        break;
    case 3:
        numbuckets = 2;
        break;
    case 0:
    default:
        if (iModelNumBones(data) != 0)
        {
            numbuckets = 1;
        }
        else
        {
            numbuckets = 2;
        }
        break;
    }

    S32 modelcount = 0;
    do
    {
        if (subObjects & 0x1)
        {
            modelcount++;
        }
        subObjects >>= 1;
    } while ((data = iModelFile_RWMultiAtomic(data)));

    sBucketClipCullCount += modelcount * 2;
    sBucketCount += modelcount * numbuckets;
}

void xModelBucket_PreCountAlloc(S32 maxAlphaModels)
{
    sAlphaCount = maxAlphaModels;
    sBucketList = (xModelBucket*)xMemAlloc(gActiveHeap, sBucketCount * sizeof(xModelBucket), 0);
    sBucketClipCullList =
        (xModelBucket**)xMemAlloc(gActiveHeap, sBucketClipCullCount * sizeof(xModelBucket*), 0);
    sAlphaList =
        (xModelAlphaBucket*)xMemAlloc(gActiveHeap, sAlphaCount * sizeof(xModelAlphaBucket), 0);

    RwBBox bbox;
    bbox.sup.x = bbox.sup.y = bbox.sup.z = 100000.0f;
    bbox.inf.x = bbox.inf.y = bbox.inf.z = -100000.0f;

    sBucketDummyWorld = RpWorldCreate(&bbox);
    sBucketDummyCamera = iCameraCreate(0, 0, 0);
    RpWorldAddCamera(sBucketDummyWorld, sBucketDummyCamera);
}

void FullAtomicDupe(RpAtomic* atomic, S32 count, RpAtomic** output)
{
    S32 i;
    RwStream* stream;
    RwMemory rwmemA = {};
    stream = RwStreamOpen(rwSTREAMMEMORY, rwSTREAMWRITE, &rwmemA);
    if (stream)
    {
        RpAtomicStreamWrite(atomic, stream);
        RwStreamClose(stream, &rwmemA);
    }

    for (i = 0; i < count; i++)
    {
        RpAtomic* tempAtom;
        stream = RwStreamOpen(rwSTREAMMEMORY, rwSTREAMREAD, &rwmemA);
        RwStreamFindChunk(stream, rwID_ATOMIC, NULL, NULL);
        tempAtom = RpAtomicStreamRead(stream);
        RwStreamClose(stream, &rwmemA);

        RpAtomicSetFrame(tempAtom, RwFrameCreate());

        RwMemory rwmemB = {};
        stream = RwStreamOpen(rwSTREAMMEMORY, rwSTREAMWRITE, &rwmemB);
        if (stream)
        {
            RpAtomicStreamWrite(tempAtom, stream);
            RwStreamClose(stream, &rwmemB);
        }
        stream = RwStreamOpen(rwSTREAMMEMORY, rwSTREAMREAD, &rwmemB);
        if (stream)
        {
            RwStreamFindChunk(stream, rwID_ATOMIC, NULL, NULL);
            output[i] = RpAtomicStreamRead(stream);
            RwStreamClose(stream, &rwmemB);
        }
        else
        {
            output[i] = NULL;
        }
        RwFree((void*)rwmemB.start);

        _rwFrameSyncDirty();
        RwFrame* temp_frame = RpAtomicGetFrame(tempAtom);
        if (temp_frame)
        {
            RpAtomicSetFrame(tempAtom, NULL);
            RwFrameDestroy(temp_frame);
        }
        RpAtomicDestroy(tempAtom);
        if (output[i])
        {
            RpAtomicSetFrame(output[i], RwFrameCreate());
        }
    }

    RwFree((void*)rwmemA.start);
}

void xModelBucket_InsertBucket(RpAtomic* data, U32 pipeFlags, U32 subObjects)
{
    S32 numbuckets;
    S32 pipeSetting[2];
    RpAtomic* extraData;

    pipeFlags = (pipeFlags & ~0x3) | 0x2;

    switch (pipeFlags & 0x3)
    {
    case 1:
        numbuckets = 1;
        pipeSetting[0] = 1;
        break;
    case 2:
        numbuckets = 1;
        pipeSetting[0] = 2;
        break;
    case 3:
        numbuckets = 2;
        pipeSetting[0] = 2;
        pipeSetting[1] = 1;
        break;
    case 0:
    default:
        if (iModelNumBones(data))
        {
            numbuckets = 1;
            pipeSetting[0] = 1;
        }
        else
        {
            numbuckets = 2;
            pipeSetting[0] = 2;
            pipeSetting[1] = 1;
        }
        break;
    }

    extraData = NULL;

    do
    {
        if (subObjects & 0x1)
        {
            sBucketClipCullList[sBucketClipCullCurr] = &sBucketList[sBucketCurr];
            sBucketClipCullList[sBucketClipCullCurr + 1] = &sBucketList[sBucketCurr];
            sBucketList[sBucketCurr].Data = data;
            sBucketList[sBucketCurr].OriginalData = data;
            sBucketList[sBucketCurr].List = NULL;
            sBucketList[sBucketCurr].ClipFlags = pipeSetting[0];
            sBucketList[sBucketCurr].PipeFlags = pipeFlags;
            if (numbuckets == 2)
            {
                FullAtomicDupe(data, 1, &extraData);
                sBucketList[sBucketCurr + 1].Data = extraData;
                sBucketList[sBucketCurr + 1].OriginalData = data;
                sBucketList[sBucketCurr + 1].List = NULL;
                sBucketList[sBucketCurr + 1].ClipFlags = pipeSetting[1];
                sBucketList[sBucketCurr + 1].PipeFlags = pipeFlags;
                sBucketClipCullList[sBucketClipCullCurr] = &sBucketList[sBucketCurr + 1];
                extraData = NULL;
            }
            sBucketCurr += numbuckets;
            sBucketClipCullCurr += 2;
        }
        subObjects >>= 1;
    } while (data = iModelFile_RWMultiAtomic(data));
}

void xModelBucket_Init()
{
    if (sBucketDummyCamera)
    {
        RpWorldRemoveCamera(sBucketDummyWorld, sBucketDummyCamera);
        iCameraDestroy(sBucketDummyCamera);
        RpWorldDestroy(sBucketDummyWorld);
        sBucketDummyCamera = NULL;
        sBucketDummyWorld = NULL;
    }
}

xModelBucket** xModelBucket_GetBuckets(RpAtomic* data)
{
    for (S32 i = 0; i < sBucketClipCullCount; i += 2)
    {
        if (sBucketClipCullList[i]->OriginalData == data)
        {
            return &sBucketClipCullList[i];
        }
    }
    return NULL;
}

void xModelBucket_Begin()
{
    for (S32 i = 0; i < sBucketCount; i++)
    {
        sBucketList[i].List = NULL;
    }
    xModelBucketEnabled = 1;
}

void xModelBucket_Add(xModelInstance* minst)
{
    if ((minst->Flags & 0x401) != 0x1)
        return;

    RpAtomic* model = minst->Data;
    if (iModelCull(model, minst->Mat))
        return;

    xMat4x3* cammat = &xglobals->camera.mat;
    F32 camdist2 = SQR(model->worldBoundingSphere.center.x - cammat->pos.x) +
                   SQR(model->worldBoundingSphere.center.y - cammat->pos.y) +
                   SQR(model->worldBoundingSphere.center.z - cammat->pos.z);
    if (camdist2 >= SQR(minst->FadeEnd))
        return;

    if ((minst->PipeFlags & 0xC0) != 0x40)
    {
        minst->LightKit = gLastLightKit;
    }

    xModelBucket* bucket;
    F32 camdot = cammat->at.x * (model->worldBoundingSphere.center.x - cammat->pos.x) +
                 cammat->at.y * (model->worldBoundingSphere.center.y - cammat->pos.y) +
                 cammat->at.z * (model->worldBoundingSphere.center.z - cammat->pos.z);
    if (camdot < 1.5f * model->worldBoundingSphere.radius)
    {
        bucket = minst->Bucket[1];
    }
    else
    {
        bucket = minst->Bucket[0];
    }

    F32 alphaFade = 1.0f;
    if (camdist2 > SQR(minst->FadeStart))
    {
        alphaFade = (minst->FadeEnd - xsqrt(camdist2)) / (minst->FadeEnd - minst->FadeStart);
        if (alphaFade <= 0.0f)
            return;
        alphaFade = MIN(alphaFade, 1.0f);
    }

    if ((minst->PipeFlags & 0xFF00) || alphaFade != 1.0f || minst->Alpha != 1.0f)
    {
        if (sAlphaCurr < sAlphaCount)
        {
            sAlphaList[sAlphaCurr].Data = bucket->Data;
            sAlphaList[sAlphaCurr].MInst = minst;
            sAlphaList[sAlphaCurr].AlphaFade = alphaFade;
            sAlphaList[sAlphaCurr].SortValue = (model->worldBoundingSphere.radius > 25.0f) ?
                                                   (camdot + model->worldBoundingSphere.radius) :
                                                   camdot;
            sAlphaList[sAlphaCurr].Layer = (minst->PipeFlags >> 19) & 0x1F;
            sAlphaCurr++;
        }
    }
    else
    {
        minst->BucketNext = bucket->List;
        bucket->List = minst;
    }
}

void xModelBucket_RenderOpaque()
{
    xModelBucketEnabled = 0;

    for (S32 i = 0; i < sBucketCount; i++)
    {
        xModelBucket* bucket = &sBucketList[i];
        RpAtomic* data = bucket->Data;
        xModelInstance* minst = bucket->List;
        while (minst)
        {
            xLightKit_Enable(minst->LightKit, xglobals->currWorld);

            S32 oldHack = iModelHack_DisablePrelight;
            if ((minst->PipeFlags & 0xC0) == 0x80)
            {
                iModelHack_DisablePrelight = 0;
            }

            if (minst->Surf)
            {
                xEntSetupPipeline(minst->Surf, data);
            }

            RpAtomic* oldmodel = minst->Data;
            minst->Data = data;

            if ((minst->PipeFlags & 0x30) == 0x20)
            {
                RwRenderStateSet(rwRENDERSTATECULLMODE, (void*)rwCULLMODECULLBACK);
            }

            RwFogType oldfogtype = rwFOGTYPENAFOGTYPE;
            if ((minst->PipeFlags & 0x10000) && xglobals->fog.type != rwFOGTYPENAFOGTYPE)
            {
                oldfogtype = xglobals->fog.type;
                xglobals->fog.type = rwFOGTYPENAFOGTYPE;
                iCameraSetFogRenderStates();
            }

            xModelRenderSingle(minst);

            if ((minst->PipeFlags & 0x10000) && oldfogtype != rwFOGTYPENAFOGTYPE)
            {
                xglobals->fog.type = oldfogtype;
                iCameraSetFogRenderStates();
            }

            if ((minst->PipeFlags & 0x30) == 0x20)
            {
                RwRenderStateSet(rwRENDERSTATECULLMODE, (void*)rwCULLMODECULLNONE);
            }

            if (minst->Surf)
            {
                xEntRestorePipeline(minst->Surf, data);
            }

            iModelHack_DisablePrelight = oldHack;
            minst->Data = oldmodel;

            minst = minst->BucketNext;
        }

        bucket->List = NULL;
    }
}

void xModelBucket_RenderAlphaBegin()
{
    xModelBucketEnabled = 0;
    sAlphaStart = 0;
    if (sAlphaCurr)
    {
        qsort(sAlphaList, sAlphaCurr, sizeof(xModelAlphaBucket), CmpAlphaBucket);
    }
}

void xModelBucket_RenderAlphaLayer(S32 maxLayer)
{
    U32 pipeMask, curPipeFlags, lastPipeFlags;
    RwFogType oldfogtype;
    S32 layer;
    xModelInstance* minst;
    RpAtomic* oldmodel;
    S32 oldHack;
    F32 oldAlpha;

    pipeMask = 0xFF01FF3C;
    lastPipeFlags = 0x6500;
    oldfogtype = xglobals->fog.type;
    if (oldfogtype == rwFOGTYPENAFOGTYPE)
    {
        pipeMask &= ~0x10000;
    }

    while (sAlphaStart < sAlphaCurr)
    {
        layer = sAlphaList[sAlphaStart].Layer;
        if (layer > maxLayer)
            break;

        minst = sAlphaList[sAlphaStart].MInst;
        oldmodel = minst->Data;
        minst->Data = sAlphaList[sAlphaStart].Data;

        xLightKit_Enable(minst->LightKit, xglobals->currWorld);

        oldHack = iModelHack_DisablePrelight;
        if ((minst->PipeFlags & 0xC0) == 0x80)
        {
            iModelHack_DisablePrelight = 0;
        }

        if (minst->Surf)
        {
            xEntSetupPipeline(minst->Surf, minst->Data);
        }

        curPipeFlags = minst->PipeFlags;
        if (!(curPipeFlags & 0xF00))
        {
            curPipeFlags |= 0x500;
        }
        if (!(curPipeFlags & 0xF000))
        {
            curPipeFlags |= 0x6000;
        }
        curPipeFlags &= pipeMask;

        U32 xorPipeFlags = curPipeFlags ^ lastPipeFlags;
        F32 fade = sAlphaList[sAlphaStart].AlphaFade;

        oldAlpha = minst->Alpha;
        minst->Alpha *= fade;

        if (xorPipeFlags)
        {
            if (xorPipeFlags & 0xF00)
            {
                RwBlendFunction srcBlend = (RwBlendFunction)((curPipeFlags >> 8) & 0xF);
                RwRenderStateSet(rwRENDERSTATESRCBLEND, (void*)srcBlend);
            }
            if (xorPipeFlags & 0xF000)
            {
                RwBlendFunction destBlend = (RwBlendFunction)((curPipeFlags >> 12) & 0xF);
                RwRenderStateSet(rwRENDERSTATEDESTBLEND, (void*)destBlend);
            }
            if (xorPipeFlags & 0xC)
            {
                if ((curPipeFlags & 0xC) == 0x4)
                {
                    RwRenderStateSet(rwRENDERSTATEZWRITEENABLE, (void*)FALSE);
                }
                else
                {
                    RwRenderStateSet(rwRENDERSTATEZWRITEENABLE, (void*)TRUE);
                }
            }
            if (xorPipeFlags & 0x30)
            {
                if ((curPipeFlags & 0x30) == 0x20)
                {
                    RwRenderStateSet(rwRENDERSTATECULLMODE, (void*)rwCULLMODECULLBACK);
                }
                else if ((curPipeFlags & 0x30) <= 0x10)
                {
                    RwRenderStateSet(rwRENDERSTATECULLMODE, (void*)rwCULLMODECULLNONE);
                }
            }
            if (xorPipeFlags & 0xFF000000)
            {
                if (curPipeFlags >> 24)
                {
                    RwGameCubeSetAlphaCompare(GX_ALWAYS, 0, GX_AOP_AND, GX_GEQUAL,
                                              curPipeFlags >> 24);
                    _rwDlRenderStateSetZCompLoc(FALSE);
                }
                else
                {
                    RwGameCubeSetAlphaCompare(GX_GEQUAL, 1, GX_AOP_AND, GX_ALWAYS, 0);
                    _rwDlRenderStateSetZCompLoc(TRUE);
                }
            }
            if (xorPipeFlags & 0x10000)
            {
                if (curPipeFlags & 0x10000)
                {
                    xglobals->fog.type = rwFOGTYPENAFOGTYPE;
                    iCameraSetFogRenderStates();
                }
                else
                {
                    xglobals->fog.type = oldfogtype;
                    iCameraSetFogRenderStates();
                }
            }
            lastPipeFlags = curPipeFlags;
        }

        if ((curPipeFlags & 0x30) == 0x30)
        {
            RwRenderStateSet(rwRENDERSTATECULLMODE, (void*)rwCULLMODECULLFRONT);
            xModelRenderSingle(minst);
            RwRenderStateSet(rwRENDERSTATECULLMODE, (void*)rwCULLMODECULLBACK);
            xModelRenderSingle(minst);
        }
        else if ((curPipeFlags & 0xC) == 0x8)
        {
            iDrawSetFBMSK(0xFFFFFFFF);
            xModelRenderSingle(minst);
            iDrawSetFBMSK(0);
            xModelRenderSingle(minst);
        }
        else
        {
            xModelRenderSingle(minst);
        }

        minst->Alpha = oldAlpha;
        if (minst->Surf)
        {
            xEntRestorePipeline(minst->Surf, minst->Data);
        }
        iModelHack_DisablePrelight = oldHack;
        minst->Data = oldmodel;

        sAlphaStart++;
    }

    if (lastPipeFlags != 0x6500)
    {
        if (((lastPipeFlags >> 8) & 0xF) != 0x5)
        {
            RwRenderStateSet(rwRENDERSTATESRCBLEND, (void*)rwBLENDSRCALPHA);
        }
        if (((lastPipeFlags >> 12) & 0xF) != 0x6)
        {
            RwRenderStateSet(rwRENDERSTATEDESTBLEND, (void*)rwBLENDINVSRCALPHA);
        }
        if ((lastPipeFlags & 0xC) == 0x4)
        {
            RwRenderStateSet(rwRENDERSTATEZWRITEENABLE, (void*)TRUE);
        }
        if ((lastPipeFlags & 0x30) == 0x20 || (lastPipeFlags & 0x30) == 0x30)
        {
            RwRenderStateSet(rwRENDERSTATECULLMODE, (void*)rwCULLMODECULLNONE);
        }
        if (lastPipeFlags & 0xFF000000)
        {
            RwGameCubeSetAlphaCompare(GX_GEQUAL, 1, GX_AOP_AND, GX_ALWAYS, 0);
            _rwDlRenderStateSetZCompLoc(TRUE);
        }
        if (lastPipeFlags & 0x10000)
        {
            xglobals->fog.type = oldfogtype;
            iCameraSetFogRenderStates();
        }
    }
}

void xModelBucket_RenderAlphaEnd()
{
    sAlphaCurr = 0;
}

void xModelBucket_Deinit()
{
    for (S32 i = 0; i < sBucketCount; i++)
    {
        if (sBucketList[i].Data != sBucketList[i].OriginalData)
        {
            _rwFrameSyncDirty();
            RwFrame* tframe = RpAtomicGetFrame(sBucketList[i].Data);
            if (tframe)
            {
                RpAtomicSetFrame(sBucketList[i].Data, NULL);
                RwFrameDestroy(tframe);
            }
            RpAtomicDestroy(sBucketList[i].Data);
        }
    }
    xModelBucket_PreCountReset();
}
