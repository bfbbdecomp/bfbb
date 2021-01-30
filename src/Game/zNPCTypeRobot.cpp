#include "zNPCTypeRobot.h"

#include <types.h>
#include <string.h>

#include "zNPCGoalRobo.h"
#include "zNPCTypes.h"
#include "zNPCGoalStd.h"

#include "../Core/x/xFactory.h"

extern UVAModelInfo g_uvaShield;
extern int32 g_cnt_fodbzzt;
extern int32 g_cnt_sleepy;
extern int32 g_needuvincr_tube;
extern int32 g_needuvincr_bzzt;
extern int32 g_needuvincr_nightlight;
extern int32 g_needuvincr_slickshield;
extern int32 cnt_alerthokey__11zNPCFodBzzt;
extern NPCSndTrax g_sndTrax_Robot[2];
extern float32 zNPCRobot_f_0_0;
extern float32 zNPCRobot_f_1_0;

void zNPCRobot_Timestep(float32 dt);
void zNPCSleepy_Timestep(float32 dt);
void zNPCFodBzzt_DoTheHokeyPokey(float32 dt);
void ZNPC_Destroy_Robot(xFactoryInst* inst);

// func_800F4A6C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "ZNPC_Robot_Startup__Fv")

void PlayTheFiddle()
{
}

void ZNPC_Robot_Shutdown()
{
}

void zNPCRobot_ScenePrepare()
{
    g_cnt_fodbzzt = 0;
    g_cnt_sleepy = 0;
    g_needuvincr_tube = 0;
    g_needuvincr_bzzt = 0;
    g_needuvincr_nightlight = 0;
    g_needuvincr_slickshield = 0;
    g_uvaShield.Clear();
}

void zNPCRobot_SceneFinish()
{
    ROBO_KillEffects();
    g_uvaShield.Hemorrage();
}

void zNPCRobot_SceneReset()
{
    zNPCFodBzzt_ResetDanceParty();
}

void zNPCRobot_ScenePostInit()
{
    ROBO_InitEffects();
    ROBO_PrepRoboCop();
}

void zNPCRobot_Timestep(float dt)
{
    if (g_cnt_fodbzzt != 0)
    {
        zNPCFodBzzt_DoTheHokeyPokey(dt);
    }
    if (g_cnt_sleepy != 0)
    {
        zNPCSleepy_Timestep(dt);
    }

    g_needuvincr_tube = 1;
    g_needuvincr_bzzt = 1;
    g_needuvincr_nightlight = 1;
    g_needuvincr_slickshield = 1;
}

// func_800F4CD8
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "ZNPC_Create_Robot__FiP10RyzMemGrowPv")

void ZNPC_Destroy_Robot(xFactoryInst* inst)
{
    delete inst;
}

// func_800F50C4
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "ZNPC_AnimTable_RobotBase__FP10xAnimTable")

// func_800F5728
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "ZNPC_AnimTable_Fodder__Fv")

// func_800F5D70
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "ZNPC_AnimTable_Hammer__Fv")

// func_800F6000
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "ZNPC_AnimTable_TarTar__Fv")

// func_800F6244
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "ZNPC_AnimTable_TTSauce__Fv")

// func_800F62CC
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "ZNPC_AnimTable_GLove__Fv")

// func_800F6640
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "ZNPC_AnimTable_Monsoon__Fv")

// func_800F6850
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "ZNPC_AnimTable_ThunderCloud__Fv")

// func_800F6964
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "ZNPC_AnimTable_NightLight__Fv")

// func_800F6A14
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "ZNPC_AnimTable_SleepyTime__Fv")

// func_800F6B30
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "ZNPC_AnimTable_ArfDog__Fv")

// func_800F7080
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "ZNPC_AnimTable_ArfArf__Fv")

// func_800F7338
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "ZNPC_AnimTable_Chuck__Fv")

// func_800F7574
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "ZNPC_AnimTable_Tubelet__Fv")

// func_800F7634
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "ZNPC_AnimTable_FloatDevice__Fv")

// func_800F76BC
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "ZNPC_AnimTable_SlickShield__Fv")

// func_800F7744
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "ZNPC_AnimTable_Slick__Fv")

uint8 zNPCRobot::ColChkFlags() const
{
    int32 flags = 0x3E;

    if (npcset.reduceCollide)
    {
        flags &= ~0x6;
    }

    return flags;
}

uint8 zNPCRobot::ColPenFlags() const
{
    int32 flags = 0x3E;

    if (npcset.reduceCollide)
    {
        flags &= ~0x6;
    }

    return flags;
}

