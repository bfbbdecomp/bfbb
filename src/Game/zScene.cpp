#include "zScene.h"

#include <types.h>

// func_800B0A28
#pragma GLOBAL_ASM("asm/Game/zScene.s", "count_dynamic_types__20_esc__2_unnamed_esc__2_zScene_cpp_esc__2_FPCc")

// func_800B0AAC
#pragma GLOBAL_ASM("asm/Game/zScene.s", "add_dynamic_types__20_esc__2_unnamed_esc__2_zScene_cpp_esc__2_FR6zScene")

// func_800B0B24
#pragma GLOBAL_ASM("asm/Game/zScene.s", "init_dynamic_type__20_esc__2_unnamed_esc__2_zScene_cpp_esc__2_FR6zSceneUiRCQ220_esc__2_unnamed_esc__2_zScene_cpp_esc__2_17dynamic_type_data")

// func_800B0C94
#pragma GLOBAL_ASM("asm/Game/zScene.s", "init_dynamic_types__20_esc__2_unnamed_esc__2_zScene_cpp_esc__2_FR6zSceneUi")

// func_800B0D08
#pragma GLOBAL_ASM("asm/Game/zScene.s", "zSceneInitFunc_DefaultEnt__FP6zSceneP24zSceneObjectInstanceDescUi")

// func_800B0E08
#pragma GLOBAL_ASM("asm/Game/zScene.s", "zSceneInitFunc_Default__FP6zSceneP24zSceneObjectInstanceDescUi")

// func_800B0EF0
#pragma GLOBAL_ASM("asm/Game/zScene.s", "zSceneInitFunc_MovePoint__FP6zSceneP24zSceneObjectInstanceDescUi")

// func_800B0FC4
#pragma GLOBAL_ASM("asm/Game/zScene.s", "zSceneInitFunc_SBNPC__FP6zSceneP24zSceneObjectInstanceDescUi")

// func_800B1088
#pragma GLOBAL_ASM("asm/Game/zScene.s", "zSceneInitFunc_Player__FP6zSceneP24zSceneObjectInstanceDescUi")

// func_800B116C
#pragma GLOBAL_ASM("asm/Game/zScene.s", "zSceneInitFunc_Camera__FP6zSceneP24zSceneObjectInstanceDescUi")

// func_800B1238
#pragma GLOBAL_ASM("asm/Game/zScene.s", "zSceneInitFunc_Surface__FP6zSceneP24zSceneObjectInstanceDescUi")

// func_800B12D4
#pragma GLOBAL_ASM("asm/Game/zScene.s", "zSceneInitFunc_Gust__FP6zSceneP24zSceneObjectInstanceDescUi")

// func_800B1374
#pragma GLOBAL_ASM("asm/Game/zScene.s", "zSceneInitFunc_Volume__FP6zSceneP24zSceneObjectInstanceDescUi")

// func_800B141C
#pragma GLOBAL_ASM("asm/Game/zScene.s", "zSceneInitFunc_LobMaster__FP6zSceneP24zSceneObjectInstanceDescUi")

// func_800B1424
#pragma GLOBAL_ASM("asm/Game/zScene.s", "zSceneInitFunc_Dispatcher__FP6zSceneP24zSceneObjectInstanceDescUi")

// func_800B14F4
#pragma GLOBAL_ASM("asm/Game/zScene.s", "zSceneSet__FP5xBaseUi")

// func_800B1510
#pragma GLOBAL_ASM("asm/Game/zScene.s", "PipeCountStuffCB__FP8RpAtomicUiUi")

// func_800B1528
#pragma GLOBAL_ASM("asm/Game/zScene.s", "PipeAddStuffCB__FP8RpAtomicUiUi")

// func_800B1564
#pragma GLOBAL_ASM("asm/Game/zScene.s", "PipeForAllSceneModels__FPFP8RpAtomicUiUi_v")

// func_800B16B8
#pragma GLOBAL_ASM("asm/Game/zScene.s", "zSceneInitEnvironmentalSoundEffect__Fv")

// func_800B1768
#pragma GLOBAL_ASM("asm/Game/zScene.s", "BaseTypeNeedsUpdate__FUc")

// func_800B1828
#pragma GLOBAL_ASM("asm/Game/zScene.s", "zSceneInit__FUii")

// func_800B2064
#pragma GLOBAL_ASM("asm/Game/zScene.s", "add_scene_tweaks__Fv")

// func_800B2068
#pragma GLOBAL_ASM("asm/Game/zScene.s", "zSceneExit__Fi")

// func_800B22C8
#pragma GLOBAL_ASM("asm/Game/zScene.s", "zSceneUpdateSFXWidgets__Fv")

// func_800B22FC
#pragma GLOBAL_ASM("asm/Game/zScene.s", "HackSwapIt__FPci")

// func_800B23F8
#pragma GLOBAL_ASM("asm/Game/zScene.s", "zSceneSwitch__FP8_zPortali")

// func_800B2694
#pragma GLOBAL_ASM("asm/Game/zScene.s", "zSceneSave__FP6zSceneP7xSerial")

// func_800B2AC4
#pragma GLOBAL_ASM("asm/Game/zScene.s", "zSceneLoad__FP6zSceneP7xSerial")

// func_800B2F4C
#pragma GLOBAL_ASM("asm/Game/zScene.s", "zSceneReset__Fv")

// func_800B31E0
#pragma GLOBAL_ASM("asm/Game/zScene.s", "ActivateCB__FP5xBase")

// func_800B31F0
#pragma GLOBAL_ASM("asm/Game/zScene.s", "DeactivateCB__FP5xBase")

// func_800B3200
#pragma GLOBAL_ASM("asm/Game/zScene.s", "zSceneSetup__Fv")

