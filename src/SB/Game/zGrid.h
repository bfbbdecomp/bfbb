#ifndef ZGRID_H
#define ZGRID_H

#include "zScene.h"

#include "xEnt.h"
#include "xGrid.h"
#include "xMath.h"

#include <PowerPC_EABI_Support\MSL_C\MSL_Common\cmath>

extern xGrid colls_grid;
extern xGrid colls_oso_grid;
extern xGrid npcs_grid;

void zGridUpdateEnt(xEnt* ent);
void zGridExit(zScene*);
void zGridInit(zScene* s);
void zGridReset(zScene* s);

#endif
