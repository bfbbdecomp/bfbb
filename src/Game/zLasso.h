#ifndef ZLASSO_H
#define ZLASSO_H

#include "../Core/x/xMath3.h"
#include "../Core/x/xModel.h"

struct zLasso
{
    unsigned int flags;
    float secsTotal;
    float secsLeft;
    float stRadius;
    float tgRadius;
    float crRadius;
    xVec3 stCenter;
    xVec3 tgCenter;
    xVec3 crCenter;
    xVec3 stNormal;
    xVec3 tgNormal;
    xVec3 crNormal;
    xVec3 honda;
    float stSlack;
    float stSlackDist;
    float tgSlack;
    float tgSlackDist;
    float crSlack;
    float currDist;
    float lastDist;
    xVec3 lastRefs[5];
    unsigned char reindex[5];
    xVec3 anchor;
    xModelTag tag;
    xModelInstance* model;
};

#endif