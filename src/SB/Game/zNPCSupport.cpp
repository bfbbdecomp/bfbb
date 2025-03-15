#include "zNPCSupport.h"

#include <types.h>

#include "zNPCHazard.h"
#include "zNPCGlyph.h"
#include "zNPCSupplement.h"

#include "xMathInlines.h"

NPCWidget g_npc_widgets[1] = {};
static U32 g_hash_uiwidgets[1];
static char* g_strz_uiwidgets[1] = {};

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
    g_hash_uiwidgets[0] = xStrHash((const char*)g_strz_uiwidgets);
}

void NPCWidget_Shutdown()
{
}

void NPCWidget_ScenePrepare()
{
}

void NPCWidget_SceneFinish()
{
    NPCWidget_SceneReset();
}

void NPCWidget_SceneReset() // Come back after more data is in
{
    g_npc_widgets->Reset();
}

void NPCWidget::Reset()
{
}

void NPCWidget_ScenePostInit()
{
}

void NPCWidget_Find(en_NPC_UI_WIDGETS)
{
    zSceneFindObject(g_hash_uiwidgets[1]);
}

void NPCWidget::Init(en_NPC_UI_WIDGETS)
{
}

void NPCTarget::TargetClear()
{
    g_hash_uiwidgets[1] = 0;
    return;

    //load 0 into r0
    // store r0 into 0x4(r3)
    // store r0 into 0x0(r3)
}

void Firework_ScenePrepare()
{
    NPAR_PartySetup(NPAR_TYP_FIREWORKS, NULL, NULL);
    Firework_SceneReset(0);
}

void Firework_SceneFinish()
{
    Firework_SceneReset(1);
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

RwRaster* NPCC_FindRWRaster(const char* txtrname)
{
    RwTexture* txtr = NPCC_FindRWTexture(txtrname);
    if (txtr != NULL)
    {
        return txtr->raster;
    }
    return NULL;
}

RwTexture* NPCC_FindRWTexture(const char*)
{
    return NULL;
}

RwRaster* NPCC_FindRWRaster(RwTexture* txtr)
{
    if (txtr != NULL)
    {
        return txtr->raster;
    }
    return NULL;
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
