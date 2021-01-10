#include "zNPCMgr.h"
#include "zNPCTypeCommon.h"

#include <types.h>

extern int32 g_modinit;
extern zNPCMgr* g_npcmgr;

zNPCMgr* zNPCMgrSelf()
{
    return g_npcmgr;
}

st_XORDEREDARRAY* zNPCMgr_GetNPCList()
{
    return &zNPCMgrSelf()->npclist;
}

#if 1

// func_800EE2F4
#pragma GLOBAL_ASM("asm/Game/zNPCMgr.s", "zNPCMgr_Startup__Fv")

#else

// Can't find the new operator declaration for some reason?
void zNPCMgr_Startup()
{
    if (g_modinit++ == 0)
    {
        xBehaveMgr_Startup();
        zNPCMgr* npc = new (0x4e50434d, NULL) zNPCMgr(); //NPCM
        g_npcmgr = npc;
        Startup(npc);
    }
}

#endif

#if 1

// func_800EE358
#pragma GLOBAL_ASM("asm/Game/zNPCMgr.s", "zNPCMgr_Shutdown__Fv")

#else

// Doesn't set r4 to 1 before calling the delete operator...
void zNPCMgr_Shutdown()
{
    g_modinit--;
    if (g_modinit == 0)
    {
        zNPCMgr* mgr = zNPCMgrSelf();
        if (mgr != NULL)
        {
            mgr->Shutdown();
            delete mgr;
            g_npcmgr = NULL;
        }
        zNPCMgr_Shutdown();
        xBehaveMgr_Shutdown();
    }
}

#endif

void zNPCMgr_scenePrepare(int32 npccnt)
{
    zNPCMgrSelf()->ScenePrepare(npccnt);
}

void zNPCMgr_sceneFinish()
{
    zNPCMgrSelf()->SceneFinish();
}

void zNPCMgr_sceneReset()
{
    zNPCMgrSelf()->SceneReset();
}

void zNPCMgr_scenePostInit()
{
    zNPCMgrSelf()->ScenePostInit();
}

void zNPCMgr_scenePostSetup()
{
    zNPCMgrSelf()->ScenePostSetup();
}

void zNPCMgr_sceneTimestep(xScene* xscn, float32 dt)
{
    zNPCMgrSelf()->SceneTimestep(xscn, dt);
}

void zNPCMgr_scenePostRender()
{
    zNPCMgrSelf()->ScenePostRender();
}

void zNPCMgr_scenePostParticleRender()
{
    zNPCMgrSelf()->ScenePostParticleRender();
}

#if 1

// func_800EE508
#pragma GLOBAL_ASM("asm/Game/zNPCMgr.s", "zNPCMgr_createNPCInst__FiP9xEntAsset")

#else

// The wrong register gets or'd before the call to zNPCMgrSelf... Huh?
xEnt* zNPCMgr_createNPCInst(xEntAsset* assdat)
{
    return zNPCMgrSelf()->CreateNPC(assdat);
}

#endif

// func_800EE53C
#pragma GLOBAL_ASM("asm/Game/zNPCMgr.s", "Startup__7zNPCMgrFv")

#if 1

// func_800EE5C8
#pragma GLOBAL_ASM("asm/Game/zNPCMgr.s", "Shutdown__7zNPCMgrFv")

#else

// Have to define the functions this uses.
void zNPCMgr::Shutdown()
{
    delete this->npcFactory;
    this->npcFactory = NULL;
    zNPCTypes_ShutdownTypes();
    zNPCSpawner_Shutdown();
    zNPCMsg_Shutdown();
}

#endif

// func_800EE618
#pragma GLOBAL_ASM("asm/Game/zNPCMgr.s", "ScenePrepare__7zNPCMgrFi")

// func_800EE668
#pragma GLOBAL_ASM("asm/Game/zNPCMgr.s", "SceneFinish__7zNPCMgrFv")

// func_800EE710
#pragma GLOBAL_ASM("asm/Game/zNPCMgr.s", "SceneReset__7zNPCMgrFv")

// func_800EE764
#pragma GLOBAL_ASM("asm/Game/zNPCMgr.s", "ScenePostInit__7zNPCMgrFv")

// func_800EE790
#pragma GLOBAL_ASM("asm/Game/zNPCMgr.s", "ScenePostSetup__7zNPCMgrFv")

// func_800EE800
#pragma GLOBAL_ASM("asm/Game/zNPCMgr.s", "ScenePostRender__7zNPCMgrFv")

// func_800EE8D4
#pragma GLOBAL_ASM("asm/Game/zNPCMgr.s", "ScenePostParticleRender__7zNPCMgrFv")

// func_800EE9A8
#pragma GLOBAL_ASM("asm/Game/zNPCMgr.s", "CreateNPC__7zNPCMgrFP9xEntAsset")

// func_800EEA74
#pragma GLOBAL_ASM("asm/Game/zNPCMgr.s", "BackdoorUpdateAllNPCsOnce__7zNPCMgrFP6xScenef")

// func_800EEB08
#pragma GLOBAL_ASM("asm/Game/zNPCMgr.s", "SceneTimestep__7zNPCMgrFP6xScenef")

// func_800EEBAC
#pragma GLOBAL_ASM("asm/Game/zNPCMgr.s", "PrepTypeTable__7zNPCMgrFv")

// func_800EEC2C
#pragma GLOBAL_ASM("asm/Game/zNPCMgr.s", "NPCTypeForModel__7zNPCMgrFUiUi")

// func_800EECC4
#pragma GLOBAL_ASM("asm/Game/zNPCMgr.s", "zNPCMgr_OrdTest_npcid__FPCvPv")

#if 1

// func_800EECEC
#pragma GLOBAL_ASM("asm/Game/zNPCMgr.s", "zNPCMgr_OrdComp_npcid__FPvPv")

#else

// WIP.
int32 zNPCMgr_OrdComp_npcid(void* vkey, void* vitem)
{
    if (*(uint32*)vkey < *(uint32*)vitem)
    {
        return 0xffffffff;
    }
    else if (*(uint32*)vkey > *(uint32*)vitem)
    {
        return 1;
    }
    return 0;
}

#endif

zNPCMgr::zNPCMgr()
{
}

zNPCMgr::~zNPCMgr()
{
}

void zNPCMgr::DBG_Reset()
{
}

void zNPCMgr::DBG_PerfTrack()
{
}

xFactory* xBehaveMgr::GetFactory()
{
    return this->goalFactory;
}

void zNPCCommon::PostSetup()
{
}

void zNPCCommon::RenderExtra()
{
}

void zNPCCommon::RenderExtraPostParticles()
{
}