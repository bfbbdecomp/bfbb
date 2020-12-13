#ifndef ICOLLIDE_H
#define ICOLLIDE_H

#include <types.h>

#include "../x/xMath.h"
#include "../x/xVec3.h"

struct xBox;
struct xModelInstance;

void iBoxForModelLocal(xBox* o, const xModelInstance* m);
void iBoxForModel(xBox* o, const xModelInstance* m);

#endif