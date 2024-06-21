#ifndef ZCOLLGEOM_H
#define ZCOLLGEOM_H

#include "../Core/x/xEnt.h"

#include <rwcore.h>
#include <rpworld.h>

struct zCollGeomTable
{
    RpAtomic* baseModel;
    RpAtomic* colModel[1];
    RpAtomic* camcolModel;
};

uint32 zCollGeom_EntSetup(xEnt* ent);
void zCollGeom_Init();
void zCollGeom_CamEnable(xEnt* ent);
void zCollGeom_CamDisable(xEnt* ent);

#endif