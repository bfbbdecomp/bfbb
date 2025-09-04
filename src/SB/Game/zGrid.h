#ifndef ZGRID_H
#define ZGRID_H

#include "zScene.h"

#include "xEnt.h"
#include "xGrid.h"
#include "xMath.h"

#include <PowerPC_EABI_Support\MSL_C\MSL_Common\cmath>

xGrid colls_grid;
xGrid colls_oso_grid;
xGrid npcs_grid;
static S32 zGridInitted;

static void hack_flag_shadows(zScene* s);
void zGridUpdateEnt(xEnt* ent);
void zGridExit(zScene*);
void zGridInit(zScene* s);
void zGridReset(zScene* s);

#endif
