#include "zNPCSupport.h"

#include <types.h>

// NPCSupport_Startup()
#pragma GLOBAL_ASM("asm/Game/zNPCSupport.s", "NPCSupport_Startup__Fv")

// NPCSupport_Shutdown()
#pragma GLOBAL_ASM("asm/Game/zNPCSupport.s", "NPCSupport_Shutdown__Fv")

// NPCSupport_ScenePrepare()
#pragma GLOBAL_ASM("asm/Game/zNPCSupport.s", "NPCSupport_ScenePrepare__Fv")

// NPCSupport_SceneFinish()
#pragma GLOBAL_ASM("asm/Game/zNPCSupport.s", "NPCSupport_SceneFinish__Fv")

// NPCSupport_ScenePostInit()
#pragma GLOBAL_ASM("asm/Game/zNPCSupport.s", "NPCSupport_ScenePostInit__Fv")

// NPCSupport_SceneReset()
#pragma GLOBAL_ASM("asm/Game/zNPCSupport.s", "NPCSupport_SceneReset__Fv")

// NPCSupport_Timestep(float)
#pragma GLOBAL_ASM("asm/Game/zNPCSupport.s", "NPCSupport_Timestep__Ff")

// NPCWidget_Startup()
#pragma GLOBAL_ASM("asm/Game/zNPCSupport.s", "NPCWidget_Startup__Fv")

// NPCWidget_Shutdown()
#pragma GLOBAL_ASM("asm/Game/zNPCSupport.s", "NPCWidget_Shutdown__Fv")

// NPCWidget_ScenePrepare()
#pragma GLOBAL_ASM("asm/Game/zNPCSupport.s", "NPCWidget_ScenePrepare__Fv")

// NPCWidget_SceneFinish()
#pragma GLOBAL_ASM("asm/Game/zNPCSupport.s", "NPCWidget_SceneFinish__Fv")

// NPCWidget_SceneReset()
#pragma GLOBAL_ASM("asm/Game/zNPCSupport.s", "NPCWidget_SceneReset__Fv")

// NPCWidget_ScenePostInit()
#pragma GLOBAL_ASM("asm/Game/zNPCSupport.s", "NPCWidget_ScenePostInit__Fv")

// NPCWidget_Find(en_NPC_UI_WIDGETS)
#pragma GLOBAL_ASM("asm/Game/zNPCSupport.s", "NPCWidget_Find__F17en_NPC_UI_WIDGETS")

// NPCWidget::Init(en_NPC_UI_WIDGETS)
#pragma GLOBAL_ASM("asm/Game/zNPCSupport.s", "Init__9NPCWidgetF17en_NPC_UI_WIDGETS")

// NPCWidget::Reset()
#pragma GLOBAL_ASM("asm/Game/zNPCSupport.s", "Reset__9NPCWidgetFv")

// NPCWidget::On(const zNPCCommon*,int)
#pragma GLOBAL_ASM("asm/Game/zNPCSupport.s", "On__9NPCWidgetFPC10zNPCCommoni")

// NPCWidget::Off(const zNPCCommon*,int)
#pragma GLOBAL_ASM("asm/Game/zNPCSupport.s", "Off__9NPCWidgetFPC10zNPCCommoni")

// NPCWidget::IsVisible()
#pragma GLOBAL_ASM("asm/Game/zNPCSupport.s", "IsVisible__9NPCWidgetFv")

// NPCWidget::Lock(const zNPCCommon*)
#pragma GLOBAL_ASM("asm/Game/zNPCSupport.s", "Lock__9NPCWidgetFPC10zNPCCommon")

// NPCWidget::Unlock(const zNPCCommon*)
#pragma GLOBAL_ASM("asm/Game/zNPCSupport.s", "Unlock__9NPCWidgetFPC10zNPCCommon")

// NPCWidget::NPCIsTheLocker(const zNPCCommon*)
#pragma GLOBAL_ASM("asm/Game/zNPCSupport.s", "NPCIsTheLocker__9NPCWidgetFPC10zNPCCommon")

// NPCTarget::TargetSet(xEnt*,int)
#pragma GLOBAL_ASM("asm/Game/zNPCSupport.s", "TargetSet__9NPCTargetFP4xEnti")

// NPCTarget::TargetClear()
#pragma GLOBAL_ASM("asm/Game/zNPCSupport.s", "TargetClear__9NPCTargetFv")

// NPCTarget::FindNearest(int,xBase*,xVec3*,float)
#pragma GLOBAL_ASM("asm/Game/zNPCSupport.s", "FindNearest__9NPCTargetFiP5xBaseP5xVec3f")