uint8 zNPCRobot::PhysicsFlags() const
{
    int32 flags = 0;

    if (flg_move & 0x6)
    {
        flags |= 3;
    }

    if (flg_move & 0x2)
    {
        flags |= 4;
    }

    return flags;
}

void zNPCRobot::Init(xEntAsset* asset)
{
    zNPCCommon::Init(asset);
    this->flg_move = 10;
    this->flg_vuln = -1;
    this->idx_neckBone = -1;
    this->flags1.flg_basenpc |= 8;
}

void zNPCRobot::Reset()
{
    zNPCGoalDead* goal;
    int32 rc;
    NPCConfig* conf = cfg_npc;
    xPsyche* psy;

    if (conf->dst_castShadow < zNPCRobot_f_0_0 && !(flg_move & 4))
    {
        conf->dst_castShadow = zNPCRobot_f_1_0;
    }

    if (conf->rad_shadowCache < zNPCRobot_f_0_0)
    {
        conf->rad_shadowCache = GenShadCacheRad();
    }

    zNPCCommon::Reset();

    hitpoints = cfg_npc->pts_damage;

    if (PRIV_GetLassoData())
    {
        flg_vuln |= 0x1000000;
    }

    if (xNPCBasic::SelfType() != 0x4e54523a)
    {
        psy = psy_instinct;
        if ((int*)npc_duplodude)
        {
            goal = (zNPCGoalDead*)psy->FindGoal(0x4e47526a);
            goal->DieQuietly();
            psy_instinct->GoalSet(0x4e47526a, 1);
        }
        else
        {
            if (!(int*)xEntIsEnabled(this))
            {
                goal = (zNPCGoalDead*)psy->FindGoal(0x4e47526a);
                goal->DieQuietly();
                psy_instinct->GoalSet(0x4e47526a, 1);
            }
            else
            {
                psy_instinct->GoalSet(0x4e474e30, 1);
            }
        }
    }

    rc = arena.NeedToCycle(this);
    if (rc == 2)
    {
        arena.Cycle(this, 1);
    }
    else
    {
        if (rc)
        {
            arena.Cycle(this, 0);
        }
    }
}

// func_800F7B48
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "GenShadCacheRad__9zNPCRobotFv")

void zNPCRobot::ParseINI()
{
    zNPCCommon::ParseINI();
    cfg_npc->snd_traxShare = g_sndTrax_Robot;
    NPCS_SndTablePrepare(g_sndTrax_Robot);
}

void zNPCRobot::Process(xScene* xscn, float32 dt)
{
    psy_instinct->Timestep(dt, NULL);

    if (IsAlive())
    {
        DoAliveStuff(dt);
    }

    zNPCCommon::Process(xscn, dt);
}

void zNPCRobot::NewTime(xScene* xscn, float32 dt)
{
    if (idx_neckBone >= 0 && !IsDying())
    {
        TurnThemHeads();
    }
    zNPCCommon::NewTime(xscn, dt);
}

void zNPCRobot::SelfSetup()
{
    xBehaveMgr* bmgr = xBehaveMgr_GetSelf();
    psy_instinct = bmgr->Subscribe(this, 0);
    xPsyche* psy = psy_instinct;
    xGoal* goal = NULL;

    psy->BrainBegin();
    goal = psy->AddGoal('NGR4', NULL);
    goal->SetCallbacks(DUMY_grul_returnToIdle, NULL, NULL, NULL);
    AddBaseline(psy, NULL, NULL, NULL, NULL, NULL);
    AddStunThrow(psy, NULL, NULL, NULL, NULL);
    AddLassoing(psy, NULL, NULL, NULL, NULL, NULL);
    AddDamage(psy, NULL, NULL, NULL, NULL, NULL);
    AddSpawning(psy, NULL, NULL);
    AddScripting(psy, NULL, NULL, NULL, NULL, NULL, NULL, NULL);
    AddMiscTypical(psy, NULL, NULL, NULL);
    psy->BrainEnd();
    psy->SetSafety('NGN0');
}

// func_800F7E80
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "AnimPick__9zNPCRobotFi16en_NPC_GOAL_SPOTP5xGoal")

// func_800F80D8
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "SysEvent__9zNPCRobotFP5xBaseP5xBaseUiPCfP5xBasePi")

// func_800F8210
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "NPCMessage__9zNPCRobotFP6NPCMsg")

// func_800F8304
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "RoboHandleMail__9zNPCRobotFP6NPCMsg")

