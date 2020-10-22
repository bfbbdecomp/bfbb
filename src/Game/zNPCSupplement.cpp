#include "zNPCSupplement.h"

#include <types.h>

// NPCSupplement_Startup()
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NPCSupplement_Startup__Fv")

// NPCSupplement_Shutdown()
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NPCSupplement_Shutdown__Fv")

// NPCSupplement_ScenePrepare()
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NPCSupplement_ScenePrepare__Fv")

// NPCSupplement_SceneFinish()
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NPCSupplement_SceneFinish__Fv")

// NPCSupplement_ScenePostInit()
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NPCSupplement_ScenePostInit__Fv")

// NPCSupplement_SceneReset()
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NPCSupplement_SceneReset__Fv")

// NPCSupplement_Timestep(float)
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NPCSupplement_Timestep__Ff")

// NPCC_MakeLightningInfo(en_npclyt,_tagLightningAdd*)
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NPCC_MakeLightningInfo__F9en_npclytP16_tagLightningAdd")

// NPCC_MakeStreakInfo(en_npcstreak,StreakInfo*)
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NPCC_MakeStreakInfo__F12en_npcstreakP10StreakInfo")

// NPCC_StreakCreate(en_npcstreak)
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NPCC_StreakCreate__F12en_npcstreak")

// NPCC_BurstBubble(en_npcburst,xVec3*)
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NPCC_BurstBubble__F11en_npcburstP5xVec3")

// NPCC_MakeASplash(const xVec3*,float)
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NPCC_MakeASplash__FPC5xVec3f")

// NPCC_Slick_MakePlayerSlip(zNPCCommon*)
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NPCC_Slick_MakePlayerSlip__FP10zNPCCommon")

// NPCC_RenderProjTexture(RwRaster*,float,xMat4x3*,float,float,xShadowCache*, int,xEnt*)
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NPCC_RenderProjTexture__FP8RwRasterfP7xMat4x3ffP12xShadowCacheiP4xEnt")

// NPCC_RenderProjTextureFaceCamera(RwRaster*,float,xVec3*,float,float,xShado wCache*,int,xEnt*)
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NPCC_RenderProjTextureFaceCamera__FP8RwRasterfP5xVec3ffP12xShadowCacheiP4xEnt")

// NPAR_ScenePrepare()
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NPAR_ScenePrepare__Fv")

// NPAR_SceneFinish()
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NPAR_SceneFinish__Fv")

// NPAR_SceneReset()
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NPAR_SceneReset__Fv")

// NPAR_CheckSpecials()
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NPAR_CheckSpecials__Fv")

// NPAR_Timestep(float)
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NPAR_Timestep__Ff")

// NPAR_PartySetup(en_nparptyp,void**,NPARXtraData*)
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NPAR_PartySetup__F11en_nparptypPPvP12NPARXtraData")

// NPAR_FindParty(en_nparptyp)
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NPAR_FindParty__F11en_nparptyp")

// NPARMgmt::Init(en_nparptyp,void**,NPARXtraData*)
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "Init__8NPARMgmtF11en_nparptypPPvP12NPARXtraData")

// NPARMgmt::Clear()
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "Clear__8NPARMgmtFv")

// NPARMgmt::UpdateAndRender(float)
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "UpdateAndRender__8NPARMgmtFf")

// NPARParmOilBub::ConfigPar(NPARData*,en_nparmode,const xVec3*,const xVec3*) const
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "ConfigPar__14NPARParmOilBubCFP8NPARData11en_nparmodePC5xVec3PC5xVec3")

// NPAR_CopyNPARToPTPool(NPARData*,ptank_pool__pos_color_size_uv2*)
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NPAR_CopyNPARToPTPool__FP8NPARDataP30ptank_pool__pos_color_size_uv2")

// NPARParmTubeSpiral::ConfigPar(NPARData*,en_nparmode,const xVec3*,const xVec3*,float) const
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "ConfigPar__18NPARParmTubeSpiralCFP8NPARData11en_nparmodePC5xVec3PC5xVec3f")

// NPAR_TubeSpiralMagic(RwRGBA*,int,float)
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NPAR_TubeSpiralMagic__FP6RwRGBAif")

