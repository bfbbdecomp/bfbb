#include "iModel.h"

#include <types.h>



RwFrame* GetChildFrameHierarchy(RwFrame* frame, void* data)
{
    RpHAnimHierarchy* hierarchy = RpHAnimFrameGetHierarchy(frame);
    if (hierarchy == 0)
    {
        RwFrameForAllChildren(frame, GetChildFrameHierarchy, data);
    }
    else
    {
        data = hierarchy;
        frame = 0;
    }
    return frame;
}

void* GetHierarchy(RpAtomic* frame)
{
    void* unk_0[2];
    unk_0[0] = 0;
    GetChildFrameHierarchy((RwFrame*)frame, unk_0);
    return unk_0[0];
}


RpAtomic* iModelFileNew(void* buffer, U32 size)
{
    RwStream* rwmem;
    S32 unk_0 = (S32)buffer;
    RwStreamType type;
    RwStreamAccessType accessType;

    type = (RwStreamType)3;
    accessType = (RwStreamAccessType)1;

    rwmem = RwStreamOpen(type, accessType, buffer);
    return iModelStreamRead(rwmem);
}

void iModelUnload(RpAtomic* userdata)
{
    RpClump* clump;
    RwFrame* frame = 0;
    RwFrame* root;

    clump = (RpClump*)userdata + 0x3c;
    if ((RpClump*)userdata != 0)
    {
        RwFrameGetRoot((RwFrame*)userdata);
        RwFrameDestroyHierarchy(frame);
        userdata = 0;

    }
    if (clump != 0)
    {
        RpClumpDestroy(clump);
    }
}

void iModelCacheAtomic(RpAtomic*)
{
}
