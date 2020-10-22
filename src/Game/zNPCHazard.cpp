#include "zNPCHazard.h"

#include <types.h>

// zNPCHazard_Startup()
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "zNPCHazard_Startup__Fv")

// zNPCHazard_Shutdown()
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "zNPCHazard_Shutdown__Fv")

// zNPCHazard_ScenePrepare()
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "zNPCHazard_ScenePrepare__Fv")

// zNPCHazard_SceneFinish()
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "zNPCHazard_SceneFinish__Fv")

// zNPCHazard_SceneReset()
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "zNPCHazard_SceneReset__Fv")

// zNPCHazard_ScenePostInit()
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "zNPCHazard_ScenePostInit__Fv")

// zNPCHazard_InitEffects()
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "zNPCHazard_InitEffects__Fv")

// zNPCHazard_KillEffects()
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "zNPCHazard_KillEffects__Fv")

// zNPCHazard_Timestep(float)
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "zNPCHazard_Timestep__Ff")

// zNPCCommon_Hazards_RenderAll(int)
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "zNPCCommon_Hazards_RenderAll__Fi")

// HAZ_Acquire()
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "HAZ_Acquire__Fv")

// HAZ_AvailablePool()
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "HAZ_AvailablePool__Fv")

// HAZ_Iterate(bool (*)(NPCHazard&, void*),void*,int)
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "HAZ_Iterate__FPFR9NPCHazardPv_bPvi")

// NPCHazard::WipeIt()
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "WipeIt__9NPCHazardFv")

// NPCHazard::ConfigHelper(en_npchaz)
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "ConfigHelper__9NPCHazardF9en_npchaz")

// NPCHazard::Reconfigure(en_npchaz)
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "Reconfigure__9NPCHazardF9en_npchaz")

// NPCHazard::GetUVAInfo(en_hazmodel,float,float)
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "GetUVAInfo__9NPCHazardF11en_hazmodelff")

// NPCHazard::GrabModel(en_hazmodel)
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "GrabModel__9NPCHazardF11en_hazmodel")

// NPCHazard::FreeModel()
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "FreeModel__9NPCHazardFv")

// NPCHazard::Discard()
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "Discard__9NPCHazardFv")

// NPCHazard::Kill()
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "Kill__9NPCHazardFv")

// NPCHazard::Start(const xVec3*,float)
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "Start__9NPCHazardFPC5xVec3f")

// NPCHazard::PosSet(const xVec3*)
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "PosSet__9NPCHazardFPC5xVec3")

// NPCHazard::Timestep(float)
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "Timestep__9NPCHazardFf")

// NPCHazard::Render()
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "Render__9NPCHazardFv")

// NPCHazard::Cleanup()
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "Cleanup__9NPCHazardFv")

// NPCHazard::SetAlpha(float)
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "SetAlpha__9NPCHazardFf")

// NPCHazard::ColTestSphere(const xBound*,float)
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "ColTestSphere__9NPCHazardFPC6xBoundf")

// NPCHazard::ColTestCyl(const xBound*,float,float)
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "ColTestCyl__9NPCHazardFPC6xBoundff")

// NPCHazard::ColPlyrSphere(float)
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "ColPlyrSphere__9NPCHazardFf")

// NPCHazard::ColPlyrCyl(float,float)
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "ColPlyrCyl__9NPCHazardFff")

// NPCHazard::HurtThePlayer()
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "HurtThePlayer__9NPCHazardFv")

// NPCHazard::TypData_RotMatStore(xVec3*)
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "TypData_RotMatStore__9NPCHazardFP5xVec3")

// NPCHazard::TypData_RotMatSet(xMat3x3*)
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "TypData_RotMatSet__9NPCHazardFP7xMat3x3")

// NPCHazard::TypData_RotMatApply(xMat3x3*)
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "TypData_RotMatApply__9NPCHazardFP7xMat3x3")

// NPCHazard::OrientToDir(const xVec3*,int)
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "OrientToDir__9NPCHazardFPC5xVec3i")

