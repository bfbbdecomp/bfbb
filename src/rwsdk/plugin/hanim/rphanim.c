#include "rwplcore.h"
#include "rwcore.h"
#include "rphanim.h"

extern RpHAnimAtomicGlobalVars RpHAnimAtomicGlobals;

static void* HAnimClose(void* instance, RwInt32 offset, RwInt32 size)
{
    if (NULL != RpHAnimAtomicGlobals.HAnimFreeList)
    {
        RwFreeListDestroy(RpHAnimAtomicGlobals.HAnimFreeList);
        RpHAnimAtomicGlobals.HAnimFreeList = (RwFreeList*)NULL;
    }
    return instance;
}

static void* HAnimConstructor(void* object, RwInt32 offset, RwInt32 size)
{
    RpHAnimFrameExtension* frameExt = 0;

    frameExt = (object);
    frameExt->hierarchy = (RpHAnimHierarchy*)NULL;
    frameExt->id = rpHANIMDEFAULTFRAMEID;

    return (object);
}

static void* HAnimDestructor(void* object, RwInt32 offset, RwInt32 size)
{
    RpHAnimFrameExtension* frameExt;

    frameExt = (RpHAnimFrameExtension*)RPHANIMFRAMEGETDATA(object);
    if (frameExt->hierarchy)
    {
        RpHAnimHierarchy* pHierarchy = frameExt->hierarchy;
        RwInt32 frameNum;
        /* run through all the frames this hierarchy
           points at since they also point back at the
           hierarchy. Set the pointers to NULL and then
           destroy the hierarchy */
        for (frameNum = 0; frameNum < pHierarchy->numNodes; frameNum++)
        {
            if (pHierarchy->pNodeInfo[frameNum].pFrame)
            {
                /* TODO:
                   In here we ultimately check if this pointer is a sub-hierarchy
                   root, if so destroy the sub-hierarchy */
            }

            pHierarchy->pNodeInfo[frameNum].pFrame = (RwFrame*)NULL;
        }

        if (pHierarchy->parentFrame == (RwFrame*)object)
        {
            RpHAnimHierarchyDestroy(pHierarchy);
        }

        frameExt->hierarchy = (RpHAnimHierarchy*)NULL;
    }
    frameExt->id = rpHANIMDEFAULTFRAMEID;

    return object;
}

static void* HAnimCopy(void* dstObject, const void* srcObject, RwInt32 offset, RwInt32 size)
{
    const RpHAnimFrameExtension* srcFrameExt;
    RpHAnimFrameExtension* dstFrameExt;

    srcFrameExt = (const RpHAnimFrameExtension*)RPHANIMFRAMEGETCONSTDATA(srcObject);
    dstFrameExt = (RpHAnimFrameExtension*)RPHANIMFRAMEGETDATA(dstObject);

    dstFrameExt->id = srcFrameExt->id;
    if (srcFrameExt->hierarchy)
    {
        RpHAnimHierarchy* srcHierarchy = srcFrameExt->hierarchy;
        if (!(srcHierarchy->flags & rpHANIMHIERARCHYSUBHIERARCHY))
        {
            RpHAnimHierarchy* dstHierarchy;
            RwInt32 i;

            dstHierarchy =
                RpHAnimHierarchyCreate(srcHierarchy->numNodes, (RwUInt32*)NULL, (RwInt32*)NULL,
                                       (RpHAnimHierarchyFlag)srcHierarchy->flags,
                                       srcHierarchy->currentAnim->maxInterpKeyFrameSize);

            for (i = 0; i < dstHierarchy->numNodes; i++)
            {
                dstHierarchy->pNodeInfo[i].pFrame = (RwFrame*)NULL;
                dstHierarchy->pNodeInfo[i].flags = srcHierarchy->pNodeInfo[i].flags;
                dstHierarchy->pNodeInfo[i].nodeIndex = srcHierarchy->pNodeInfo[i].nodeIndex;
                dstHierarchy->pNodeInfo[i].nodeID = srcHierarchy->pNodeInfo[i].nodeID;
            }

            dstFrameExt->hierarchy = dstHierarchy;
            dstHierarchy->parentFrame = (RwFrame*)dstObject;
        }
    }

    return dstObject;
}

