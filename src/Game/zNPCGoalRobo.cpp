#include "../Core/x/xVec3.h"
#include "../Core/x/xMath3.h"
#include "zNPCGoalRobo.h"

#include <types.h>

// func_800D92AC
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "GOALCreate_Robotic__FiP10RyzMemGrowPv")

// func_800D9C20
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "Process__14zNPCGoalNoticeFP11en_trantypefPvP6xScene")

// func_800D9CF8
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "Enter__13zNPCGoalTauntFfPv")

// func_800D9D58
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "Process__13zNPCGoalTauntFP11en_trantypefPvP6xScene")

// func_800D9E7C
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "Enter__13zNPCGoalEvadeFfPv")

// func_800D9EFC
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "Process__13zNPCGoalEvadeFP11en_trantypefPvP6xScene")

// func_800DA030
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "Process__14zNPCGoalGoHomeFP11en_trantypefPvP6xScene")

// func_800DA1F4
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "Enter__13zNPCGoalAlertFfPv")

// func_800DA2CC
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "Exit__13zNPCGoalAlertFfPv")

// func_800DA350
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "Process__13zNPCGoalAlertFP11en_trantypefPvP6xScene")

// func_800DA554
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "Enter__19zNPCGoalAlertFodderFfPv")

// func_800DA588
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s",                                                      \
                   "Process__19zNPCGoalAlertFodderFP11en_trantypefPvP6xScene")

// func_800DA8AC
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "CheckSpot__19zNPCGoalAlertFodderFf")

// func_800DAA9C
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "FlankPlayer__19zNPCGoalAlertFodderFf")

// func_800DACF4
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "GetInArena__19zNPCGoalAlertFodderFf")

// func_800DADF4
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "MoveEvade__19zNPCGoalAlertFodderFf")

// func_800DAF68
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "Enter__20zNPCGoalAlertFodBombFfPv")

// func_800DAFE0
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "Resume__20zNPCGoalAlertFodBombFfPv")

// func_800DB00C
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s",                                                      \
                   "Process__20zNPCGoalAlertFodBombFP11en_trantypefPvP6xScene")

// func_800DB360
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "Detonate__20zNPCGoalAlertFodBombFv")

// func_800DB3D8
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "SonarHoming__20zNPCGoalAlertFodBombFf")

// func_800DB674
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "Enter__20zNPCGoalAlertFodBzztFfPv")

// func_800DB73C
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "Exit__20zNPCGoalAlertFodBzztFfPv")

// func_800DB7B0
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "Suspend__20zNPCGoalAlertFodBzztFfPv")

// func_800DB808
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "Resume__20zNPCGoalAlertFodBzztFfPv")

// func_800DB8EC
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s",                                                      \
                   "Process__20zNPCGoalAlertFodBzztFP11en_trantypefPvP6xScene")

// func_800DBB68
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "ToggleOrbit__20zNPCGoalAlertFodBzztFv")

// func_800DBBA4
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "OrbitPlayer__20zNPCGoalAlertFodBzztFf")

// func_800DBE34
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "GetInArena__20zNPCGoalAlertFodBzztFf")

// func_800DBF00
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "DeathRayUpdate__20zNPCGoalAlertFodBzztFf")

// func_800DC428
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "DeathRayRender__20zNPCGoalAlertFodBzztFv")

// func_800DC488
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "Enter__20zNPCGoalAlertChomperFfPv")

// func_800DC50C
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s",                                                      \
                   "Process__20zNPCGoalAlertChomperFP11en_trantypefPvP6xScene")

// func_800DC878
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "CirclePlayer__20zNPCGoalAlertChomperFf")

// func_800DC9E0
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "GetInArena__20zNPCGoalAlertChomperFf")

// func_800DCAE0
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "CalcEvadePos__20zNPCGoalAlertChomperFP5xVec3")

// func_800DCD04
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "MoveEvadePos__20zNPCGoalAlertChomperFPC5xVec3f")

// func_800DCDF4
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "CheckSpot__20zNPCGoalAlertChomperFf")

// func_800DCF2C
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "Enter__19zNPCGoalAlertHammerFfPv")

// func_800DCF58
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "Exit__19zNPCGoalAlertHammerFfPv")

// func_800DCF78
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s",                                                      \
                   "Process__19zNPCGoalAlertHammerFP11en_trantypefPvP6xScene")

// func_800DD254
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "PlayerInSpot__19zNPCGoalAlertHammerFf")

// func_800DD428
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "MoveChase__19zNPCGoalAlertHammerFf")

