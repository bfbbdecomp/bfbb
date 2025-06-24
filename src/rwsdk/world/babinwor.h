

#ifndef RWBINWOR_H
#define RWBINWOR_H

#include <rwcore.h>
#include <rpworld.h>

typedef struct RpWorldChunkInfoSector RpWorldSectorChunkInfo;
typedef struct RpWorldChunkInfoSector _rpWorldSector;

#if (!defined(DOXYGEN))
struct RpWorldChunkInfoSector
{
    RwInt32 matListWindowBase;
    RwInt32 numTriangles;
    RwInt32 numVertices;
    RwV3d inf;
    RwV3d sup;
    RwBool collSectorPresent;
    RwBool unused;
};

typedef struct RpPlaneSectorChunkInfo RpPlaneSectorChunkInfo;
typedef struct RpPlaneSectorChunkInfo _rpPlaneSector;

struct RpPlaneSectorChunkInfo
{
    RwInt32 type;
    RwReal value;
    RwBool leftIsWorldSector;
    RwBool rightIsWorldSector;
    RwReal leftValue;
    RwReal rightValue;
};

typedef struct RpWorldChunkInfo RpWorldChunkInfo;
typedef struct RpWorldChunkInfo _rpWorld;

struct RpWorldChunkInfo
{
    RwBool rootIsWorldSector;

    RwV3d invWorldOrigin;

    RwInt32 numTriangles;
    RwInt32 numVertices;
    RwInt32 numPlaneSectors;
    RwInt32 numWorldSectors;
    RwInt32 colSectorSize;

    RwInt32 format;

    RwBBox boundingBox;
};

typedef struct rpWorldChunkInfo34000 rpWorldChunkInfo34000;

struct rpWorldChunkInfo34000
{
    RwBool rootIsWorldSector;

    RwV3d invWorldOrigin;

    RwSurfaceProperties surfaceProps;

    RwInt32 numTriangles;
    RwInt32 numVertices;
    RwInt32 numPlaneSectors;
    RwInt32 numWorldSectors;
    RwInt32 colSectorSize;

    RwInt32 format;
};
#endif

#ifdef __cplusplus
extern "C" {
#endif

extern void* _rpBinaryWorldOpen(void* instance, RwInt32 offset, RwInt32 size);
extern void* _rpBinaryWorldClose(void* instance, RwInt32 offset, RwInt32 size);

extern RwStream* _rpReadWorldRights(RwStream* s, RwInt32 len, void* obj, RwInt32 off, RwInt32 size);
extern RwStream* _rpWriteWorldRights(RwStream* s, RwInt32 len, const void* obj, RwInt32 off,
                                     RwInt32 size);
extern RwInt32 _rpSizeWorldRights(const void* obj, RwInt32 off, RwInt32 size);

extern RwStream* _rpReadSectRights(RwStream* s, RwInt32 len, void* obj, RwInt32 off, RwInt32 size);
extern RwStream* _rpWriteSectRights(RwStream* s, RwInt32 len, const void* obj, RwInt32 off,
                                    RwInt32 size);
extern RwInt32 _rpSizeSectRights(const void* obj, RwInt32 off, RwInt32 size);

extern RwUInt32 RpWorldStreamGetSize(const RpWorld* world);
extern RpWorld* RpWorldStreamRead(RwStream* stream);
extern const RpWorld* RpWorldStreamWrite(const RpWorld* world, RwStream* stream);
extern RpWorldSectorChunkInfo*
_rpWorldSectorChunkInfoRead(RwStream* stream, RpWorldSectorChunkInfo* worldSectorChunkInfo,
                            RwInt32* bytesRead);
extern RpPlaneSectorChunkInfo*
_rpPlaneSectorChunkInfoRead(RwStream* stream, RpPlaneSectorChunkInfo* planeSectorChunkInfo,
                            RwInt32* bytesRead);
extern RpWorldChunkInfo* _rpWorldChunkInfoRead(RwStream* stream, RpWorldChunkInfo* worldChunkInfo,
                                               RwInt32* bytesRead);

#ifdef __cplusplus
}
#endif

#define RpWorldSectorChunkInfoRead(stream, worldSectorChunkInfo, bytesRead)                        \
    _rpWorldSectorChunkInfoRead(stream, worldSectorChunkInfo, bytesRead)

#define RpPlaneSectorChunkInfoRead(stream, planeSectorChunkInfo, bytesRead)                        \
    _rpPlaneSectorChunkInfoRead(stream, planeSectorChunkInfo, bytesRead)

#define RpWorldChunkInfoRead(stream, worldChunkInfo, bytesRead)                                    \
    _rpWorldChunkInfoRead(stream, worldChunkInfo, bytesRead)

#endif
