#include "zNPCSupplement.h"

#include <types.h>

#include "zNPCSupport.h"

// func_80180D54
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NPCSupplement_Startup__Fv")

void NPCSupplement_Shutdown()
{
    NPCWidget_Shutdown();
}

// func_80180D78
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NPCSupplement_ScenePrepare__Fv")

// func_80180D98
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NPCSupplement_SceneFinish__Fv")

// func_80180DB8
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NPCSupplement_ScenePostInit__Fv")

// func_80180DE4
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NPCSupplement_SceneReset__Fv")

// func_80180E08
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NPCSupplement_Timestep__Ff")

// func_80180E28
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s",                                                    \
                   "NPCC_MakeLightningInfo__F9en_npclytP16_tagLightningAdd")

// func_801813B4
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NPCC_MakeStreakInfo__F12en_npcstreakP10StreakInfo")

// func_801815F4
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NPCC_StreakCreate__F12en_npcstreak")

// func_80181628
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NPCC_BurstBubble__F11en_npcburstP5xVec3")

// func_801817F8
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NPCC_MakeASplash__FPC5xVec3f")

// func_8018190C
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NPCC_Slick_MakePlayerSlip__FP10zNPCCommon")

// func_80181968
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s",                                                    \
                   "NPCC_RenderProjTexture__FP8RwRasterfP7xMat4x3ffP12xShadowCacheiP4xEnt")

// func_80181A64
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zNPCSupplement.s",                                                                   \
    "NPCC_RenderProjTextureFaceCamera__FP8RwRasterfP5xVec3ffP12xShadowCacheiP4xEnt")

// func_80181BC0
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NPAR_ScenePrepare__Fv")

// func_80181C10
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NPAR_SceneFinish__Fv")

// func_80181C70
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NPAR_SceneReset__Fv")

// func_80181CC0
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NPAR_CheckSpecials__Fv")

// func_80181CFC
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NPAR_Timestep__Ff")

// func_80181DD8
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NPAR_PartySetup__F11en_nparptypPPvP12NPARXtraData")

// func_80181E60
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NPAR_FindParty__F11en_nparptyp")

// func_80181EB0
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "Init__8NPARMgmtF11en_nparptypPPvP12NPARXtraData")

// func_80181F74
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "Clear__8NPARMgmtFv")

// func_80181F9C
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "UpdateAndRender__8NPARMgmtFf")

// func_80181FD4
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s",                                                    \
                   "ConfigPar__14NPARParmOilBubCFP8NPARData11en_nparmodePC5xVec3PC5xVec3")

// func_80182094
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NPAR_Upd_OilBubble__FP8NPARMgmtf")

// func_801822C4
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s",                                                    \
                   "NPAR_CopyNPARToPTPool__FP8NPARDataP30ptank_pool__pos_color_size_uv2")

// func_8018237C
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s",                                                    \
                   "ConfigPar__18NPARParmTubeSpiralCFP8NPARData11en_nparmodePC5xVec3PC5xVec3f")

// func_80182434
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NPAR_Upd_TubeSpiral__FP8NPARMgmtf")

// func_80182728
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NPAR_TubeSpiralMagic__FP6RwRGBAif")

// func_80182988
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s",                                                    \
                   "ConfigPar__20NPARParmTubeConfettiCFP8NPARData11en_nparmodePC5xVec3PC5xVec3")

// func_80182C0C
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NPAR_Upd_TubeConfetti__FP8NPARMgmtf")

// func_801830A0
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s",                                                    \
                   "ConfigPar__17NPARParmGloveDustCFP8NPARData11en_nparmodePC5xVec3PC5xVec3")

// func_8018314C
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NPAR_Upd_GloveDust__FP8NPARMgmtf")

// func_8018333C
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NPAR_Upd_MonsoonRain__FP8NPARMgmtf")

// func_8018352C
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s",                                                    \
                   "ConfigPar__18NPARParmSleepyZeezCFP8NPARData11en_nparmodePC5xVec3PC5xVec3")

// func_8018371C
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NPAR_Upd_SleepyZeez__FP8NPARMgmtf")

// func_80183BB0
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s",                                                    \
                   "ConfigPar__19NPARParmChuckSplashCFP8NPARData11en_nparmodePC5xVec3PC5xVec3")

// func_80183D40
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NPAR_Upd_ChuckSplash__FP8NPARMgmtf")

// func_80184058
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s",                                                    \
                   "ConfigPar__17NPARParmVisSplashCFP8NPARData11en_nparmodePC5xVec3PC5xVec3")

// func_80184118
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NPAR_Upd_VisSplash__FP8NPARMgmtf")

// func_80184430
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s",                                                    \
                   "ConfigPar__18NPARParmTarTarGunkCFP8NPARData11en_nparmodePC5xVec3PC5xVec3")

// func_80184620
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NPAR_Upd_TarTarGunk__FP8NPARMgmtf")