// func_800DD704
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "MoveEvade__19zNPCGoalAlertHammerFf")

// func_800DD850
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "Enter__19zNPCGoalAlertTarTarFfPv")

// func_800DD8D0
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "Resume__19zNPCGoalAlertTarTarFfPv")

// func_800DD938
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s",                                                      \
                   "Process__19zNPCGoalAlertTarTarFP11en_trantypefPvP6xScene")

// func_800DDC9C
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "NPCMessage__19zNPCGoalAlertTarTarFP6NPCMsg")

// func_800DDD7C
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "HoppyUpdate__19zNPCGoalAlertTarTarFP11en_trantypef")

// func_800DDF84
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "GetInArena__19zNPCGoalAlertTarTarFf")

// func_800DE084
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "Enter__18zNPCGoalAlertGloveFfPv")

// func_800DE124
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "Exit__18zNPCGoalAlertGloveFfPv")

// func_800DE19C
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "Suspend__18zNPCGoalAlertGloveFfPv")

// func_800DE214
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "Resume__18zNPCGoalAlertGloveFfPv")

// func_800DE2A4
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s",                                                      \
                   "Process__18zNPCGoalAlertGloveFP11en_trantypefPvP6xScene")

// func_800DE668
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "FXTurbulence__18zNPCGoalAlertGloveFv")

// func_800DE864
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "FXWhirlwind__18zNPCGoalAlertGloveFv")

// func_800DE9EC
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "CalcAttackVector__18zNPCGoalAlertGloveFv")

// func_800DEACC
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "CheckHandBones__18zNPCGoalAlertGloveFv")

// func_800DEDC4
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "CollReview__18zNPCGoalAlertGloveFPv")

// func_800DF0F8
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "Enter__20zNPCGoalAlertMonsoonFfPv")

// func_800DF17C
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "Exit__20zNPCGoalAlertMonsoonFfPv")

// func_800DF19C
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "Resume__20zNPCGoalAlertMonsoonFfPv")

// func_800DF1CC
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s",                                                      \
                   "Process__20zNPCGoalAlertMonsoonFP11en_trantypefPvP6xScene")

// func_800DF5EC
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "MoveCorner__20zNPCGoalAlertMonsoonFf")

// func_800DF7A0
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "Enter__19zNPCGoalAlertSleepyFfPv")

// func_800DF830
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "Exit__19zNPCGoalAlertSleepyFfPv")

// func_800DF89C
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s",                                                      \
                   "Process__19zNPCGoalAlertSleepyFP11en_trantypefPvP6xScene")

// func_800DFB1C
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "NPCMessage__19zNPCGoalAlertSleepyFP6NPCMsg")

// func_800DFBE4
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "Enter__16zNPCGoalAlertArfFfPv")

// func_800DFC18
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "Exit__16zNPCGoalAlertArfFfPv")

// func_800DFC40
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "Resume__16zNPCGoalAlertArfFfPv")

// func_800DFC74
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s",                                                      \
                   "Process__16zNPCGoalAlertArfFP11en_trantypefPvP6xScene")

// func_800DFFD8
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "NPCMessage__16zNPCGoalAlertArfFP6NPCMsg")

// func_800E00D0
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "DecideAttack__16zNPCGoalAlertArfFv")

// func_800E018C
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "Enter__18zNPCGoalAlertPuppyFfPv")

// func_800E01B4
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "Resume__18zNPCGoalAlertPuppyFfPv")

// func_800E01E0
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s",                                                      \
                   "Process__18zNPCGoalAlertPuppyFP11en_trantypefPvP6xScene")

// func_800E0350
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "Enter__18zNPCGoalAlertChuckFfPv")

// func_800E03B4
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "Resume__18zNPCGoalAlertChuckFfPv")

// func_800E03E0
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s",                                                      \
                   "Process__18zNPCGoalAlertChuckFP11en_trantypefPvP6xScene")

// func_800E0A28
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "GetInArena__18zNPCGoalAlertChuckFf")

// func_800E0B28
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "ZoomMove__18zNPCGoalAlertChuckFf")

// func_800E0C7C
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "Enter__20zNPCGoalAlertTubeletFfPv")

// func_800E0CAC
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "Exit__20zNPCGoalAlertTubeletFfPv")

// func_800E0D1C
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "Resume__20zNPCGoalAlertTubeletFfPv")

// func_800E0D4C
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s",                                                      \
                   "Process__20zNPCGoalAlertTubeletFP11en_trantypefPvP6xScene")