static RwStream* HAnimWrite(RwStream* stream, RwInt32 binaryLength, const void* object,
                            RwInt32 offsetInObject, RwInt32 sizeInObject)
{
    RwInt32 i;
    const RpHAnimFrameExtension* frameExt;
    RpHAnimNodeInfo* pNodeInfo;
    RpHAnimHierarchy* animHierarchy;
    RwInt32 streamVersion = rpHANIMSTREAMCURRENTVERSION;

    if (!RwStreamWriteInt32(stream, (RwInt32*)&streamVersion, sizeof(RwInt32)))
    {
        return NULL;
    }

    frameExt = (const RpHAnimFrameExtension*)RPHANIMFRAMEGETCONSTDATA(object);

    if (!RwStreamWriteInt32(stream, (const RwInt32*)&frameExt->id, sizeof(RwInt32)))
    {
        return NULL;
    }

    animHierarchy = frameExt->hierarchy;

    if (animHierarchy && !(animHierarchy->flags & rpHANIMHIERARCHYSUBHIERARCHY))
    {
        if (!RwStreamWriteInt32(stream, (const RwInt32*)&animHierarchy->numNodes, sizeof(RwInt32)))
        {
            return NULL;
        }
        if (!RwStreamWriteInt32(stream, (const RwInt32*)&animHierarchy->flags, sizeof(RwInt32)))
        {
            return NULL;
        }
        if (!RwStreamWriteInt32(stream,
                                (const RwInt32*)&animHierarchy->currentAnim->maxInterpKeyFrameSize,
                                sizeof(RwInt32)))
        {
            return NULL;
        }

        pNodeInfo = animHierarchy->pNodeInfo;

        for (i = 0; i < animHierarchy->numNodes; i++)
        {
            if (!RwStreamWriteInt32(stream, (RwInt32*)&pNodeInfo->nodeID, sizeof(RwInt32)))
            {
                return NULL;
            }

            if (!RwStreamWriteInt32(stream, (RwInt32*)&pNodeInfo->nodeIndex, sizeof(RwInt32)))
            {
                return NULL;
            }

            if (!RwStreamWriteInt32(stream, (RwInt32*)&pNodeInfo->flags, sizeof(RwInt32)))
            {
                return NULL;
            }

            pNodeInfo++;
        }
    }
    else
    {
        RwInt32 numNodes = 0;

        if (!RwStreamWriteInt32(stream, (const RwInt32*)&numNodes, sizeof(RwInt32)))
        {
            return NULL;
        }
    }

    return stream;
}

static RwInt32 HAnimSize(const void* object, RwInt32 offsetInObject, RwInt32 sizeInObject)
{
    RwBool needToStream;

    const RpHAnimFrameExtension* frameExt =
        (const RpHAnimFrameExtension*)RPHANIMFRAMEGETCONSTDATA(object);

    needToStream = (rpHANIMDEFAULTFRAMEID != frameExt->id) || (frameExt->hierarchy);

    if (needToStream)
    {
        RwInt32 size;

        size = sizeof(RwInt32);
        size += sizeof(RwInt32);
        size += sizeof(RwInt32);

        if (frameExt->hierarchy && !(frameExt->hierarchy->flags & rpHANIMHIERARCHYSUBHIERARCHY))
        {
            size += sizeof(RwInt32);
            size += sizeof(RwInt32);
            size += frameExt->hierarchy->numNodes * (sizeof(RwInt32) * 3);
        }

        return size;
    }

    return 0;
}

RwBool RpHAnimFrameSetHierarchy(RwFrame* frame, RpHAnimHierarchy* hierarchy)
{
    // Seems to be the correct idea but the RPHANIMFRAMEGETDATA call
    // adds in too much to the asm. Needs re-written
    RpHAnimFrameExtension* frameExt;

    frameExt = (RpHAnimFrameExtension*)RPHANIMFRAMEGETDATA(frame);

    if (frameExt->hierarchy)
    {
        frameExt->hierarchy->parentFrame = (RwFrame*)NULL;
    }
    frameExt->hierarchy = hierarchy;
    if (hierarchy)
    {
        hierarchy->parentFrame = frame;
    }

    return TRUE;
}

RpHAnimHierarchy* RpHAnimFrameGetHierarchy(RwFrame* frame)
{
}
