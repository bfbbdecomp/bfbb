#include "zNPCMgr.h"

#include <types.h>

// zNPCMgrSelf()
#pragma GLOBAL_ASM("asm/Game/zNPCMgr.s", "zNPCMgrSelf__Fv")

// zNPCMgr_GetNPCList()
#pragma GLOBAL_ASM("asm/Game/zNPCMgr.s", "zNPCMgr_GetNPCList__Fv")

// zNPCMgr_Startup()
#pragma GLOBAL_ASM("asm/Game/zNPCMgr.s", "zNPCMgr_Startup__Fv")

// zNPCMgr_Shutdown()
#pragma GLOBAL_ASM("asm/Game/zNPCMgr.s", "zNPCMgr_Shutdown__Fv")

// zNPCMgr_scenePrepare(int)
#pragma GLOBAL_ASM("asm/Game/zNPCMgr.s", "zNPCMgr_scenePrepare__Fi")

// zNPCMgr_sceneFinish()
#pragma GLOBAL_ASM("asm/Game/zNPCMgr.s", "zNPCMgr_sceneFinish__Fv")

// zNPCMgr_sceneReset()
#pragma GLOBAL_ASM("asm/Game/zNPCMgr.s", "zNPCMgr_sceneReset__Fv")

// zNPCMgr_scenePostInit()
#pragma GLOBAL_ASM("asm/Game/zNPCMgr.s", "zNPCMgr_scenePostInit__Fv")

// zNPCMgr_scenePostSetup()
#pragma GLOBAL_ASM("asm/Game/zNPCMgr.s", "zNPCMgr_scenePostSetup__Fv")

// zNPCMgr_sceneTimestep(xScene*,float)
#pragma GLOBAL_ASM("asm/Game/zNPCMgr.s", "zNPCMgr_sceneTimestep__FP6xScenef")

// zNPCMgr_scenePostRender()
#pragma GLOBAL_ASM("asm/Game/zNPCMgr.s", "zNPCMgr_scenePostRender__Fv")

// zNPCMgr_scenePostParticleRender()
#pragma GLOBAL_ASM("asm/Game/zNPCMgr.s", "zNPCMgr_scenePostParticleRender__Fv")

// zNPCMgr_createNPCInst(int,xEntAsset*)
#pragma GLOBAL_ASM("asm/Game/zNPCMgr.s", "zNPCMgr_createNPCInst__FiP9xEntAsset")

// zNPCMgr::Startup()
#pragma GLOBAL_ASM("asm/Game/zNPCMgr.s", "Startup__7zNPCMgrFv")

// zNPCMgr::Shutdown()
#pragma GLOBAL_ASM("asm/Game/zNPCMgr.s", "Shutdown__7zNPCMgrFv")

// zNPCMgr::ScenePrepare(int)
#pragma GLOBAL_ASM("asm/Game/zNPCMgr.s", "ScenePrepare__7zNPCMgrFi")

// zNPCMgr::SceneFinish()
#pragma GLOBAL_ASM("asm/Game/zNPCMgr.s", "SceneFinish__7zNPCMgrFv")

// zNPCMgr::SceneReset()
#pragma GLOBAL_ASM("asm/Game/zNPCMgr.s", "SceneReset__7zNPCMgrFv")

// zNPCMgr::ScenePostInit()
#pragma GLOBAL_ASM("asm/Game/zNPCMgr.s", "ScenePostInit__7zNPCMgrFv")

// zNPCMgr::ScenePostSetup()
#pragma GLOBAL_ASM("asm/Game/zNPCMgr.s", "ScenePostSetup__7zNPCMgrFv")

// zNPCMgr::ScenePostRender()
#pragma GLOBAL_ASM("asm/Game/zNPCMgr.s", "ScenePostRender__7zNPCMgrFv")

// zNPCMgr::ScenePostParticleRender()
#pragma GLOBAL_ASM("asm/Game/zNPCMgr.s", "ScenePostParticleRender__7zNPCMgrFv")

// zNPCMgr::CreateNPC(xEntAsset*)
#pragma GLOBAL_ASM("asm/Game/zNPCMgr.s", "CreateNPC__7zNPCMgrFP9xEntAsset")

// zNPCMgr::BackdoorUpdateAllNPCsOnce(xScene*,float)
#pragma GLOBAL_ASM("asm/Game/zNPCMgr.s", "BackdoorUpdateAllNPCsOnce__7zNPCMgrFP6xScenef")

// zNPCMgr::SceneTimestep(xScene*,float)
#pragma GLOBAL_ASM("asm/Game/zNPCMgr.s", "SceneTimestep__7zNPCMgrFP6xScenef")

// zNPCMgr::PrepTypeTable()
#pragma GLOBAL_ASM("asm/Game/zNPCMgr.s", "PrepTypeTable__7zNPCMgrFv")

// zNPCMgr::NPCTypeForModel(unsigned int,unsigned int)
#pragma GLOBAL_ASM("asm/Game/zNPCMgr.s", "NPCTypeForModel__7zNPCMgrFUiUi")

#pragma GLOBAL_ASM("asm/Game/zNPCMgr.s", "func_800EECC4")

// zNPCMgr::zNPCMgr()
#pragma GLOBAL_ASM("asm/Game/zNPCMgr.s", "__ct__7zNPCMgrFv")

// zNPCMgr::~zNPCMgr()
#pragma GLOBAL_ASM("asm/Game/zNPCMgr.s", "__dt__7zNPCMgrFv")

// zNPCMgr::DBG_Reset()
#pragma GLOBAL_ASM("asm/Game/zNPCMgr.s", "DBG_Reset__7zNPCMgrFv")

// zNPCMgr::DBG_PerfTrack()
#pragma GLOBAL_ASM("asm/Game/zNPCMgr.s", "DBG_PerfTrack__7zNPCMgrFv")

// xBehaveMgr::GetFactory()
#pragma GLOBAL_ASM("asm/Game/zNPCMgr.s", "GetFactory__10xBehaveMgrFv")

// zNPCCommon::RenderExtra()
#pragma GLOBAL_ASM("asm/Game/zNPCMgr.s", "RenderExtra__10zNPCCommonFv")