// func_800E0ED8
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s",                                                      \
                   "ChkPrelimTran__20zNPCGoalAlertTubeletFP11en_trantypePi")

// func_800E101C
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "MoveToHome__20zNPCGoalAlertTubeletFf")

// func_800E1158
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "PeteAttackBegin__20zNPCGoalAlertTubeletFv")

// func_800E118C
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "PeteAttackParSys__20zNPCGoalAlertTubeletFfi")

// func_800E122C
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "EmitSteam__20zNPCGoalAlertTubeletFf")

// func_800E13F4
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "Enter__18zNPCGoalAlertSlickFfPv")

// func_800E1468
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "Resume__18zNPCGoalAlertSlickFfPv")

// func_800E14D0
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s",                                                      \
                   "Process__18zNPCGoalAlertSlickFP11en_trantypefPvP6xScene")

// func_800E18E0
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "NPCMessage__18zNPCGoalAlertSlickFP6NPCMsg")

// func_800E19C0
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "GetInArena__18zNPCGoalAlertSlickFf")

// func_800E1AC0
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "MoveCorner__18zNPCGoalAlertSlickFf")

// func_800E1C74
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "Process__13zNPCGoalChaseFP11en_trantypefPvP6xScene")

// func_800E1E38
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "Enter__17zNPCGoalAttackCQCFfPv")

// func_800E1E60
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s",                                                      \
                   "Process__17zNPCGoalAttackCQCFP11en_trantypefPvP6xScene")

// func_800E1FD8
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "Enter__20zNPCGoalAttackFodderFfPv")

// func_800E20AC
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "Exit__20zNPCGoalAttackFodderFfPv")

// func_800E2114
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s",                                                      \
                   "Process__20zNPCGoalAttackFodderFP11en_trantypefPvP6xScene")

// func_800E21A4
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s",                                                      \
                   "Notify__Q220zNPCGoalAttackFodder12CattleNotifyF10en_haznoteP9NPCHazard")

// func_800E21E4
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "SyncCattleProd__20zNPCGoalAttackFodderFv")

// func_800E22C0
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "Enter__21zNPCGoalAttackChomperFfPv")

// func_800E2334
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s",                                                      \
                   "Process__21zNPCGoalAttackChomperFP11en_trantypefPvP6xScene")

// func_800E23DC
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "BreathAttack__21zNPCGoalAttackChomperFv")

// func_800E2598
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "Enter__20zNPCGoalAttackHammerFfPv")

// func_800E2620
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "Exit__20zNPCGoalAttackHammerFfPv")

// func_800E2674
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s",                                                      \
                   "Process__20zNPCGoalAttackHammerFP11en_trantypefPvP6xScene")

// func_800E29F8
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s",                                                      \
                   "ChkPrelimTran__20zNPCGoalAttackHammerFP11en_trantypePi")

// func_800E2AF0
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "PlayerTests__20zNPCGoalAttackHammerFP5xVec3f")

// func_800E2BCC
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "ShockwaveTests__20zNPCGoalAttackHammerFP5xVec3f")

// func_800E2E10
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "TellBunnies__20zNPCGoalAttackHammerFv")

// func_800E2E4C
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "ModifyAnimSpeed__20zNPCGoalAttackHammerFv")

// func_800E2EA8
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "FXStreakPrep__20zNPCGoalAttackHammerFv")

// func_800E2EE8
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "FXStreakDone__20zNPCGoalAttackHammerFv")

// func_800E2F48
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "FXStreakUpdate__20zNPCGoalAttackHammerFP5xVec3")

// func_800E3098
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "Enter__20zNPCGoalAttackTarTarFfPv")

// func_800E3120
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s",                                                      \
                   "Process__20zNPCGoalAttackTarTarFP11en_trantypefPvP6xScene")

// func_800E3260
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "NPCMessage__20zNPCGoalAttackTarTarFP6NPCMsg")

// func_800E3308
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "CacheAimPoint__20zNPCGoalAttackTarTarFv")

// func_800E33B4
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "ShootBlob__20zNPCGoalAttackTarTarFfi")

// func_800E35B4
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "Enter__21zNPCGoalAttackMonsoonFfPv")

// func_800E35E8
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s",                                                      \
                   "Process__21zNPCGoalAttackMonsoonFP11en_trantypefPvP6xScene")

// func_800E375C
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "SpitCloud__21zNPCGoalAttackMonsoonFf")

