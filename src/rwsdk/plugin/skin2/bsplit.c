#include "rwplcore.h"
#include "rwcore.h"
#include <plugin/skin2/skin.h>

RwBool _rpSkinSplitDataDestroy(RpSkin* skin)
{
    SkinSplitData* skinSplitData;

    skinSplitData = &skin->skinSplitData;

    if (skinSplitData->matrixRemapIndices != NULL)
    {
        RwFree(skinSplitData->matrixRemapIndices);
    }

    skinSplitData->boneLimit = 0;
    skinSplitData->numMeshes = 0;
    skinSplitData->numRLE = 0;

    skinSplitData->matrixRemapIndices = NULL;
    skinSplitData->meshRLECount = NULL;
    skinSplitData->meshRLE = NULL;

    return TRUE;
}

RwStream* _rpSkinSplitDataStreamWrite(RwStream* stream, const RpSkin* skin)
{
    RwInt32 streamSize;
    const SkinSplitData* skinSplitData;

    skinSplitData = &skin->skinSplitData;

    /* Write out the counters */
    if (!RwStreamWriteInt32(stream, (const RwInt32*)&skinSplitData->boneLimit, sizeof(RwInt32)))
    {
        return NULL;
    }

    if (!RwStreamWriteInt32(stream, (const RwInt32*)&skinSplitData->numMeshes, sizeof(RwInt32)))
    {
        return NULL;
    }

    if (!RwStreamWriteInt32(stream, (const RwInt32*)&skinSplitData->numRLE, sizeof(RwInt32)))
    {
        return NULL;
    }

    if (0 < skin->skinSplitData.numMeshes)
    {
        streamSize = SkinSplitDataSize(skin, skinSplitData);

        if (!RwStreamWrite(stream, skinSplitData->matrixRemapIndices, streamSize))
        {
            return NULL;
        }
    }

    return stream;
}

RwStream* _rpSkinSplitDataStreamRead(RwStream* stream, RpSkin* skin)
{
    RwInt32 numMeshes, numRLE, boneLimit, streamSize;
    SkinSplitData* skinSplitData;

    skinSplitData = &skin->skinSplitData;

    if (!RwStreamReadInt32(stream, (RwInt32*)&boneLimit, sizeof(RwInt32)))
    {
        return NULL;
    }

    if (!RwStreamReadInt32(stream, (RwInt32*)&numMeshes, sizeof(RwInt32)))
    {
        return NULL;
    }

    if (!RwStreamReadInt32(stream, (RwInt32*)&numRLE, sizeof(RwInt32)))
    {
        return NULL;
    }

    if (numMeshes > 0)
    {
        if (!_rpSkinSplitDataCreate(skin, boneLimit, skin->boneData.numBones, numMeshes, numRLE))
        {
            return NULL;
        }

        streamSize = SkinSplitDataSize(skin, skinSplitData);

        /* Read in the index array */
        if (!RwStreamRead(stream, skinSplitData->matrixRemapIndices, streamSize))
        {
            RwFree(skinSplitData);

            return NULL;
        }
    }

    return stream;
}

RwInt32 _rpSkinSplitDataStreamGetSize(const RpSkin* skin)
{
    RwUInt32 streamSize;

    streamSize = sizeof(RwUInt32) * 3;

    if (0 < skin->skinSplitData.numMeshes)
    {
        streamSize += SkinSplitDataSize(skin, &skin->skinSplitData);
    }

    return streamSize;
}