// func_80184AB4
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s",                                                    \
                   "ConfigPar__17NPARParmDogBreathCFP8NPARData11en_nparmodePC5xVec3PC5xVec3")

// func_80184B60
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NPAR_Upd_DogBreath__FP8NPARMgmtf")

// func_80184EA4
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s",                                                    \
                   "ConfigPar__17NPARParmFahrwerkzCFP8NPARData11en_nparmodePC5xVec3PC5xVec3")

// func_80185094
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NPAR_Upd_Fireworks__FP8NPARMgmtf")

// func_80185528
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NPAR_EmitOilShieldPop__FPC5xVec3")

// func_80185554
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NPAR_EmitOilTrailz__FPC5xVec3")

// func_80185580
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NPAR_EmitOilVapors__FPC5xVec3")

// func_801855AC
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NPAR_EmitOilSplash__FPC5xVec3PC5xVec3")

// func_801855D8
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s",                                                    \
                   "NPAR_EmitOilBubble__F11en_nparmodePC5xVec3PC5xVec3")

// func_80185658
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NPAR_EmitTubeSpiral__FPC5xVec3PC5xVec3f")

// func_801856E0
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NPAR_EmitTubeSpiralCin__FPC5xVec3PC5xVec3f")

// func_80185768
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NPAR_EmitTubeConfetti__FPC5xVec3PC5xVec3")

// func_801857D4
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NPAR_EmitTubeSparklies__FPC5xVec3PC5xVec3")

// func_80185844
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NPAR_EmitGloveDust__FPC5xVec3PC5xVec3")

// func_801858B0
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NPAR_EmitSleepyZeez__FPC5xVec3PC5xVec3")

// func_8018591C
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NPAR_EmitH2ODrips__FPC5xVec3PC5xVec3")

// func_80185948
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NPAR_EmitH2ODrops__FPC5xVec3PC5xVec3")

// func_80185974
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NPAR_EmitH2OSpray__FPC5xVec3PC5xVec3")

// func_801859A0
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NPAR_EmitH2OTrail__FPC5xVec3")

// func_801859D0
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NPAR_EmitDroplets__F11en_nparmodePC5xVec3PC5xVec3")

// func_80185A50
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NPAR_EmitTarTarNozzle__FPC5xVec3PC5xVec3")

// func_80185A7C
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NPAR_EmitTarTarTrail__FPC5xVec3PC5xVec3")

// func_80185AA8
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NPAR_EmitTarTarSplash__FPC5xVec3PC5xVec3")

// func_80185AD4
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NPAR_EmitTarTarSpoil__FPC5xVec3PC5xVec3")

// func_80185B00
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NPAR_EmitTarTarSmoke__FPC5xVec3PC5xVec3")

// func_80185B2C
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s",                                                    \
                   "NPAR_EmitTarTarGunk__F11en_nparmodePC5xVec3PC5xVec3")

// func_80185BAC
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NPAR_EmitDoggyWisps__FPC5xVec3PC5xVec3")

// func_80185BD8
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NPAR_EmitDoggyAttack__FPC5xVec3PC5xVec3")

// func_80185C04
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s",                                                    \
                   "NPAR_EmitDoggyBreath__F11en_nparmodePC5xVec3PC5xVec3")

// func_80185C84
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NPAR_EmitVSSpray__FPC5xVec3PC5xVec3")

// func_80185CB0
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s",                                                    \
                   "NPAR_EmitVisSplash__F11en_nparmodePC5xVec3PC5xVec3")

// func_80185D30
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NPAR_EmitFWExhaust__FPC5xVec3PC5xVec3")

// func_80185D5C
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s",                                                    \
                   "NPAR_EmitFireworks__F11en_nparmodePC5xVec3PC5xVec3")

// func_80185DDC
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NPCC_ShadowCacheReset__Fv")

// func_80185E28
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NPCC_ShadowCacheReserve__Fv")

// func_80185E9C
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NPCC_ShadowCacheRelease__FP12xShadowCache")

// func_80185F68
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "Defaults__10StreakInfoFv")

// func_80185FB8
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "xFXStreakStart__FP10StreakInfo")

// func_80185FF8
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "ARCH3__Ff")

// func_80186020
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "BOWL3__Ff")

// func_80186058
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "QUB__Ff")

// func_80186064
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "ARCH__Ff")

// func_8018608C
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "BOWL__Ff")

// func_801860BC
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "Done__8NPARMgmtFv")

// func_801860DC
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "Reset__8NPARMgmtFv")

// func_801860E8
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "IsReady__8NPARMgmtFv")

// func_80186110
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "XtraDataSet__8NPARMgmtFP12NPARXtraData")

// func_80186118
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "UserDataSet__8NPARMgmtFPPv")

// func_80186120
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "PromoteTail__8NPARMgmtFi")

// func_80186164
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "__as__8NPARDataFRC8NPARData")

// func_80186208
#pragma GLOBAL_ASM("asm/Game/zNPCSupplement.s", "NextAvail__8NPARMgmtFv")
