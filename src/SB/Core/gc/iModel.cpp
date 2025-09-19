#include "iModel.h"

#include <types.h>
#include "zAssetTypes.h"

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
    GetChildFrameHierarchy((RwFrame*)frame->object.object.parent, unk_0);
    return unk_0[0];
}

RpAtomic* iModelFileNew(void* buffer, U32 size)
{
    RwMemory rwmem;

    return iModelStreamRead(RwStreamOpen(rwSTREAMMEMORY, rwSTREAMREAD, &buffer));
}

void iModelUnload(RpAtomic* userdata)
{
    // Not really a hard function.
    // Don't know why frame and root exist
    RpClump* clump;
    RwFrame* frame;
    RwFrame* root;

    clump = userdata->clump;
    if (clump->object.parent != 0)
    {
        RwFrameGetRoot((RwFrame*)userdata->object.object.parent);
        RwFrameDestroyHierarchy((RwFrame*)clump);
        userdata->object.object.parent = 0;
    }
    if (&clump->object != 0)
    {
        RpClumpDestroy(clump);
    }
}

static RpAtomic* NextAtomicCallback(RpAtomic* atomic, void* data)
{
    RpAtomic** nextModel;

    if (data == atomic)
    {
        data = 0;
        return (RpAtomic*)data;
    }
    if (data == 0)
    {
        return atomic;
    }
    data = atomic;
    return atomic;
}

void iModelCacheAtomic(RpAtomic*)
{
}