void zNPCRobot::DuploOwner(zNPCCommon* duper)
{
    zNPCCommon::DuploOwner(duper);

    xPsyche* psyche = this->psy_instinct;

    if (psyche)
    {
        zNPCGoalDead* dead = (zNPCGoalDead*)psyche->FindGoal('NGRj'); // 0x4E47526A
        dead->DieQuietly();
        psyche->GoalSet('NGRj', 1);
    }
}

// func_800F8538
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "DoAliveStuff__9zNPCRobotFf")

// func_800F86B8
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "CheckFalling__9zNPCRobotFf")

// func_800F87CC
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "BunnyHopSet__9zNPCRobotFP5xVec3")

// func_800F8858
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zNPCTypeRobot.s",                                                                    \
    "AddLassoing__9zNPCRobotFP7xPsychePFP5xGoalPvP11en_trantypefPv_iPFP5xGoalPvP11en_trantypefPv_iPFP5xGoalPvP11en_trantypefPv_iPFP5xGoalPvP11en_trantypefPv_iPFP5xGoalPvP11en_trantypefPv_i")

// func_800F8928
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zNPCTypeRobot.s",                                                                    \
    "AddMiscTypical__9zNPCRobotFP7xPsychePFP5xGoalPvP11en_trantypefPv_iPFP5xGoalPvP11en_trantypefPv_iPFP5xGoalPvP11en_trantypefPv_i")

// func_800F89EC
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zNPCTypeRobot.s",                                                                    \
    "AddStunThrow__9zNPCRobotFP7xPsychePFP5xGoalPvP11en_trantypefPv_iPFP5xGoalPvP11en_trantypefPv_iPFP5xGoalPvP11en_trantypefPv_iPFP5xGoalPvP11en_trantypefPv_i")

// func_800F8AD8
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zNPCTypeRobot.s",                                                                    \
    "AddDamage__9zNPCRobotFP7xPsychePFP5xGoalPvP11en_trantypefPv_iPFP5xGoalPvP11en_trantypefPv_iPFP5xGoalPvP11en_trantypefPv_iPFP5xGoalPvP11en_trantypefPv_iPFP5xGoalPvP11en_trantypefPv_i")

// func_800F8B9C
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zNPCTypeRobot.s",                                                                    \
    "AddSpawning__9zNPCRobotFP7xPsychePFP5xGoalPvP11en_trantypefPv_iPFP5xGoalPvP11en_trantypefPv_i")

int32 zNPCRobot::LassoSetup()
{
    int32 param1 = -1;
    int32 param2 = -1;

    LassoModelIndex(&param1, &param2);
    if ((param1 >= 0) && (param2 >= 0))
    {
        LassoUseGuides(param1, param2);
    }
    return zNPCCommon::LassoSetup();
}

// func_800F8CA0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "IsDying__9zNPCRobotFv")

int32 zNPCRobot::IsWounded()
{
    return IsDead() ? 0 : cfg_npc->pts_damage - hitpoints;
}

// func_800F8D94
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "SetCarryState__9zNPCRobotF18en_NPC_CARRY_STATE")

// func_800F8EE0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "Stun__9zNPCRobotFf")

// func_800F8F90
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "SyncStunGlyph__9zNPCRobotFfff")

// func_800F90EC
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "LassoNotify__9zNPCRobotF14en_LASSO_EVENT")

// func_800F9158
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "CollideReview__9zNPCRobotFv")

void zNPCRobot::InflictPain(int32 numHitPoints, int32 giveCreditToPlayer)
{
    if (numHitPoints < 0)
    {
        hitpoints = 0;
    }
    else
    {
        hitpoints = hitpoints - numHitPoints;
    }
    hitpoints = (uint32)(hitpoints & (-hitpoints & ~hitpoints) >> 0x1f);
    if ((hitpoints == 0) && (giveCreditToPlayer != 0))
    {
        zNPCCommon::GiveReward();
    }
}

// func_800F9494
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "TurnThemHeads__9zNPCRobotFv")

// func_800F9658
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "FacePos__9zNPCRobotFP5xVec3ff")

// func_800F9720
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "FaceAntiPlayer__9zNPCRobotFff")

// func_800F9804
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "CornerOfArena__9zNPCRobotFP5xVec3f")

// func_800F9A18
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "MoveTowardsArena__9zNPCRobotFff")

// func_800F9AE8
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "ShowerConfetti__9zNPCRobotFP5xVec3")

// func_800F9B38
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "zNPCRobot_TubeConfetti__FPC5xVec3")

// func_800F9C3C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "Init__10zNPCFodderFP9xEntAsset")

// func_800F9C90
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "ParseINI__10zNPCFodderFv")

// func_800F9CD0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "SelfSetup__10zNPCFodderFv")

// func_800F9E38
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "AnimPick__10zNPCFodderFi16en_NPC_GOAL_SPOTP5xGoal")

