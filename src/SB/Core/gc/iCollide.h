#ifndef ICOLLIDE_H
#define ICOLLIDE_H

#include "xMath3.h"
#include "xModel.h"
#include "xEnv.h"
#include "xCollide.h"

void iBoxForModelLocal(xBox* o, const xModelInstance* m);
void iBoxForModel(xBox* o, const xModelInstance* m);
S32 iSphereHitsEnv3(const xSphere* b, const xEnv* env, xCollis* colls, U8 ncolls, F32 sth);
S32 iSphereHitsModel3(const xSphere* b, const xModelInstance* m, xCollis* colls, U8 ncolls,
                      F32 sth);
U32 iRayHitsModel(const xRay3* r, const xModelInstance* m, xCollis* coll);
void iSphereForModel(xSphere* o, const xModelInstance* m);
void iCollideInit(xScene* sc);

#endif
