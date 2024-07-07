#ifndef ZLASSO_H
#define ZLASSO_H

#include "xMath3.h"
#include "xModel.h"

struct zLasso
{
    U32 flags;
    F32 secsTotal;
    F32 secsLeft;
    F32 stRadius;
    F32 tgRadius;
    F32 crRadius;
    xVec3 stCenter;
    xVec3 tgCenter;
    xVec3 crCenter;
    xVec3 stNormal;
    xVec3 tgNormal;
    xVec3 crNormal;
    xVec3 honda;
    F32 stSlack;
    F32 stSlackDist;
    F32 tgSlack;
    F32 tgSlackDist;
    F32 crSlack;
    F32 currDist;
    F32 lastDist;
    xVec3 lastRefs[5];
    U8 reindex[5];
    xVec3 anchor;
    xModelTag tag;
    xModelInstance* model;
};

void zLasso_scenePrepare();

#endif
