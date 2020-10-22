#ifndef RTINTSEC_H
#define RTINTSEC_H

#include "rwcore.h"

#ifdef __cplusplus
extern "C" {
#endif

extern RwBool RtIntersectionSphereTriangle(RwSphere* sphere, RwV3d* v0, RwV3d* v1, RwV3d* v2,
                                           RwV3d* normal, RwReal* distance);
extern RwBool RtIntersectionBBoxTriangle(RwBBox* bbox, RwV3d* v0, RwV3d* v1, RwV3d* v2);

#ifdef __cplusplus
}
#endif

#endif