// NPCHazard::PickFunFrag()
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "PickFunFrag__9NPCHazardFv")

// NPCHazard::PreCollide()
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "PreCollide__9NPCHazardFv")

// NPCHazard::StaggeredCollide()
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "StaggeredCollide__9NPCHazardFv")

// NPCHazard::StagColGeneral(int)
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "StagColGeneral__9NPCHazardFi")

// NPCHazard::StagColStat()
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "StagColStat__9NPCHazardFv")

// NPCHazard::StagColDyn()
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "StagColDyn__9NPCHazardFv")

// NPCHazard::StagColNPC()
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "StagColNPC__9NPCHazardFv")

// NPCHazard::CollideResponse(xSweptSphere*,float)
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "CollideResponse__9NPCHazardFP12xSweptSpheref")

// NPCHazard::ColResp_Default(xSweptSphere*,float)
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "ColResp_Default__9NPCHazardFP12xSweptSpheref")

// NPCHazard::Upd_Explode(float)
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "Upd_Explode__9NPCHazardFf")

// NPCHazard::DeathStar()
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "DeathStar__9NPCHazardFv")

// NPCHazard::Upd_PuppyNuke(float)
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "Upd_PuppyNuke__9NPCHazardFf")

// NPCHazard::Upd_FodBomb(float)
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "Upd_FodBomb__9NPCHazardFf")

// NPCHazard::FodBombBubbles(float)
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "FodBombBubbles__9NPCHazardFf")

// NPCHazard::Upd_CattleProd(float)
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "Upd_CattleProd__9NPCHazardFf")

// NPCHazard::Upd_TubeletBlast(float)
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "Upd_TubeletBlast__9NPCHazardFf")

// NPCHazard::Upd_DuploBoom(float)
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "Upd_DuploBoom__9NPCHazardFf")

// NPCHazard::Upd_TikiThunder(float)
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "Upd_TikiThunder__9NPCHazardFf")

// NPCHazard::Upd_Mushroom(float)
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "Upd_Mushroom__9NPCHazardFf")

// NPCHazard::Upd_Patriot(float)
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "Upd_Patriot__9NPCHazardFf")

// NPCHazard::Upd_TTFlight(float)
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "Upd_TTFlight__9NPCHazardFf")

// NPCHazard::ReconTarTar()
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "ReconTarTar__9NPCHazardFv")

// NPCHazard::Upd_TTSpill(float)
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "Upd_TTSpill__9NPCHazardFf")

// NPCHazard::KickSteamyStinky()
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "KickSteamyStinky__9NPCHazardFv")

// NPCHazard::Upd_TTStink(float)
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "Upd_TTStink__9NPCHazardFf")

// NPCHazard::TarTarFalumpf()
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "TarTarFalumpf__9NPCHazardFv")

// NPCHazard::TarTarGunkTrail()
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "TarTarGunkTrail__9NPCHazardFv")

// NPCHazard::TarTarSplash(const xVec3*)
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "TarTarSplash__9NPCHazardFPC5xVec3")

// NPCHazard::TarTarLinger()
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "TarTarLinger__9NPCHazardFv")

// NPCHazard::Upd_ChuckBomb(float)
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "Upd_ChuckBomb__9NPCHazardFf")

// NPCHazard::DisperseBubWake(float,const xVec3*)
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "DisperseBubWake__9NPCHazardFfPC5xVec3")

// NPCHazard::ReconChuck()
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "ReconChuck__9NPCHazardFv")

// NPCHazard::Upd_ChuckBlast(float)
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "Upd_ChuckBlast__9NPCHazardFf")

// NPCHazard::WaterSplash(const xVec3*)
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "WaterSplash__9NPCHazardFPC5xVec3")

// NPCHazard::WavesOfEvil()
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "WavesOfEvil__9NPCHazardFv")

// NPCHazard::KickBlooshBlob(const xVec3*)
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "KickBlooshBlob__9NPCHazardFPC5xVec3")

