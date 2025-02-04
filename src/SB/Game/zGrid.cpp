#include "zGrid.h"
#include "xGrid.h"
#include "xString.h"

#include <types.h>

xGrid colls_grid;
xGrid colls_oso_grid;
xGrid npcs_grid;
static int zGridInitted;

void zGridExit(zScene* s)
{
    xGridKill(&colls_grid);
    xGridKill(&colls_oso_grid);
    xGridKill(&npcs_grid);

    gGridIterActive = NULL;
    zGridInitted = NULL;
}