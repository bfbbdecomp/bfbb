#include "zEntPlayer.h"
#include "zGlobals.h"
#include "zMain.h"

#include <string.h>
#include <types.h>

void iEnvStartup()
{
}

void zMainOutputMgrSetup()
{
    iTime tim = iTimeGet();
    iTimeDiffSec(tim);
    iTimeGet();
}

void zMainInitGlobals()
{
    memset(&globals, 0, 0x1fc8);
    globals.sceneFirst = 1;
    iTime tim = iTimeGet();
    iTimeDiffSec(tim);
    iTimeGet();
}

void zMainMemLvlChkCB()
{
    zSceneMemLvlChkCB();
}

void zLedgeAdjust(zLedgeGrabParams* params)
{
    params->animGrab *= (1.0f/30);
}