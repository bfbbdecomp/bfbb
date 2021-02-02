#include "zNPCHazard.h"

#include <types.h>

#include "zNPCTypes.h"

// func_80187630
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "zNPCHazard_Startup__Fv")

void zNPCHazard_Shutdown()
{
}

// func_8018769C
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "zNPCHazard_ScenePrepare__Fv")

// func_801878B4
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "zNPCHazard_SceneFinish__Fv")

// func_80187AD4
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "zNPCHazard_SceneReset__Fv")

// func_80187B38
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "zNPCHazard_ScenePostInit__Fv")

// func_80187B58
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "zNPCHazard_InitEffects__Fv")

// func_80187DC0
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "zNPCHazard_KillEffects__Fv")

// func_80187DC4
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "HAZ_ord_sorttest__FPvPv")

// func_80187DFC
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "zNPCHazard_Timestep__Ff")

// func_80187FEC
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "zNPCCommon_Hazards_RenderAll__Fi")

// func_8018819C
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "HAZ_Acquire__Fv")

// func_8018820C
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "HAZ_AvailablePool__Fv")

// func_80188218
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "HAZ_Iterate__FPFR9NPCHazardPv_bPvi")

// func_8018829C
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "WipeIt__9NPCHazardFv")

// func_80188314
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "ConfigHelper__9NPCHazardF9en_npchaz")

// func_80188E90
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "Reconfigure__9NPCHazardF9en_npchaz")

// func_80188F54
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "GetUVAInfo__9NPCHazardF11en_hazmodelff")

// func_80188FE4
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "GrabModel__9NPCHazardF11en_hazmodel")

// func_8018911C
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "FreeModel__9NPCHazardFv")

// func_8018915C
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "Discard__9NPCHazardFv")

// func_801891D8
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "Kill__9NPCHazardFv")

// func_80189238
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "Start__9NPCHazardFPC5xVec3f")

// func_80189294
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "PosSet__9NPCHazardFPC5xVec3")

// func_801892E8
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "Timestep__9NPCHazardFf")

// func_80189554
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "Render__9NPCHazardFv")

// func_8018A328
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "Cleanup__9NPCHazardFv")

// func_8018A424
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "SetAlpha__9NPCHazardFf")

// func_8018A448
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "ColTestSphere__9NPCHazardFPC6xBoundf")

// func_8018A538
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "ColTestCyl__9NPCHazardFPC6xBoundff")

// func_8018A61C
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "ColPlyrSphere__9NPCHazardFf")

// func_8018A648
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "ColPlyrCyl__9NPCHazardFff")

// func_8018A674
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "HurtThePlayer__9NPCHazardFv")

// func_8018A6DC
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "TypData_RotMatStore__9NPCHazardFP5xVec3")

// func_8018A7A8
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "TypData_RotMatSet__9NPCHazardFP7xMat3x3")

// func_8018A7FC
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "TypData_RotMatApply__9NPCHazardFP7xMat3x3")

// func_8018A854
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "OrientToDir__9NPCHazardFPC5xVec3i")

// func_8018A918
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "PickFunFrag__9NPCHazardFv")

// func_8018AA5C
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "PreCollide__9NPCHazardFv")

// func_8018ABE4
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "StaggeredCollide__9NPCHazardFv")

// func_8018ACD8
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "StagColGeneral__9NPCHazardFi")

// func_8018AE6C
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "StagColStat__9NPCHazardFv")

// func_8018AE90
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "StagColDyn__9NPCHazardFv")

// func_8018AEB4
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "StagColNPC__9NPCHazardFv")

// func_8018AED8
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "CollideResponse__9NPCHazardFP12xSweptSpheref")

// func_8018AEF8
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "ColResp_Default__9NPCHazardFP12xSweptSpheref")

// func_8018AFAC
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "ZNPC_AnimTable_HazardStd__Fv")

// func_8018B0C0
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "Upd_Explode__9NPCHazardFf")

// func_8018B148
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "DeathStar__9NPCHazardFv")

// func_8018B25C
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "Upd_PuppyNuke__9NPCHazardFf")

// func_8018B34C
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "Upd_FodBomb__9NPCHazardFf")

// func_8018B448
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "FodBombBubbles__9NPCHazardFf")

// func_8018B540
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "Upd_CattleProd__9NPCHazardFf")

// func_8018B870
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "Upd_TubeletBlast__9NPCHazardFf")

// func_8018BA58
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "Upd_DuploBoom__9NPCHazardFf")

// func_8018BB28
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "Upd_TikiThunder__9NPCHazardFf")

