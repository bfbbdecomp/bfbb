#include <world/babinwor.h>

#if !(rwLIBRARYVERSION36002 < rwLIBRARYBASEVERSION)
typedef struct rpPolygon rpPolygon;
struct rpPolygon
{
    RwUInt16 matIndex;
    RwUInt16 vertIndex[3];
};
#endif

#define RWSTREAMTYPE(_type)                                                                        \
    ((rwNASTREAM == (_type)) ?                                                                     \
         "rwNASTREAM" :                                                                            \
         ((rwSTREAMFILE == (_type)) ?                                                              \
              "rwSTREAMFILE" :                                                                     \
              ((rwSTREAMFILENAME == (_type)) ?                                                     \
                   "rwSTREAMFILENAME" :                                                            \
                   ((rwSTREAMMEMORY == (_type)) ? "rwSTREAMMEMORY" : "Unknown"))))

#define WorldFormatGetNumTexCoordSetsMacro(_fmt)                                                   \
    (((_fmt)&0xff0000) ?                                                                           \
         (((_fmt)&0xff0000) >> 16) :                                                               \
         (((_fmt)&rpGEOMETRYTEXTURED2) ? 2 : (((_fmt)&rpGEOMETRYTEXTURED) ? 1 : 0)))

#define WorldFormatGetFlagsMacro(_fmt) ((_fmt)&0xff)

static RwModuleInfo binWorldModule;

static RwUInt32 lastSeenWorldRightsPluginId;
static RwUInt32 lastSeenWorldExtraData;

RwStream* _rpReadWorldRights(RwStream* s, RwInt32 len, void* obj, RwInt32 off, RwInt32 size)
{
    if (!RwStreamReadInt32(s, (RwInt32*)&(lastSeenWorldRightsPluginId), sizeof(RwInt32)))
    {
        return NULL;
    }
    if (len == 8)
    {
        if (!RwStreamReadInt32(s, (RwInt32*)&(lastSeenWorldExtraData), sizeof(RwInt32)))
        {
            return NULL;
        }
    }
    return s;
}

RwStream* _rpWriteWorldRights(RwStream* s, RwInt32 len, const void* obj, RwInt32 off, RwInt32 size)
{
    // How does this instruction order even
    // become out of order like this?
    const RpWorld* wrl;

    wrl = (const RpWorld*)obj;

    if (!RwStreamWriteInt32(s, (RwInt32*)&(wrl->pipeline->pluginId), sizeof(RwInt32)))
    {
        return NULL;
    }
    if (!RwStreamWriteInt32(s, (RwInt32*)&(wrl->pipeline->pluginData), sizeof(RwInt32)))
    {
        return NULL;
    }

    return s;
}
