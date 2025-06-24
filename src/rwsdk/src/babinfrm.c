#include "rwplcore.h"
#include "rwcore.h"

extern RwPluginRegistry frameTKList;

RwInt32 RwFrameRegisterPluginStream(RwUInt32 pluginID, RwPluginDataChunkReadCallBack readCB,
                                    RwPluginDataChunkWriteCallBack writeCB,
                                    RwPluginDataChunkGetSizeCallBack getSizeCB)
{
    _rwPluginRegistryAddPluginStream(&frameTKList, pluginID, readCB, writeCB, getSizeCB);
}

RwBool _rwFrameListFindFrame(const rwFrameList* frameList, const RwFrame* frame, RwInt32* npIndex)
{
    // Something like this?

    int i;
    for (i = 0; i < frameList->numFrames; i++)
    {
        if (frameList->frames[i] == frame)
        {
            (*npIndex) = i;
        }
    }
}

rwFrameList* _rwFrameListDeinitialize(rwFrameList* frameList)
{
    if (frameList->numFrames)
    {
        RwFree(frameList->frames);
    }
    return frameList;
}
