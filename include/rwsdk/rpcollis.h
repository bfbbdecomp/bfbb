#ifndef RPCOLLIS_H
#define RPCOLLIS_H

#include "rwcore.h"
#include "rpworld.h"

typedef struct RpCollisionTriangle;

union RpIntersectData
{
    RwLine line;
    RwV3d point;
    RwSphere sphere;
    RwBBox box;
    void* object;
};

enum RpIntersectType
{
    rpINTERSECTNONE = 0,
    rpINTERSECTLINE,
    rpINTERSECTPOINT,
    rpINTERSECTSPHERE,
    rpINTERSECTBOX,
    rpINTERSECTATOMIC,
    rpINTERSECTTYPEFORCEENUMSIZEINT = RWFORCEENUMSIZEINT
};

struct RpIntersection
{
    RpIntersectData t;
    RpIntersectType type;
};

struct RpCollisionTriangle
{
    RwV3d normal;
    RwV3d point;
    RwInt32 index;
    RwV3d* vertices[3];
};

typedef RpCollisionTriangle* (*RpIntersectionCallBackGeometryTriangle)(
    RpIntersection* intersection, RpCollisionTriangle* collTriangle, RwReal distance, void* data);

typedef RpCollisionTriangle* (*RpIntersectionCallBackWorldTriangle)(
    RpIntersection* intersection, RpWorldSector* sector, RpCollisionTriangle* collTriangle,
    RwReal distance, void* data);

#ifdef __cplusplus
extern "C" {
#endif

extern RpAtomic* RpAtomicForAllIntersections(RpAtomic* atomic, RpIntersection* intersection,
                                             RpIntersectionCallBackGeometryTriangle callBack,
                                             void* data);
extern RpWorld* RpCollisionWorldForAllIntersections(RpWorld* world, RpIntersection* intersection,
                                                    RpIntersectionCallBackWorldTriangle callBack,
                                                    void* data);
extern RwBool RpCollisionPluginAttach(void);

#ifdef __cplusplus
}
#endif

#endif