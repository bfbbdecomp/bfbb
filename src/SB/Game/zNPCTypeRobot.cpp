#include "zNPCTypeRobot.h"
#include "zNPCSupplement.h"
#include "zNPCSupport.h"
#include "zNPCGoalRobo.h"
#include "zNPCTypes.h"
#include "zNPCGoalStd.h"
#include "zGlobals.h"
#include "zNPCGoals.h"

#include "xFactory.h"
#include "xMath.h"
#include "xAnim.h"
#include "xBehaviour.h"

#include <string.h>

extern UVAModelInfo g_uvaShield;
extern S32 g_cnt_fodbzzt;
extern S32 g_cnt_sleepy;
extern S32 g_needuvincr_tube;
extern S32 g_needuvincr_bzzt;
extern S32 g_needuvincr_nightlight;
extern S32 g_needuvincr_slickshield;
extern S32 cnt_alerthokey__11zNPCFodBzzt;

extern NPCSndTrax g_sndTrax_Robot[2];
extern NPCSndTrax g_sndTrax_Fodder;
extern NPCSndTrax g_sndTrax_FodBomb[6];
extern NPCSndTrax g_sndTrax_FodBzzt[3];
extern NPCSndTrax g_sndTrax_Chomper[4];
extern NPCSndTrax g_sndTrax_Hammer[3];
extern NPCSndTrax g_sndTrax_TarTar[4];

extern NPCSndTrax g_sndTrax_Monsoon[];
extern NPCSndTrax g_sndTrax_Sleepy[];
extern NPCSndTrax g_sndTrax_ArfArf[];
extern NPCSndTrax g_sndTrax_ArfDog[];
extern NPCSndTrax g_sndTrax_Chuck[];
extern NPCSndTrax g_sndTrax_Tubelet[];
extern NPCSndTrax g_sndTrax_Slick[];
extern NPCSndTrax g_sndTrax_Glove[];

extern F32 zNPCRobot_f_0_0;
extern F32 zNPCRobot_f_1_0;

zNPCSlick* g_slick_slipfx_owner;

char* g_strz_roboanim[41] = {
    "Unknown",        "Idle01",          "Fidget01",       "Move01",       "Notice01",
    "Taunt01",        "Respawn01",       "LassoGrab01",    "LassoHold01",  "StunBegin01",
    "StunLoop01",     "EndTag_Standard", "AlertIdle01",    "AlertMove01",  "Attack01",
    "Attack02",       "Attack03",        "AttackBegin01",  "AttackLoop01", "AttackEnd01",
    "HurtKnock01",    "HurtSmash01",     "HurtBash01",     "LassoYank01",  "PatPickup01",
    "PatCarry01",     "PatThrowBegin01", "PatThrowLoop01", "Sleep01",      "TeleportBegin01",
    "TeleportLoop01", "TeleportEnd01",   "Launch01",       "LaunchEnd01",  "DanceBegin01",
    "DanceLoop01",    "DanceEnd01",      "Death01",        "Death02",      "DodgeBBowl01",
    "DodgeBCruise01"
};

char* g_strz_nytlytanim[2] = { "Unknown", "Light_Idle01" };

char* g_strz_shieldanim[2] = { "Unknown", "Shield_Idle01" };

char* g_strz_ttsanim[2] = { "Unknown", "TarTar_Slosh01" };

char* g_strz_flotanim[2] = { "Unknown", "Wiggle01" };

U32 g_hash_flotanim[2];
U32 g_hash_nytlytanim[2];
U32 g_hash_ttsanim[2];
U32 g_hash_cloudanim[3];
U32 g_hash_shieldanim[2];
U32 g_hash_roboanim[41];

char* g_strz_cloudanim[3];

extern char stringBase[];

// Scheduling
void zNPCSleepy_Timestep(F32 dt)
{
    static S8 init;
    static F32 tmr_cycle;

    if (init == 0)
    {
        init = 1;
        tmr_cycle = 0.0f;
    }

    F32 dVar1 = NPCC_TmrCycle(&tmr_cycle, 0.01666667f, 2.63f);
    zNPCSleepy::hyt_NightLightCurrent = 4.0f;
    zNPCSleepy::hyt_NightLightCurrent += (0.35f * isin(PI * dVar1));
}

void zNPCFodBzzt_DoTheHokeyPokey(F32 dt);
void ZNPC_Destroy_Robot(xFactoryInst* inst);

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

void zNPCRobot::LassoNotify(en_LASSO_EVENT event)
{
    if (!IsDead())
    {
        zNPCCommon::LassoNotify(event);
        switch (event)
        {
        case LASS_EVNT_GRABSTART:
            psy_instinct->GoalSet(0x4e47525d, 0); // NPC_GOAL_LASSOGRAB??
            break;
        }
    }
}

void zNPCRobot_Timestep(xScene* sc, float dt)
{
    if (g_cnt_fodbzzt)
    {
        zNPCFodBzzt_DoTheHokeyPokey(dt);
    }
    if (g_cnt_sleepy)
    {
        zNPCSleepy_Timestep(dt);
    }

    g_needuvincr_tube = 1;
    g_needuvincr_bzzt = 1;
    g_needuvincr_nightlight = 1;
    g_needuvincr_slickshield = 1;
}

xFactoryInst* ZNPC_Create_Robot(S32 who, RyzMemGrow* grow, void*)
{
    zNPCRobot* robo;

    switch (who)
    {
    case NPC_TYPE_ROBOT:
    {
        robo = new (who, grow) zNPCRobot(who);
        break;
    }
    case NPC_TYPE_FODDER:
    {
        robo = new (who, grow) zNPCFodder(who);
        break;
    }
    case NPC_TYPE_FODBOMB:
    {
        robo = new (who, grow) zNPCFodBomb(who);
        break;
    }
    case NPC_TYPE_FODBZZT:
    {
        robo = new (who, grow) zNPCFodBzzt(who);
        break;
    }
    case NPC_TYPE_CHOMPER:
    {
        robo = new (who, grow) zNPCChomper(who);
        break;
    }
    case NPC_TYPE_CRITTER:
    {
        robo = new (who, grow) zNPCCritter(who);
        break;
    }
    case NPC_TYPE_HAMMER:
    case NPC_TYPE_HAMSPIN:
    {
        robo = new (who, grow) zNPCHammer(who);
        break;
    }
    case NPC_TYPE_TARTAR:
    {
        robo = new (who, grow) zNPCTarTar(who);
        break;
    }
    case NPC_TYPE_GLOVE:
    {
        robo = new (who, grow) zNPCGlove(who);
        break;
    }
    case NPC_TYPE_MONSOON:
    {
        robo = new (who, grow) zNPCMonsoon(who);
        break;
    }
    case NPC_TYPE_SLEEPY:
    {
        robo = new (who, grow) zNPCSleepy(who);
        break;
    }
    case NPC_TYPE_ARFDOG:
    {
        robo = new (who, grow) zNPCArfDog(who);
        break;
    }
    case NPC_TYPE_ARFARF:
    {
        robo = new (who, grow) zNPCArfArf(who);
        break;
    }
    case NPC_TYPE_CHUCK:
    {
        robo = new (who, grow) zNPCChuck(who);
        break;
    }
    case NPC_TYPE_TUBELET:
    {
        robo = new (who, grow) zNPCTubelet(who);
        break;
    }
    case NPC_TYPE_TUBESLAVE:
    {
        robo = new (who, grow) zNPCTubeSlave(who);
        break;
    }
    case NPC_TYPE_SLICK:
    {
        robo = new (who, grow) zNPCSlick(who);
        break;
    }
    default:
    {
        robo = new (who, grow) zNPCRobot(who);
        break;
    }
    }

    return robo;
}