// func_800F9F2C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "Stun__10zNPCFodderFf")

// func_800F9FEC
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "Init__11zNPCFodBombFP9xEntAsset")

// func_800FA048
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "Setup__11zNPCFodBombFv")

// func_800FA088
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "ParseINI__11zNPCFodBombFv")

// func_800FA0C8
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "SelfSetup__11zNPCFodBombFv")

// func_800FA228
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "Stun__11zNPCFodBombFf")

// func_800FA2E8
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "AnimPick__11zNPCFodBombFi16en_NPC_GOAL_SPOTP5xGoal")

// func_800FA3A0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "BlinkerReset__11zNPCFodBombFv")

// func_800FA3DC
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "BlinkerUpdate__11zNPCFodBombFff")

// func_800FA428
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "BlinkerRender__11zNPCFodBombFv")

// func_800FA4E8
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "Init__11zNPCFodBzztFP9xEntAsset")

// func_800FA57C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "ParseINI__11zNPCFodBzztFv")

// func_800FA5BC
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "Setup__11zNPCFodBzztFv")

// func_800FA6DC
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "Reset__11zNPCFodBzztFv")

// func_800FA6FC
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "SelfSetup__11zNPCFodBzztFv")

// func_800FA864
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "Process__11zNPCFodBzztFP6xScenef")

// func_800FA8B4
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "Stun__11zNPCFodBzztFf")

// func_800FA974
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "AnimPick__11zNPCFodBzztFi16en_NPC_GOAL_SPOTP5xGoal")

// func_800FAA38
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "RenderExtra__11zNPCFodBzztFv")

void zNPCFodBzzt_ResetDanceParty()
{
    cnt_alerthokey__11zNPCFodBzzt = 0;
}

// func_800FAAB4
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "zNPCFodBzzt_DoTheHokeyPokey__Ff")

// func_800FAC78
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "DiscoReset__11zNPCFodBzztFv")

// func_800FAC84
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "DiscoUpdate__11zNPCFodBzztFf")

// func_800FAE58
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "RANGEWRAP__FPfff")

// func_800FAE94
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "DiscoRender__11zNPCFodBzztFv")

// func_800FB180
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "__as__18RxObjSpace3DVertexFRC18RxObjSpace3DVertex")

// func_800FB1E4
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "Init__11zNPCChomperFP9xEntAsset")

// func_800FB248
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "ParseINI__11zNPCChomperFv")

// func_800FB288
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "SelfSetup__11zNPCChomperFv")

// func_800FB3FC
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "Stun__11zNPCChomperFf")

// func_800FB4BC
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "Process__11zNPCChomperFP6xScenef")

// func_800FB548
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "AnimPick__11zNPCChomperFi16en_NPC_GOAL_SPOTP5xGoal")

// func_800FB60C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "BreathTrail__11zNPCChomperFv")

// func_800FB7E4
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "Init__11zNPCCritterFP9xEntAsset")

// func_800FB820
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "SelfSetup__11zNPCCritterFv")

// func_800FB85C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "Init__10zNPCHammerFP9xEntAsset")

// func_800FB89C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "ParseINI__10zNPCHammerFv")

// func_800FB8DC
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "SelfSetup__10zNPCHammerFv")

// func_800FBA44
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "AnimPick__10zNPCHammerFi16en_NPC_GOAL_SPOTP5xGoal")

// func_800FBBA8
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "Init__10zNPCTarTarFP9xEntAsset")

// func_800FBBF8
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "ParseINI__10zNPCTarTarFv")

// func_800FBC38
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "SelfSetup__10zNPCTarTarFv")

// func_800FBDB4
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "AnimPick__10zNPCTarTarFi16en_NPC_GOAL_SPOTP5xGoal")

// func_800FBE90
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "Init__9zNPCGloveFP9xEntAsset")

// func_800FBED8
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "ParseINI__9zNPCGloveFv")

// func_800FBF14
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "SelfSetup__9zNPCGloveFv")

// func_800FC068
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "AnimPick__9zNPCGloveFi16en_NPC_GOAL_SPOTP5xGoal")

// func_800FC16C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "Init__11zNPCMonsoonFP9xEntAsset")

// func_800FC1D4
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "Reset__11zNPCMonsoonFv")

// func_800FC1F4
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "ParseINI__11zNPCMonsoonFv")

// func_800FC230
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "SelfSetup__11zNPCMonsoonFv")

// func_800FC398
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "AnimPick__11zNPCMonsoonFi16en_NPC_GOAL_SPOTP5xGoal")