// NPCTarget::PosGet(xVec3*)
#pragma GLOBAL_ASM("asm/Game/zNPCSupport.s", "PosGet__9NPCTargetFP5xVec3")

// NPCTarget::InCylinder(xVec3*,float,float,float)
#pragma GLOBAL_ASM("asm/Game/zNPCSupport.s", "InCylinder__9NPCTargetFP5xVec3fff")

// NPCTarget::IsDead()
#pragma GLOBAL_ASM("asm/Game/zNPCSupport.s", "IsDead__9NPCTargetFv")

// NPCLaser::Render(xVec3*,xVec3*)
#pragma GLOBAL_ASM("asm/Game/zNPCSupport.s", "Render__8NPCLaserFP5xVec3P5xVec3")

// NPCCone::RenderCone(xVec3*,xVec3*)
#pragma GLOBAL_ASM("asm/Game/zNPCSupport.s", "RenderCone__7NPCConeFP5xVec3P5xVec3")

// NPCBlinker::Reset()
#pragma GLOBAL_ASM("asm/Game/zNPCSupport.s", "Reset__10NPCBlinkerFv")

// NPCBlinker::Update(float,float,float,float)
#pragma GLOBAL_ASM("asm/Game/zNPCSupport.s", "Update__10NPCBlinkerFffff")

// NPCBlinker::IndexToUVCoord(int,float*,float*)
#pragma GLOBAL_ASM("asm/Game/zNPCSupport.s", "IndexToUVCoord__10NPCBlinkerFiPfPf")

// NPCBlinker::Render(const xVec3*,float,const RwRaster*)
#pragma GLOBAL_ASM("asm/Game/zNPCSupport.s", "Render__10NPCBlinkerFPC5xVec3fPC8RwRaster")

// Firework_Release(Firework*)
#pragma GLOBAL_ASM("asm/Game/zNPCSupport.s", "Firework_Release__FP8Firework")

// Firework_ScenePrepare()
#pragma GLOBAL_ASM("asm/Game/zNPCSupport.s", "Firework_ScenePrepare__Fv")

// Firework_SceneFinish()
#pragma GLOBAL_ASM("asm/Game/zNPCSupport.s", "Firework_SceneFinish__Fv")

// Firework_SceneReset(int)
#pragma GLOBAL_ASM("asm/Game/zNPCSupport.s", "Firework_SceneReset__Fi")

// Firework_Timestep(float)
#pragma GLOBAL_ASM("asm/Game/zNPCSupport.s", "Firework_Timestep__Ff")

// Firework::Cleanup()
#pragma GLOBAL_ASM("asm/Game/zNPCSupport.s", "Cleanup__8FireworkFv")

// Firework::Update(float)
#pragma GLOBAL_ASM("asm/Game/zNPCSupport.s", "Update__8FireworkFf")

// Firework::FlyFlyFly(float)
#pragma GLOBAL_ASM("asm/Game/zNPCSupport.s", "FlyFlyFly__8FireworkFf")

// Firework::Detonate()
#pragma GLOBAL_ASM("asm/Game/zNPCSupport.s", "Detonate__8FireworkFv")

// NPCC_ang_toXZDir(float,xVec3*)
#pragma GLOBAL_ASM("asm/Game/zNPCSupport.s", "NPCC_ang_toXZDir__FfP5xVec3")

// NPCC_dir_toXZAng(const xVec3*)
#pragma GLOBAL_ASM("asm/Game/zNPCSupport.s", "NPCC_dir_toXZAng__FPC5xVec3")

// NPCC_aimMiss(xVec3*,xVec3*,xVec3*,float,xVec3*)
#pragma GLOBAL_ASM("asm/Game/zNPCSupport.s", "NPCC_aimMiss__FP5xVec3P5xVec3P5xVec3fP5xVec3")

// NPCC_aimVary(xVec3*,xVec3*,xVec3*,float,int,xVec3*)
#pragma GLOBAL_ASM("asm/Game/zNPCSupport.s", "NPCC_aimVary__FP5xVec3P5xVec3P5xVec3fiP5xVec3")

// NPCC_chk_hitPlyr(xBound*,xCollis*)
#pragma GLOBAL_ASM("asm/Game/zNPCSupport.s", "NPCC_chk_hitPlyr__FP6xBoundP7xCollis")

// NPCC_chk_hitEnt(xEnt*,xBound*,xCollis*)
#pragma GLOBAL_ASM("asm/Game/zNPCSupport.s", "NPCC_chk_hitEnt__FP4xEntP6xBoundP7xCollis")