// func_800E38C0
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "Enter__22zNPCGoalAttackArfMeleeFfPv")

// func_800E3930
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "Exit__22zNPCGoalAttackArfMeleeFfPv")

// func_800E3984
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s",                                                      \
                   "Process__22zNPCGoalAttackArfMeleeFP11en_trantypefPvP6xScene")

// func_800E3A3C
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "PlayerTests__22zNPCGoalAttackArfMeleeFv")

// func_800E3BA8
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "FXStreakPrep__22zNPCGoalAttackArfMeleeFv")

// func_800E3BF8
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "FXStreakDone__22zNPCGoalAttackArfMeleeFv")

// func_800E3C58
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "FXStreakUpdate__22zNPCGoalAttackArfMeleeFv")

// func_800E3EAC
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "Enter__17zNPCGoalAttackArfFfPv")

// func_800E3F48
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "Exit__17zNPCGoalAttackArfFfPv")

// func_800E3F70
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s",                                                      \
                   "Process__17zNPCGoalAttackArfFP11en_trantypefPvP6xScene")

// func_800E4140
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "SetAttackMode__17zNPCGoalAttackArfFii")

// func_800E4194
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "LaunchBone__17zNPCGoalAttackArfFfi")

// func_800E41D4
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "LaunchDoggie__17zNPCGoalAttackArfFf")

// func_800E436C
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "Enter__19zNPCGoalAttackChuckFfPv")

// func_800E43F0
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "Exit__19zNPCGoalAttackChuckFfPv")

// func_800E4454
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s",                                                      \
                   "Process__19zNPCGoalAttackChuckFP11en_trantypefPvP6xScene")

// func_800E4590
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "BombzAway__19zNPCGoalAttackChuckFf")

// func_800E45E8
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "Enter__19zNPCGoalAttackSlickFfPv")

// func_800E4664
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s",                                                      \
                   "Process__19zNPCGoalAttackSlickFP11en_trantypefPvP6xScene")

// func_800E47AC
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "FireOne__19zNPCGoalAttackSlickFi")

// func_800E47EC
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "Enter__17zNPCGoalDogLaunchFfPv")

// func_800E48F8
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s",                                                      \
                   "Process__17zNPCGoalDogLaunchFP11en_trantypefPvP6xScene")

// func_800E4A04
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s",                                                      \
                   "ViciousAttack__17zNPCGoalDogLaunchFP5xVec3P5xVec3P10zMovePointi")

// func_800E4A9C
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "PreCollide__17zNPCGoalDogLaunchFv")

// func_800E4C0C
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "BallisticUpdate__17zNPCGoalDogLaunchFf")

// func_800E4DE8
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s",                                                      \
                   "BubTrailCone__17zNPCGoalDogLaunchFPC5xVec3iPC5xVec3PC5xVec3PC7xMat3x3")

// func_800E5050
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "FurryFlurry__17zNPCGoalDogLaunchFv")

// func_800E5118
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "Enter__15zNPCGoalDogBarkFfPv")

// func_800E5170
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s",                                                      \
                   "Process__15zNPCGoalDogBarkFP11en_trantypefPvP6xScene")

// func_800E5248
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "Enter__15zNPCGoalDogDashFfPv")

// func_800E52A0
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s",                                                      \
                   "Process__15zNPCGoalDogDashFP11en_trantypefPvP6xScene")

// func_800E5364
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "HoundPlayer__15zNPCGoalDogDashFf")

// func_800E53D0
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "Enter__17zNPCGoalDogPounceFfPv")

// func_800E53F8
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "Exit__17zNPCGoalDogPounceFfPv")

// func_800E5458
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "NPCMessage__17zNPCGoalDogPounceFP6NPCMsg")

// func_800E5484
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "Detonate__17zNPCGoalDogPounceFv")

// func_800E54FC
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "Enter__16zNPCGoalTeleportFfPv")

// func_800E55B4
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "Exit__16zNPCGoalTeleportFfPv")

// func_800E5628
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s",                                                      \
                   "Process__16zNPCGoalTeleportFP11en_trantypefPvP6xScene")

// func_800E57F4
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "NPCMessage__16zNPCGoalTeleportFP6NPCMsg")

// func_800E5814
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "Enter__18zNPCGoalHokeyPokeyFfPv")

// func_800E58A4
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s",                                                      \
                   "Process__18zNPCGoalHokeyPokeyFP11en_trantypefPvP6xScene")

// func_800E5AE8
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "Enter__15zNPCGoalEvilPatFfPv")