// func_800FC46C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "Process__11zNPCMonsoonFP6xScenef")

// func_800FC4D0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "NewTime__11zNPCMonsoonFP6xScenef")

// func_800FC4F0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "FoulWeather__11zNPCMonsoonFf")

// func_800FC4F8
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "zNPCSleepy_Timestep__Ff")

// func_800FC564
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "Init__10zNPCSleepyFP9xEntAsset")

// func_800FC5D8
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "Reset__10zNPCSleepyFv")

// func_800FC674
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "ParseINI__10zNPCSleepyFv")

// func_800FC6F8
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "SelfSetup__10zNPCSleepyFv")

// func_800FC860
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "AnimPick__10zNPCSleepyFi16en_NPC_GOAL_SPOTP5xGoal")

// func_800FC8E4
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "Process__10zNPCSleepyFP6xScenef")

// func_800FC9E4
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "NewTime__10zNPCSleepyFP6xScenef")

// func_800FCA6C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "NightLightPos__10zNPCSleepyFP5xVec3")

// func_800FCAB4
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "NightLightUVStep__10zNPCSleepyFf")

// func_800FCB7C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "SnoreNZeez__10zNPCSleepyFf")

// func_800FCCF0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "RepelMissile__10zNPCSleepyFf")

// func_800FCD44
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "RepelBowlBall__10zNPCSleepyFf")

// func_800FD150
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "ConeOfRange__10zNPCSleepyFfi")

// func_800FD294
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "RenderExtra__10zNPCSleepyFv")

// func_800FD358
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "RendConeOfDeath__10zNPCSleepyFi")

// func_800FD680
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "RendConeRange__10zNPCSleepyFv")

// func_800FDA44
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "Init__10zNPCArfArfFP9xEntAsset")

// func_800FDA90
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "Reset__10zNPCArfArfFv")

// func_800FDAD4
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "ParseINI__10zNPCArfArfFv")

// func_800FDB10
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "ParseLinks__10zNPCArfArfFv")

// func_800FDBBC
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "ParseChild__10zNPCArfArfFP5xBase")

// func_800FDD10
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "SelfSetup__10zNPCArfArfFv")

// func_800FDEB4
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "AnimPick__10zNPCArfArfFi16en_NPC_GOAL_SPOTP5xGoal")

// func_800FDFC0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "DuploNotice__10zNPCArfArfF13en_SM_NOTICESPv")

// func_800FE060
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "AdoptADoggie__10zNPCArfArfFv")

// func_800FE144
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "Init__10zNPCArfDogFP9xEntAsset")

// func_800FE1A0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "Setup__10zNPCArfDogFv")

// func_800FE1E0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "Reset__10zNPCArfDogFv")

// func_800FE214
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "ParseINI__10zNPCArfDogFv")

// func_800FE250
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "SelfSetup__10zNPCArfDogFv")

// func_800FE3F4
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "AnimPick__10zNPCArfDogFi16en_NPC_GOAL_SPOTP5xGoal")

// func_800FE530
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "Stun__10zNPCArfDogFf")

// func_800FE5FC
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "Process__10zNPCArfDogFP6xScenef")

// func_800FE6B4
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "BlinkReset__10zNPCArfDogFv")

// func_800FE6F8
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "BlinkUpdate__10zNPCArfDogFff")

// func_800FE77C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "BlinkRender__10zNPCArfDogFv")

// func_800FE8D8
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "Init__9zNPCChuckFP9xEntAsset")

// func_800FE940
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "Reset__9zNPCChuckFv")

// func_800FE990
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "ParseINI__9zNPCChuckFv")

// func_800FE9CC
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "SelfSetup__9zNPCChuckFv")

// func_800FEB88
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "AnimPick__9zNPCChuckFi16en_NPC_GOAL_SPOTP5xGoal")

// func_800FEC54
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "Init__11zNPCTubeletFP9xEntAsset")

// func_800FECF0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "Reset__11zNPCTubeletFv")

// func_800FED60
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "ParseINI__11zNPCTubeletFv")

// func_800FED9C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "ParseLinks__11zNPCTubeletFv")

// func_800FEE44
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "ParseChild__11zNPCTubeletFP5xBase")

// func_800FEF9C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "SelfSetup__11zNPCTubeletFv")

// func_800FF12C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "AnimPick__11zNPCTubeletFi16en_NPC_GOAL_SPOTP5xGoal")

// func_800FF1A8
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "Process__11zNPCTubeletFP6xScenef")

// func_800FF298
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s",                                                     \
                   "Respawn__11zNPCTubeletFPC5xVec3P10zMovePointP10zMovePoint")

