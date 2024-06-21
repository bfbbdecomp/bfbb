#ifndef ICOLLIDE_H
#define ICOLLIDE_H

#include "../x/xMath3.h"
#include "../x/xModel.h"
#include "../x/xEnv.h"
#include "../x/xCollide.h"

void iBoxForModelLocal(xBox* o, const xModelInstance* m);
void iBoxForModel(xBox* o, const xModelInstance* m);
int32 iSphereHitsEnv3(const xSphere* b, const xEnv* env, xCollis* colls, uint8 ncolls, float32 sth);
int32 iSphereHitsModel3(const xSphere* b, const xModelInstance* m, xCollis* colls, uint8 ncolls,
                        float32 sth);
uint32 iRayHitsModel(const xRay3* r, const xModelInstance* m, xCollis* coll);
void iCollideInit(xScene* sc);

#endif