// func_800E5B70
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "Exit__15zNPCGoalEvilPatFfPv")

// func_800E5C08
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s",                                                      \
                   "Process__15zNPCGoalEvilPatFP11en_trantypefPvP6xScene")

// func_800E5C78
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "NPCMessage__15zNPCGoalEvilPatFP6NPCMsg")

// func_800E5CF0
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "InputStun__15zNPCGoalEvilPatFP11NPCStunInfo")

// func_800E5D40
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "GlyphStart__15zNPCGoalEvilPatFv")

// func_800E5DB0
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "GlyphStop__15zNPCGoalEvilPatFv")

// func_800E5DF4
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "Enter__15zNPCGoalStunnedFfPv")

// func_800E5EAC
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s",                                                      \
                   "Process__15zNPCGoalStunnedFP11en_trantypefPvP6xScene")

// func_800E5F94
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "InputInfo__15zNPCGoalStunnedFP11NPCStunInfo")

// func_800E5FC8
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "Enter__16zNPCGoalPatCarryFfPv")

// func_800E6038
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s",                                                      \
                   "Process__16zNPCGoalPatCarryFP11en_trantypefPvP6xScene")

// func_800E60E4
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "Enter__16zNPCGoalPatThrowFfPv")

// func_800E615C
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "Enter__17zNPCGoalLassoBaseFfPv")

// func_800E61F0
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "Exit__17zNPCGoalLassoBaseFfPv")

// func_800E625C
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s",                                                      \
                   "Process__17zNPCGoalLassoBaseFP11en_trantypefPvP6xScene")

// func_800E6334
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s",                                                      \
                   "Process__17zNPCGoalLassoGrabFP11en_trantypefPvP6xScene")

// func_800E6520
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "DoTurnAway__17zNPCGoalLassoGrabFf")

// func_800E6608
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "Enter__18zNPCGoalLassoThrowFfPv")

// func_800E6760
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "Exit__18zNPCGoalLassoThrowFfPv")

// func_800E67A0
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s",                                                      \
                   "Process__18zNPCGoalLassoThrowFP11en_trantypefPvP6xScene")

// func_800E6954
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "CollReview__18zNPCGoalLassoThrowFPv")

// func_800E6C94
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "ApplyYank__18zNPCGoalLassoThrowFi")

// func_800E6E54
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "Process__14zNPCGoalDamageFP11en_trantypefPvP6xScene")

// func_800E7010
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "NPCMessage__14zNPCGoalDamageFP6NPCMsg")

// func_800E7094
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "InputInfo__14zNPCGoalDamageFP13NPCDamageInfo")

// func_800E7174
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "Enter__14zNPCGoalBashedFfPv")

// func_800E7348
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "Process__14zNPCGoalBashedFP11en_trantypefPvP6xScene")

// func_800E7394
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "Enter__13zNPCGoalWoundFfPv")

// func_800E74F8
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "Process__13zNPCGoalWoundFP11en_trantypefPvP6xScene")

// func_800E7620
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "CollReview__13zNPCGoalWoundFPv")

// func_800E79C0
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "NPCMessage__13zNPCGoalWoundFP6NPCMsg")

// func_800E79E0
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "Enter__13zNPCGoalKnockFfPv")

// func_800E7B78
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "Exit__13zNPCGoalKnockFfPv")

// func_800E7C00
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "Process__13zNPCGoalKnockFP11en_trantypefPvP6xScene")

// func_800E7D10
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "InputInfo__13zNPCGoalKnockFP13NPCDamageInfo")

// func_800E7DE8
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "CollReview__13zNPCGoalKnockFPv")

// func_800E815C
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "StreakPrep__13zNPCGoalKnockFv")

// func_800E8190
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "StreakDone__13zNPCGoalKnockFv")

// func_800E81CC
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "StreakUpdate__13zNPCGoalKnockFv")

// func_800E8288
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "Enter__17zNPCGoalAfterlifeFfPv")

// func_800E8384
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "NPCMessage__17zNPCGoalAfterlifeFP6NPCMsg")

// func_800E8448
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "DieTheGoodDeath__17zNPCGoalAfterlifeFv")

// func_800E8618
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "Enter__15zNPCGoalRespawnFfPv")

// func_800E871C
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "Exit__15zNPCGoalRespawnFfPv")

// func_800E87AC
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s",                                                      \
                   "Process__15zNPCGoalRespawnFP11en_trantypefPvP6xScene")

// func_800E8904
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "LaunchRoboBits__15zNPCGoalRespawnFv")

