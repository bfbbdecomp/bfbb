#ifndef ZLOD_H
#define ZLOD_H

#include "../Core/x/xModelBucket.h"

struct zLODTable
{
    xModelBucket** baseBucket;
    float32 noRenderDist;
    xModelBucket** lodBucket[3];
    float32 lodDist[3];
};

struct zLODManager
{
    int32 numextra;
    zLODTable* lod;
    xModelInstance* model;
    float32 adjustNoRenderDist;
};

void zLOD_Setup();
void zLOD_Update(uint32 percent_update);
zLODTable* zLOD_Get(xEnt* ent);
void AddToLODList(xModelInstance* model);
xEnt* AddToLODList(xEnt* ent);

#endif