// func_800FF2E0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "PrepTheBand__11zNPCTubeletFv")

// func_800FF358
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "RoboHandleMail__11zNPCTubeletFP6NPCMsg")

// func_800FF474
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "LassoNotify__11zNPCTubeletF14en_LASSO_EVENT")

// func_800FF584
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "Bonk__11zNPCTubeletFv")

// func_800FF64C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "Unbonk__11zNPCTubeletFv")

// func_800FF6C0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "Chk_IsBonked__11zNPCTubeletFv")

// func_800FF7DC
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "PainInTheBand__11zNPCTubeletFv")

// func_800FF7E8
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "Chk_NonAlertBonk__11zNPCTubeletFf")

// func_800FF888
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "Notice__10TubeNoticeF10en_psynoteP5xGoalPv")

// func_800FF9A4
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "IsDying__11zNPCTubeletFv")

// func_800FF9B8
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "Init__13zNPCTubeSlaveFP9xEntAsset")

// func_800FFA64
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "Setup__13zNPCTubeSlaveFv")

// func_800FFB10
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "Reset__13zNPCTubeSlaveFv")

// func_800FFB50
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "WeGotAGig__13zNPCTubeSlaveFv")

// func_800FFB90
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "PartyOn__13zNPCTubeSlaveFv")

// func_800FFBF0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "ParseINI__13zNPCTubeSlaveFv")

// func_800FFC2C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "SelfSetup__13zNPCTubeSlaveFv")

// func_800FFD74
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s",                                                     \
                   "AnimPick__13zNPCTubeSlaveFi16en_NPC_GOAL_SPOTP5xGoal")

// func_800FFE1C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s",                                                     \
                   "SetMaster__13zNPCTubeSlaveFP11zNPCTubelet11en_tubespot")

// func_800FFEC0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "Process__13zNPCTubeSlaveFP6xScenef")

// func_800FFEE0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "RenderExtra__13zNPCTubeSlaveFv")

// func_800FFF14
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "RoboHandleMail__13zNPCTubeSlaveFP6NPCMsg")

// func_800FFF98
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "IsDying__13zNPCTubeSlaveFv")

// func_800FFFC8
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "PosStacked__13zNPCTubeSlaveFP5xVec3")

// func_80100038
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "DoLaserRendering__13zNPCTubeSlaveFv")

// func_80100090
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "Init__9zNPCSlickFP9xEntAsset")

// func_80100164
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "Reset__9zNPCSlickFv")

// func_801001B8
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "ParseINI__9zNPCSlickFv")

// func_801001F4
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "SelfSetup__9zNPCSlickFv")

// func_80100370
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "AnimPick__9zNPCSlickFi16en_NPC_GOAL_SPOTP5xGoal")

// func_801004A4
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "Process__9zNPCSlickFP6xScenef")

// func_80100550
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "StuffToDoIfAlive__9zNPCSlickFf")

// func_801005EC
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s",                                                     \
                   "Damage__9zNPCSlickF18en_NPC_DAMAGE_TYPEP5xBasePC5xVec3")

// func_801006E4
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "ShieldUpdate__9zNPCSlickFf")

// func_80100888
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "ShieldCollide__9zNPCSlickFf")

// func_80100910
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "ShieldFX__9zNPCSlickFf")

// func_80100950
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "WhereTheWildThingsAre__FP14xModelInstance")

// func_80100A00
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "ShieldGeneratorDamaged__9zNPCSlickFv")

// func_80100A8C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "RopePopsShield__9zNPCSlickFv")

// func_80100AC8
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "BUpdate__9zNPCSlickFP5xVec3")

// func_80100B8C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "IsShield__9zNPCSlickCFv")

// func_80100BA4
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "ShieldHide__9zNPCSlickFv")

// func_80100BB0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "ShieldShow__9zNPCSlickFv")

// func_80100BBC
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "YouOwnSlipFX__9zNPCSlickFv")

// func_80100BC4
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "SlipSlidenAway__9zNPCSlickFf")

// func_80100D64
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s",                                                     \
                   "DUMY_grul_returnToIdle__FP5xGoalPvP11en_trantypefPv")

// func_80100DC4
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s",                                                     \
                   "ROBO_grul_goAlertMelee__FP5xGoalPvP11en_trantypefPv")

// func_80100EFC
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s",                                                     \
                   "ROBO_grul_goAlertLobber__FP5xGoalPvP11en_trantypefPv")

// func_801010BC
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "FODR_grul_alert__FP5xGoalPvP11en_trantypefPv")

// func_801010D0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "BOMB_grul_alert__FP5xGoalPvP11en_trantypefPv")

