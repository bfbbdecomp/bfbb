#include "zNPCSupport.h"

#include <types.h>

#include "zNPCHazard.h"
#include "zNPCGlyph.h"
#include "zNPCSupplement.h"

void NPCSupport_Shutdown()
{
    zNPCHazard_Shutdown();
    zNPCGlyph_Shutdown();
    NPCWidget_Shutdown();
    NPCSupplement_Shutdown();
}

void NPCWidget_Shutdown()
{
}

void NPCWidget_ScenePrepare()
{
}
