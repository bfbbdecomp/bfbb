#ifndef XCOLLIDEFAST_H
#define XCOLLIDEFAST_H

#include "xScene.h"

void xCollideFastInit(xScene* sc);
U32 xRayHitsSphereFast(const xRay3* r, const xSphere* s);
U32 xRayHitsBoxFast(const xRay3* r, const xBox* b);

#endif
