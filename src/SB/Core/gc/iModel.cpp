#include "iModel.h"

#include <types.h>


RpLight* sEmptyDirectionalLight;
RpLight* sEmptyAmbientLight;


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


void iModelInit()
{
    RwFrame* frame;
    RwRGBAReal black;
    void* tempVoid = 0;

    for (S32 i = 0; i < 4; i++)
    {
        frame = (RwFrame*)RpLightCreate(i);
        //black = frame;
        RpLightSetColor(sEmptyDirectionalLight, &black);
        frame = RwFrameCreate();
        _rwObjectHasFrameSetFrame(sEmptyDirectionalLight, frame);

        sEmptyAmbientLight = RpLightCreate(2);

        RpLightSetColor(sEmptyAmbientLight, &black);
    }
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

        userdata = 0;
    }
    else
    {
        RwFrameDestroyHierarchy(frame);

        RwFrameDestroyHierarchy(frame);
        userdata = 0;

    }
    if (clump != 0)
    {
        RpClumpDestroy(clump);
    }
}


RpAtomic* NextAtomicCallback(RpAtomic* atomic, void* data)
{
    // What?

    RpAtomic** nextModel;

    if (data != atomic)
    {
        atomic = 0;
        return atomic;
    }
    if (data != 0)
    {
        return atomic;
    }

    atomic = (RpAtomic*)data;

    return atomic;
}

RpAtomic* iModelFile_RWMultiAtomic(RpAtomic* model)
{
    RpClump* clump;
    RpAtomic* nextModel = 0;
    RpAtomic* modelArray[2];

    if (model == 0)
    {
        modelArray[0] = 0;
    }
    else
    {
        //modelArray[0] = (S32)model;
        modelArray[0] = nextModel;
        RpClumpForAllAtomics(model->clump, (RpAtomicCallBack)NextAtomicCallback(nextModel, NULL),
                             modelArray);
    }
    return model;
}

void iModelCacheAtomic(RpAtomic*)
{
}
