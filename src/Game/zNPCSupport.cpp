#include "zNPCSupport.h"

#include <types.h>

#include "zNPCHazard.h"
#include "zNPCGlyph.h"
#include "zNPCSupplement.h"

// func_8012DD64
#pragma GLOBAL_ASM("asm/Game/zNPCSupport.s", "NPCSupport_Startup__Fv")

void NPCSupport_Shutdown()
{
    zNPCHazard_Shutdown();
    zNPCGlyph_Shutdown();
    NPCWidget_Shutdown();
    NPCSupplement_Shutdown();
}

// func_8012DDBC
#pragma GLOBAL_ASM("asm/Game/zNPCSupport.s", "NPCSupport_ScenePrepare__Fv")

// func_8012DDF0
#pragma GLOBAL_ASM("asm/Game/zNPCSupport.s", "NPCSupport_SceneFinish__Fv")

// func_8012DE20
#pragma GLOBAL_ASM("asm/Game/zNPCSupport.s", "NPCSupport_ScenePostInit__Fv")

// func_8012DE50
#pragma GLOBAL_ASM("asm/Game/zNPCSupport.s", "NPCSupport_SceneReset__Fv")

// func_8012DE84
#pragma GLOBAL_ASM("asm/Game/zNPCSupport.s", "NPCSupport_Timestep__Ff")

// func_8012DEC8
#pragma GLOBAL_ASM("asm/Game/zNPCSupport.s", "NPCWidget_Startup__Fv")

void NPCWidget_Shutdown()
{
}

// func_8012DF04
#pragma GLOBAL_ASM("asm/Game/zNPCSupport.s", "NPCWidget_ScenePrepare__Fv")

// func_8012DF08
#pragma GLOBAL_ASM("asm/Game/zNPCSupport.s", "NPCWidget_SceneFinish__Fv")

// func_8012DF28
#pragma GLOBAL_ASM("asm/Game/zNPCSupport.s", "NPCWidget_SceneReset__Fv")

// func_8012DF50
#pragma GLOBAL_ASM("asm/Game/zNPCSupport.s", "NPCWidget_ScenePostInit__Fv")

// func_8012DF7C
#pragma GLOBAL_ASM("asm/Game/zNPCSupport.s", "NPCWidget_Find__F17en_NPC_UI_WIDGETS")

// func_8012DF90
#pragma GLOBAL_ASM("asm/Game/zNPCSupport.s", "Init__9NPCWidgetF17en_NPC_UI_WIDGETS")

// func_8012DFD4
#pragma GLOBAL_ASM("asm/Game/zNPCSupport.s", "Reset__9NPCWidgetFv")

// func_8012DFD8
#pragma GLOBAL_ASM("asm/Game/zNPCSupport.s", "On__9NPCWidgetFPC10zNPCCommoni")

// func_8012E080
#pragma GLOBAL_ASM("asm/Game/zNPCSupport.s", "Off__9NPCWidgetFPC10zNPCCommoni")

// func_8012E100
#pragma GLOBAL_ASM("asm/Game/zNPCSupport.s", "IsVisible__9NPCWidgetFv")

// func_8012E148
#pragma GLOBAL_ASM("asm/Game/zNPCSupport.s", "Lock__9NPCWidgetFPC10zNPCCommon")

// func_8012E170
#pragma GLOBAL_ASM("asm/Game/zNPCSupport.s", "Unlock__9NPCWidgetFPC10zNPCCommon")

// func_8012E1A4
#pragma GLOBAL_ASM("asm/Game/zNPCSupport.s", "NPCIsTheLocker__9NPCWidgetFPC10zNPCCommon")

// func_8012E1FC
#pragma GLOBAL_ASM("asm/Game/zNPCSupport.s", "TargetSet__9NPCTargetFP4xEnti")

// func_8012E23C
#pragma GLOBAL_ASM("asm/Game/zNPCSupport.s", "TargetClear__9NPCTargetFv")

