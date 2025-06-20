#include "rwplcore.h"
#include "rwcore.h"

void _rwObjectHasFrameSetFrame(void* object, RwFrame* frame)
{
    RwObjectHasFrame* ohf = (RwObjectHasFrame*)object;
    if (rwObjectGetParent(ohf))
    {
        rwLinkListRemoveLLLink(&ohf->lFrame);
    }
    rwObjectSetParent(object, frame);
    if (frame)
    {
        rwLinkListAddLLLink(&frame->objectList, &ohf->lFrame);

        RwFrameUpdateObjects(frame);
    }
}

void _rwObjectHasFrameReleaseFrame(void* object)
{
    RwObjectHasFrame* ohf = (RwObjectHasFrame*)object;
    if (rwObjectGetParent(ohf))
    {
        rwLinkListRemoveLLLink(&ohf->lFrame);
    }
}
