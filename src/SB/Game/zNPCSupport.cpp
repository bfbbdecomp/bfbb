#include "zNPCSupport.h"

#include <types.h>

#include "zNPCHazard.h"
#include "zNPCGlyph.h"
#include "zNPCSupplement.h"

#include "xMathInlines.h"

void NPCSupport_Startup()

{
    zNPCHazard_Startup();
    zNPCGlyph_Startup();
    NPCWidget_Startup();
    NPCSupplement_Startup();
    return;
}

void NPCSupport_Shutdown()
{
    zNPCHazard_Shutdown();
    zNPCGlyph_Shutdown();
    NPCWidget_Shutdown();
    NPCSupplement_Shutdown();
}

void NPCWidget_Startup()
{
}
void NPCWidget_Shutdown()
{
}

void NPCWidget_ScenePrepare()
{
}

F32 NPCC_TmrCycle(float* tmr, float dt, float interval)
{
    F32 parameterized;

    if (*tmr < 0.0f)
    {
        *tmr = 0.0f;
    }

    parameterized = (*tmr / interval);
    *tmr += dt;

    if (*tmr > interval)
    {
        *tmr = xfmod(*tmr, interval);
    }

    return parameterized;
}