// func_800E8A8C
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "DoAppearFX__15zNPCGoalRespawnFf")

// func_800E8DF4
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "KickFromTheNest__15zNPCGoalRespawnFv")

// func_800E8F6C
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "InputInfo__15zNPCGoalRespawnFP12NPCSpawnInfo")

// func_800E8FE8
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "Enter__15zNPCGoalTubePalFfPv")

// func_800E90F8
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "EvalRules__15zNPCGoalTubePalFP11en_trantypefPv")

// func_800E917C
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "ChkPrelimTran__15zNPCGoalTubePalFP11en_trantypePi")

// func_800E9250
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "Enter__20zNPCGoalTubeDucklingFfPv")

// func_800E9310
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "Resume__20zNPCGoalTubeDucklingFfPv")

// func_800E93D0
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s",                                                      \
                   "Process__20zNPCGoalTubeDucklingFP11en_trantypefPvP6xScene")

// func_800E952C
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s",                                                      \
                   "ChkPrelimTran__20zNPCGoalTubeDucklingFP11en_trantypePi")

// func_800E95F4
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "MoveFrolic__20zNPCGoalTubeDucklingFf")

// func_800E9920
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "DuckStackInterpInit__20zNPCGoalTubeDucklingFv")

// func_800E99C0
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "DuckStackInterp__20zNPCGoalTubeDucklingFf")

// func_800E9B4C
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "Enter__18zNPCGoalTubeAttackFfPv")

// func_800E9BB0
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "Resume__18zNPCGoalTubeAttackFfPv")

// func_800E9C14
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s",                                                      \
                   "Process__18zNPCGoalTubeAttackFP11en_trantypefPvP6xScene")

// func_800E9CF0
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s",                                                      \
                   "ChkPrelimTran__18zNPCGoalTubeAttackFP11en_trantypePi")

// func_800E9DB4
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "LaserRender__18zNPCGoalTubeAttackFv")

// func_800E9DE8
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "MaryAttack__18zNPCGoalTubeAttackFfP6xScene")

// func_800E9EC4
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "MarySpinUp__18zNPCGoalTubeAttackFf")

// func_800E9F74
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "MarySpinDown__18zNPCGoalTubeAttackFf")

// func_800E9FD0
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "MaryzFury__18zNPCGoalTubeAttackFv")

// func_800EA070
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "MaryzBlessing__18zNPCGoalTubeAttackFv")

// func_800EA098
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "AttackDataReset__18zNPCGoalTubeAttackFv")

// func_800EA0E0
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "Enter__17zNPCGoalTubeLassoFfPv")

// func_800EA13C
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "Exit__17zNPCGoalTubeLassoFfPv")

// func_800EA1C4
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s",                                                      \
                   "Process__17zNPCGoalTubeLassoFP11en_trantypefPvP6xScene")

// func_800EA258
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "ChkPrelimTran__17zNPCGoalTubeLassoFP11en_trantypePi")

// func_800EA2FC
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "MoveTryToEscape__17zNPCGoalTubeLassoFf")

// func_800EA560
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "Enter__17zNPCGoalTubeBirthFfPv")

// func_800EA5C8
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s",                                                      \
                   "Process__17zNPCGoalTubeBirthFP11en_trantypefPvP6xScene")

// func_800EA68C
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "ChkPrelimTran__17zNPCGoalTubeBirthFP11en_trantypePi")

// func_800EA748
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "Enter__18zNPCGoalTubeBonkedFfPv")

// func_800EA858
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "Exit__18zNPCGoalTubeBonkedFfPv")

// func_800EA900
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s",                                                      \
                   "Process__18zNPCGoalTubeBonkedFP11en_trantypefPvP6xScene")

// func_800EAAE4
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "CheckForTran__18zNPCGoalTubeBonkedFP11en_trantypePi")

// func_800EABBC
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s",                                                      \
                   "Process__16zNPCGoalTubeDeadFP11en_trantypefPvP6xScene")

// func_800EAC80
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "ChkPrelimTran__16zNPCGoalTubeDeadFP11en_trantypePi")

// func_800EAD14
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "Enter__17zNPCGoalTubeDyingFfPv")

// func_800EAE54
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "Exit__17zNPCGoalTubeDyingFfPv")

// func_800EAEE4
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s",                                                      \
                   "Process__17zNPCGoalTubeDyingFP11en_trantypefPvP6xScene")

// func_800EB128
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "DeathByLasso__17zNPCGoalTubeDyingFPC5xVec3")