// NPARParmTubeConfetti::ConfigPar(NPARData*,en_nparmode,const xVec3*,const xVec3*) const
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "ConfigPar__20NPARParmTubeConfettiCFP8NPARData11en_nparmodePC5xVec3PC5xVec3")

// NPARParmGloveDust::ConfigPar(NPARData*,en_nparmode,const xVec3*,const xVec3*) const
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "ConfigPar__17NPARParmGloveDustCFP8NPARData11en_nparmodePC5xVec3PC5xVec3")

// NPARParmSleepyZeez::ConfigPar(NPARData*,en_nparmode,const xVec3*,const xVec3*) const
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "ConfigPar__18NPARParmSleepyZeezCFP8NPARData11en_nparmodePC5xVec3PC5xVec3")

// NPARParmChuckSplash::ConfigPar(NPARData*,en_nparmode,const xVec3*,const xVec3*) const
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "ConfigPar__19NPARParmChuckSplashCFP8NPARData11en_nparmodePC5xVec3PC5xVec3")

// NPARParmVisSplash::ConfigPar(NPARData*,en_nparmode,const xVec3*,const xVec3*) const
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "ConfigPar__17NPARParmVisSplashCFP8NPARData11en_nparmodePC5xVec3PC5xVec3")

// NPARParmTarTarGunk::ConfigPar(NPARData*,en_nparmode,const xVec3*,const xVec3*) const
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "ConfigPar__18NPARParmTarTarGunkCFP8NPARData11en_nparmodePC5xVec3PC5xVec3")

// NPARParmDogBreath::ConfigPar(NPARData*,en_nparmode,const xVec3*,const xVec3*) const
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "ConfigPar__17NPARParmDogBreathCFP8NPARData11en_nparmodePC5xVec3PC5xVec3")

// NPARParmFahrwerkz::ConfigPar(NPARData*,en_nparmode,const xVec3*,const xVec3*) const
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "ConfigPar__17NPARParmFahrwerkzCFP8NPARData11en_nparmodePC5xVec3PC5xVec3")

// NPAR_EmitOilShieldPop(const xVec3*)
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NPAR_EmitOilShieldPop__FPC5xVec3")

// NPAR_EmitOilTrailz(const xVec3*)
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NPAR_EmitOilTrailz__FPC5xVec3")

// NPAR_EmitOilVapors(const xVec3*)
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NPAR_EmitOilVapors__FPC5xVec3")

// NPAR_EmitOilSplash(const xVec3*,const xVec3*)
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NPAR_EmitOilSplash__FPC5xVec3PC5xVec3")

// NPAR_EmitOilBubble(en_nparmode,const xVec3*,const xVec3*)
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NPAR_EmitOilBubble__F11en_nparmodePC5xVec3PC5xVec3")

// NPAR_EmitTubeSpiral(const xVec3*,const xVec3*,float)
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NPAR_EmitTubeSpiral__FPC5xVec3PC5xVec3f")

// NPAR_EmitTubeSpiralCin(const xVec3*,const xVec3*,float)
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NPAR_EmitTubeSpiralCin__FPC5xVec3PC5xVec3f")

// NPAR_EmitTubeConfetti(const xVec3*,const xVec3*)
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NPAR_EmitTubeConfetti__FPC5xVec3PC5xVec3")

// NPAR_EmitTubeSparklies(const xVec3*,const xVec3*)
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NPAR_EmitTubeSparklies__FPC5xVec3PC5xVec3")

// NPAR_EmitGloveDust(const xVec3*,const xVec3*)
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NPAR_EmitGloveDust__FPC5xVec3PC5xVec3")

// NPAR_EmitSleepyZeez(const xVec3*,const xVec3*)
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NPAR_EmitSleepyZeez__FPC5xVec3PC5xVec3")

// NPAR_EmitH2ODrips(const xVec3*,const xVec3*)
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NPAR_EmitH2ODrips__FPC5xVec3PC5xVec3")

// NPAR_EmitH2ODrops(const xVec3*,const xVec3*)
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NPAR_EmitH2ODrops__FPC5xVec3PC5xVec3")

// NPAR_EmitH2OSpray(const xVec3*,const xVec3*)
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NPAR_EmitH2OSpray__FPC5xVec3PC5xVec3")