// func_800B3E7C
#pragma GLOBAL_ASM("asm/Game/zScene.s", "zSceneSetup_serialTraverseCB__FUiP7xSerial")

// func_800B3F34
#pragma GLOBAL_ASM("asm/Game/zScene.s", "zSceneUpdate__Ff")

// func_800B4418
#pragma GLOBAL_ASM("asm/Game/zScene.s", "zSceneRenderPreFX__Fv")

// func_800B4718
#pragma GLOBAL_ASM("asm/Game/zScene.s", "zSceneRenderPostFX__Fv")

// func_800B48CC
#pragma GLOBAL_ASM("asm/Game/zScene.s", "zSceneRender__Fv")

// func_800B4900
#pragma GLOBAL_ASM("asm/Game/zScene.s", "zSceneObjHashtableInit__Fi")

// func_800B4958
#pragma GLOBAL_ASM("asm/Game/zScene.s", "zSceneObjHashtableExit__Fv")

// func_800B4970
#pragma GLOBAL_ASM("asm/Game/zScene.s", "zSceneObjHashtableUsage__Fv")

// func_800B4978
#pragma GLOBAL_ASM("asm/Game/zScene.s", "zSceneObjHashtableAdd__FUiP5xBase")

// func_800B49D8
#pragma GLOBAL_ASM("asm/Game/zScene.s", "zSceneObjHashtableGet__FUi")

// func_800B4A3C
#pragma GLOBAL_ASM("asm/Game/zScene.s", "zSceneFindObject__FUi")

// func_800B4A5C
#pragma GLOBAL_ASM("asm/Game/zScene.s", "zSceneGetObject__Fii")

// func_800B4AD0
#pragma GLOBAL_ASM("asm/Game/zScene.s", "zSceneGetName__FUi")

// func_800B4B0C
#pragma GLOBAL_ASM("asm/Game/zScene.s", "zSceneGetName__FP5xBase")

// func_800B4B50
#pragma GLOBAL_ASM("asm/Game/zScene.s", "zSceneForAllBase__FPFP5xBaseP6zScenePv_P5xBasePv")

// func_800B4BEC
#pragma GLOBAL_ASM("asm/Game/zScene.s", "zSceneForAllBase__FPFP5xBaseP6zScenePv_P5xBaseiPv")

// func_800B4C80
#pragma GLOBAL_ASM("asm/Game/zScene.s", "zSceneExitSoundIteratorCB__FP5xBaseP6zScenePv")

// func_800B4CB0
#pragma GLOBAL_ASM("asm/Game/zScene.s", "zSceneMemLvlChkCB__Fv")

// func_800B4CB4
#pragma GLOBAL_ASM("asm/Game/zScene.s", "zSceneLeavingLevel__Fv")

// func_800B4D58
#pragma GLOBAL_ASM("asm/Game/zScene.s", "zSceneGetLevelName__FUi")

// func_800B4DC0
#pragma GLOBAL_ASM("asm/Game/zScene.s", "zSceneGetLevelIndex__Fv")

// func_800B4DF0
#pragma GLOBAL_ASM("asm/Game/zScene.s", "zSceneGetLevelIndex__FUi")

// func_800B4ECC
#pragma GLOBAL_ASM("asm/Game/zScene.s", "zSceneGetLevelPrefix__FUi")

// func_800B4EF4
#pragma GLOBAL_ASM("asm/Game/zScene.s", "zSceneGetAreaname__FUi")

// func_800B4F04
#pragma GLOBAL_ASM("asm/Game/zScene.s", "zSceneCalcProgress__Fv")

// func_800B4F14
#pragma GLOBAL_ASM("asm/Game/zScene.s", "zScene_UpdateFlyToInterface__Ff")

// func_800B4F48
#pragma GLOBAL_ASM("asm/Game/zScene.s", "zSceneCardCheckStartup_set__Fiii")

// func_800B4F58
#pragma GLOBAL_ASM("asm/Game/zScene.s", "zSceneEnableVisited__FP6zScene")

// func_800B5014
#pragma GLOBAL_ASM("asm/Game/zScene.s", "zSceneEnableScreenAdj__FUi")

// func_800B501C
#pragma GLOBAL_ASM("asm/Game/zScene.s", "zSceneSetOldScreenAdj__Fv")

// func_800B5030
#pragma GLOBAL_ASM("asm/Game/zScene.s", "zScene_ScreenAdjustMode__Fv")

// func_800B5038
#pragma GLOBAL_ASM("asm/Game/zScene.s", "zSceneSpawnRandomBubbles__Fv")

// func_800B51AC
#pragma GLOBAL_ASM("asm/Game/zScene.s", "zSceneAutoSave__Fv")

// func_800B51B0
#pragma GLOBAL_ASM("asm/Game/zScene.s", "xSystem_GapTrackReport__Fv")

// func_800B51B4
#pragma GLOBAL_ASM("asm/Game/zScene.s", "xDecalDestroy__Fv")

// func_800B51B8
#pragma GLOBAL_ASM("asm/Game/zScene.s", "xDecalRender__Fv")

// func_800B51BC
#pragma GLOBAL_ASM("asm/Game/zScene.s", "xBaseIsValid__FP5xBase")

// func_800B51C8
#pragma GLOBAL_ASM("asm/Game/zScene.s", "xModelBucket_RenderAlpha__Fv")

// func_800B51F4
#pragma GLOBAL_ASM("asm/Game/zScene.s", "Save__9xNPCBasicCFP7xSerial")

// func_800B51F8
#pragma GLOBAL_ASM("asm/Game/zScene.s", "Load__9xNPCBasicFP7xSerial")

// func_800B51FC
#pragma GLOBAL_ASM("asm/Game/zScene.s", "xQuickCullInit__FPC4xBox")
