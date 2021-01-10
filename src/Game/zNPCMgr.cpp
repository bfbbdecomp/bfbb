#include "zNPCMgr.h"

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

void zNPCMgr_Startup()
{
    if (g_modinit++ == 0)
    {
        xBehaveMgr_Startup();
        zNPCMgr* npc = (zNPCMgr*) //NEW!!!
            g_npcmgr = npc;
        Startup(npc);
    }
}

#endif

// func_800EE358
#pragma GLOBAL_ASM("asm/Game/zNPCMgr.s", "zNPCMgr_Shutdown__Fv")

// func_800EE3B8
#pragma GLOBAL_ASM("asm/Game/zNPCMgr.s", "zNPCMgr_scenePrepare__Fi")

// func_800EE3EC
#pragma GLOBAL_ASM("asm/Game/zNPCMgr.s", "zNPCMgr_sceneFinish__Fv")

// func_800EE410
#pragma GLOBAL_ASM("asm/Game/zNPCMgr.s", "zNPCMgr_sceneReset__Fv")

// func_800EE434
#pragma GLOBAL_ASM("asm/Game/zNPCMgr.s", "zNPCMgr_scenePostInit__Fv")

// func_800EE458
#pragma GLOBAL_ASM("asm/Game/zNPCMgr.s", "zNPCMgr_scenePostSetup__Fv")

// func_800EE47C
#pragma GLOBAL_ASM("asm/Game/zNPCMgr.s", "zNPCMgr_sceneTimestep__FP6xScenef")

// func_800EE4C0
#pragma GLOBAL_ASM("asm/Game/zNPCMgr.s", "zNPCMgr_scenePostRender__Fv")

// func_800EE4E4
#pragma GLOBAL_ASM("asm/Game/zNPCMgr.s", "zNPCMgr_scenePostParticleRender__Fv")

// func_800EE508
#pragma GLOBAL_ASM("asm/Game/zNPCMgr.s", "zNPCMgr_createNPCInst__FiP9xEntAsset")

// func_800EE53C
#pragma GLOBAL_ASM("asm/Game/zNPCMgr.s", "Startup__7zNPCMgrFv")

// func_800EE5C8
#pragma GLOBAL_ASM("asm/Game/zNPCMgr.s", "Shutdown__7zNPCMgrFv")

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

// func_800EECEC
#pragma GLOBAL_ASM("asm/Game/zNPCMgr.s", "zNPCMgr_OrdComp_npcid__FPvPv")

// func_800EED18
#pragma GLOBAL_ASM("asm/Game/zNPCMgr.s", "__ct__7zNPCMgrFv")

// func_800EED1C
#pragma GLOBAL_ASM("asm/Game/zNPCMgr.s", "__dt__7zNPCMgrFv")

// func_800EED58
#pragma GLOBAL_ASM("asm/Game/zNPCMgr.s", "DBG_Reset__7zNPCMgrFv")

// func_800EED5C
#pragma GLOBAL_ASM("asm/Game/zNPCMgr.s", "DBG_PerfTrack__7zNPCMgrFv")

// func_800EED60
#pragma GLOBAL_ASM("asm/Game/zNPCMgr.s", "GetFactory__10xBehaveMgrFv")

// func_800EED68
#pragma GLOBAL_ASM("asm/Game/zNPCMgr.s", "PostSetup__9xNPCBasicFv")

// func_800EED6C
#pragma GLOBAL_ASM("asm/Game/zNPCMgr.s", "RenderExtra__10zNPCCommonFv")

// func_800EED70
#pragma GLOBAL_ASM("asm/Game/zNPCMgr.s", "RenderExtraPostParticles__10zNPCCommonFv")
