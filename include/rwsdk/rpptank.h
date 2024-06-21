#ifndef RPPTANK_H
#define RPPTANK_H

#include "rwcore.h"
#include "rpworld.h"

struct RpPTankLockStruct
{
    RwUInt8* data;
    RwInt32 stride;
};

struct RpPTankFormatDescriptor
{
    RwInt32 numClusters;
    RwInt32 stride;
    RwInt32 dataFlags;
};

struct RpPTankData
{
    void* data;
    RpPTankLockStruct clusters[9];
    void* userData;
    RpPTankFormatDescriptor format;
    RwUInt32 srcBlend;
    RwUInt32 dstBlend;
    RwBool vertexAlphaBlend;
    RwV2d cCenter;
    RwV2d cSize;
    RwReal cRotate;
    RwRGBA cColor;
    RwRGBA cVtxColor[4];
    RwTexCoords cUV[4];
    RwMatrix cMatrix;
};

typedef void* (*RpPTankAllocCallBack)(RpPTankData* ptankGlobal, RwInt32 maxPCount,
                                      RwUInt32 dataFlags, RwUInt32 platFlags);
typedef RwBool (*RpPTankCreateCallBack)(RpAtomic* atomic, RpPTankData* ptankGlobal,
                                        RwInt32 maxPCount, RwUInt32 dataFlags, RwUInt32 platFlags);
typedef RwBool (*RpPTankInstanceCallBack)(RpAtomic* atomic, RpPTankData* ptankGlobal,
                                          RwInt32 actPCount, RwUInt32 instFlags);
typedef RwBool (*RpPTankRenderCallBack)(RpAtomic* atomic, RpPTankData* ptankGlobal,
                                        RwInt32 actPCount);

struct RpPTankCallBacks
{
    RpPTankAllocCallBack alloc;
    RpPTankCreateCallBack create;
    RpPTankInstanceCallBack instance;
    RpPTankRenderCallBack render;
};

enum RpPTankLockFlags
{
    rpPTANKLOCKWRITE = ((int)0x40000000),
    rpPTANKLOCKREAD = ((int)0x80000000)
};

#ifdef __cplusplus
extern "C" {
#endif

extern RwBool RpPTankPluginAttach(void);
extern RpAtomic* RpPTankAtomicCreate(RwInt32 maxParticleNum, RwUInt32 dataFlags,
                                     RwUInt32 platFlags);
RpAtomic* _rpPTankAtomicCreateCustom(RwInt32 maxParticleNum, RwUInt32 dataFlags, RwUInt32 platFlags,
                                     RpPTankCallBacks* callbacks);
extern void RpPTankAtomicDestroy(RpAtomic* ptank);
extern RwBool RpPTankAtomicLock(RpAtomic* atomic, RpPTankLockStruct* dst, RwUInt32 dataFlags,
                                RpPTankLockFlags lockFlag);
extern RpAtomic* RpPTankAtomicUnlock(RpAtomic* atomic);

#ifdef __cplusplus
}
#endif

#endif