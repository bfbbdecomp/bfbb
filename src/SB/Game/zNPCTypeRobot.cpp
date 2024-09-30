#include "zNPCTypeRobot.h"
#include "zNPCSupplement.h"

#include "zNPCGoalRobo.h"
#include "zNPCTypes.h"
#include "zNPCGoalStd.h"

#include "xFactory.h"
#include "xMath.h"

#include "xAnim.h"

#include <string.h>
#include "zGlobals.h"

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

S32 rast_blink; // zNPCFodBomb

char* g_strz_roboanim[41] =
{
    "Unknown",
    "Idle01",
    "Fidget01",
    "Move01",
    "Notice01",
    "Taunt01",
    "Respawn01",
    "LassoGrab01",
    "LassoHold01",
    "StunBegin01",
    "StunLoop01",
    "EndTag_Standard",
    "AlertIdle01",
    "AlertMove01",
    "Attack01",
    "Attack02",
    "Attack03",
    "AttackBegin01",
    "AttackLoop01",
    "AttackEnd01",
    "HurtKnock01",
    "HurtSmash01",
    "HurtBash01",
    "LassoYank01",
    "PatPickup01",
    "PatCarry01",
    "PatThrowBegin01",
    "PatThrowLoop01",
    "Sleep01",
    "TeleportBegin01",
    "TeleportLoop01",
    "TeleportEnd01",
    "Launch01",
    "LaunchEnd01",
    "DanceBegin01",
    "DanceLoop01",
    "DanceEnd01",
    "Death01",
    "Death02",
    "DodgeBBowl01",
    "DodgeBCruise01"
};

char* g_strz_nytlytanim[2] =
{
    "Unknown",
    "Light_Idle01"
};

char* g_strz_shieldanim[2] =
{
    "Unknown",
    "Shield_Idle01"
};

char* g_strz_ttsanim[2] =
{
    "Unknown",
    "TarTar_Slosh01"
};

extern char stringBase[];

void zNPCRobot_Timestep(F32 dt);
void zNPCSleepy_Timestep(F32 dt);
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

void zNPCRobot_Timestep(float dt)
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

    if (xNPCBasic::SelfType() != 'NTR:')
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

void ZNPC_AnimTable_RobotBase(xAnimTable*);

void ZNPC_AnimTable_RobotBase(xAnimTable* table)
{
    int ourAnims[17] =
    {
        0x01,
        0x03,
        0x02,
        0x04,
        0x05,
        0x07,
        0x08,
        0x17,
        0x09,
        0x0a,
        0x14,
        0x16,
        0x15,
        0x25,
        0x26,
        0x06,
        0x00
    };

    xAnimTableNewState(table, g_strz_roboanim[0x01], 0x110, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_roboanim[0x03], 0x010, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_roboanim[0x02], 0x020, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_roboanim[0x04], 0x020, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_roboanim[0x05], 0x020, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);

    xAnimTableNewState(table, g_strz_roboanim[0x14], 0x010, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_roboanim[0x16], 0x010, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_roboanim[0x15], 0x010, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);

    xAnimTableNewState(table, g_strz_roboanim[0x25], 0x00, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_roboanim[0x26], 0x00, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);

    xAnimTableNewState(table, g_strz_roboanim[0x06], 0x020, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_roboanim[0x07], 0x020, 0x2000000, 1.0f, NULL, NULL, 0.0f, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_roboanim[0x08], 0x010, 0x2000000, 1.0f, NULL, NULL, 0.0f, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);

    xAnimTableNewState(table, g_strz_roboanim[0x17], 0x010, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);

    xAnimTableNewState(table, g_strz_roboanim[0x09], 0x020, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_roboanim[0x0a], 0x010, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);

    NPCC_BuildStandardAnimTran(table, g_strz_roboanim, ourAnims, 1, 0.2f);

    xAnimTableNewTransition(table, g_strz_roboanim[0x07], g_strz_roboanim[0x08], NULL, NULL, 0x10, 0, 0.0f, 0.0f, 0, 0, 0.2f, NULL);
    xAnimTableNewTransition(table, g_strz_roboanim[0x09], g_strz_roboanim[0x0a], NULL, NULL, 0x10, 0, 0.0f, 0.0f, 0, 0, 0.2f, NULL);
    xAnimTableNewTransition(table, g_strz_roboanim[0x14], g_strz_roboanim[0x25], NULL, NULL, 0x10, 0, 0.0f, 0.0f, 0, 0, 0.2f, NULL);
    xAnimTableNewTransition(table, g_strz_roboanim[0x16], g_strz_roboanim[0x25], NULL, NULL, 0x10, 0, 0.0f, 0.0f, 0, 0, 0.2f, NULL);
    xAnimTableNewTransition(table, g_strz_roboanim[0x15], g_strz_roboanim[0x25], NULL, NULL, 0x10, 0, 0.0f, 0.0f, 0, 0, 0.2f, NULL);

}