// func_800EB15C
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "Enter__15zNPCGoalDeflateFfPv")

// func_800EB240
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "Exit__15zNPCGoalDeflateFfPv")

// func_800EB2CC
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s",                                                      \
                   "Process__15zNPCGoalDeflateFP11en_trantypefPvP6xScene")

// func_800EB4C4
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "ROBO_PrepRoboCop__Fv")

// func_800EB560
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "RoboToCntrIdx__Fi")

// func_800EB5B0
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "CollectBountyOnRobot__Fi")

// func_800EB60C
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "__ct__16zNPCGoalTubeDeadFi")

// func_800EB648
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "__ct__17zNPCGoalTubeDyingFi")

// func_800EB684
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "__ct__18zNPCGoalTubeBonkedFi")

// func_800EB6CC
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "__ct__17zNPCGoalTubeBirthFi")

// func_800EB714
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "__ct__17zNPCGoalTubeLassoFi")

// func_800EB75C
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "__ct__18zNPCGoalTubeAttackFi")

// func_800EB7A4
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "__ct__20zNPCGoalTubeDucklingFi")

// func_800EB7EC
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "__ct__15zNPCGoalTubePalFi")

// func_800EB84C
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "__ct__15zNPCGoalDeflateFi")

// func_800EB894
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "__ct__15zNPCGoalRespawnFi")

// func_800EB8DC
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "__ct__17zNPCGoalAfterlifeFi")

// func_800EB924
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "__ct__13zNPCGoalKnockFi")

// func_800EB978
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "__ct__14zNPCGoalBashedFi")

// func_800EB9C0
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "__ct__13zNPCGoalWoundFi")

// func_800EBA14
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "__ct__14zNPCGoalDamageFi")

// func_800EBA5C
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "__ct__18zNPCGoalHokeyPokeyFi")

// func_800EBAA4
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "__ct__16zNPCGoalTeleportFi")

// func_800EBAEC
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "__ct__17zNPCGoalDogPounceFi")

// func_800EBB34
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "__ct__15zNPCGoalDogDashFi")

// func_800EBB7C
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "__ct__15zNPCGoalDogBarkFi")

// func_800EBBC4
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "__ct__17zNPCGoalDogLaunchFi")

// func_800EBC14
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "__ct__16zNPCGoalPatThrowFi")

// func_800EBC58
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "__ct__16zNPCGoalPatCarryFi")

// func_800EBCA0
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "__ct__15zNPCGoalStunnedFi")

// func_800EBCE8
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "__ct__15zNPCGoalEvilPatFi")

// func_800EBD30
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "__ct__18zNPCGoalLassoThrowFi")

// func_800EBD84
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "__ct__17zNPCGoalLassoGrabFi")

// func_800EBDCC
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "__ct__17zNPCGoalLassoBaseFi")

// func_800EBE14
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "__ct__19zNPCGoalAttackSlickFi")

// func_800EBE5C
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "__ct__19zNPCGoalAttackChuckFi")

// func_800EBEA4
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "__ct__22zNPCGoalAttackArfMeleeFi")

// func_800EBEEC
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "__ct__17zNPCGoalAttackArfFi")

// func_800EBF34
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "__ct__21zNPCGoalAttackMonsoonFi")

// func_800EBF7C
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "__ct__20zNPCGoalAttackTarTarFi")

// func_800EBFC4
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "__ct__20zNPCGoalAttackHammerFi")

// func_800EC00C
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "__ct__21zNPCGoalAttackChomperFi")

// func_800EC054
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "__ct__20zNPCGoalAttackFodderFi")

// func_800EC0A4
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "__ct__Q220zNPCGoalAttackFodder12CattleNotifyFv")

// func_800EC0E0
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "__ct__9HAZNotifyFv")

// func_800EC0F0
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "__ct__17zNPCGoalAttackCQCFi")

// func_800EC138
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "__ct__18zNPCGoalAlertSlickFi")

// func_800EC180
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "__ct__20zNPCGoalAlertTubeletFi")

// func_800EC1C8
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "__ct__18zNPCGoalAlertChuckFi")

// func_800EC210
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "__ct__18zNPCGoalAlertPuppyFi")

// func_800EC258
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "__ct__16zNPCGoalAlertArfFi")

// func_800EC2B8
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "__ct__19zNPCGoalAlertSleepyFi")

// func_800EC300
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "__ct__20zNPCGoalAlertMonsoonFi")

// func_800EC348
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "__ct__18zNPCGoalAlertGloveFi")

