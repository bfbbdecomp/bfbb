#include "zNPCSpawner.h"

#include <types.h>

// zNPCSpawner_Startup()
#pragma GLOBAL_ASM("asm/Game/zNPCSpawner.s", "zNPCSpawner_Startup__Fv")

// zNPCSpawner_Shutdown()
#pragma GLOBAL_ASM("asm/Game/zNPCSpawner.s", "zNPCSpawner_Shutdown__Fv")

// zNPCSpawner_ScenePrepare()
#pragma GLOBAL_ASM("asm/Game/zNPCSpawner.s", "zNPCSpawner_ScenePrepare__Fv")

// zNPCSpawner_SceneFinish()
#pragma GLOBAL_ASM("asm/Game/zNPCSpawner.s", "zNPCSpawner_SceneFinish__Fv")

// zNPCSpawner_GetInstance()
#pragma GLOBAL_ASM("asm/Game/zNPCSpawner.s", "zNPCSpawner_GetInstance__Fv")

// zNPCSpawner::Subscribe(zNPCCommon*)
#pragma GLOBAL_ASM("asm/Game/zNPCSpawner.s", "Subscribe__11zNPCSpawnerFP10zNPCCommon")

// zNPCSpawner::SetWaveMode(en_SM_WAVE_MODE,float,int)
#pragma GLOBAL_ASM("asm/Game/zNPCSpawner.s", "SetWaveMode__11zNPCSpawnerF15en_SM_WAVE_MODEfi")

// zNPCSpawner::AddSpawnPoint(zMovePoint*)
#pragma GLOBAL_ASM("asm/Game/zNPCSpawner.s", "AddSpawnPoint__11zNPCSpawnerFP10zMovePoint")

// zNPCSpawner::AddSpawnNPC(zNPCCommon*)
#pragma GLOBAL_ASM("asm/Game/zNPCSpawner.s", "AddSpawnNPC__11zNPCSpawnerFP10zNPCCommon")

// zNPCSpawner::Reset()
#pragma GLOBAL_ASM("asm/Game/zNPCSpawner.s", "Reset__11zNPCSpawnerFv")

// zNPCSpawner::MapPreferred()
#pragma GLOBAL_ASM("asm/Game/zNPCSpawner.s", "MapPreferred__11zNPCSpawnerFv")

// zNPCSpawner::Timestep(float)
#pragma GLOBAL_ASM("asm/Game/zNPCSpawner.s", "Timestep__11zNPCSpawnerFf")

// zNPCSpawner::UpdateDiscreet(float)
#pragma GLOBAL_ASM("asm/Game/zNPCSpawner.s", "UpdateDiscreet__11zNPCSpawnerFf")

// zNPCSpawner::UpdateContinuous(float)
#pragma GLOBAL_ASM("asm/Game/zNPCSpawner.s", "UpdateContinuous__11zNPCSpawnerFf")

// zNPCSpawner::Notify(en_SM_NOTICES,void*)
#pragma GLOBAL_ASM("asm/Game/zNPCSpawner.s", "Notify__11zNPCSpawnerF13en_SM_NOTICESPv")

// zNPCSpawner::Owned(zNPCCommon*) const
#pragma GLOBAL_ASM("asm/Game/zNPCSpawner.s", "Owned__11zNPCSpawnerCFP10zNPCCommon")

// zNPCSpawner::Receivable(en_SM_NOTICES,void*) const
#pragma GLOBAL_ASM("asm/Game/zNPCSpawner.s", "Receivable__11zNPCSpawnerCF13en_SM_NOTICESPv")

// zNPCSpawner::SelectSP(const SMNPCStatus*)
#pragma GLOBAL_ASM("asm/Game/zNPCSpawner.s", "SelectSP__11zNPCSpawnerFPC11SMNPCStatus")

// zNPCSpawner::NextPendingNPC(int)
#pragma GLOBAL_ASM("asm/Game/zNPCSpawner.s", "NextPendingNPC__11zNPCSpawnerFi")

// zNPCSpawner::ClearActive()
#pragma GLOBAL_ASM("asm/Game/zNPCSpawner.s", "ClearActive__11zNPCSpawnerFv")

// zNPCSpawner::ClearPending()
#pragma GLOBAL_ASM("asm/Game/zNPCSpawner.s", "ClearPending__11zNPCSpawnerFv")

// zNPCSpawner::FillPending()
#pragma GLOBAL_ASM("asm/Game/zNPCSpawner.s", "FillPending__11zNPCSpawnerFv")

// zNPCSpawner::ReFillPending()
#pragma GLOBAL_ASM("asm/Game/zNPCSpawner.s", "ReFillPending__11zNPCSpawnerFv")

// zNPCSpawner::IsSPLZClear(zMovePoint*)
#pragma GLOBAL_ASM("asm/Game/zNPCSpawner.s", "IsSPLZClear__11zNPCSpawnerFP10zMovePoint")

// zNPCSpawner::IsNearbyMover(xBound*,int,xCollis*)
#pragma GLOBAL_ASM("asm/Game/zNPCSpawner.s", "IsNearbyMover__11zNPCSpawnerFP6xBoundiP7xCollis")

// zNPCSpawner::SetNPCStatus(zNPCCommon*,en_SM_NPC_STATUS)
#pragma GLOBAL_ASM("asm/Game/zNPCSpawner.s", "SetNPCStatus__11zNPCSpawnerFP10zNPCCommon16en_SM_NPC_STATUS")

// zNPCSpawner::StatForSP(zMovePoint*,int)
#pragma GLOBAL_ASM("asm/Game/zNPCSpawner.s", "StatForSP__11zNPCSpawnerFP10zMovePointi")

// zNPCSpawner::StatForNPC(zNPCCommon*)
#pragma GLOBAL_ASM("asm/Game/zNPCSpawner.s", "StatForNPC__11zNPCSpawnerFP10zNPCCommon")

// zNPCSpawner::SpawnBeastie(SMNPCStatus*,SMSPStatus*)
#pragma GLOBAL_ASM("asm/Game/zNPCSpawner.s", "SpawnBeastie__11zNPCSpawnerFP11SMNPCStatusP10SMSPStatus")

// zNPCSpawner::ToastedBeastie(zNPCCommon*)
#pragma GLOBAL_ASM("asm/Game/zNPCSpawner.s", "ToastedBeastie__11zNPCSpawnerFP10zNPCCommon")

// zNPCSpawner::ChildHeartbeat(float)
#pragma GLOBAL_ASM("asm/Game/zNPCSpawner.s", "ChildHeartbeat__11zNPCSpawnerFf")

// zNPCSpawner::ChildCleanup(float)
#pragma GLOBAL_ASM("asm/Game/zNPCSpawner.s", "ChildCleanup__11zNPCSpawnerFf")

#pragma GLOBAL_ASM("asm/Game/zNPCSpawner.s", "xUtil_select_esc__0_10SMSPStatus_esc__1___FPP10SMSPStatusiPCf")

#pragma GLOBAL_ASM("asm/Game/zNPCSpawner.s", "xUtil_select_esc__0_11SMNPCStatus_esc__1___FPP11SMNPCStatusiPCf")

// zMovePoint::IsOn()
#pragma GLOBAL_ASM("asm/Game/zNPCSpawner.s", "IsOn__10zMovePointFv")
