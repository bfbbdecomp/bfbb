#include <types.h>

#include "zGlobals.h"
#include "zNPCGoalVillager.h"

extern zGlobals globals;

void zNPCGoalPlayerNear::DoCheatPanHandle()
{
    if (globals.player.Inv_Shiny > 75000)
    {
        globals.player.Inv_Shiny -= 500;
    }
}
