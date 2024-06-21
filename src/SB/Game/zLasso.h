#ifndef ZLASSO_H
#define ZLASSO_H

#include "xMath3.h"
#include "xModel.h"

struct zLasso
{
    uint32 flags;
    float32 secsTotal;
    float32 secsLeft;
    float32 stRadius;
    float32 tgRadius;
    float32 crRadius;
    xVec3 stCenter;
    xVec3 tgCenter;
    xVec3 crCenter;
    xVec3 stNormal;
    xVec3 tgNormal;
    xVec3 crNormal;
    xVec3 honda;
    float32 stSlack;
    float32 stSlackDist;
    float32 tgSlack;
    float32 tgSlackDist;
    float32 crSlack;
    float32 currDist;
    float32 lastDist;
    xVec3 lastRefs[5];
    uint8 reindex[5];
    xVec3 anchor;
    xModelTag tag;
    xModelInstance* model;
};

void zLasso_scenePrepare();

#endif
