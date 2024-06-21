#ifndef ZLOD_H
#define ZLOD_H

#include "xModelBucket.h"

struct zLODTable
{
    xModelBucket** baseBucket;
    float32 noRenderDist;
    xModelBucket** lodBucket[3];
    float32 lodDist[3];

    ASSIGNMENT_OPERATOR(zLODTable)
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
void zLOD_UseCustomTable(xEnt* ent, zLODTable* lod);

#endif
