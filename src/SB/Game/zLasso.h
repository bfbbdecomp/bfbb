#ifndef ZLASSO_H
#define ZLASSO_H

#include "xMath3.h"
#include "xModel.h"
#include "xSnd.h"
#include "xString.h"

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

struct zLassoGuide
{
    xModelInstance* poly;
    xAnimState* lassoAnim;
    S32 vertMap[16];
};

struct zLassoGuideList // Size: 0xE0
{
    xEnt* target;
    U32 numGuides;
    zLassoGuide guide[3];
};

void zLasso_scenePrepare();
void zLasso_InitTimer(zLasso* lasso, F32 interpTime);
void zLasso_ResetTimer(zLasso* lasso, F32 interpTime);
void zLasso_AddGuide(xEnt* ent, xAnimState* lassoAnim, xModelInstance modelInst);
void zLasso_SetGuide(xEnt* ent, xAnimState* lassoAnim);
void zLasso_InterpToGuide(zLasso* lasso);

#endif