// func_8018BBF4
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "Upd_Mushroom__9NPCHazardFf")

// func_8018BD04
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "Upd_Patriot__9NPCHazardFf")

// func_8018BD08
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "Upd_TTFlight__9NPCHazardFf")

// func_8018C0D8
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "ReconTarTar__9NPCHazardFv")

// func_8018C180
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "Upd_TTSpill__9NPCHazardFf")

// func_8018C264
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "KickSteamyStinky__9NPCHazardFv")

// func_8018C2E4
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "Upd_TTStink__9NPCHazardFf")

// func_8018C39C
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "TarTarFalumpf__9NPCHazardFv")

// func_8018C474
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "TarTarGunkTrail__9NPCHazardFv")

// func_8018C4B8
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "TarTarSplash__9NPCHazardFPC5xVec3")

// func_8018C670
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "TarTarLinger__9NPCHazardFv")

// func_8018C7BC
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "Upd_ChuckBomb__9NPCHazardFf")

// func_8018C9DC
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "DisperseBubWake__9NPCHazardFfPC5xVec3")

// func_8018CBBC
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "ReconChuck__9NPCHazardFv")

// func_8018CD58
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "Upd_ChuckBlast__9NPCHazardFf")

// func_8018CE50
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "WaterSplash__9NPCHazardFPC5xVec3")

// func_8018D138
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "WavesOfEvil__9NPCHazardFv")

// func_8018D27C
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "KickBlooshBlob__9NPCHazardFPC5xVec3")

// func_8018D4D8
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "Upd_ChuckBloosh__9NPCHazardFf")

// func_8018D610
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "Upd_BoneFlight__9NPCHazardFf")

// func_8018D7C4
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "ReconArfBone__9NPCHazardFv")

// func_8018D804
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "Upd_BoneBlast__9NPCHazardFf")

// func_8018D8F8
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "Upd_OilBubble__9NPCHazardFf")

// func_8018DC64
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "ReconSlickOil__9NPCHazardFv")

// func_8018DDA0
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "OilSplash__9NPCHazardFPC5xVec3")

// func_8018DF58
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "Upd_OilOoze__9NPCHazardFf")

// func_8018E240
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "KickOilBurst__9NPCHazardFv")

// func_8018E300
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "KickOilGlobby__9NPCHazardFv")

// func_8018E454
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "Upd_OilBurst__9NPCHazardFf")

// func_8018E51C
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "Upd_OilGlob__9NPCHazardFf")

// func_8018E6F8
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "Upd_MonCloud__9NPCHazardFf")

// func_8018ED1C
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "Upd_FunFrag__9NPCHazardFf")

// func_8018EE64
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "StreakUpdate__9NPCHazardFUif")

// func_8018EF64
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "Upd_RoboBits__9NPCHazardFf")

// func_8018F0CC
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "Upd_VisSplash__9NPCHazardFf")

// func_8018F154
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "VisSplashSparklies__9NPCHazardFv")

// func_8018F298
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "Init__12UVAModelInfoFP8RpAtomicUi")

void UVAModelInfo::Hemorrage()
{
    model = 0;
    uv = 0;
}

// func_8018F388
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "Update__12UVAModelInfoFfPC5xVec2")

// func_8018F438
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "Refresh__12UVAModelInfoFv")

// func_8018F578
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "SetColor__12UVAModelInfoF10iColor_tag")

// func_8018F610
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "GetUV__12UVAModelInfoCFRP11RwTexCoordsRiP8RpAtomic")

// func_8018F668
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "CloneUV__12UVAModelInfoCFRP11RwTexCoordsRiP8RpAtomic")

// func_8018F6F4
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "__sinit_zNPCHazard_cpp")

// func_8018FB10
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "At__9NPCHazardCFv")

// func_8018FB20
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "Right__9NPCHazardCFv")

// func_8018FB2C
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "Up__9NPCHazardCFv")

// func_8018FB3C
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "__ct__9NPCHazardFv")

// func_8018FB40
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "__ct__9NPCHazardF9en_npchaz")

// func_8018FB48
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "inverse__5xVec3CFv")

// func_8018FBA8
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "SMOOTH__FfP5xVec3PC5xVec3PC5xVec3")

// func_8018FBFC
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "LERP__FfP5xVec3PC5xVec3PC5xVec3")

// func_8018FC8C
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "xUtil_choose_esc__0_i_esc__1___FPCiiPCf")

// func_8018FDA0
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "xVec2Length2__FPC5xVec2")