xAnimTable* ZNPC_AnimTable_Fodder()
{
    int ourAnims[16] =
    {
        0x01,
        0x03,
        0x02,
        0x04,
        0x05,
        0x22,
        0x23,
        0x24,
        0x0e,
        0x14,
        0x16,
        0x15,
        0x25,
        0x26,
        0x06,
        0x00
    };

    xAnimTable *pxVar1 = (xAnimTable *)xAnimTableNew(stringBase + 0x221, NULL, 0); // "zNPCFodder"

    xAnimTableNewState(pxVar1, g_strz_roboanim[0x01], 0x110, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(pxVar1, g_strz_roboanim[0x03], 0x010, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(pxVar1, g_strz_roboanim[0x02], 0x020, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(pxVar1, g_strz_roboanim[0x04], 0x020, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(pxVar1, g_strz_roboanim[0x05], 0x020, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(pxVar1, g_strz_roboanim[0x22], 0x020, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(pxVar1, g_strz_roboanim[0x23], 0x010, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(pxVar1, g_strz_roboanim[0x24], 0x020, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(pxVar1, g_strz_roboanim[0x0e], 0x020, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(pxVar1, g_strz_roboanim[0x14], 0x010, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(pxVar1, g_strz_roboanim[0x16], 0x010, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(pxVar1, g_strz_roboanim[0x15], 0x010, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(pxVar1, g_strz_roboanim[0x25], 0x000, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(pxVar1, g_strz_roboanim[0x26], 0x000, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(pxVar1, g_strz_roboanim[0x06], 0x020, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);

    NPCC_BuildStandardAnimTran(pxVar1, g_strz_roboanim, ourAnims, 1, 0.2f);

    xAnimTableNewTransition(pxVar1, g_strz_roboanim[0x14], g_strz_roboanim[0x25], NULL, NULL, 0x10, 0, 0.0f, 0.0f, 0, 0, 0.2f, NULL);
    xAnimTableNewTransition(pxVar1, g_strz_roboanim[0x16], g_strz_roboanim[0x25], NULL, NULL, 0x10, 0, 0.0f, 0.0f, 0, 0, 0.2f, NULL);
    xAnimTableNewTransition(pxVar1, g_strz_roboanim[0x15], g_strz_roboanim[0x25], NULL, NULL, 0x10, 0, 0.0f, 0.0f, 0, 0, 0.2f, NULL);
    xAnimTableNewTransition(pxVar1, g_strz_roboanim[0x22], g_strz_roboanim[0x23], NULL, NULL, 0x10, 0, 0.0f, 0.0f, 0, 0, 0.2f, NULL);

    return pxVar1;
}

xAnimTable* ZNPC_AnimTable_Hammer()
{
    int ourAnims[6] =
    {
        0x0e,
        0x18,
        0x19,
        0x1a,
        0x1b,
        0x00,
    };

    xAnimTable *pxVar1 = xAnimTableNew(stringBase + 0x22c, NULL, 0); // "zNPCHammer"
    ZNPC_AnimTable_RobotBase(pxVar1);

    xAnimTableNewState(pxVar1, g_strz_roboanim[0x0e], 0x020, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(pxVar1, g_strz_roboanim[0x18], 0x020, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(pxVar1, g_strz_roboanim[0x19], 0x010, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(pxVar1, g_strz_roboanim[0x1a], 0x020, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(pxVar1, g_strz_roboanim[0x1b], 0x010, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);

    NPCC_BuildStandardAnimTran(pxVar1, g_strz_roboanim, ourAnims, 1, 0.2f);

    xAnimTableNewTransition(pxVar1, g_strz_roboanim[0x18], g_strz_roboanim[0x19], NULL, NULL, 0x10, 0, 0.0f, 0.0f, 0, 0, 0.2f, NULL);
    xAnimTableNewTransition(pxVar1, g_strz_roboanim[0x1a], g_strz_roboanim[0x1b], NULL, NULL, 0x10, 0, 0.0f, 0.0f, 0, 0, 0.2f, NULL);

    return pxVar1;
}

xAnimTable* ZNPC_AnimTable_TarTar()
{
    int ourAnims[4] =
    {
        0x0c,
        0x11,
        0x0e,
        0x00
    };

    xAnimTable *pxVar1 = xAnimTableNew(stringBase + 0x237, NULL, 0); // "zNPCTarTar"
    ZNPC_AnimTable_RobotBase(pxVar1);

    xAnimTableNewState(pxVar1, g_strz_roboanim[0x0c], 0x010, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(pxVar1, g_strz_roboanim[0x11], 0x020, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(pxVar1, g_strz_roboanim[0x0e], 0x020, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);

    NPCC_BuildStandardAnimTran(pxVar1, g_strz_roboanim, ourAnims, 1, 0.2f);

    xAnimTableNewTransition(pxVar1, g_strz_roboanim[0x11], g_strz_roboanim[0x0e], NULL, NULL, 0x10, 0, 0.0f, 0.0f, 0, 0, 0.2f, NULL);
    xAnimTableNewTransition(pxVar1, g_strz_roboanim[0x0e], g_strz_roboanim[0x0c], NULL, NULL, 0x10, 0, 0.0f, 0.0f, 0, 0, 0.2f, NULL);
    xAnimTableNewTransition(pxVar1, g_strz_roboanim[0x04], g_strz_roboanim[0x0c], NULL, NULL, 0x10, 0, 0.0f, 0.0f, 0, 0, 0.2f, NULL);

    return pxVar1;
}

xAnimTable* ZNPC_AnimTable_TTSauce()
{
    int ourAnims[6] =
    {
        0x0e,
        0x18,
        0x19,
        0x1a,
        0x1b,
        0x00,
    };

    xAnimTable *pxVar1 = (xAnimTable *)xAnimTableNew(stringBase + 0x242, NULL, 0); // "TarTarSauce"

    xAnimTableNewState(pxVar1, g_strz_ttsanim[1], 0x010, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);

    return pxVar1;
}

xAnimTable* ZNPC_AnimTable_GLove()
{
    int ourAnims[8] =
    {
        0x18,
        0x19,
        0x1a,
        0x1b,
        0x11,
        0x12,
        0x13,
        0x00,
    };

    xAnimTable *pxVar1 = (xAnimTable *)xAnimTableNew(stringBase + 0x24e, NULL, 0); // "zNPCGlove"
    ZNPC_AnimTable_RobotBase(pxVar1);

    xAnimTableNewState(pxVar1, g_strz_roboanim[0x11], 0x20, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(pxVar1, g_strz_roboanim[0x12], 0x10, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(pxVar1, g_strz_roboanim[0x13], 0x20, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(pxVar1, g_strz_roboanim[0x18], 0x20, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(pxVar1, g_strz_roboanim[0x19], 0x10, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(pxVar1, g_strz_roboanim[0x1a], 0x20, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(pxVar1, g_strz_roboanim[0x1b], 0x10, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);

    NPCC_BuildStandardAnimTran(pxVar1, g_strz_roboanim, ourAnims, 1, 0.2f);

    xAnimTableNewTransition(pxVar1, g_strz_roboanim[0x1a], g_strz_roboanim[0x1b], NULL, NULL, 0x10, 0, 0.0f, 0.0f, 0, 0, 0.2f, NULL);
    xAnimTableNewTransition(pxVar1, g_strz_roboanim[0x11], g_strz_roboanim[0x12], NULL, NULL, 0x10, 0, 0.0f, 0.0f, 0, 0, 0.2f, NULL);
    xAnimTableNewTransition(pxVar1, g_strz_roboanim[0x18], g_strz_roboanim[0x19], NULL, NULL, 0x10, 0, 0.0f, 0.0f, 0, 0, 0.2f, NULL);

    return pxVar1;
}

xAnimTable* ZNPC_AnimTable_Monsoon()
{
    int ourAnims[5] =
    {
        0x0c,
        0x0d,
        0x11,
        0x12,
        0x00
    };

    xAnimTable *pxVar1 = xAnimTableNew(stringBase + 0x258, NULL, 0); // "zNPCMonsoon"
    ZNPC_AnimTable_RobotBase(pxVar1);

    xAnimTableNewState(pxVar1, g_strz_roboanim[0x0c], 0x020, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(pxVar1, g_strz_roboanim[0x0d], 0x020, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(pxVar1, g_strz_roboanim[0x11], 0x020, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(pxVar1, g_strz_roboanim[0x12], 0x010, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);

    NPCC_BuildStandardAnimTran(pxVar1, g_strz_roboanim, ourAnims, 1, 0.2f);

    xAnimTableNewTransition(pxVar1, g_strz_roboanim[0x11], g_strz_roboanim[0x12], NULL, NULL, 0x10, 0, 0.0f, 0.0f, 0, 0, 0.2f, NULL);

    return pxVar1;
}

xAnimTable* ZNPC_AnimTable_ThunderCloud()
{
    int ourAnims[3] =
    {
        0x01,
        0x02,
        0x00
    };

    xAnimTable *pxVar1 = xAnimTableNew(stringBase + 0x264, NULL, 0); // "ThunderCloud"

    xAnimTableNewState(pxVar1, g_strz_roboanim[0x01], 0x010, 1, 1.0f, NULL, NULL, 0.0f, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(pxVar1, g_strz_roboanim[0x02], 0x010, 1, 1.0f, NULL, NULL, 0.0f, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);

    NPCC_BuildStandardAnimTran(pxVar1, g_strz_roboanim, ourAnims, 1, 0.2f);

    return pxVar1;
}

xAnimTable* ZNPC_AnimTable_NightLight()
{
    int ourAnims[2] =
    {
        0x01,
        0x00
    };

    xAnimTable* pxVar1 = xAnimTableNew(stringBase + 0x271, NULL, 0); // "NightLight"

    xAnimTableNewState(pxVar1, g_strz_nytlytanim[1], 0x010, 1, 1.0f, NULL, NULL, 0.0f, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);

    NPCC_BuildStandardAnimTran(pxVar1, g_strz_nytlytanim, ourAnims, 1, 0.2f);

    return pxVar1;
}

// Regalloc
xAnimTable* ZNPC_AnimTable_SleepyTime()
{
    int ourAnims[3] =
    {
        0x0c,
        0x0e,
        0x00
    };

    xAnimTable* pxVar1 = xAnimTableNew(stringBase + 0x27c, NULL, 0); // "zNPCSleepy"
    ZNPC_AnimTable_RobotBase(pxVar1);

    xAnimTableNewState(pxVar1, g_strz_roboanim[0x0c], 0x010, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(pxVar1, g_strz_roboanim[0x0e], 0x010, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);

    NPCC_BuildStandardAnimTran(pxVar1, g_strz_roboanim, ourAnims, 1, 0.2f);

    return pxVar1;
}

xAnimTable* ZNPC_AnimTable_ArfDog()
{
    int ourAnims[17] =
    {
        0x01,
        0x03,
        0x02,
        0x04,
        0x05,
        0x20,
        0x21,
        0x0c,
        0x0d,
        0x12,
        0x14,
        0x16,
        0x15,
        0x25,
        0x26,
        0x06,
        0x00
    };

    xAnimTable *pxVar1 = (xAnimTable *)xAnimTableNew(stringBase + 0x287, NULL, 0); // "zNPCArfDog"

    xAnimTableNewState(pxVar1, g_strz_roboanim[0x01], 0x110, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(pxVar1, g_strz_roboanim[0x03], 0x010, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(pxVar1, g_strz_roboanim[0x02], 0x020, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(pxVar1, g_strz_roboanim[0x04], 0x010, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(pxVar1, g_strz_roboanim[0x05], 0x010, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(pxVar1, g_strz_roboanim[0x20], 0x010, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(pxVar1, g_strz_roboanim[0x21], 0x020, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(pxVar1, g_strz_roboanim[0x0c], 0x010, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(pxVar1, g_strz_roboanim[0x0d], 0x010, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(pxVar1, g_strz_roboanim[0x12], 0x010, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(pxVar1, g_strz_roboanim[0x14], 0x010, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(pxVar1, g_strz_roboanim[0x16], 0x010, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(pxVar1, g_strz_roboanim[0x15], 0x010, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(pxVar1, g_strz_roboanim[0x25], 0x000, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(pxVar1, g_strz_roboanim[0x26], 0x000, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(pxVar1, g_strz_roboanim[0x06], 0x020, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);

    NPCC_BuildStandardAnimTran(pxVar1, g_strz_roboanim, ourAnims, 1, 0.2f);

    return pxVar1;
}

xAnimTable* ZNPC_AnimTable_ArfArf()
{
    int ourAnims[7] =
    {
        0x0e,
        0x0f,
        0x10,
        0x1d,
        0x1e,
        0x1f,
        0x00
    };

    xAnimTable *pxVar1 = xAnimTableNew(stringBase + 0x292, NULL, 0); // "zNPCArfArf"
    ZNPC_AnimTable_RobotBase(pxVar1);

    xAnimTableNewState(pxVar1, g_strz_roboanim[0x0e], 0x20, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(pxVar1, g_strz_roboanim[0x0f], 0x20, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(pxVar1, g_strz_roboanim[0x10], 0x20, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(pxVar1, g_strz_roboanim[0x1d], 0x20, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(pxVar1, g_strz_roboanim[0x1e], 0x00, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(pxVar1, g_strz_roboanim[0x1f], 0x20, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);

    NPCC_BuildStandardAnimTran(pxVar1, g_strz_roboanim, ourAnims, 1, 0.2f);

    xAnimTableNewTransition(pxVar1, g_strz_roboanim[0x1d], g_strz_roboanim[0x1e], NULL, NULL, 0x10, 0, 0.0f, 0.0f, 0, 0, 0.2f, NULL);

    return pxVar1;
}

xAnimTable* ZNPC_AnimTable_Chuck()
{
    int ourAnims[4] =
    {
        0x0c,
        0x0d,
        0x0e,
        0x00
    };

    xAnimTable *pxVar1 = xAnimTableNew(stringBase + 0x29d, NULL, 0); // "zNPCChuck"
    ZNPC_AnimTable_RobotBase(pxVar1);

    xAnimTableNewState(pxVar1, g_strz_roboanim[0x0c], 0x110, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(pxVar1, g_strz_roboanim[0x0d], 0x110, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(pxVar1, g_strz_roboanim[0x0e], 0x020, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);

    NPCC_BuildStandardAnimTran(pxVar1, g_strz_roboanim, ourAnims, 1, 0.2f);

    xAnimTableNewTransition(pxVar1, g_strz_roboanim[0x0e], g_strz_roboanim[0x0c], NULL, NULL, 0x10, 0, 0.0f, 0.0f, 0, 0, 0.2f, NULL);
    xAnimTableNewTransition(pxVar1, g_strz_roboanim[0x04], g_strz_roboanim[0x0c], NULL, NULL, 0x10, 0, 0.0f, 0.0f, 0, 0, 0.2f, NULL);
    xAnimTableNewTransition(pxVar1, g_strz_roboanim[0x04], g_strz_roboanim[0x0c], NULL, NULL, 0x10, 0, 0.0f, 0.0f, 0, 0, 0.2f, NULL);

    return pxVar1;
}

// Regalloc
xAnimTable* ZNPC_AnimTable_Tubelet()
{
    int ourAnims[2] =
    {
        0x0e,
        0x00
    };

    xAnimTable *pxVar1 = xAnimTableNew(stringBase + 0x2a7, NULL, 0); // "zNPCTubelet"
    ZNPC_AnimTable_RobotBase(pxVar1);

    xAnimTableNewState(pxVar1, g_strz_roboanim[0x0e], 0x10, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    NPCC_BuildStandardAnimTran(pxVar1, g_strz_roboanim, ourAnims, 1, 0.2f);

    return pxVar1;
}

char* g_strz_flotanim[2];

xAnimTable* ZNPC_AnimTable_FloatDevice()
{
    xAnimTable *pxVar1 = xAnimTableNew(stringBase + 0x2b3, NULL, 0); // "FloatDevice"
    xAnimTableNewState(pxVar1, g_strz_flotanim[0x01], 0x10, 1, 1.0f, NULL, NULL, 0.0f, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);

    return pxVar1;
}

xAnimTable* ZNPC_AnimTable_SlickShield()
{
    xAnimTable *pxVar1 = xAnimTableNew(stringBase + 0x2c6, NULL, 0); // "SlickBubbleShield"
    xAnimTableNewState(pxVar1, g_strz_shieldanim[0x01], 0x10, 1, 1.0f, NULL, NULL, 0.0f, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);

    return pxVar1;
}

xAnimTable* ZNPC_AnimTable_Slick()
{
    int ourAnims[4] =
    {
        0x11,
        0x12,
        0x13,
        0x00
    };

    xAnimTable *pxVar1 = xAnimTableNew(stringBase + 0x2d8, NULL, 0); // "zNPCSlick"

    ZNPC_AnimTable_RobotBase(pxVar1);

    xAnimTableNewState(pxVar1, g_strz_roboanim[0x11], 0x020, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(pxVar1, g_strz_roboanim[0x12], 0x010, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(pxVar1, g_strz_roboanim[0x13], 0x020, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);

    NPCC_BuildStandardAnimTran(pxVar1, g_strz_roboanim, ourAnims, 1, 0.2f);

    xAnimTableNewTransition(pxVar1, g_strz_roboanim[0x11], g_strz_roboanim[0x12], NULL, NULL, 0x10, 0, 0.0f, 0.0f, 0, 0, 0.2f, NULL);

    return pxVar1;
}

#if 0
// Would work if IsDying() returned bool.
// Some code relies on IsDying() returning S32, though.
// e.g. zNPCRobot::NewTime
bool zNPCTubelet::IsDying()
{
    return tubestat == TUBE_STAT_DEAD;
}
#endif

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

void zNPCTubeSlave::Reset()
{
    zNPCRobot::Reset();
    flags |= 0x40;
    zNPCTubeSlave::WeGotAGig();
}

U32 g_hash_roboanim[41];

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

S32 xEntIsEnabled(xEnt* ent)
{
    return xBaseIsEnabled((xBase*)ent) & 0xff;
}

void xMat3x3RMulVec(xVec3* o, const xMat3x3* m, const xVec3* v)
{
    F32 x = m->right.x * v->x + m->up.x * v->y + m->at.x * v->z;
    F32 y = m->right.y * v->x + m->up.y * v->y + m->at.y * v->z;
    F32 z = m->right.z * v->x + m->up.z * v->y + m->at.z * v->z;

    o->x = x;
    o->y = y;
    o->z = z;
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