// func_8012E24C
#pragma GLOBAL_ASM("asm/Game/zNPCSupport.s", "FindNearest__9NPCTargetFiP5xBaseP5xVec3f")

// func_8012E454
#pragma GLOBAL_ASM("asm/Game/zNPCSupport.s", "PosGet__9NPCTargetFP5xVec3")

// func_8012E4DC
#pragma GLOBAL_ASM("asm/Game/zNPCSupport.s", "InCylinder__9NPCTargetFP5xVec3fff")

// func_8012E5D0
#pragma GLOBAL_ASM("asm/Game/zNPCSupport.s", "IsDead__9NPCTargetFv")

// func_8012E664
#pragma GLOBAL_ASM("asm/Game/zNPCSupport.s", "Render__8NPCLaserFP5xVec3P5xVec3")

// func_8012EA5C
#pragma GLOBAL_ASM("asm/Game/zNPCSupport.s", "RenderCone__7NPCConeFP5xVec3P5xVec3")

// func_8012ECDC
#pragma GLOBAL_ASM("asm/Game/zNPCSupport.s", "Reset__10NPCBlinkerFv")

// func_8012ECF0
#pragma GLOBAL_ASM("asm/Game/zNPCSupport.s", "Update__10NPCBlinkerFffff")

// func_8012EDBC
#pragma GLOBAL_ASM("asm/Game/zNPCSupport.s", "IndexToUVCoord__10NPCBlinkerFiPfPf")

// func_8012EE54
#pragma GLOBAL_ASM("asm/Game/zNPCSupport.s", "Render__10NPCBlinkerFPC5xVec3fPC8RwRaster")

// func_8012F250
#pragma GLOBAL_ASM("asm/Game/zNPCSupport.s", "Firework_Release__FP8Firework")

// func_8012F284
#pragma GLOBAL_ASM("asm/Game/zNPCSupport.s", "Firework_ScenePrepare__Fv")

// func_8012F2B8
#pragma GLOBAL_ASM("asm/Game/zNPCSupport.s", "Firework_SceneFinish__Fv")

// func_8012F2DC
#pragma GLOBAL_ASM("asm/Game/zNPCSupport.s", "Firework_SceneReset__Fi")

// func_8012F35C
#pragma GLOBAL_ASM("asm/Game/zNPCSupport.s", "Firework_Timestep__Ff")

// func_8012F400
#pragma GLOBAL_ASM("asm/Game/zNPCSupport.s", "Cleanup__8FireworkFv")

// func_8012F404
#pragma GLOBAL_ASM("asm/Game/zNPCSupport.s", "Update__8FireworkFf")

// func_8012F4B0
#pragma GLOBAL_ASM("asm/Game/zNPCSupport.s", "FlyFlyFly__8FireworkFf")

// func_8012F5B8
#pragma GLOBAL_ASM("asm/Game/zNPCSupport.s", "Detonate__8FireworkFv")

// func_8012F5DC
#pragma GLOBAL_ASM("asm/Game/zNPCSupport.s", "NPCC_ang_toXZDir__FfP5xVec3")

// func_8012F634
#pragma GLOBAL_ASM("asm/Game/zNPCSupport.s", "NPCC_dir_toXZAng__FPC5xVec3")

// func_8012F65C
#pragma GLOBAL_ASM("asm/Game/zNPCSupport.s", "NPCC_aimMiss__FP5xVec3P5xVec3P5xVec3fP5xVec3")

// func_8012F684
#pragma GLOBAL_ASM("asm/Game/zNPCSupport.s", "NPCC_aimVary__FP5xVec3P5xVec3P5xVec3fiP5xVec3")

// func_8012F92C
#pragma GLOBAL_ASM("asm/Game/zNPCSupport.s", "NPCC_chk_hitPlyr__FP6xBoundP7xCollis")

// func_8012F960
#pragma GLOBAL_ASM("asm/Game/zNPCSupport.s", "NPCC_chk_hitEnt__FP4xEntP6xBoundP7xCollis")

