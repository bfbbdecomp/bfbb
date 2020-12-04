#include "zNPCSpawner.h"

#include <types.h>

// func_8012A728
#pragma GLOBAL_ASM("asm/Game/zNPCSpawner.s", "zNPCSpawner_Startup__Fv")

// func_8012A72C
#pragma GLOBAL_ASM("asm/Game/zNPCSpawner.s", "zNPCSpawner_Shutdown__Fv")

// func_8012A730
#pragma GLOBAL_ASM("asm/Game/zNPCSpawner.s", "zNPCSpawner_ScenePrepare__Fv")

// func_8012A7B0
#pragma GLOBAL_ASM("asm/Game/zNPCSpawner.s", "zNPCSpawner_SceneFinish__Fv")

// func_8012A828
#pragma GLOBAL_ASM("asm/Game/zNPCSpawner.s", "zNPCSpawner_GetInstance__Fv")

// func_8012A870
#pragma GLOBAL_ASM("asm/Game/zNPCSpawner.s", "Subscribe__11zNPCSpawnerFP10zNPCCommon")

// func_8012A8D4
#pragma GLOBAL_ASM("asm/Game/zNPCSpawner.s", "SetWaveMode__11zNPCSpawnerF15en_SM_WAVE_MODEfi")

// func_8012A8E4
#pragma GLOBAL_ASM("asm/Game/zNPCSpawner.s", "AddSpawnPoint__11zNPCSpawnerFP10zMovePoint")

// func_8012A920
#pragma GLOBAL_ASM("asm/Game/zNPCSpawner.s", "AddSpawnNPC__11zNPCSpawnerFP10zNPCCommon")

// func_8012A9B0
#pragma GLOBAL_ASM("asm/Game/zNPCSpawner.s", "Reset__11zNPCSpawnerFv")

// func_8012AA14
#pragma GLOBAL_ASM("asm/Game/zNPCSpawner.s", "MapPreferred__11zNPCSpawnerFv")

// func_8012AAA8
#pragma GLOBAL_ASM("asm/Game/zNPCSpawner.s", "Timestep__11zNPCSpawnerFf")

// func_8012AB70
#pragma GLOBAL_ASM("asm/Game/zNPCSpawner.s", "UpdateDiscreet__11zNPCSpawnerFf")

// func_8012ADE8
#pragma GLOBAL_ASM("asm/Game/zNPCSpawner.s", "UpdateContinuous__11zNPCSpawnerFf")

// func_8012B0BC
#pragma GLOBAL_ASM("asm/Game/zNPCSpawner.s", "Notify__11zNPCSpawnerF13en_SM_NOTICESPv")

// func_8012B1FC
#pragma GLOBAL_ASM("asm/Game/zNPCSpawner.s", "Owned__11zNPCSpawnerCFP10zNPCCommon")

// func_8012B2D8
#pragma GLOBAL_ASM("asm/Game/zNPCSpawner.s", "Receivable__11zNPCSpawnerCF13en_SM_NOTICESPv")

// func_8012B32C
#pragma GLOBAL_ASM("asm/Game/zNPCSpawner.s", "SelectSP__11zNPCSpawnerFPC11SMNPCStatus")

// func_8012B4B8
#pragma GLOBAL_ASM("asm/Game/zNPCSpawner.s", "NextPendingNPC__11zNPCSpawnerFi")

// func_8012B4F4
#pragma GLOBAL_ASM("asm/Game/zNPCSpawner.s", "ClearActive__11zNPCSpawnerFv")

// func_8012B550
#pragma GLOBAL_ASM("asm/Game/zNPCSpawner.s", "ClearPending__11zNPCSpawnerFv")

// func_8012B5A4
#pragma GLOBAL_ASM("asm/Game/zNPCSpawner.s", "FillPending__11zNPCSpawnerFv")

// func_8012B5DC
#pragma GLOBAL_ASM("asm/Game/zNPCSpawner.s", "ReFillPending__11zNPCSpawnerFv")

// func_8012B650
#pragma GLOBAL_ASM("asm/Game/zNPCSpawner.s", "IsSPLZClear__11zNPCSpawnerFP10zMovePoint")

// func_8012B7E4
#pragma GLOBAL_ASM("asm/Game/zNPCSpawner.s", "IsNearbyMover__11zNPCSpawnerFP6xBoundiP7xCollis")

// func_8012B980
#pragma GLOBAL_ASM("asm/Game/zNPCSpawner.s",                                                       \
                   "SetNPCStatus__11zNPCSpawnerFP10zNPCCommon16en_SM_NPC_STATUS")

// func_8012B9B8
#pragma GLOBAL_ASM("asm/Game/zNPCSpawner.s", "StatForSP__11zNPCSpawnerFP10zMovePointi")

// func_8012BADC
#pragma GLOBAL_ASM("asm/Game/zNPCSpawner.s", "StatForNPC__11zNPCSpawnerFP10zNPCCommon")

// func_8012BC00
#pragma GLOBAL_ASM("asm/Game/zNPCSpawner.s",                                                       \
                   "SpawnBeastie__11zNPCSpawnerFP11SMNPCStatusP10SMSPStatus")

// func_8012BD0C
#pragma GLOBAL_ASM("asm/Game/zNPCSpawner.s", "ToastedBeastie__11zNPCSpawnerFP10zNPCCommon")

// func_8012BD68
#pragma GLOBAL_ASM("asm/Game/zNPCSpawner.s", "ChildHeartbeat__11zNPCSpawnerFf")

// func_8012BD6C
#pragma GLOBAL_ASM("asm/Game/zNPCSpawner.s", "ChildCleanup__11zNPCSpawnerFf")

// func_8012BE78
#pragma GLOBAL_ASM("asm/Game/zNPCSpawner.s",                                                       \
                   "xUtil_select_esc__0_10SMSPStatus_esc__1___FPP10SMSPStatusiPCf")

// func_8012BF8C
#pragma GLOBAL_ASM("asm/Game/zNPCSpawner.s",                                                       \
                   "xUtil_select_esc__0_11SMNPCStatus_esc__1___FPP11SMNPCStatusiPCf")

// func_8012C0A0
#pragma GLOBAL_ASM("asm/Game/zNPCSpawner.s", "IsOn__10zMovePointFv")
