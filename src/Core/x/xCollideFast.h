#ifndef XCOLLIDEFAST_H
#define XCOLLIDEFAST_H

#include "xMath3.h"
#include "xRay3.h"

struct xScene;

void xCollideFastInit(xScene* sc);
uint32 xRayHitsSphereFast(const xRay3* r, const xSphere* s);
uint32 xRayHitsBoxFast(const xRay3* r, const xBox* b);

#endif