// func_8012FA3C
#pragma GLOBAL_ASM("asm/Game/zNPCSupport.s", "NPCC_LineHitsBound__FP5xVec3P5xVec3P6xBoundP7xCollis")

// func_8012FB0C
#pragma GLOBAL_ASM("asm/Game/zNPCSupport.s", "NPCC_bnd_ofBase__FP5xBaseP6xBound")

// func_8012FB80
#pragma GLOBAL_ASM("asm/Game/zNPCSupport.s", "NPCC_pos_ofBase__FP5xBaseP5xVec3")

// func_8012FC20
#pragma GLOBAL_ASM("asm/Game/zNPCSupport.s", "NPCC_xBoundAway__FP6xBound")

// func_8012FC5C
#pragma GLOBAL_ASM("asm/Game/zNPCSupport.s", "NPCC_xBoundBack__FP6xBound")

// func_8012FC98
#pragma GLOBAL_ASM("asm/Game/zNPCSupport.s", "NPCC_HaveLOSToPos__FP5xVec3P5xVec3fP5xBaseP7xCollis")

// func_8012FE18
#pragma GLOBAL_ASM("asm/Game/zNPCSupport.s", "NPCC_DstSqPlyrToPos__FPC5xVec3")

// func_8012FE60
#pragma GLOBAL_ASM("asm/Game/zNPCSupport.s", "NPCC_ds2_toCam__FPC5xVec3P5xVec3")

// func_8012FEEC
#pragma GLOBAL_ASM("asm/Game/zNPCSupport.s", "NPCC_Bounce__FP5xVec3P5xVec3f")

// func_8012FF78
#pragma GLOBAL_ASM("asm/Game/zNPCSupport.s", "NPCC_rotHPB__FP7xMat3x3fff")

// func_80130078
#pragma GLOBAL_ASM("asm/Game/zNPCSupport.s", "NPCC_TmrCycle__FPfff")

// func_801300EC
#pragma GLOBAL_ASM("asm/Game/zNPCSupport.s", "NPCC_MakePerp__FP5xVec3PC5xVec3")

// func_80130134
#pragma GLOBAL_ASM("asm/Game/zNPCSupport.s", "NPCC_MakeArbPlane__FPC5xVec3P5xVec3P5xVec3")

// func_80130190
#pragma GLOBAL_ASM("asm/Game/zNPCSupport.s", "NPCC_FindRWTexture__FPCc")

// func_801301B8
#pragma GLOBAL_ASM("asm/Game/zNPCSupport.s", "NPCC_FindRWTexture__FUi")

// func_801301DC
#pragma GLOBAL_ASM("asm/Game/zNPCSupport.s", "NPCC_FindRWRaster__FPCc")

// func_80130210
#pragma GLOBAL_ASM("asm/Game/zNPCSupport.s", "NPCC_FindRWRaster__FP9RwTexture")

// func_80130228
#pragma GLOBAL_ASM("asm/Game/zNPCSupport.s", "NPCC_GenSmooth__FPP5xVec3PP5xVec3")

// func_801303F0
#pragma GLOBAL_ASM("asm/Game/zNPCSupport.s", "zNPC_SNDInit__Fv")

// func_801304C8
#pragma GLOBAL_ASM("asm/Game/zNPCSupport.s", "zNPC_SNDPlay3D__F11_tageNPCSndP4xEnt")

// func_80130564
#pragma GLOBAL_ASM("asm/Game/zNPCSupport.s", "zNPC_SNDStop__F11_tageNPCSnd")

// func_801305C0
#pragma GLOBAL_ASM("asm/Game/zNPCSupport.s", "NPCC_LampStatus__Fv")

// func_801305D0
#pragma GLOBAL_ASM("asm/Game/zNPCSupport.s", "NPCC_ForceTalkOk__Fv")

// func_801305E8
#pragma GLOBAL_ASM("asm/Game/zNPCSupport.s", "IsLocked__9NPCWidgetFv")
