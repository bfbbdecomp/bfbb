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


bool NPCSupport_ScenePrepare()
{
  zNPCHazard_ScenePrepare();
  zNPCGlyph_ScenePrepare();
  NPCWidget_ScenePrepare();
  NPCSupplement_ScenePrepare();
  Firework_ScenePrepare();
  return NPCC_ForceTalkOk();
}

void NPCSupport_SceneFinish()
{
  zNPCHazard_SceneFinish();
  zNPCGlyph_SceneFinish();
  NPCWidget_SceneFinish();
  NPCSupplement_SceneFinish();
  Firework_SceneFinish();
  return;
}

void NPCSupport_ScenePostInit()
{
  zNPCHazard_ScenePostInit();
  zNPCGlyph_ScenePostInit();
  NPCWidget_ScenePostInit();
  NPCSupplement_ScenePostInit();
  zNPC_SNDInit();
  return;
}

void NPCSupport_SceneReset()
{
  zNPCHazard_SceneReset();
  zNPCGlyph_SceneReset();
  NPCWidget_SceneReset();
  NPCSupplement_SceneReset();
  Firework_SceneReset(0);
  return;
}

void NPCSupport_Timestep(F32 dt)
{
    zNPCGlyph_Timestep(dt);
    zNPCHazard_Timestep(dt);
    NPCSupplement_Timestep(dt);
    Firework_Timestep(dt);
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

void NPCWidget_SceneFinish()
{
}

void NPCWidget_SceneReset()
{
}

void NPCWidget_ScenePostInit()
{
}

void Firework_ScenePrepare()
{
    NPAR_PartySetup(NPAR_TYP_FIREWORKS, NULL, NULL);
    Firework_SceneReset(0);
}

void Firework_SceneFinish()
{
}

void Firework_SceneReset(int)
{
}

void Firework_Timestep(F32 dt)
{
}

bool NPCC_ForceTalkOk()
{
    return false;
}

void zNPC_SNDInit()
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