void ZNPC_Destroy_Robot(xFactoryInst* inst)
{
    delete inst;
}

U8 zNPCRobot::ColChkFlags() const
{
    S32 flags = 0x3E;

    if (npcset.reduceCollide)
    {
        flags &= ~0x6;
    }

    return flags;
}

U8 zNPCRobot::ColPenFlags() const
{
    S32 flags = 0x3E;

    if (npcset.reduceCollide)
    {
        flags &= ~0x6;
    }

    return flags;
}

U8 zNPCRobot::PhysicsFlags() const
{
    S32 flags = 0;

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

void zNPCHammer::Init(xEntAsset* asset)
{
    zNPCRobot::Init(asset);
    flg_vuln |= 0x60000000;
    idx_neckBone = -1;
}

void zNPCFodder::Init(xEntAsset* asset)
{
    zNPCRobot::Init(asset);
    flg_move |= 0x10;
    flg_vuln &= 0x9effffff;
    idx_neckBone = 3;
}

void zNPCArfArf::Init(xEntAsset* asset)
{
    zNPCRobot::Init(asset);
    flg_move |= 2;
    flg_vuln &= ~0x60000000;
    idx_neckBone = -1;
}

void zNPCCritter::Init(xEntAsset* asset)
{
    zNPCRobot::Init(asset);
    flg_vuln = 0;
    idx_neckBone = -1;
}

void zNPCFodBomb::Init(xEntAsset* asset)
{
    zNPCRobot::Init(asset);
    flg_move |= 0x10;
    flg_vuln &= 0x9effffff;
    idx_neckBone = 3;
    rast_blink = 0;
}

void zNPCSleepy::ParseINI()
{
    static F32 rad_minimum;

    NPCConfig* cfg = cfg_npc;
    zNPCRobot::ParseINI();
    cfg->snd_trax = &g_sndTrax_Sleepy[0];
    NPCS_SndTablePrepare(&g_sndTrax_Sleepy[0]);
    // Scheduling issue with init.
    if (init == 0)
    {
        rad_minimum = 5.0f;
        init = 1;
    }
    float fVar1 = cfg_npc->rad_detect;
    cfg_npc->rad_detect = MAX(rad_minimum, fVar1);
}

void zNPCMonsoon::ParseINI()
{
    NPCConfig* cfg = cfg_npc;
    zNPCRobot::ParseINI();
    cfg->snd_trax = &g_sndTrax_Monsoon[0];
    NPCS_SndTablePrepare(&g_sndTrax_Monsoon[0]);
}

void zNPCSlick::ParseINI()
{
    NPCConfig* cfg = cfg_npc;
    zNPCRobot::ParseINI();
    cfg->snd_trax = &g_sndTrax_Slick[0];
    NPCS_SndTablePrepare(&g_sndTrax_Slick[0]);
}

void zNPCChuck::ParseINI()
{
    NPCConfig* cfg = cfg_npc;
    zNPCRobot::ParseINI();
    cfg->snd_trax = &g_sndTrax_Chuck[0];
    NPCS_SndTablePrepare(&g_sndTrax_Chuck[0]);
}

void zNPCTubeSlave::ParseINI()
{
    NPCConfig* cfg = cfg_npc;
    zNPCRobot::ParseINI();
    cfg->snd_trax = &g_sndTrax_Tubelet[0];
    NPCS_SndTablePrepare(&g_sndTrax_Tubelet[0]);
}

void zNPCTubelet::ParseINI()
{
    NPCConfig* cfg = cfg_npc;
    zNPCRobot::ParseINI();
    cfg->snd_trax = &g_sndTrax_Tubelet[0];
    NPCS_SndTablePrepare(&g_sndTrax_Tubelet[0]);
}

void zNPCArfDog::ParseINI()
{
    NPCConfig* cfg = cfg_npc;
    zNPCRobot::ParseINI();
    cfg->snd_trax = &g_sndTrax_ArfDog[0];
    NPCS_SndTablePrepare(&g_sndTrax_ArfDog[0]);
}

void zNPCArfArf::ParseINI()
{
    NPCConfig* cfg = cfg_npc;
    zNPCRobot::ParseINI();
    cfg->snd_trax = &g_sndTrax_ArfArf[0];
    NPCS_SndTablePrepare(&g_sndTrax_ArfArf[0]);
}

void zNPCTarTar::ParseINI()
{
    zNPCRobot::ParseINI();
    cfg_npc->snd_trax = &g_sndTrax_TarTar[0];
    NPCS_SndTablePrepare(&g_sndTrax_TarTar[0]);
}

void zNPCGlove::ParseINI()
{
    NPCConfig* cfg = cfg_npc;
    zNPCRobot::ParseINI();
    cfg->snd_trax = &g_sndTrax_Glove[0];
    NPCS_SndTablePrepare(&g_sndTrax_Glove[0]);
}

void zNPCHammer::ParseINI()
{
    zNPCRobot::ParseINI();
    cfg_npc->snd_trax = &g_sndTrax_Hammer[0];
    NPCS_SndTablePrepare(&g_sndTrax_Hammer[0]);
}

void zNPCChomper::ParseINI()
{
    zNPCRobot::ParseINI();
    cfg_npc->snd_trax = &g_sndTrax_Chomper[0];
    NPCS_SndTablePrepare(&g_sndTrax_Chomper[0]);
}

void zNPCFodBomb::ParseINI()
{
    zNPCRobot::ParseINI();
    cfg_npc->snd_trax = &g_sndTrax_FodBomb[0];
    NPCS_SndTablePrepare(&g_sndTrax_FodBomb[0]);
}

void zNPCFodBzzt::ParseINI()
{
    zNPCRobot::ParseINI();
    cfg_npc->snd_trax = &g_sndTrax_FodBzzt[0];
    NPCS_SndTablePrepare(&g_sndTrax_FodBzzt[0]);
}

void zNPCArfDog::Init(xEntAsset* asset)
{
    zNPCRobot::Init(asset);
    flg_move |= 2;
    flg_vuln &= 0x9effffff;
    idx_neckBone = -1;
    rast_blink = 0;
}

void zNPCGlove::Init(xEntAsset* asset)
{
    zNPCRobot::Init(asset);
    flg_vuln = -1;
    idx_neckBone = -1;
    NPAR_PartySetup(NPAR_TYP_GLOVEDUST, 0, 0);
}

void zNPCChuck::Init(xEntAsset* asset)
{
    zNPCRobot::Init(asset);
    flg_move &= 0xfffffffd;
    flg_move |= 4;
    flg_vuln &= 0x9fffffff;
    idx_neckBone = -1;
    NPAR_PartySetup(NPAR_TYP_CHUCKSPLASH, 0, 0);
}

void zNPCTarTar::Init(xEntAsset* asset)
{
    zNPCRobot::Init(asset);
    flg_vuln &= 0x9fffffff;
    idx_neckBone = -1;
    NPAR_PartySetup(NPAR_TYP_TARTARGUNK, 0, 0);
}

void zNPCRobot::Reset()
{
    NPCConfig* conf = cfg_npc;

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

    if (xNPCBasic::SelfType() != NPC_TYPE_TUBESLAVE)
    {
        zNPCGoalDead* goal;
        xPsyche* psy = psy_instinct;

        if (npc_duplodude)
        {
            goal = (zNPCGoalDead*)psy->FindGoal('NGRj');
            goal->DieQuietly();
            psy_instinct->GoalSet('NGRj', 1);
        }
        else
        {
            if ((U32)xEntIsEnabled(this) == 0)
            {
                goal = (zNPCGoalDead*)psy->FindGoal('NGRj');
                goal->DieQuietly();
                psy_instinct->GoalSet('NGRj', 1);
            }
            else
            {
                psy_instinct->GoalSet('NGN0', 1);
            }
        }
    }

    S32 rc = arena.NeedToCycle(this);

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

void zNPCRobot::ParseINI()
{
    zNPCCommon::ParseINI();
    cfg_npc->snd_traxShare = g_sndTrax_Robot;
    NPCS_SndTablePrepare(g_sndTrax_Robot);
}

void zNPCTubeSlave::Process(xScene* xscn, F32 dt)
{
    zNPCRobot::Process(xscn, dt);
}

void zNPCRobot::Process(xScene* xscn, F32 dt)
{
    psy_instinct->Timestep(dt, NULL);

    if (IsAlive())
    {
        DoAliveStuff(dt);
    }

    zNPCCommon::Process(xscn, dt);
}

void zNPCRobot::NewTime(xScene* xscn, F32 dt)
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

void zNPCRobot::DuploOwner(zNPCCommon* duper)
{
    zNPCCommon::DuploOwner(duper);

    xPsyche* psyche = this->psy_instinct;

    if (psyche)
    {
        zNPCGoalDead* dead = (zNPCGoalDead*)psyche->FindGoal('NGRj');
        dead->DieQuietly();
        psyche->GoalSet('NGRj', 1);
    }
}

void zNPCRobot::AddLassoing(xPsyche* psyche, xGoalProcessCallback cb1, xGoalProcessCallback cb2,
                            xGoalProcessCallback cb3, xGoalProcessCallback cb4,
                            xGoalProcessCallback cb5)
{
    if (!(flg_vuln & 0x1000000))
    {
        return;
    }

    xGoal* goal;
    goal = psyche->AddGoal(NPC_GOAL_LASSOBASE, NULL);
    goal->SetCallbacks(cb1, NULL, NULL, NULL);

    goal = psyche->AddGoal(NPC_GOAL_LASSOGRAB, NULL);
    goal->SetCallbacks(cb2, NULL, NULL, NULL);

    goal = psyche->AddGoal(NPC_GOAL_LASSOTHROW, NULL);
    goal->SetCallbacks(cb3, NULL, NULL, NULL);
}

void zNPCRobot::AddMiscTypical(xPsyche* psyche, xGoalProcessCallback cb1, xGoalProcessCallback cb2,
                               xGoalProcessCallback cb3)
{
    xGoal* goal;

    goal = psyche->AddGoal(NPC_GOAL_NOTICE, NULL);
    goal->SetCallbacks(cb1, NULL, NULL, NULL);

    goal = psyche->AddGoal(NPC_GOAL_TAUNT, NULL);
    goal->SetCallbacks(cb2, NULL, NULL, NULL);

    goal = psyche->AddGoal(NPC_GOAL_NOMANLAND, NULL);
    goal->SetCallbacks(cb3, NULL, NULL, NULL);
}

void zNPCRobot::AddStunThrow(xPsyche* psyche, xGoalProcessCallback cb1, xGoalProcessCallback cb2,
                             xGoalProcessCallback cb3, xGoalProcessCallback cb4)
{
    xGoal* goal;

    goal = psyche->AddGoal(NPC_GOAL_EVILPAT, NULL);
    goal->SetCallbacks(cb1, NULL, NULL, NULL);

    goal = psyche->AddGoal(NPC_GOAL_STUNNED, NULL);
    goal->SetCallbacks(cb2, NULL, NULL, NULL);

    if (cfg_npc->pts_damage < 2)
    {
        goal = psyche->AddGoal(NPC_GOAL_PATCARRY, NULL);
        goal->SetCallbacks(cb3, NULL, NULL, NULL);

        goal = psyche->AddGoal(NPC_GOAL_PATTHROW, NULL);
        goal->SetCallbacks(cb4, NULL, NULL, NULL);
    }
}

void zNPCRobot::AddDamage(xPsyche* psyche, xGoalProcessCallback cb1, xGoalProcessCallback cb2,
                          xGoalProcessCallback cb3, xGoalProcessCallback cb4,
                          xGoalProcessCallback cb5)
{
    xGoal* goal;

    goal = psyche->AddGoal(NPC_GOAL_DAMAGE, NULL);
    goal->SetCallbacks(cb1, NULL, NULL, NULL);

    goal = psyche->AddGoal(NPC_GOAL_KNOCK, NULL);
    goal->SetCallbacks(cb2, NULL, NULL, NULL);

    goal = psyche->AddGoal(NPC_GOAL_BASHED, NULL);
    goal->SetCallbacks(cb3, NULL, NULL, NULL);
}

void zNPCRobot::AddSpawning(xPsyche* psyche, xGoalProcessCallback cb1, xGoalProcessCallback cb2)
{
    xGoal* goal;

    goal = psyche->AddGoal(NPC_GOAL_AFTERLIFE, NULL);
    goal->SetCallbacks(cb1, NULL, NULL, NULL);

    goal = psyche->AddGoal(NPC_GOAL_RESPAWN, NULL);
    goal->SetCallbacks(cb2, NULL, NULL, NULL);
}

void zNPCFodBzzt::DiscoReset()
{
    tmr_discoLight = -1.0f;
}

void zNPCArfDog::BlinkReset()
{
    blinkHead.Reset();
    blinkTail.Reset();
    flg_xtrarend &= ~1;
}

void zNPCTubelet::PainInTheBand()
{
    tmr_restoreHealth = 2.5f;
}

S32 zNPCRobot::LassoSetup()
{
    S32 param1 = -1;
    S32 param2 = -1;

    LassoModelIndex(&param1, &param2);
    if ((param1 >= 0) && (param2 >= 0))
    {
        LassoUseGuides(param1, param2);
    }
    return zNPCCommon::LassoSetup();
}

S32 zNPCRobot::IsWounded()
{
    return IsDead() ? 0 : cfg_npc->pts_damage - hitpoints;
}

void zNPCRobot::InflictPain(S32 numHitPoints, S32 giveCreditToPlayer)
{
    if (numHitPoints < 0)
    {
        hitpoints = 0;
    }
    else
    {
        hitpoints -= numHitPoints;
    }

    hitpoints = (hitpoints > 0) ? hitpoints : 0;

    if (!hitpoints && giveCreditToPlayer)
    {
        zNPCCommon::GiveReward();
    }
}

F32 hyt_NightLightCurrent;

void zNPCSleepy::NightLightPos(xVec3* vec)
{
    xVec3Copy(vec, Pos());
    vec->y += hyt_NightLightCurrent;
}

void zNPCCritter::SelfSetup()
{
    zNPCRobot::SelfSetup();
    psy_instinct->SetSafety(NPC_GOAL_IDLE);
}

void zNPCTubeSlave::DoLaserRendering()
{
    xGoal* goal;
    if (tubespot == ROBO_TUBE_PAUL)
    {
        goal = psy_instinct->GetCurGoal();
        if (goal != NULL && (goal->GetID() == NPC_GOAL_TUBEATTACK))
        {
            ((zNPCGoalTubeAttack*)(goal))->LaserRender();
        }
    }
}

void zNPCFodBzzt::Process(xScene* sc, F32 dt)
{
    zNPCRobot::Process(sc, dt);
    if (g_needuvincr_bzzt != 0)
    {
        g_needuvincr_bzzt = 0;
        laser.UVScrollUpdate(dt);
    }
}

S32 zNPCTubelet::Respawn(const xVec3* pos, zMovePoint* mvptFirst, zMovePoint* mvptSpawnRef)
{
    S32 rc = zNPCCommon::Respawn(pos, mvptFirst, mvptSpawnRef);
    if (rc != 0)
    {
        PrepTheBand();
    }
    return rc;
}

void zNPCFodder::ParseINI()
{
    zNPCCommon::ParseINI();
    cfg_npc->snd_trax = &g_sndTrax_Fodder;
    NPCS_SndTablePrepare(&g_sndTrax_Fodder);
}

/*
void zNPCFodder::Stun(F32 stuntime)
{
    xVec3 dir_dmg;

    if (this->IsWounded())
    {
        return;
    }

    xVec3* pos = xEntGetPos(&globals.player.ent);
    xVec3* robot_pos = xEntGetPos(this);

    xVec3Sub(&dir_dmg, pos, robot_pos);
    F32 out = xVec3Normalize(&dir_dmg, robot_pos);

    this->Respawn(pos, NULL, NULL);
}
*/

void zNPCFodBzzt_ResetDanceParty()
{
    cnt_alerthokey__11zNPCFodBzzt = 0;
}

void ROBO_KillEffects()
{
}

void UVAModelInfo::Clear()
{
    memset(this, 0, sizeof(UVAModelInfo));
}

void UVAModelInfo::UVVelSet(float x, float y)
{
    offset_vel.x = x;
    offset_vel.y = y;
}

zNPCLassoInfo* zNPCRobot::PRIV_GetLassoData()
{
    return &raw_lassoinfo;
}

S32 zNPCRobot::IsAlive()
{
    return !IsDead();
}

void zNPCRobot::LassoModelIndex(S32* idxgrab, S32* idxhold)
{
    *idxgrab = 0xffffffff;
    *idxhold = 0xffffffff;
}

void zNPCSlick::LassoModelIndex(S32* idxgrab, S32* idxhold)
{
    *idxgrab = 2;
    *idxhold = 3;
}

S32 zNPCRobot::IsHealthy()
{
    return (hitpoints < 0) ? 0 : hitpoints;
}

xEntDrive* zNPCRobot::PRIV_GetDriverData()
{
    return &raw_drvdata;
}

zNPCLassoInfo* zNPCFodder::PRIV_GetLassoData()
{
    return NULL;
}

void zNPCFodder::LassoModelIndex(S32* idxgrab, S32* idxhold)
{
    *idxgrab = -1;
    *idxhold = -1;
}

void zNPCSlick::RopePopsShield()
{
    ShieldGeneratorDamaged();
    alf_shieldCurrent = 0.0f;
    tmr_repairShield = 5.0f;
}

bool zNPCSlick::IsShield() const
{
    return alf_shieldDesired == 100.0f / 255.0f;
}

void zNPCSlick::ShieldShow()
{
    alf_shieldDesired = 100.0f / 255.0f;
}

void zNPCSlick::ShieldHide()
{
    alf_shieldDesired = 0.0f;
}

S32 zNPCTubeSlave::IsDying()
{
    return tub_pete->IsDying();
}

S32 zNPCTubelet::IsDying()
{
    return tubestat == TUBE_STAT_DEAD;
}

zNPCSlick* zNPCSlick::YouOwnSlipFX()
{
    return g_slick_slipfx_owner = this;
}

void zNPCArfDog::Setup()
{
    zNPCCommon::Setup();
    if (rast_blink == NULL)
    {
        rast_blink = NPCC_FindRWRaster(stringBase + 0x2e2); // "fx_fodbomb_blinker"
    }
}

void zNPCFodBomb::Setup()
{
    zNPCCommon::Setup();
    if (rast_blink == NULL)
    {
        rast_blink = NPCC_FindRWRaster(stringBase + 0x2e2); // "fx_fodbomb_blinker"
    }
}

void zNPCFodBomb::BlinkerReset()
{
    blinker.Reset();
    flg_xtrarend &= ~1;
}

void zNPCSlick::ShieldFX(F32 dt)
{
    if (g_needuvincr_slickshield)
    {
        g_uvaShield.Update(dt, NULL);
        g_needuvincr_slickshield = 0;
    }
}

S32 zNPCSleepy::RepelMissile(F32 dt)
{
    tmr_nextPatriot = MAX(-1.0f, tmr_nextPatriot - dt);
    if (haz_patriot != NULL && !(tmr_nextPatriot < 0.0f))
    {
        return 1;
    }
    haz_patriot = NULL;
    return 0;
}

void ZNPC_AnimTable_RobotBase(xAnimTable*);

void ZNPC_AnimTable_RobotBase(xAnimTable* table)
{
    int ourAnims[17] = { 0x01, 0x03, 0x02, 0x04, 0x05, 0x07, 0x08, 0x17, 0x09,
                         0x0a, 0x14, 0x16, 0x15, 0x25, 0x26, 0x06, 0x00 };

    xAnimTableNewState(table, g_strz_roboanim[0x01], 0x110, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_roboanim[0x03], 0x010, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_roboanim[0x02], 0x020, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_roboanim[0x04], 0x020, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_roboanim[0x05], 0x020, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);

    xAnimTableNewState(table, g_strz_roboanim[0x14], 0x010, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_roboanim[0x16], 0x010, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_roboanim[0x15], 0x010, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);

    xAnimTableNewState(table, g_strz_roboanim[0x25], 0x00, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_roboanim[0x26], 0x00, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);

    xAnimTableNewState(table, g_strz_roboanim[0x06], 0x020, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_roboanim[0x07], 0x020, 0x2000000, 1.0f, NULL, NULL, 0.0f, NULL,
                       NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_roboanim[0x08], 0x010, 0x2000000, 1.0f, NULL, NULL, 0.0f, NULL,
                       NULL, xAnimDefaultBeforeEnter, NULL, NULL);

    xAnimTableNewState(table, g_strz_roboanim[0x17], 0x010, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);

    xAnimTableNewState(table, g_strz_roboanim[0x09], 0x020, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_roboanim[0x0a], 0x010, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);

    NPCC_BuildStandardAnimTran(table, g_strz_roboanim, ourAnims, 1, 0.2f);

    xAnimTableNewTransition(table, g_strz_roboanim[0x07], g_strz_roboanim[0x08], NULL, NULL, 0x10,
                            0, 0.0f, 0.0f, 0, 0, 0.2f, NULL);
    xAnimTableNewTransition(table, g_strz_roboanim[0x09], g_strz_roboanim[0x0a], NULL, NULL, 0x10,
                            0, 0.0f, 0.0f, 0, 0, 0.2f, NULL);
    xAnimTableNewTransition(table, g_strz_roboanim[0x14], g_strz_roboanim[0x25], NULL, NULL, 0x10,
                            0, 0.0f, 0.0f, 0, 0, 0.2f, NULL);
    xAnimTableNewTransition(table, g_strz_roboanim[0x16], g_strz_roboanim[0x25], NULL, NULL, 0x10,
                            0, 0.0f, 0.0f, 0, 0, 0.2f, NULL);
    xAnimTableNewTransition(table, g_strz_roboanim[0x15], g_strz_roboanim[0x25], NULL, NULL, 0x10,
                            0, 0.0f, 0.0f, 0, 0, 0.2f, NULL);
}

xAnimTable* ZNPC_AnimTable_Fodder()
{
    int ourAnims[16] = { 0x01, 0x03, 0x02, 0x04, 0x05, 0x22, 0x23, 0x24,
                         0x0e, 0x14, 0x16, 0x15, 0x25, 0x26, 0x06, 0x00 };

    xAnimTable* pxVar1 = (xAnimTable*)xAnimTableNew(stringBase + 0x221, NULL, 0); // "zNPCFodder"

    xAnimTableNewState(pxVar1, g_strz_roboanim[0x01], 0x110, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(pxVar1, g_strz_roboanim[0x03], 0x010, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(pxVar1, g_strz_roboanim[0x02], 0x020, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(pxVar1, g_strz_roboanim[0x04], 0x020, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(pxVar1, g_strz_roboanim[0x05], 0x020, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(pxVar1, g_strz_roboanim[0x22], 0x020, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(pxVar1, g_strz_roboanim[0x23], 0x010, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(pxVar1, g_strz_roboanim[0x24], 0x020, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(pxVar1, g_strz_roboanim[0x0e], 0x020, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(pxVar1, g_strz_roboanim[0x14], 0x010, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(pxVar1, g_strz_roboanim[0x16], 0x010, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(pxVar1, g_strz_roboanim[0x15], 0x010, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(pxVar1, g_strz_roboanim[0x25], 0x000, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(pxVar1, g_strz_roboanim[0x26], 0x000, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(pxVar1, g_strz_roboanim[0x06], 0x020, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);

    NPCC_BuildStandardAnimTran(pxVar1, g_strz_roboanim, ourAnims, 1, 0.2f);

    xAnimTableNewTransition(pxVar1, g_strz_roboanim[0x14], g_strz_roboanim[0x25], NULL, NULL, 0x10,
                            0, 0.0f, 0.0f, 0, 0, 0.2f, NULL);
    xAnimTableNewTransition(pxVar1, g_strz_roboanim[0x16], g_strz_roboanim[0x25], NULL, NULL, 0x10,
                            0, 0.0f, 0.0f, 0, 0, 0.2f, NULL);
    xAnimTableNewTransition(pxVar1, g_strz_roboanim[0x15], g_strz_roboanim[0x25], NULL, NULL, 0x10,
                            0, 0.0f, 0.0f, 0, 0, 0.2f, NULL);
    xAnimTableNewTransition(pxVar1, g_strz_roboanim[0x22], g_strz_roboanim[0x23], NULL, NULL, 0x10,
                            0, 0.0f, 0.0f, 0, 0, 0.2f, NULL);

    return pxVar1;
}

xAnimTable* ZNPC_AnimTable_Hammer()
{
    int ourAnims[6] = {
        0x0e, 0x18, 0x19, 0x1a, 0x1b, 0x00,
    };

    xAnimTable* pxVar1 = xAnimTableNew(stringBase + 0x22c, NULL, 0); // "zNPCHammer"
    ZNPC_AnimTable_RobotBase(pxVar1);

    xAnimTableNewState(pxVar1, g_strz_roboanim[0x0e], 0x020, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(pxVar1, g_strz_roboanim[0x18], 0x020, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(pxVar1, g_strz_roboanim[0x19], 0x010, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(pxVar1, g_strz_roboanim[0x1a], 0x020, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(pxVar1, g_strz_roboanim[0x1b], 0x010, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);

    NPCC_BuildStandardAnimTran(pxVar1, g_strz_roboanim, ourAnims, 1, 0.2f);

    xAnimTableNewTransition(pxVar1, g_strz_roboanim[0x18], g_strz_roboanim[0x19], NULL, NULL, 0x10,
                            0, 0.0f, 0.0f, 0, 0, 0.2f, NULL);
    xAnimTableNewTransition(pxVar1, g_strz_roboanim[0x1a], g_strz_roboanim[0x1b], NULL, NULL, 0x10,
                            0, 0.0f, 0.0f, 0, 0, 0.2f, NULL);

    return pxVar1;
}

xAnimTable* ZNPC_AnimTable_TarTar()
{
    int ourAnims[4] = { 0x0c, 0x11, 0x0e, 0x00 };

    xAnimTable* pxVar1 = xAnimTableNew(stringBase + 0x237, NULL, 0); // "zNPCTarTar"
    ZNPC_AnimTable_RobotBase(pxVar1);

    xAnimTableNewState(pxVar1, g_strz_roboanim[0x0c], 0x010, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(pxVar1, g_strz_roboanim[0x11], 0x020, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(pxVar1, g_strz_roboanim[0x0e], 0x020, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);

    NPCC_BuildStandardAnimTran(pxVar1, g_strz_roboanim, ourAnims, 1, 0.2f);

    xAnimTableNewTransition(pxVar1, g_strz_roboanim[0x11], g_strz_roboanim[0x0e], NULL, NULL, 0x10,
                            0, 0.0f, 0.0f, 0, 0, 0.2f, NULL);
    xAnimTableNewTransition(pxVar1, g_strz_roboanim[0x0e], g_strz_roboanim[0x0c], NULL, NULL, 0x10,
                            0, 0.0f, 0.0f, 0, 0, 0.2f, NULL);
    xAnimTableNewTransition(pxVar1, g_strz_roboanim[0x04], g_strz_roboanim[0x0c], NULL, NULL, 0x10,
                            0, 0.0f, 0.0f, 0, 0, 0.2f, NULL);

    return pxVar1;
}

xAnimTable* ZNPC_AnimTable_TTSauce()
{
    int ourAnims[6] = {
        0x0e, 0x18, 0x19, 0x1a, 0x1b, 0x00,
    };

    xAnimTable* pxVar1 = (xAnimTable*)xAnimTableNew(stringBase + 0x242, NULL, 0); // "TarTarSauce"

    xAnimTableNewState(pxVar1, g_strz_ttsanim[1], 0x010, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);

    return pxVar1;
}

xAnimTable* ZNPC_AnimTable_GLove()
{
    int ourAnims[8] = {
        0x18, 0x19, 0x1a, 0x1b, 0x11, 0x12, 0x13, 0x00,
    };

    xAnimTable* pxVar1 = (xAnimTable*)xAnimTableNew(stringBase + 0x24e, NULL, 0); // "zNPCGlove"
    ZNPC_AnimTable_RobotBase(pxVar1);

    xAnimTableNewState(pxVar1, g_strz_roboanim[0x11], 0x20, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(pxVar1, g_strz_roboanim[0x12], 0x10, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(pxVar1, g_strz_roboanim[0x13], 0x20, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(pxVar1, g_strz_roboanim[0x18], 0x20, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(pxVar1, g_strz_roboanim[0x19], 0x10, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(pxVar1, g_strz_roboanim[0x1a], 0x20, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(pxVar1, g_strz_roboanim[0x1b], 0x10, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);

    NPCC_BuildStandardAnimTran(pxVar1, g_strz_roboanim, ourAnims, 1, 0.2f);

    xAnimTableNewTransition(pxVar1, g_strz_roboanim[0x1a], g_strz_roboanim[0x1b], NULL, NULL, 0x10,
                            0, 0.0f, 0.0f, 0, 0, 0.2f, NULL);
    xAnimTableNewTransition(pxVar1, g_strz_roboanim[0x11], g_strz_roboanim[0x12], NULL, NULL, 0x10,
                            0, 0.0f, 0.0f, 0, 0, 0.2f, NULL);
    xAnimTableNewTransition(pxVar1, g_strz_roboanim[0x18], g_strz_roboanim[0x19], NULL, NULL, 0x10,
                            0, 0.0f, 0.0f, 0, 0, 0.2f, NULL);

    return pxVar1;
}

xAnimTable* ZNPC_AnimTable_Monsoon()
{
    int ourAnims[5] = { 0x0c, 0x0d, 0x11, 0x12, 0x00 };

    xAnimTable* pxVar1 = xAnimTableNew(stringBase + 0x258, NULL, 0); // "zNPCMonsoon"
    ZNPC_AnimTable_RobotBase(pxVar1);

    xAnimTableNewState(pxVar1, g_strz_roboanim[0x0c], 0x020, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(pxVar1, g_strz_roboanim[0x0d], 0x020, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(pxVar1, g_strz_roboanim[0x11], 0x020, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(pxVar1, g_strz_roboanim[0x12], 0x010, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);

    NPCC_BuildStandardAnimTran(pxVar1, g_strz_roboanim, ourAnims, 1, 0.2f);

    xAnimTableNewTransition(pxVar1, g_strz_roboanim[0x11], g_strz_roboanim[0x12], NULL, NULL, 0x10,
                            0, 0.0f, 0.0f, 0, 0, 0.2f, NULL);

    return pxVar1;
}

xAnimTable* ZNPC_AnimTable_ThunderCloud()
{
    int ourAnims[3] = { 0x01, 0x02, 0x00 };

    xAnimTable* pxVar1 = xAnimTableNew(stringBase + 0x264, NULL, 0); // "ThunderCloud"

    xAnimTableNewState(pxVar1, g_strz_roboanim[0x01], 0x010, 1, 1.0f, NULL, NULL, 0.0f, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(pxVar1, g_strz_roboanim[0x02], 0x010, 1, 1.0f, NULL, NULL, 0.0f, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);

    NPCC_BuildStandardAnimTran(pxVar1, g_strz_roboanim, ourAnims, 1, 0.2f);

    return pxVar1;
}

xAnimTable* ZNPC_AnimTable_NightLight()
{
    int ourAnims[2] = { 0x01, 0x00 };

    xAnimTable* pxVar1 = xAnimTableNew(stringBase + 0x271, NULL, 0); // "NightLight"

    xAnimTableNewState(pxVar1, g_strz_nytlytanim[1], 0x010, 1, 1.0f, NULL, NULL, 0.0f, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);

    NPCC_BuildStandardAnimTran(pxVar1, g_strz_nytlytanim, ourAnims, 1, 0.2f);

    return pxVar1;
}

// Regalloc
xAnimTable* ZNPC_AnimTable_SleepyTime()
{
    int ourAnims[3] = { 0x0c, 0x0e, 0x00 };

    xAnimTable* pxVar1 = xAnimTableNew(stringBase + 0x27c, NULL, 0); // "zNPCSleepy"
    ZNPC_AnimTable_RobotBase(pxVar1);

    xAnimTableNewState(pxVar1, g_strz_roboanim[0x0c], 0x010, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(pxVar1, g_strz_roboanim[0x0e], 0x010, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);

    NPCC_BuildStandardAnimTran(pxVar1, g_strz_roboanim, ourAnims, 1, 0.2f);

    return pxVar1;
}

xAnimTable* ZNPC_AnimTable_ArfDog()
{
    int ourAnims[17] = { 0x01, 0x03, 0x02, 0x04, 0x05, 0x20, 0x21, 0x0c, 0x0d,
                         0x12, 0x14, 0x16, 0x15, 0x25, 0x26, 0x06, 0x00 };

    xAnimTable* pxVar1 = (xAnimTable*)xAnimTableNew(stringBase + 0x287, NULL, 0); // "zNPCArfDog"

    xAnimTableNewState(pxVar1, g_strz_roboanim[0x01], 0x110, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(pxVar1, g_strz_roboanim[0x03], 0x010, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(pxVar1, g_strz_roboanim[0x02], 0x020, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(pxVar1, g_strz_roboanim[0x04], 0x010, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(pxVar1, g_strz_roboanim[0x05], 0x010, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(pxVar1, g_strz_roboanim[0x20], 0x010, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(pxVar1, g_strz_roboanim[0x21], 0x020, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(pxVar1, g_strz_roboanim[0x0c], 0x010, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(pxVar1, g_strz_roboanim[0x0d], 0x010, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(pxVar1, g_strz_roboanim[0x12], 0x010, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(pxVar1, g_strz_roboanim[0x14], 0x010, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(pxVar1, g_strz_roboanim[0x16], 0x010, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(pxVar1, g_strz_roboanim[0x15], 0x010, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(pxVar1, g_strz_roboanim[0x25], 0x000, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(pxVar1, g_strz_roboanim[0x26], 0x000, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(pxVar1, g_strz_roboanim[0x06], 0x020, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);

    NPCC_BuildStandardAnimTran(pxVar1, g_strz_roboanim, ourAnims, 1, 0.2f);

    return pxVar1;
}

xAnimTable* ZNPC_AnimTable_ArfArf()
{
    int ourAnims[7] = { 0x0e, 0x0f, 0x10, 0x1d, 0x1e, 0x1f, 0x00 };

    xAnimTable* pxVar1 = xAnimTableNew(stringBase + 0x292, NULL, 0); // "zNPCArfArf"
    ZNPC_AnimTable_RobotBase(pxVar1);

    xAnimTableNewState(pxVar1, g_strz_roboanim[0x0e], 0x20, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(pxVar1, g_strz_roboanim[0x0f], 0x20, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(pxVar1, g_strz_roboanim[0x10], 0x20, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(pxVar1, g_strz_roboanim[0x1d], 0x20, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(pxVar1, g_strz_roboanim[0x1e], 0x00, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(pxVar1, g_strz_roboanim[0x1f], 0x20, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);

    NPCC_BuildStandardAnimTran(pxVar1, g_strz_roboanim, ourAnims, 1, 0.2f);

    xAnimTableNewTransition(pxVar1, g_strz_roboanim[0x1d], g_strz_roboanim[0x1e], NULL, NULL, 0x10,
                            0, 0.0f, 0.0f, 0, 0, 0.2f, NULL);

    return pxVar1;
}

xAnimTable* ZNPC_AnimTable_Chuck()
{
    int ourAnims[4] = { 0x0c, 0x0d, 0x0e, 0x00 };

    xAnimTable* pxVar1 = xAnimTableNew(stringBase + 0x29d, NULL, 0); // "zNPCChuck"
    ZNPC_AnimTable_RobotBase(pxVar1);

    xAnimTableNewState(pxVar1, g_strz_roboanim[0x0c], 0x110, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(pxVar1, g_strz_roboanim[0x0d], 0x110, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(pxVar1, g_strz_roboanim[0x0e], 0x020, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);

    NPCC_BuildStandardAnimTran(pxVar1, g_strz_roboanim, ourAnims, 1, 0.2f);

    xAnimTableNewTransition(pxVar1, g_strz_roboanim[0x0e], g_strz_roboanim[0x0c], NULL, NULL, 0x10,
                            0, 0.0f, 0.0f, 0, 0, 0.2f, NULL);
    xAnimTableNewTransition(pxVar1, g_strz_roboanim[0x04], g_strz_roboanim[0x0c], NULL, NULL, 0x10,
                            0, 0.0f, 0.0f, 0, 0, 0.2f, NULL);
    xAnimTableNewTransition(pxVar1, g_strz_roboanim[0x04], g_strz_roboanim[0x0c], NULL, NULL, 0x10,
                            0, 0.0f, 0.0f, 0, 0, 0.2f, NULL);

    return pxVar1;
}

// Regalloc
xAnimTable* ZNPC_AnimTable_Tubelet()
{
    int ourAnims[2] = { 0x0e, 0x00 };

    xAnimTable* pxVar1 = xAnimTableNew(stringBase + 0x2a7, NULL, 0); // "zNPCTubelet"
    ZNPC_AnimTable_RobotBase(pxVar1);

    xAnimTableNewState(pxVar1, g_strz_roboanim[0x0e], 0x10, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);
    NPCC_BuildStandardAnimTran(pxVar1, g_strz_roboanim, ourAnims, 1, 0.2f);

    return pxVar1;
}

xAnimTable* ZNPC_AnimTable_FloatDevice()
{
    xAnimTable* pxVar1 = xAnimTableNew(stringBase + 0x2b3, NULL, 0); // "FloatDevice"
    xAnimTableNewState(pxVar1, g_strz_flotanim[0x01], 0x10, 1, 1.0f, NULL, NULL, 0.0f, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);

    return pxVar1;
}

xAnimTable* ZNPC_AnimTable_SlickShield()
{
    xAnimTable* pxVar1 = xAnimTableNew(stringBase + 0x2c6, NULL, 0); // "SlickBubbleShield"
    xAnimTableNewState(pxVar1, g_strz_shieldanim[0x01], 0x10, 1, 1.0f, NULL, NULL, 0.0f, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);

    return pxVar1;
}

xAnimTable* ZNPC_AnimTable_Slick()
{
    int ourAnims[4] = { 0x11, 0x12, 0x13, 0x00 };

    xAnimTable* pxVar1 = xAnimTableNew(stringBase + 0x2d8, NULL, 0); // "zNPCSlick"

    ZNPC_AnimTable_RobotBase(pxVar1);

    xAnimTableNewState(pxVar1, g_strz_roboanim[0x11], 0x020, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(pxVar1, g_strz_roboanim[0x12], 0x010, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(pxVar1, g_strz_roboanim[0x13], 0x020, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);

    NPCC_BuildStandardAnimTran(pxVar1, g_strz_roboanim, ourAnims, 1, 0.2f);

    xAnimTableNewTransition(pxVar1, g_strz_roboanim[0x11], g_strz_roboanim[0x12], NULL, NULL, 0x10,
                            0, 0.0f, 0.0f, 0, 0, 0.2f, NULL);

    return pxVar1;
}

void zNPCTubelet::Reset()
{
    tubestat = TUBE_STAT_BORN;
    zNPCRobot::Reset();
    NPCConfig* cfg = cfg_npc;
    hitpoints = cfg->pts_damage;
    ModelAtomicHide(0, NULL);
    ModelAtomicHide(1, NULL);
    ModelAtomicHide(4, NULL);
}

void zNPCFodBzzt::Reset()
{
    zNPCRobot::Reset();
}

void zNPCMonsoon::Reset()
{
    zNPCRobot::Reset();
}

void zNPCArfDog::Reset()
{
    zNPCRobot::Reset();
    BlinkReset();
}

void zNPCSlick::Reset()
{
    zNPCRobot::Reset();
    tmr_repairShield = 0.0f;
    tmr_invuln = 0.0f;
    alf_shieldDesired = 0.0f;
    alf_shieldCurrent = 0.0f;
    rad_shield = 0.0f;
}

void zNPCChuck::Reset()
{
    zNPCRobot::Reset();
    xModelInstance* minst = ModelAtomicHide(1, NULL);
    if (minst != NULL)
    {
        minst->Flags &= 0xfffe;
    }
}

void zNPCArfArf::Reset()
{
    zNPCRobot::Reset();
    for (int i = 0; i < sizeof(flg_puppy) / sizeof(S32); i++)
    {
        flg_puppy[i] = 1;
    }
}

NPARMgmt* NPAR_PartySetup(en_nparptyp parType, void** userData, NPARXtraData* xtraData);

void zNPCMonsoon::Init(xEntAsset* asset)
{
    zNPCRobot::Init(asset);
    flg_move &= ~2;
    flg_move |= 4;
    flg_vuln &= 0x9fffffff;
    idx_neckBone = -1;
    NPAR_PartySetup(NPAR_TYP_MONSOONRAIN, NULL, NULL);
}

void zNPCTubeSlave::Init(xEntAsset* asset)
{
    zNPCRobot::Init(asset);
    flg_move &= 0xfffffffd;
    flg_move |= 4;

    flg_vuln &= 0x8fffffff;
    flg_vuln &= 0xfeffffff;

    idx_neckBone = -1;
    tubespot = ROBO_TUBE_PAUL;
    tub_pete = NULL;

    laser.Prepare();

    xModelInstance* mdl = ModelAtomicFind(1, -1, NULL);
    mdl->Flags &= 0xffdf;
    mdl->Flags |= 8;
}

void zNPCChomper::Init(xEntAsset* asset)
{
    zNPCRobot::Init(asset);
    flg_move |= 0x10;
    flg_vuln &= 0x9effffff;
    idx_neckBone = -1;
    NPAR_PartySetup(NPAR_TYP_DOGBREATH, NULL, NULL);
}

void zNPCTubelet::Init(xEntAsset* asset)
{
    zNPCRobot::Init(asset);

    flg_move |= 2;
    flg_vuln &= 0x9FFFFFFF;
    idx_neckBone = -1;

    psynote.npc = this;

    NPAR_PartySetup(NPAR_TYP_TUBESPIRAL, NULL, NULL);
    NPAR_PartySetup(NPAR_TYP_TUBECONFETTI, NULL, NULL);

    xModelInstance* iVar1 = zNPCCommon::ModelAtomicFind(1, -1, NULL);

    iVar1->Flags &= 0xffdf;
    iVar1->Flags |= 8;
}

void zNPCTubeSlave::WeGotAGig()
{
    PartyOn();
    psy_instinct->GoalSet(0x4e47524f, 1);
}

void zNPCTubelet::Unbonk()
{
    ModelAtomicShow(0, NULL);
    ModelAtomicHide(1, NULL);
    ModelAtomicHide(4, NULL);
    hitpoints = cfg_npc->pts_damage;
    // Epilogue weirdness
    pflags &= 0xdf;
    bonkSpinRate = -1.0;
}

void zNPCTubeSlave::Reset()
{
    zNPCRobot::Reset();
    flags |= 0x40;
    zNPCTubeSlave::WeGotAGig();
}

F32 zNPCRobot::GenShadCacheRad()
{
    F32 fac_use;
    F32 rad_cache;

    switch (xNPCBasic::SelfType())
    {
    case NPC_TYPE_HAMMER: // 0x4e545230:
    case NPC_TYPE_HAMSPIN: // 0x4e545231:
    case NPC_TYPE_TARTAR: // 0x4e545232:
    case NPC_TYPE_GLOVE: // 0x4e545233:
    case NPC_TYPE_MONSOON: // 0x4e545234:
    case NPC_TYPE_SLEEPY: // 0x4e545235:
    case NPC_TYPE_ARFARF: // 0x4e545237:
    case NPC_TYPE_TUBELET: // 0x4e545239:
    case NPC_TYPE_TUBESLAVE: // 0x4e54523a:
        fac_use = 2.4f;
        break;
    case NPC_TYPE_ARFDOG: // 0x4e545236:
    case NPC_TYPE_CHUCK: // 0x4e545238:
    case NPC_TYPE_FODDER: // 0x4e54523c:
    case NPC_TYPE_FODBOMB: // 0x4e54523d:
    case NPC_TYPE_FODBZZT: // 0x4e54523e:
    case NPC_TYPE_CHOMPER: // 0x4e54523f:
    case NPC_TYPE_CRITTER: // 0x4e545240:
        fac_use = 1.5f;
        break;
    case NPC_TYPE_SLICK:
        fac_use = 2.5f;
        break;
    default:
        fac_use = 2.0f;
        break;
    }
    rad_cache = zNPCCommon::BoundAsRadius(0);
    return (fac_use * rad_cache);
}

void zNPCSleepy::Init(xEntAsset* asset)
{
    zNPCRobot::Init(asset);

    flg_move |= 2;

    flg_vuln &= 0x8fffffff;

    idx_neckBone = -1;

    rast_detectcone = NULL;
    rast_killcone = NULL;

    // Weirdness related to this line.
    g_cnt_sleepy++;

    NPAR_PartySetup(NPAR_TYP_SLEEPYZEEZ, NULL, NULL);
}

void zNPCSlick::Init(xEntAsset* asset)
{
    zNPCRobot::Init(asset);

    flg_move &= 0xfffffffd;
    flg_move |= 4;

    flg_vuln &= 0x9fffffff;
    flg_vuln |= 0x1000000;

    idx_neckBone = -1;

    if (!g_uvaShield.Valid())
    {
        xModelInstance* mdl = zNPCCommon::ModelAtomicFind(1, -1, NULL);
        if ((mdl != NULL) && (mdl->Data != NULL))
        {
            g_uvaShield.Init(mdl->Data, 0);
            g_uvaShield.UVVelSet(0.0f, -0.7f);
        }
    }
    NPAR_PartySetup(NPAR_TYP_OILBUB, NULL, NULL);
}

void zNPCSleepy::NewTime(xScene* sc, F32 dt)
{
    if (!IsDead())
    {
        xModelInstance* nightlight = zNPCCommon::ModelAtomicFind(4, -1, NULL);
        if (nightlight == NULL)
        {
            return;
        }
        NightLightPos((xVec3*)(&nightlight->Mat->pos));
    }
    zNPCRobot::NewTime(sc, dt);
}

void zNPCMonsoon::NewTime(xScene* sc, F32 dt)
{
    zNPCRobot::NewTime(sc, dt);
}

U32 zNPCSleepy::AnimPick(int gid, en_NPC_GOAL_SPOT gspot, xGoal* rawgoal)
{
    U32 uVar1 = 0;
    int iVar2 = -1;

    switch (gid)
    {
    case 'NGR4':
        iVar2 = 0xc;
        break;
    case 'NGR=':
        iVar2 = 0xe;
        break;
    default:
        uVar1 = zNPCRobot::AnimPick(gid, gspot, rawgoal);
        break;
    }

    if (iVar2 >= 0)
    {
        uVar1 = g_hash_roboanim[iVar2];
    }

    return uVar1;
}

S32 FODR_grul_alert(xGoal* goal, void*, en_trantype* trantype, float, void*)
{
    *trantype = GOAL_TRAN_PUSH;
    return NPC_GOAL_ALERTFODDER;
}

S32 BOMB_grul_alert(xGoal* goal, void*, en_trantype* trantype, float, void*)
{
    *trantype = GOAL_TRAN_PUSH;
    return NPC_GOAL_ALERTFODBOMB;
}

S32 BZZT_grul_alert(xGoal* goal, void*, en_trantype* trantype, float, void*)
{
    *trantype = GOAL_TRAN_PUSH;
    return NPC_GOAL_ALERTFODBZZT;
}

S32 CHMP_grul_alert(xGoal* goal, void*, en_trantype* trantype, float, void*)
{
    *trantype = GOAL_TRAN_PUSH;
    return NPC_GOAL_ALERTCHOMPER;
}

S32 HAMR_grul_alert(xGoal* goal, void*, en_trantype* trantype, float, void*)
{
    *trantype = GOAL_TRAN_PUSH;
    return NPC_GOAL_ALERTHAMMER;
}

S32 TART_grul_alert(xGoal* goal, void*, en_trantype* trantype, float, void*)
{
    *trantype = GOAL_TRAN_PUSH;
    return NPC_GOAL_ALERTTARTAR;
}

S32 GLOV_grul_alert(xGoal* goal, void*, en_trantype* trantype, float, void*)
{
    *trantype = GOAL_TRAN_PUSH;
    return NPC_GOAL_ALERTGLOVE;
}

S32 MOON_grul_alert(xGoal* goal, void*, en_trantype* trantype, float, void*)
{
    *trantype = GOAL_TRAN_PUSH;
    return NPC_GOAL_ALERTMONSOON;
}

S32 SLEP_grul_alert(xGoal* goal, void*, en_trantype* trantype, float, void*)
{
    *trantype = GOAL_TRAN_PUSH;
    return NPC_GOAL_ALERTSLEEPY;
}

S32 ARFY_grul_alert(xGoal* goal, void*, en_trantype* trantype, float, void*)
{
    *trantype = GOAL_TRAN_PUSH;
    return NPC_GOAL_ALERTARF;
}

S32 PUPY_grul_alert(xGoal* goal, void*, en_trantype* trantype, float, void*)
{
    *trantype = GOAL_TRAN_PUSH;
    return NPC_GOAL_ALERTPUPPY;
}

S32 CHUK_grul_alert(xGoal* goal, void*, en_trantype* trantype, float, void*)
{
    *trantype = GOAL_TRAN_PUSH;
    return NPC_GOAL_ALERTCHUCK;
}

S32 TUBE_grul_alert(xGoal* goal, void*, en_trantype* trantype, float, void*)
{
    *trantype = GOAL_TRAN_PUSH;
    return NPC_GOAL_ALERTTUBELET;
}

S32 SLCK_grul_alert(xGoal* goal, void*, en_trantype* trantype, float, void*)
{
    *trantype = GOAL_TRAN_PUSH;
    return NPC_GOAL_ALERTSLICK;
}

S32 xEntIsEnabled(xEnt* ent)
{
    return xBaseIsEnabled(ent);
}

zNPCLassoInfo* zNPCFodBomb::PRIV_GetLassoData()
{
    return NULL;
}

zNPCLassoInfo* zNPCFodBzzt::PRIV_GetLassoData()
{
    return NULL;
}

zNPCLassoInfo* zNPCChomper::PRIV_GetLassoData()
{
    return NULL;
}

zNPCLassoInfo* zNPCCritter::PRIV_GetLassoData()
{
    return NULL;
}

zNPCLassoInfo* zNPCArfDog::PRIV_GetLassoData()
{
    return NULL;
}

U8 zNPCTubeSlave::PhysicsFlags() const
{
    return 3;
}

U8 zNPCTubeSlave::ColPenByFlags() const
{
    return 16;
}

U8 zNPCTubeSlave::ColChkByFlags() const
{
    return 16;
}

U8 zNPCTubeSlave::ColPenFlags() const
{
    return 0;
}

U8 zNPCTubeSlave::ColChkFlags() const
{
    return 0;
}

S32 zNPCTubeSlave::CanRope()
{
    return 0;
}

U8 zNPCRobot::ColPenByFlags() const
{
    return 60;
}

U8 zNPCRobot::ColChkByFlags() const
{
    return 60;
}

U8 zNPCMonsoon::FoulWeather(F32)
{
    return 0;
}