// func_801010E4
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "BZZT_grul_alert__FP5xGoalPvP11en_trantypefPv")

// func_801010F8
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "CHMP_grul_alert__FP5xGoalPvP11en_trantypefPv")

// func_8010110C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "HAMR_grul_alert__FP5xGoalPvP11en_trantypefPv")

// func_80101120
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "TART_grul_alert__FP5xGoalPvP11en_trantypefPv")

// func_80101134
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "GLOV_grul_alert__FP5xGoalPvP11en_trantypefPv")

// func_80101148
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "MOON_grul_alert__FP5xGoalPvP11en_trantypefPv")

// func_8010115C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "SLEP_grul_goAlert__FP5xGoalPvP11en_trantypefPv")

// func_80101408
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "SLEP_grul_alert__FP5xGoalPvP11en_trantypefPv")

// func_8010141C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "ARFY_grul_alert__FP5xGoalPvP11en_trantypefPv")

// func_80101430
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "PUPY_grul_alert__FP5xGoalPvP11en_trantypefPv")

// func_80101444
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "CHUK_grul_alert__FP5xGoalPvP11en_trantypefPv")

// func_80101458
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "TUBE_grul_alert__FP5xGoalPvP11en_trantypefPv")

// func_8010146C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "SLCK_grul_alert__FP5xGoalPvP11en_trantypefPv")

// func_80101480
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "ROBO_InitEffects__Fv")

void ROBO_KillEffects()
{
}

// func_8010164C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "DoFX_Motorboat__9zNPCRobotFf")

// func_80101720
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "VFXStarTrek__9zNPCRobotFfP5xVec3P5xVec3")

// func_8010178C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s",                                                     \
                   "LaunchProjectile__9zNPCRobotF9en_npchazff10en_mdlvertff")

// func_80101A40
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "IncludesPos__8NPCArenaFP5xVec3fP5xVec3")

// func_80101B00
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "PctFromHome__8NPCArenaFP5xVec3")

// func_80101B88
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "DstSqFromHome__8NPCArenaFP5xVec3P5xVec3")

// func_80101C10
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "NeedToCycle__8NPCArenaFP10zNPCCommon")

// func_80101CD0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "Cycle__8NPCArenaFP10zNPCCommoni")

// func_80101E74
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "NextBestNav__8NPCArenaFP10zNPCCommonP10zMovePoint")

// func_8010207C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "SetHome__8NPCArenaFP10zNPCCommonP10zMovePoint")

// func_80102118
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "AdjustHome__8NPCArenaFP10zNPCCommonP5xVec3f")

// func_801021A0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "SyncHomeFromNav__8NPCArenaFv")

void UVAModelInfo::Clear()
{
    memset(this, 0, sizeof(UVAModelInfo));
}

void UVAModelInfo::UVVelSet(float x, float y)
{
    offset_vel.x = x;
    offset_vel.y = y;
}

// func_80102248
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "Valid__12UVAModelInfoCFv")

// func_80102270
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "__ct__9zNPCSlickFi")

// func_801022AC
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "__ct__13zNPCTubeSlaveFi")

// func_801022E8
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "__ct__11zNPCTubeletFi")

// func_8010232C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "__ct__10TubeNoticeFv")

// func_80102368
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "__ct__8xPSYNoteFv")

// func_80102378
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "__ct__9zNPCChuckFi")

// func_801023B4
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "__ct__10zNPCArfArfFi")

// func_801023F0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "__ct__10zNPCArfDogFi")

// func_8010242C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "__ct__10zNPCSleepyFi")

// func_80102468
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "__ct__11zNPCMonsoonFi")

// func_801024A4
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "__ct__9zNPCGloveFi")

// func_801024E0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "__ct__10zNPCTarTarFi")

// func_8010251C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "__ct__10zNPCHammerFi")

// func_80102558
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "__ct__11zNPCCritterFi")

// func_80102594
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "__ct__11zNPCChomperFi")

// func_801025D0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "__ct__11zNPCFodBzztFi")

// func_8010260C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "__ct__11zNPCFodBombFi")

// func_80102648
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "__ct__10zNPCFodderFi")

// func_80102684
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "__ct__9zNPCRobotFi")

zNPCLassoInfo* zNPCRobot::PRIV_GetLassoData()
{
    return &raw_lassoinfo;
}

// func_801026D0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "IsAlive__9zNPCRobotFv")

// func_801026F8
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "IsDead__9zNPCRobotFv")

void zNPCRobot::LassoModelIndex(int32* idxgrab, int32* idxhold)
{
    *idxgrab = 0xffffffff;
    *idxhold = 0xffffffff;
}

