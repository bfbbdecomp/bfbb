#ifndef ZCOLLGEOM_H
#define ZCOLLGEOM_H

#include "xEnt.h"

#include <rpworld.h>
#include <rwcore.h>

struct zCollGeomTable
{
    RpAtomic* baseModel;
    RpAtomic* colModel[1];
    RpAtomic* camcolModel;
};

U32 zCollGeom_EntSetup(xEnt* ent);
void zCollGeom_Init();
void zCollGeom_CamEnable(xEnt* ent);
void zCollGeom_CamDisable(xEnt* ent);

#endif
