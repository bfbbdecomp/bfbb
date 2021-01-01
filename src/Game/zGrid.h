#ifndef ZGRID_H
#define ZGRID_H

#include "zScene.h"

#include "../Core/x/xEnt.h"
#include "../Core/x/xGrid.h"

extern xGrid colls_grid;
extern xGrid colls_oso_grid;
extern xGrid npcs_grid;

void zGridUpdateEnt(xEnt* ent);
void zGridExit();
void zGridInit(zScene* s);
void zGridReset(zScene* s);

#endif