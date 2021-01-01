#ifndef ZASSETTYPES_H
#define ZASSETTYPES_H

#include <types.h>

extern uint32 zcam_flyasset_current;

// Not sure where this belongs
struct st_PACKER_ASSETTYPE
{
    uint32 typetag;
    uint32 tflags;
    int32 typalign;
    void* (*readXForm)(void*, uint32, void*, uint32, uint32*);
    void* (*writeXForm)(void*, uint32, void*, void*, uint32, uint32*);
    int32 (*assetLoaded)(void*, uint32, void*, int32);
    void* (*makeData)(void*, uint32, void*, int32*, int32*);
    void (*cleanup)(void*, uint32, void*);
    void (*assetUnloaded)(void*, uint32);
    void (*writePeek)(void*, uint32, void*, int8*);
};

struct st_PKR_ASSET_TOCINFO
{
    uint32 aid;
    st_PACKER_ASSETTYPE* typeref;
    uint32 sector;
    uint32 plus_offset;
    uint32 size;
    void* mempos;
};

#endif