// NPCC_LineHitsBound(xVec3*,xVec3*,xBound*,xCollis*)
#pragma GLOBAL_ASM("asm/Game/zNPCSupport.s", "NPCC_LineHitsBound__FP5xVec3P5xVec3P6xBoundP7xCollis")

// NPCC_pos_ofBase(xBase*,xVec3*)
#pragma GLOBAL_ASM("asm/Game/zNPCSupport.s", "NPCC_pos_ofBase__FP5xBaseP5xVec3")

// NPCC_xBoundAway(xBound*)
#pragma GLOBAL_ASM("asm/Game/zNPCSupport.s", "NPCC_xBoundAway__FP6xBound")

// NPCC_xBoundBack(xBound*)
#pragma GLOBAL_ASM("asm/Game/zNPCSupport.s", "NPCC_xBoundBack__FP6xBound")

// NPCC_HaveLOSToPos(xVec3*,xVec3*,float,xBase*,xCollis*)
#pragma GLOBAL_ASM("asm/Game/zNPCSupport.s", "NPCC_HaveLOSToPos__FP5xVec3P5xVec3fP5xBaseP7xCollis")

// NPCC_DstSqPlyrToPos(const xVec3*)
#pragma GLOBAL_ASM("asm/Game/zNPCSupport.s", "NPCC_DstSqPlyrToPos__FPC5xVec3")

// NPCC_ds2_toCam(const xVec3*,xVec3*)
#pragma GLOBAL_ASM("asm/Game/zNPCSupport.s", "NPCC_ds2_toCam__FPC5xVec3P5xVec3")

// NPCC_Bounce(xVec3*,xVec3*,float)
#pragma GLOBAL_ASM("asm/Game/zNPCSupport.s", "NPCC_Bounce__FP5xVec3P5xVec3f")

// NPCC_rotHPB(xMat3x3*,float,float,float)
#pragma GLOBAL_ASM("asm/Game/zNPCSupport.s", "NPCC_rotHPB__FP7xMat3x3fff")

// NPCC_TmrCycle(float*,float,float)
#pragma GLOBAL_ASM("asm/Game/zNPCSupport.s", "NPCC_TmrCycle__FPfff")

// NPCC_MakePerp(xVec3*,const xVec3*)
#pragma GLOBAL_ASM("asm/Game/zNPCSupport.s", "NPCC_MakePerp__FP5xVec3PC5xVec3")

// NPCC_MakeArbPlane(const xVec3*,xVec3*,xVec3*)
#pragma GLOBAL_ASM("asm/Game/zNPCSupport.s", "NPCC_MakeArbPlane__FPC5xVec3P5xVec3P5xVec3")

// NPCC_FindRWTexture(const char*)
#pragma GLOBAL_ASM("asm/Game/zNPCSupport.s", "NPCC_FindRWTexture__FPCc")

// NPCC_FindRWTexture(unsigned int)
#pragma GLOBAL_ASM("asm/Game/zNPCSupport.s", "NPCC_FindRWTexture__FUi")

// NPCC_FindRWRaster(const char*)
#pragma GLOBAL_ASM("asm/Game/zNPCSupport.s", "NPCC_FindRWRaster__FPCc")

// NPCC_FindRWRaster(RwTexture*)
#pragma GLOBAL_ASM("asm/Game/zNPCSupport.s", "NPCC_FindRWRaster__FP9RwTexture")

// NPCC_GenSmooth(xVec3**,xVec3**)
#pragma GLOBAL_ASM("asm/Game/zNPCSupport.s", "NPCC_GenSmooth__FPP5xVec3PP5xVec3")

// zNPC_SNDInit()
#pragma GLOBAL_ASM("asm/Game/zNPCSupport.s", "zNPC_SNDInit__Fv")

// zNPC_SNDPlay3D(_tageNPCSnd,xEnt*)
#pragma GLOBAL_ASM("asm/Game/zNPCSupport.s", "zNPC_SNDPlay3D__F11_tageNPCSndP4xEnt")

// zNPC_SNDStop(_tageNPCSnd)
#pragma GLOBAL_ASM("asm/Game/zNPCSupport.s", "zNPC_SNDStop__F11_tageNPCSnd")

// NPCC_LampStatus()
#pragma GLOBAL_ASM("asm/Game/zNPCSupport.s", "NPCC_LampStatus__Fv")

// NPCC_ForceTalkOk()
#pragma GLOBAL_ASM("asm/Game/zNPCSupport.s", "NPCC_ForceTalkOk__Fv")

// NPCWidget::IsLocked()
#pragma GLOBAL_ASM("asm/Game/zNPCSupport.s", "IsLocked__9NPCWidgetFv")
