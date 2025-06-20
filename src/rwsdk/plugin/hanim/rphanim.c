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
