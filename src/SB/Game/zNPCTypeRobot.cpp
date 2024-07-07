#include "zNPCTypeRobot.h"

#include "zNPCGoalRobo.h"
#include "zNPCTypes.h"
#include "zNPCGoalStd.h"

#include "xFactory.h"

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
extern F32 zNPCRobot_f_0_0;
extern F32 zNPCRobot_f_1_0;

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

void test(S32 a)
{
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