// func_800EC39C
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "__ct__19zNPCGoalAlertTarTarFi")

// func_800EC3E4
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "__ct__19zNPCGoalAlertHammerFi")

// func_800EC42C
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "__ct__20zNPCGoalAlertFodBzztFi")

// func_800EC474
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "__ct__20zNPCGoalAlertChomperFi")

// func_800EC4BC
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "__ct__20zNPCGoalAlertFodBombFi")

// func_800EC504
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "__ct__19zNPCGoalAlertFodderFi")

// func_800EC54C
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "__ct__13zNPCGoalAlertFi")

// func_800EC5AC
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "__ct__13zNPCGoalChaseFi")

// func_800EC5F4
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "__ct__14zNPCGoalGoHomeFi")

// func_800EC63C
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "__ct__13zNPCGoalEvadeFi")

// func_800EC684
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "__ct__13zNPCGoalTauntFi")

// func_800EC6CC
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "__ct__14zNPCGoalNoticeFi")

// func_800EC714
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s",                                                      \
                   "SilentSwimout__17zNPCGoalDogLaunchFP5xVec3P5xVec3P10zMovePoint")

// func_800EC738
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "CollReview__16zNPCGoalPatThrowFPv")

// func_800EC740
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "CollReview__17zNPCGoalDogLaunchFPv")

// func_800EC748
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "DieWithAWhimper__12zNPCGoalDeadFv")

// func_800EC764
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "DieWithABang__12zNPCGoalDeadFv")

// func_800EC780
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "AddFlags__5xGoalFi")

// func_800EC790
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "GetPsyche__5xGoalCFv")

// func_800EC798
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "XZVecToPlayer__10zNPCCommonFP5xVec3Pf")

// func_800EC7FC
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "BoneMat__10zNPCCommonCFi")

// func_800EC810
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "BonePos__10zNPCCommonCFi")

// func_800EC828
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "XYZDstSqToPlayer__10zNPCCommonFP5xVec3")

// func_800EC87C
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "DuploNotice__10zNPCCommonF13en_SM_NOTICESPv")

// func_800EC880
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "Center__10zNPCCommonFv")

// func_800EC8A0
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "ModelScaleSet__10zNPCCommonFf")

// func_800EC8C8
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "NPCC_DrawPlayerPredict__Fiff")

// func_800EC8CC
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "ColorSet__8NPCLaserFPC6RwRGBAPC6RwRGBA")

// func_800EC914
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "xDrawCyl__FPC5xVec3ffUi")

// func_800EC918
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "Radius__8NPCArenaFf")

// func_800EC924
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "Pos__8NPCArenaFv")

// func_800EC92C
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "JoinBattle__9NPCBattleFP9zNPCRobot")

// func_800EC930
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "IncludesPlayer__8NPCArenaFfP5xVec3")

// func_800EC9A8
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "IsReady__8NPCArenaFv")

// func_800EC9C0
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "LeaveBattle__9NPCBattleFP9zNPCRobot")

// func_800EC9C4
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "IncludesNPC__8NPCArenaFP10zNPCCommonfP5xVec3")

// func_800ECA20
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "FacePlayer__9zNPCRobotFff")

// func_800ECA84
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "DBG_Draw__8NPCArenaFP10zNPCCommon")

// func_800ECA88
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "GetTelepoint__10zNPCArfArfFi")

// func_800ECA90
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "assign__5xVec3Ff")

// func_800ECAB8
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "SetNPCOwner__9NPCHazardFP10zNPCCommon")

// func_800ECAC0
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "NotifyCBSet__9NPCHazardFP9HAZNotify")

// func_800ECAC8
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "Notify__9HAZNotifyF10en_haznoteP9NPCHazard")

// func_800ECAD0
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "LERP__FfUcUc")

// func_800ECB20
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "LERP__Ffff")

// func_800ECB2C
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "SMOOTH__Ffff")

// func_800ECB7C
#pragma GLOBAL_ASM("asm/Game/zNPCGoalRobo.s", "EASE__Ff")

void xMat3x3RMulVec(xVec3* o, const xMat3x3* m, const xVec3* v)
{
    float32 x = m->right.x * v->x + m->up.x * v->y + m->at.x * v->z;
    float32 y = m->right.y * v->x + m->up.y * v->y + m->at.y * v->z;
    float32 z = m->right.z * v->x + m->up.z * v->y + m->at.z * v->z;

    o->x = x;
    o->y = y;
    o->z = z;
}