void zNPCSlick::LassoModelIndex(int32* idxgrab, int32* idxhold)
{
    *idxgrab = 2;
    *idxhold = 3;
}

int32 zNPCRobot::IsHealthy()
{
    return hitpoints & ~(hitpoints >> 0x1f);
}

// func_80102764
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "ColChkByFlags__9zNPCRobotCFv")

// func_8010276C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "ColPenByFlags__9zNPCRobotCFv")

xEntDrive* zNPCRobot::PRIV_GetDriverData()
{
    return &raw_drvdata;
}

// func_8010277C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "LassoModelIndex__13zNPCTubeSlaveFPiPi")

// func_80102790
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "CanRope__13zNPCTubeSlaveFv")

// func_80102798
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "ColChkFlags__13zNPCTubeSlaveCFv")

// func_801027A0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "ColPenFlags__13zNPCTubeSlaveCFv")

// func_801027A8
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "ColChkByFlags__13zNPCTubeSlaveCFv")

// func_801027B0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "ColPenByFlags__13zNPCTubeSlaveCFv")

// func_801027B8
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "PhysicsFlags__13zNPCTubeSlaveCFv")

// func_801027C0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "LassoModelIndex__11zNPCTubeletFPiPi")

// func_801027D4
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "LassoModelIndex__9zNPCChuckFPiPi")

// func_801027E8
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "RenderExtra__10zNPCArfDogFv")

// func_8010281C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "PRIV_GetLassoData__10zNPCArfDogFv")

// func_80102824
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "LassoModelIndex__10zNPCArfDogFPiPi")

// func_80102834
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "LassoModelIndex__10zNPCArfArfFPiPi")

// func_80102848
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "LassoModelIndex__10zNPCSleepyFPiPi")

// func_8010285C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "LassoModelIndex__11zNPCMonsoonFPiPi")

// func_80102870
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "LassoModelIndex__9zNPCGloveFPiPi")

// func_80102884
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "LassoModelIndex__10zNPCTarTarFPiPi")

// func_80102898
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "LassoModelIndex__10zNPCHammerFPiPi")

// func_801028AC
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "PRIV_GetLassoData__11zNPCCritterFv")

// func_801028B4
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "LassoModelIndex__11zNPCCritterFPiPi")

// func_801028C4
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "PRIV_GetLassoData__11zNPCChomperFv")

// func_801028CC
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "LassoModelIndex__11zNPCChomperFPiPi")

// func_801028DC
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "PRIV_GetLassoData__11zNPCFodBzztFv")

// func_801028E4
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "LassoModelIndex__11zNPCFodBzztFPiPi")

// func_801028F4
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "RenderExtra__11zNPCFodBombFv")

// func_80102928
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "PRIV_GetLassoData__11zNPCFodBombFv")

// func_80102930
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "LassoModelIndex__11zNPCFodBombFPiPi")

// func_80102940
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "PRIV_GetLassoData__10zNPCFodderFv")

// func_80102948
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "LassoModelIndex__10zNPCFodderFPiPi")

int32 xEntIsEnabled(xEnt* ent)

{
    return xBaseIsEnabled((xBase*)ent) & 0xff;
}

// func_8010297C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "SetSafety__7xPsycheFi")

// func_80102984
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "SetNotify__7xPsycheFP8xPSYNote")

// func_8010298C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "GetFlags__5xGoalCFv")

// func_80102994
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "xUtil_choose_esc__0_i_esc__1___FPCiiPCf")

// func_80102AA8
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "Prepare__8NPCLaserFv")

// func_80102AC4
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "RadiusSet__8NPCLaserFff")

// func_80102AD0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "UVScrollSet__8NPCLaserFff")

// func_80102ADC
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "TextureSet__8NPCLaserFP8RwRaster")

// func_80102AE4
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "TextureGet__8NPCLaserFv")

// func_80102AEC
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "UVScrollUpdate__8NPCLaserFf")

void xMat3x3RMulVec(xVec3* o, const xMat3x3* m, const xVec3* v)
{
    float32 x = m->right.x * v->x + m->up.x * v->y + m->at.x * v->z;
    float32 y = m->right.y * v->x + m->up.y * v->y + m->at.y * v->z;
    float32 z = m->right.z * v->x + m->up.z * v->y + m->at.z * v->z;

    o->x = x;
    o->y = y;
    o->z = z;
}

// func_80102C04
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "RadiusArena__10zMovePointFv")

// func_80102C10
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "NodeByIndex__10zMovePointFi")

// func_80102C20
#pragma GLOBAL_ASM("asm/Game/zNPCTypeRobot.s", "NumNodes__10zMovePointFv")