// NPCHazard::Upd_ChuckBloosh(float)
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "Upd_ChuckBloosh__9NPCHazardFf")

// NPCHazard::Upd_BoneFlight(float)
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "Upd_BoneFlight__9NPCHazardFf")

// NPCHazard::ReconArfBone()
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "ReconArfBone__9NPCHazardFv")

// NPCHazard::Upd_BoneBlast(float)
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "Upd_BoneBlast__9NPCHazardFf")

// NPCHazard::Upd_OilBubble(float)
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "Upd_OilBubble__9NPCHazardFf")

// NPCHazard::ReconSlickOil()
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "ReconSlickOil__9NPCHazardFv")

// NPCHazard::OilSplash(const xVec3*)
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "OilSplash__9NPCHazardFPC5xVec3")

// NPCHazard::Upd_OilOoze(float)
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "Upd_OilOoze__9NPCHazardFf")

// NPCHazard::KickOilBurst()
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "KickOilBurst__9NPCHazardFv")

// NPCHazard::KickOilGlobby()
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "KickOilGlobby__9NPCHazardFv")

// NPCHazard::Upd_OilBurst(float)
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "Upd_OilBurst__9NPCHazardFf")

// NPCHazard::Upd_OilGlob(float)
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "Upd_OilGlob__9NPCHazardFf")

// NPCHazard::Upd_MonCloud(float)
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "Upd_MonCloud__9NPCHazardFf")

// NPCHazard::Upd_FunFrag(float)
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "Upd_FunFrag__9NPCHazardFf")

// NPCHazard::StreakUpdate(unsigned int,float)
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "StreakUpdate__9NPCHazardFUif")

// NPCHazard::Upd_RoboBits(float)
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "Upd_RoboBits__9NPCHazardFf")

// NPCHazard::Upd_VisSplash(float)
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "Upd_VisSplash__9NPCHazardFf")

// NPCHazard::VisSplashSparklies()
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "VisSplashSparklies__9NPCHazardFv")

// UVAModelInfo::Init(RpAtomic*,unsigned int)
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "Init__12UVAModelInfoFP8RpAtomicUi")

// UVAModelInfo::Hemorrage()
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "Hemorrage__12UVAModelInfoFv")

// UVAModelInfo::Update(float,const xVec2*)
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "Update__12UVAModelInfoFfPC5xVec2")

// UVAModelInfo::Refresh()
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "Refresh__12UVAModelInfoFv")

// UVAModelInfo::SetColor(iColor_tag)
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "SetColor__12UVAModelInfoF10iColor_tag")

// UVAModelInfo::GetUV(RwTexCoords*&,int&,RpAtomic*) const
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "GetUV__12UVAModelInfoCFRP11RwTexCoordsRiP8RpAtomic")

// UVAModelInfo::CloneUV(RwTexCoords*&,int&,RpAtomic*) const
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "CloneUV__12UVAModelInfoCFRP11RwTexCoordsRiP8RpAtomic")

// NPCHazard::At() const
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "At__9NPCHazardCFv")

// NPCHazard::Right() const
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "Right__9NPCHazardCFv")

// NPCHazard::Up() const
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "Up__9NPCHazardCFv")

// NPCHazard::NPCHazard()
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "__ct__9NPCHazardFv")

// NPCHazard::NPCHazard(en_npchaz)
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "__ct__9NPCHazardF9en_npchaz")

// xVec3::inverse() const
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "inverse__5xVec3CFv")

// SMOOTH(float,xVec3*,const xVec3*,const xVec3*)
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "SMOOTH__FfP5xVec3PC5xVec3PC5xVec3")

// LERP(float,xVec3*,const xVec3*,const xVec3*)
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "LERP__FfP5xVec3PC5xVec3PC5xVec3")

#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "xUtil_choose_esc__0_i_esc__1___FPCiiPCf")

// xVec2Length2(const xVec2*)
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "xVec2Length2__FPC5xVec2")