// NPAR_EmitH2OTrail(const xVec3*)
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NPAR_EmitH2OTrail__FPC5xVec3")

// NPAR_EmitDroplets(en_nparmode,const xVec3*,const xVec3*)
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NPAR_EmitDroplets__F11en_nparmodePC5xVec3PC5xVec3")

// NPAR_EmitTarTarNozzle(const xVec3*,const xVec3*)
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NPAR_EmitTarTarNozzle__FPC5xVec3PC5xVec3")

// NPAR_EmitTarTarTrail(const xVec3*,const xVec3*)
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NPAR_EmitTarTarTrail__FPC5xVec3PC5xVec3")

// NPAR_EmitTarTarSplash(const xVec3*,const xVec3*)
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NPAR_EmitTarTarSplash__FPC5xVec3PC5xVec3")

// NPAR_EmitTarTarSpoil(const xVec3*,const xVec3*)
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NPAR_EmitTarTarSpoil__FPC5xVec3PC5xVec3")

// NPAR_EmitTarTarSmoke(const xVec3*,const xVec3*)
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NPAR_EmitTarTarSmoke__FPC5xVec3PC5xVec3")

// NPAR_EmitTarTarGunk(en_nparmode,const xVec3*,const xVec3*)
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NPAR_EmitTarTarGunk__F11en_nparmodePC5xVec3PC5xVec3")

// NPAR_EmitDoggyWisps(const xVec3*,const xVec3*)
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NPAR_EmitDoggyWisps__FPC5xVec3PC5xVec3")

// NPAR_EmitDoggyAttack(const xVec3*,const xVec3*)
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NPAR_EmitDoggyAttack__FPC5xVec3PC5xVec3")

// NPAR_EmitDoggyBreath(en_nparmode,const xVec3*,const xVec3*)
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NPAR_EmitDoggyBreath__F11en_nparmodePC5xVec3PC5xVec3")

// NPAR_EmitVSSpray(const xVec3*,const xVec3*)
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NPAR_EmitVSSpray__FPC5xVec3PC5xVec3")

// NPAR_EmitVisSplash(en_nparmode,const xVec3*,const xVec3*)
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NPAR_EmitVisSplash__F11en_nparmodePC5xVec3PC5xVec3")

// NPAR_EmitFWExhaust(const xVec3*,const xVec3*)
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NPAR_EmitFWExhaust__FPC5xVec3PC5xVec3")

// NPAR_EmitFireworks(en_nparmode,const xVec3*,const xVec3*)
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NPAR_EmitFireworks__F11en_nparmodePC5xVec3PC5xVec3")

// NPCC_ShadowCacheReset()
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NPCC_ShadowCacheReset__Fv")

// NPCC_ShadowCacheReserve()
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NPCC_ShadowCacheReserve__Fv")

// NPCC_ShadowCacheRelease(xShadowCache*)
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NPCC_ShadowCacheRelease__FP12xShadowCache")

// StreakInfo::Defaults()
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "Defaults__10StreakInfoFv")

// xFXStreakStart(StreakInfo*)
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "xFXStreakStart__FP10StreakInfo")

// ARCH3(float)
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "ARCH3__Ff")

// BOWL3(float)
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "BOWL3__Ff")

// QUB(float)
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "QUB__Ff")

// ARCH(float)
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "ARCH__Ff")

// BOWL(float)
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "BOWL__Ff")

// NPARMgmt::Done()
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "Done__8NPARMgmtFv")

// NPARMgmt::Reset()
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "Reset__8NPARMgmtFv")

// NPARMgmt::IsReady()
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "IsReady__8NPARMgmtFv")

// NPARMgmt::XtraDataSet(NPARXtraData*)
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "XtraDataSet__8NPARMgmtFP12NPARXtraData")

// NPARMgmt::UserDataSet(void**)
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "UserDataSet__8NPARMgmtFPPv")

// NPARMgmt::PromoteTail(int)
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "PromoteTail__8NPARMgmtFi")

// NPARData::operator =(const NPARData&)
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "__as__8NPARDataFRC8NPARData")

// NPARMgmt::NextAvail()
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NextAvail__8NPARMgmtFv")
