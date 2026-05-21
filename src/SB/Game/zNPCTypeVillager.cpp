#include "zNPCTypeVillager.h"

#include "xBehaveMgr.h"
#include "xJaw.h"
#include "xMathInlines.h"
#include "zGameExtras.h"
#include "zGlobals.h"
#include "zNPCGoalVillager.h"
#include "zNPCSupplement.h"
#include "zNPCGoals.h"
#include "zRenderState.h"
#include "xDebug.h"
#include "xUtil.h"

#define Unknown 0
#define Idle01 1
#define Move01 2
#define Hurt01 3
#define Yawn01 4
#define Talk01 5
#define Flee01 6
#define Fear01 7
#define Pray01 8
#define Clap01 9
#define Special01 10
#define Ride01 11
#define Bump01 12
#define Fall01 13
#define Land01 14
#define Weep01 15
#define Swim01 16
#define Idle02 17
#define Idle03 18
#define Idle04 19
#define Yawn02 20
#define Yawn03 21
#define Yawn04 22
#define Talk02 23
#define Talk03 24
#define Talk04 25

U32 g_hash_folkanim[26] = {};

zParEmitter* g_pemit_aqualeak;
static xParEmitterCustomSettings g_parf_aqualeak;

char* g_strz_folkanim[26] = {
    "Unknown", "Idle01",    "Move01", "Hurt01", "Yawn01", "Talk01", "Flee01", "Fear01", "Pray01",
    "Clap01",  "Special01", "Ride01", "Bump01", "Fall01", "Land01", "Weep01", "Swim01", "Idle02",
    "Idle03",  "Idle04",    "Yawn02", "Yawn03", "Yawn04", "Talk02", "Talk03", "Talk04",
};

static U32 g_hash_platanim[2] = {};
static char* g_strz_platanim[2] = { "fish_d_balloon_move", "fish_d_balloon_hit" };

xEnt* CruiseBubbleDoesBubbleBuddyToo;
static U32 bb_env_texture;
static U32 bb_fresnel_texture;
F32 g_vilg_ds2_playernear = 25.0f;
static F32 g_rad_cowercheck = 15.0f;

// Not sure why these are declared here but the data sections want it
RwRaster* zNPCBalloonBoy::rast_shadBalloon;
U32 zNPCBubbleBuddy::aid_fresnelTxtr;
U32 zNPCBubbleBuddy::aid_enviroTxtr;
RwTexture* zNPCBubbleBuddy::txtr_fresnel;
RwTexture* zNPCBubbleBuddy::txtr_enviro;
RwRaster* zNPCBubbleBuddy::rast_fresnel;
RwRaster* zNPCBubbleBuddy::rast_enviro;
F32 zNPCBubbleBuddy::alf_currBubBud = 1.0f;

void ZNPC_Villager_Startup()
{
    S32 i;

    for (i = 0; i < 26; i++)
    {
        g_hash_folkanim[i] = xStrHash(g_strz_folkanim[i]);
    }

    for (i = 0; i < 2; i++)
    {
        g_hash_platanim[i] = xStrHash(g_strz_platanim[i]);
    }
}

void ZNPC_Villager_Shutdown()
{
}

void zNPCVillager_ScenePrepare()
{
}

void zNPCVillager_SceneFinish()
{
    FOLK_KillEffects();
}

void zNPCVillager_SceneReset()
{
}

void zNPCVillager_ScenePostInit()
{
    FOLK_InitEffects();
}

void zNPCVillager_SceneTimestep(xScene* xscn, F32 dt)
{
    zNPCBubbleBuddy_AlphaUpdate(dt);
}

xFactoryInst* ZNPC_Create_Villager(S32 who, RyzMemGrow* growCtxt, void*)
{
    zNPCVillager* vil;

    switch (who)
    {
    case NPC_TYPE_VILLAGER:
    {
        vil = new (who, growCtxt) zNPCVillager(who);
        break;
    }
    case NPC_TYPE_FISH:
    case NPC_TYPE_FISH_MALE:
    case NPC_TYPE_FISH_FEMALE:
    case NPC_TYPE_FISH_ELDER:
    case NPC_TYPE_FISH_ELDESS:
    case NPC_TYPE_FISH_BOY:
    case NPC_TYPE_FISH_GIRL:
    case NPC_TYPE_GARY:
    case NPC_TYPE_SQUIDWARD:
    case NPC_TYPE_SQUIDWARD_MUSIC:
    case NPC_TYPE_SQUIDWARD_BANDAID:
    case NPC_TYPE_DUTCHMAN_NSB:
    case NPC_TYPE_SANDYNPC:
    case NPC_TYPE_PATNPC:
    case NPC_TYPE_BOBNPC:
    case NPC_TYPE_PLANKNPC:
    case NPC_TYPE_MRKRABS:
    case NPC_TYPE_MSPUFFS:
    case NPC_TYPE_LARRY:
    case NPC_TYPE_MOTORIST:
    case NPC_TYPE_MERMAN:
    case NPC_TYPE_BARNACLEBOY:
    case NPC_TYPE_WORM:
    {
        vil = new (who, growCtxt) zNPCFish(who);
        break;
    }
    case NPC_TYPE_BUBBUDDY:
    {
        vil = new (who, growCtxt) zNPCBubbleBuddy(who);
        break;
    }
    case NPC_TYPE_BALLOONBOY:
    {
        vil = new (who, growCtxt) zNPCBalloonBoy(who);
        break;
    }
    case NPC_TYPE_SANDYBIKINI:
    {
        vil = new (who, growCtxt) zNPCSandyBikini(who);
        break;
    }
    case NPC_TYPE_MERMANCHAIR:
    {
        vil = new (who, growCtxt) zNPCMerManChair(who);
        break;
    }
    case NPC_TYPE_NEWSFISH:
    {
        vil = new (who, growCtxt) zNPCNewsFish(who);
        break;
    }
    case NPC_TYPE_NEWSFISHTV:
    {
        vil = new (who, growCtxt) zNPCNewsFishTV(who);
        break;
    }
    default:
    {
        vil = new (who, growCtxt) zNPCVillager(who);
        break;
    }
    }

    return vil;
}

void ZNPC_Destroy_Villager(xFactoryInst* inst)
{
    delete inst;
}

xAnimTable* ZNPC_AnimTable_Villager()
{
    return ZNPC_AnimTable_Villager(NULL);
}

xAnimTable* ZNPC_AnimTable_Villager(xAnimTable* callerTable)
{
    S32 ourAnims[11] = { Idle01, Move01, Hurt01, Yawn01,    Talk01, Flee01,
                         Fear01, Pray01, Clap01, Special01, Unknown };
    xAnimTable* table = callerTable;
    char** names = g_strz_folkanim;

    if (callerTable != NULL)
    {
        table = callerTable;
    }
    else
    {
        table = xAnimTableNew("zNPCVillager", NULL, 0x0);
    }

    xAnimTableNewState(table, names[Idle01], 0x10, 0x1, 1.0f, NULL, NULL, 0.0f, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, names[Move01], 0x10, 0x1, 1.0f, NULL, NULL, 0.0f, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, names[Hurt01], 0x20, 0x1, 1.0f, NULL, NULL, 0.0f, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, names[Yawn01], 0x20, 0x1, 1.0f, NULL, NULL, 0.0f, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, names[Talk01], 0x10, 0x1, 1.0f, NULL, NULL, 0.0f, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, names[Flee01], 0x10, 0x1, 1.0f, NULL, NULL, 0.0f, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, names[Fear01], 0x10, 0x1, 1.0f, NULL, NULL, 0.0f, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, names[Pray01], 0x20, 0x1, 1.0f, NULL, NULL, 0.0f, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, names[Clap01], 0x120, 0x1, 1.0f, NULL, NULL, 0.0f, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, names[Special01], 0x10, 0x1, 1.0f, NULL, NULL, 0.0f, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);

    NPCC_BuildStandardAnimTran(table, g_strz_folkanim, ourAnims, 1, 0.2f);

    xAnimTableNewTransition(table, names[Pray01], names[Fear01], NULL, NULL, 0x10, 0x0, 0.0f, 0.0f,
                            0, 0, 0.35f, NULL);

    return table;
}

xAnimTable* ZNPC_AnimTable_BalloonBoy()
{
    return ZNPC_AnimTable_BalloonBoy(NULL);
}

xAnimTable* ZNPC_AnimTable_BalloonBoy(xAnimTable* callerTable)
{
    S32 ourAnims[7] = { Ride01, Bump01, Fall01, Land01, Weep01, Swim01, Unknown };
    xAnimTable* table = callerTable;
    char** names = g_strz_folkanim;

    if (callerTable != NULL)
    {
        table = callerTable;
    }
    else
    {
        table = xAnimTableNew("zNPCBallonBoy", NULL, 0x0);
    }

    ZNPC_AnimTable_Villager(table);

    xAnimTableNewState(table, names[Ride01], 0x10, 0x1, 1.0f, NULL, NULL, 0.0f, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, names[Bump01], 0x20, 0x1, 1.0f, NULL, NULL, 0.0f, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, names[Fall01], 0x10, 0x1, 1.0f, NULL, NULL, 0.0f, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, names[Land01], 0x20, 0x1, 1.0f, NULL, NULL, 0.0f, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, names[Weep01], 0x10, 0x1, 1.0f, NULL, NULL, 0.0f, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, names[Swim01], 0x10, 0x1, 1.0f, NULL, NULL, 0.0f, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);

    NPCC_BuildStandardAnimTran(table, g_strz_folkanim, ourAnims, 1, 0.2f);

    xAnimTableNewTransition(table, names[Bump01], names[Ride01], NULL, NULL, 0x10, 0x0, 0.0f, 0.0f,
                            0, 0, 0.35f, NULL);
    xAnimTableNewTransition(table, names[Land01], names[Weep01], NULL, NULL, 0x10, 0x0, 0.0f, 0.0f,
                            0, 0, 0.35f, NULL);

    return table;
}

xAnimTable* ZNPC_AnimTable_SuperFriend()
{
    return ZNPC_AnimTable_SuperFriend(NULL);
}

xAnimTable* ZNPC_AnimTable_SuperFriend(xAnimTable* callerTable)
{
    S32 ourAnims[10] = { Idle02, Idle03, Idle04, Yawn02, Yawn03,
                         Yawn04, Talk02, Talk03, Talk04, Unknown };
    xAnimTable* table;
    char** names = g_strz_folkanim;

    if (callerTable != NULL)
    {
        table = callerTable;
    }
    else
    {
        table = xAnimTableNew("zNPCSuperFriend", NULL, 0x0);
    }

    ZNPC_AnimTable_Villager(table);

    xAnimTableNewState(table, names[Idle02], 0x10, 0x1, 1.0f, NULL, NULL, 0.0f, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, names[Idle03], 0x10, 0x1, 1.0f, NULL, NULL, 0.0f, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, names[Idle04], 0x10, 0x1, 1.0f, NULL, NULL, 0.0f, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, names[Yawn02], 0x20, 0x1, 1.0f, NULL, NULL, 0.0f, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, names[Yawn03], 0x20, 0x1, 1.0f, NULL, NULL, 0.0f, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, names[Yawn04], 0x20, 0x1, 1.0f, NULL, NULL, 0.0f, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, names[Talk02], 0x10, 0x1, 1.0f, NULL, NULL, 0.0f, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, names[Talk03], 0x10, 0x1, 1.0f, NULL, NULL, 0.0f, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, names[Talk04], 0x10, 0x1, 1.0f, NULL, NULL, 0.0f, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);

    NPCC_BuildStandardAnimTran(table, g_strz_folkanim, ourAnims, 1, 0.35f);

    xAnimTableNewTransition(table, names[Yawn02], names[Idle02], NULL, NULL, 0x10, 0x0, 0.0f, 0.0f,
                            0, 0, 0.35f, NULL);
    xAnimTableNewTransition(table, names[Yawn03], names[Idle03], NULL, NULL, 0x10, 0x0, 0.0f, 0.0f,
                            0, 0, 0.35f, NULL);
    xAnimTableNewTransition(table, names[Yawn04], names[Idle04], NULL, NULL, 0x10, 0x0, 0.0f, 0.0f,
                            0, 0, 0.35f, NULL);

    return table;
}

U8 zNPCVillager::ColChkFlags() const
{
    S32 flags = 0x3E;
    flags &= ~0x8;

    if (globals.sceneCur->sceneID == 'B101') // Poseidome
    {
        flags = 0;
    }
    else if (this->npcset.reduceCollide != 0)
    {
        flags &= ~0x6;
    }
    else if ((this->flg_move & 4) != 0)
    {
        flags &= ~0x6;
    }

    return flags;
}

U8 zNPCVillager::ColPenFlags() const
{
    S32 flags = 0x3E;
    flags &= ~0x8;

    if (globals.sceneCur->sceneID == 'B101') // Poseidome
    {
        flags = 0;
    }
    else if (this->npcset.reduceCollide != 0)
    {
        flags &= ~0x6;
    }
    else if ((this->flg_move & 4) != 0)
    {
        flags &= ~0x6;
    }

    return flags;
}

U8 zNPCVillager::PhysicsFlags() const
{
    S32 flags = 0;
    S32 pflags = 0;
    if (flg_move & 0x6)
    {
        flags |= 3;
    }
    pflags = flags * -5;
    if (flg_move & 0x2)
    {
        pflags = flags |= 4;
    }

    return pflags;
}

void zNPCVillager::Init(xEntAsset* asset)
{
    zNPCCommon::Init(asset);
    zNPCCommon::flg_move = 10;
    zNPCCommon::flg_vuln = 0;
}

void zNPCVillager::Reset()
{
    NPCConfig* cfg;

    zNPCCommon::Reset();

    if (this->psy_instinct != NULL)
    {
        this->psy_instinct->GoalSet(NPC_GOAL_IDLE, 1);
    }

    cfg = this->cfg_npc;
    if (cfg->dst_castShadow < 0.0f)
    {
        cfg->dst_castShadow = 0.25f;
    }

    cfg = this->cfg_npc;
    if (cfg != NULL && cfg->rad_shadowCache < 0.0f)
    {
        cfg->rad_shadowCache = this->GenShadCacheRad();
    }
}

void zNPCVillager::ParseINI()
{
    zNPCCommon::ParseINI();
    cfg_npc->snd_traxShare = g_sndTrax_Villager;
    NPCS_SndTablePrepare(g_sndTrax_Villager);
    zNPCVillager::ParseNonRandTalk();
}

void zNPCVillager::ParseNonRandTalk()
{
    NPCConfig* cfg = this->cfg_npc;
    cfg->talk_filter_size = 0;
    F32 non_choices[4] = { 0.0f, 0.0f, 0.0f, 0.0f };

    S32 found = zParamGetFloatList(this->parmdata, this->pdatsize, "NonRandomTalkAnims", 4,
                                   non_choices, non_choices);

    for (S32 i = 0; i < 4; i++)
    {
        U8 skip = 0;
        for (S32 j = 0; j < found; j++)
        {
            S32 choice_val = (S32)non_choices[j] - 1;
            if (choice_val == i)
            {
                skip = 1;
                break;
            }
        }

        if (!skip)
        {
            cfg->talk_filter[cfg->talk_filter_size] = i;
            cfg->talk_filter_size++;
        }
    }

    if (cfg->talk_filter_size == 0)
    {
        cfg->talk_filter[0] = 0;
        cfg->talk_filter_size = 1;
    }
}

void zNPCVillager::Process(xScene* xscn, F32 dt)
{
    zNPCVillager::ChkCheatSize();
    if (psy_instinct != 0)
    {
        this->psy_instinct->Timestep(dt, NULL);
    }
    zNPCCommon::Process(xscn, dt);
}

void zNPCVillager::ChkCheatSize()
{
    S32 cheats;

    cheats = zGameExtras_CheatFlags();

    if ((cheats & 0xd0000) == 0)
    {
        return;
    }

    S32 npcType = this->SelfType();

    switch (npcType)
    {
    case NPC_TYPE_PLANKNPC:
        if ((cheats & 0x10000) != 0)
        {
            this->cfg_npc->scl_model.assign(2.5f);
            this->flg_misc |= 4;
        }
        break;

    case NPC_TYPE_FISH:
    case NPC_TYPE_FISH_MALE:
    case NPC_TYPE_FISH_FEMALE:
    case NPC_TYPE_FISH_ELDER:
    case NPC_TYPE_FISH_ELDESS:
    case NPC_TYPE_VILLAGER:
        if ((cheats & 0x40000) != 0)
        {
            this->cfg_npc->scl_model.assign(0.7f);
            this->flg_misc |= 4;
        }
        break;

    case NPC_TYPE_SQUIDWARD:
    case NPC_TYPE_SQUIDWARD_MUSIC:
    case NPC_TYPE_SQUIDWARD_BANDAID:
    case NPC_TYPE_SANDYNPC:
    case NPC_TYPE_PATNPC:
    case NPC_TYPE_BOBNPC:
    case NPC_TYPE_MRKRABS:
    case NPC_TYPE_MSPUFFS:
    case NPC_TYPE_LARRY:
    case NPC_TYPE_BUBBUDDY:
    case NPC_TYPE_MERMAN:
    case NPC_TYPE_BARNACLEBOY:
        if ((cheats & 0x80000) != 0)
        {
            this->cfg_npc->scl_model.assign(0.6f);
            this->flg_misc |= 4;
        }
        break;

    case NPC_TYPE_GARY:
    case NPC_TYPE_SANDYBIKINI:
    case NPC_TYPE_MERMANCHAIR:
        break;
    }
}
void zNPCVillager::CollideReview()
{
    zNPCGoalCommon* goal;
    S32 goaldidit;

    goaldidit = 0;
    goal = (zNPCGoalCommon*)this->psy_instinct->GetCurGoal();
    if ((goal != NULL) && ((goal->flg_npcgable & 1) != 0))
    {
        goal->Name();
        goaldidit = goal->CollReview(0);
    }
    if (goaldidit == 0)
    {
        zNPCCommon::CollideReview();
    }
    return;
}

void zNPCVillager::SelfSetup()
{
    xBehaveMgr* bmgr = xBehaveMgr_GetSelf();
    this->psy_instinct = bmgr->Subscribe(this, 0);
    xPsyche* psy = this->psy_instinct;

    psy->BrainBegin();
    this->AddBaseline(psy, FOLK_grul_goAlert, FOLK_grul_goAlert, FOLK_grul_goAlert,
                      FOLK_grul_goAlert, NULL);
    this->AddScripting(psy, NULL, NULL, NULL, NULL, NULL, NULL, NULL);
    this->AddTalking(psy, NULL, NULL, NULL, NULL);
    psy->AddGoal(NPC_GOAL_HURT, NULL);
    psy->BrainEnd();
    psy->SetSafety(NPC_GOAL_IDLE);
}

U32 zNPCVillager::AnimPick(S32 gid, en_NPC_GOAL_SPOT gspot, xGoal* goal)
{
    S32 idx;
    U32 da_anim = 0;

    switch (gid)
    {
    case NPC_GOAL_IDLE:
    case NPC_GOAL_WAITING:
    case NPC_GOAL_NOMANLAND:
    case NPC_GOAL_LIMBO:
    {
        S32 superfolk = !strcmp("zNPCSuperFriend", this->model->Anim->Table->Name);
        static S32 choices[4] = { 1, 0x11, 0x12, 0x13 };

        if (!superfolk)
        {
            idx = 1;
        }
        else
        {
            idx = xUtil_choose(choices, 4, 0);
        }
        break;
    }

    case NPC_GOAL_WANDER:
    case NPC_GOAL_PATROL:
        if (gspot == 0x26)
            idx = 4;
        else
            idx = 2;
        break;

    case NPC_GOAL_FIDGET:
    {
        S32 superfolk = !strcmp("zNPCSuperFriend", this->model->Anim->Table->Name);
        S32 choices[4] = { 4, 0x14, 0x15, 0x16 };

        if (!superfolk)
        {
            idx = 4;
        }
        else
        {
            idx = xUtil_choose(choices, 4, 0);
        }
        break;
    }

    case NPC_GOAL_PLAYERNEAR:
    {
        if (gspot == 0x23)
        {
            S32 superfolk = !strcmp("zNPCSuperFriend", this->model->Anim->Table->Name);
            S32 choices[4] = { 4, 0x14, 0x15, 0x16 };

            if (!superfolk)
            {
                idx = 4;
            }
            else
            {
                idx = xUtil_choose(choices, 4, 0);
            }
        }
        else
        {
            idx = 1;
        }
        break;
    }

    case NPC_GOAL_TALK:
    case NPC_GOAL_CHATTER:
    case NPC_GOAL_SPEAK:
    {
        S32 superfolk = !strcmp("zNPCSuperFriend", this->model->Anim->Table->Name);

        if (!superfolk)
        {
            idx = 5;
        }
        else
        {
            idx = this->current_talk_anim;
            static S32 choices[4] = { 0x05, 0x17, 0x18, 0x19 };

            if (idx < 0 || idx > 3)
            {
                U32 which = xrand();
                idx = choices[this->cfg_npc
                                  ->talk_filter[(which >> 13) % this->cfg_npc->talk_filter_size]];
            }
            else
            {
                idx = choices[idx];
            }
        }
        break;
    }
    case NPC_GOAL_CHEER:
        idx = 9;
        break;
    case NPC_GOAL_HURT:
        idx = 3;
        break;
    default:
        idx = 1;
        break;
    }

    if (idx >= 0)
    {
        da_anim = g_hash_folkanim[idx];
    }

    return da_anim;
}

S32 zNPCVillager::NPCMessage(NPCMsg* mail)
{
    S32 handled;
    xPsyche* psy = this->psy_instinct;
    zNPCGoalCommon* curgoal;
    zNPCGoalCommon* recgoal;

    if (psy)
    {
        curgoal = (zNPCGoalCommon*)psy->GetCurGoal();
        if (curgoal)
        {
            handled = curgoal->NPCMessage(mail);
            if (handled)
                return handled;
        }

        recgoal = (zNPCGoalCommon*)psy->GetPrevRecovery(0);
        if (recgoal && recgoal != curgoal)
        {
            handled = recgoal->NPCMessage(mail);
            if (handled)
                return handled;
        }
    }

    handled = this->FolkHandleMail(mail);
    if (!handled)
    {
        handled = zNPCCommon::NPCMessage(mail);
    }

    return handled;
}

// non-matching: register shenanigans
S32 zNPCVillager::FolkHandleMail(NPCMsg* mail)
{
    S32 handled = 1;

    xPsyche* psy = this->psy_instinct; // not in dwarf

    switch (mail->msgid)
    {
    case 3:
    {
        if (psy && !psy->GIDInStack(NPC_GOAL_CHEER))
        {
            if (!psy->GIDInStack(NPC_GOAL_HURT))
            {
                psy->GoalPush(NPC_GOAL_HURT, 0);
            }
        }
        break;
    }

    case 1:
        if (mail->sysevent.toEvent == 0x20e)
        {
            psy->GoalSet(NPC_GOAL_TALK, 0);
        }
        else if (mail->sysevent.toEvent == 0x1d9)
        {
            handled = zNPCCommon::NPCMessage(mail);
        }
        else if (mail->sysevent.toEvent == 0x1d8)
        {
            handled = zNPCCommon::NPCMessage(mail);
        }
        else
        {
            handled = zNPCCommon::NPCMessage(mail);
        }
        break;

    default:
        handled = 0;
        break;
    }

    return handled;
}

void zNPCVillager::SpeakBegin()
{
    psy_instinct->GoalSet(NPC_GOAL_SPEAK, 1);
}

void zNPCVillager::SpeakEnd()
{
    xPsyche* psy = psy_instinct;
    if ((psy->GIDInStack(NPC_GOAL_LIMBO) == 0))
    {
        S32 safetyGid = psy->GIDOfSafety();
        if (safetyGid != 0)
        {
            psy->GoalSet(safetyGid, 1);
        }
    }
}

void zNPCVillager::SpeakStart(U32 sndid, U32 sndhandle, S32 anim)
{
    this->current_talk_anim = anim;
    xGoal* goal = this->psy_instinct->GetCurGoal();
    switch (goal->GetID())
    {
    case NPC_GOAL_TALK:
    {
        zNPCGoalTalk* talkgoal = (zNPCGoalTalk*)goal;
        talkgoal->jawdata = xJaw_FindData(sndid);
        talkgoal->jawtime = 0.0f;
        talkgoal->tmr_cycleAnim = -1.0f;
        talkgoal->tmr_minTalk = -1.0f;
        break;
    }
    case NPC_GOAL_SPEAK:
    {
        zNPCGoalSpeak* talkgoal = (zNPCGoalSpeak*)goal;
        talkgoal->jawdata = xJaw_FindData(sndid);
        talkgoal->jawtime = 0.0f;
        talkgoal->tmr_cycleAnim = -1.0f;
        break;
    }
    }
}

void zNPCVillager::SpeakStop()
{
    xGoal* goal = this->psy_instinct->GetCurGoal();

    switch (goal->GetID())
    {
    case NPC_GOAL_TALK:
    {
        zNPCGoalTalk* talkgoal = (zNPCGoalTalk*)goal;
        talkgoal->jawdata = NULL;
        talkgoal->jawtime = 0.0f;
        break;
    }
    case NPC_GOAL_SPEAK:
    {
        zNPCGoalSpeak* talkgoal = (zNPCGoalSpeak*)goal;
        talkgoal->jawdata = NULL;
        talkgoal->jawtime = 0.0f;
        break;
    }
    }
}

S32 zNPCVillager::PlayerIsStaring()
{
    xVec3 vec;

    if (globals.player.ControlOff != 0)
    {
        return 0;
    }

    if ((U8)this->npcset.allowDetect == 0)
    {
        return 0;
    }

    F32 dy = 0.0f;
    F32 dSq = this->XZDstSqToPlayer(&vec, &dy);

    if (dy > 5.0f)
    {
        return 0;
    }

    if (dy < -2.0f)
    {
        return 0;
    }

    xEntNPCAsset* npcass = this->npcass;
    if (npcass->taskWidgetPrime != 0 || npcass->taskWidgetSecond != 0)
    {
        if (dSq > g_vilg_ds2_playernear * 4.0f)
        {
            return 0;
        }
    }
    else
    {
        if (dSq > g_vilg_ds2_playernear)
        {
            return 0;
        }
    }

    return 1;
}

void zNPCVillager::AddTalking(xPsyche* psy,
                              S32 (*eval_plyrnear)(xGoal*, void*, en_trantype*, F32, void*),
                              S32 (*eval_talking)(xGoal*, void*, en_trantype*, F32, void*),
                              S32 (*eval_chatter)(xGoal*, void*, en_trantype*, F32, void*),
                              S32 (*eval_speak)(xGoal*, void*, en_trantype*, F32, void*))
{
    xGoal* goal;
    goal = psy->AddGoal(NPC_GOAL_PLAYERNEAR, NULL);
    if (eval_plyrnear)
    {
        goal->SetCallbacks(eval_plyrnear, NULL, NULL, NULL);
    }
    goal = psy->AddGoal(NPC_GOAL_TALK, NULL);
    if (eval_talking)
    {
        goal->SetCallbacks(eval_talking, NULL, NULL, NULL);
    }
    goal = psy->AddGoal(NPC_GOAL_CHATTER, NULL);
    if (eval_chatter)
    {
        goal->SetCallbacks(eval_chatter, NULL, NULL, NULL);
    }
    goal = psy->AddGoal(NPC_GOAL_SPEAK, NULL);
    if (eval_speak)
    {
        goal->SetCallbacks(eval_speak, NULL, NULL, NULL);
    }
}

void zNPCVillager::FindMyConverse()
{
    xEntNPCAsset* nass = this->npcass;
    if ((gCurrentPlayer == eCurrentPlayerSpongeBob) && (nass->taskWidgetPrime != 0))
    {
        this->converse = (ztaskbox*)zSceneFindObject(nass->taskWidgetPrime);
        if (this->converse == NULL)
        {
            this->converse = (ztaskbox*)zSceneFindObject((((U8*)&nass->taskWidgetPrime)[3] << 24) |
                                                         (((U8*)&nass->taskWidgetPrime)[2] << 16) |
                                                         (((U8*)&nass->taskWidgetPrime)[1] << 8) |
                                                         ((U8*)&nass->taskWidgetPrime)[0]);
        }
    }
    else if ((gCurrentPlayer != eCurrentPlayerSpongeBob) && (nass->taskWidgetSecond != 0))
    {
        this->converse = (ztaskbox*)zSceneFindObject(nass->taskWidgetSecond);
        if (this->converse == NULL)
        {
            this->converse = (ztaskbox*)zSceneFindObject((((U8*)&nass->taskWidgetSecond)[3] << 24) |
                                                         (((U8*)&nass->taskWidgetSecond)[2] << 16) |
                                                         (((U8*)&nass->taskWidgetSecond)[1] << 8) |
                                                         ((U8*)&nass->taskWidgetSecond)[0]);
        }
    }
    else
    {
        this->converse = NULL;
    }
}

void zNPCVillager::TossMyConverse()
{
    this->converse = NULL;
}

void zNPCFish::Init(xEntAsset* asset)

{
    zNPCVillager::Init(asset);
    if (globals.sceneCur->sceneID == 'B101') // Poseidome
    {
        this->flg_move &= ~0x2;
        this->flg_move = 0xc;
    }
    else
    {
        this->flg_move = 10;
    }
    this->flg_vuln = -1;
    this->flg_vuln &= ~0x61000000;
    return;
}

void zNPCFish::Reset()
{
    zNPCVillager::Reset();
    this->tgt_robonear.TargetClear();
    this->tmr_robonear = -1.0f;
    this->tmr_checkagain = xurand() * 60.25f;
    en_NPCTYPES npc_type = (en_NPCTYPES)this->SelfType();
    if (npc_type == NPC_TYPE_MERMAN)
    {
        this->ModelAtomicShow(0, NULL);
        this->ModelAtomicHide(1, NULL);
    }
    else if (npc_type == NPC_TYPE_MERMANCHAIR)
    {
        this->ModelAtomicShow(0, NULL);
        this->ModelAtomicShow(1, NULL);
    }
    else if (npc_type == NPC_TYPE_SQUIDWARD)
    {
        this->ModelAtomicShow(1, NULL);
        this->ModelAtomicHide(0, NULL);
        this->ModelAtomicHide(2, NULL);
    }
    else if (npc_type == NPC_TYPE_SQUIDWARD_BANDAID)
    {
        this->ModelAtomicShow(1, NULL);
        this->ModelAtomicHide(0, NULL);
        this->ModelAtomicShow(2, NULL);
    }
    else if (npc_type == NPC_TYPE_SQUIDWARD_MUSIC)
    {
        this->ModelAtomicShow(1, NULL);
        this->ModelAtomicShow(0, NULL);
        this->ModelAtomicHide(2, NULL);
    }
    return;
}

void zNPCFish::ParseINI()
{
    zNPCVillager::ParseINI();
    zNPCFish::FishSoundTables();
}

void zNPCFish::FishSoundTables()
{
    en_NPCTYPES npc_type = (en_NPCTYPES)this->SelfType();

    switch (npc_type)
    {
    case NPC_TYPE_GARY:
    case NPC_TYPE_DUTCHMAN_NSB:
    case NPC_TYPE_SANDYBIKINI:
    case NPC_TYPE_PLANKNPC:
    case NPC_TYPE_MRKRABS:
    case NPC_TYPE_MSPUFFS:
    case NPC_TYPE_LARRY:
    case NPC_TYPE_BUBBUDDY:
    case NPC_TYPE_MERMANCHAIR:
    case NPC_TYPE_MERMAN:
    case NPC_TYPE_BARNACLEBOY:
        this->cfg_npc->snd_trax = g_sndTrax_VillagerCoStar;
        break;
    case NPC_TYPE_SQUIDWARD:
    case NPC_TYPE_SQUIDWARD_MUSIC:
    case NPC_TYPE_SQUIDWARD_BANDAID:
        this->cfg_npc->snd_trax = g_sndTrax_Squidward;
        break;
    case NPC_TYPE_FISH:
    case NPC_TYPE_FISH_MALE:
        this->cfg_npc->snd_trax = g_sndTrax_VillagerMale;
        break;
    case NPC_TYPE_FISH_FEMALE:
        this->cfg_npc->snd_trax = g_sndTrax_VillagerFemale;
        break;
    case NPC_TYPE_FISH_ELDER:
        this->cfg_npc->snd_trax = g_sndTrax_VillagerElder;
        break;
    case NPC_TYPE_FISH_ELDESS:
        this->cfg_npc->snd_trax = g_sndTrax_VillagerEldess;
        break;
    case NPC_TYPE_FISH_BOY:
    case NPC_TYPE_BALLOONBOY:
        this->cfg_npc->snd_trax = g_sndTrax_VillagerBoy;
        break;
    case NPC_TYPE_FISH_GIRL:
        this->cfg_npc->snd_trax = g_sndTrax_VillagerGirl;
        break;
    case NPC_TYPE_WORM:
    default:
        this->cfg_npc->snd_trax = NULL;
    }

    NPCS_SndTablePrepare(g_sndTrax_VillagerCoStar);
    NPCS_SndTablePrepare(g_sndTrax_Squidward);
    NPCS_SndTablePrepare(g_sndTrax_VillagerMale);
    NPCS_SndTablePrepare(g_sndTrax_VillagerFemale);
    NPCS_SndTablePrepare(g_sndTrax_VillagerElder);
    NPCS_SndTablePrepare(g_sndTrax_VillagerEldess);
    NPCS_SndTablePrepare(g_sndTrax_VillagerBoy);
    NPCS_SndTablePrepare(g_sndTrax_VillagerGirl);
    return;
}

void zNPCFish::SelfSetup()
{
    zNPCVillager* npc; // from dwarf, unused?
    xBehaveMgr* bmgr = xBehaveMgr_GetSelf();
    xPsyche* psy = bmgr->Subscribe(this, 0);
    this->psy_instinct = psy;
    psy = this->psy_instinct;
    psy->BrainBegin();
    this->AddBaseline(psy, FOLK_grul_goAlert, FOLK_grul_goAlert, FOLK_grul_goAlert,
                      FOLK_grul_goAlert, NULL);
    this->AddScripting(psy, NULL, NULL, NULL, NULL, NULL, NULL, NULL);
    this->AddTalking(psy, NULL, NULL, NULL, NULL);
    psy->AddGoal(NPC_GOAL_CHEER, NULL);
    psy->AddGoal(NPC_GOAL_HURT, NULL);
    psy->BrainEnd();
    psy->SetSafety(NPC_GOAL_IDLE);
}

U32 zNPCFish::AnimPick(S32 gid, en_NPC_GOAL_SPOT gspot, xGoal* rawgoal)
{
    S32 idx = -1;
    U32 da_anim = 0;

    switch (gid)
    {
    case NPC_GOAL_IDLE:
    case NPC_GOAL_WAITING:
        if (!(this->tmr_robonear < 0.0f))
        {
            idx = 7;
        }
        else
        {
            da_anim = zNPCVillager::AnimPick(gid, gspot, rawgoal);
        }
        break;

    case NPC_GOAL_WANDER:
    case NPC_GOAL_PATROL:
        if (!(this->tmr_robonear < 0.0f))
        {
            if (gspot == 0x26)
            {
                idx = 7;
            }
            else
            {
                idx = 6;
            }
        }
        else
        {
            da_anim = zNPCVillager::AnimPick(gid, gspot, rawgoal);
        }
        break;

    case NPC_GOAL_FIDGET:
        if (!(this->tmr_robonear < 0.0f))
        {
            idx = 8;
        }
        else
        {
            da_anim = zNPCVillager::AnimPick(gid, gspot, rawgoal);
        }
        break;

    default:
        da_anim = zNPCVillager::AnimPick(gid, gspot, rawgoal);
        break;
    }

    if (idx >= 0)
    {
        da_anim = g_hash_folkanim[idx];
    }

    return da_anim;
}

void zNPCFish::Process(xScene* xscn, F32 dt)
{
    this->CheckDoChat();
    if (this->IsAlive() && this->tmr_checkagain < 0.0f)
    {
        this->MonitorCowering(xscn, dt);
    }
    this->tmr_robonear = MAX(-1.0f, this->tmr_robonear - dt);
    this->tmr_checkagain = MAX(-1.0f, this->tmr_checkagain - dt);
    zNPCVillager::Process(xscn, dt);
}

static S32 goalsWhichCheer[6] = { NPC_GOAL_IDLE,    NPC_GOAL_WANDER,     NPC_GOAL_PATROL,
                                  NPC_GOAL_WAITING, NPC_GOAL_PLAYERNEAR, '\0' }; // null-terminated

S32 zNPCFish::FolkHandleMail(NPCMsg* msg)
{
    S32 handled = 0;
    xPsyche* psy = this->psy_instinct;
    S32 cancheer;
    S32 gid;
    zNPCGoalCheer* cheer;

    switch (msg->msgid)
    {
    case NPC_MID_CELEBRATE:
    case 0x14:
    case 0x15:
        gid = psy->GIDOfPending();
        if (gid == NPC_GOAL_CHEER || psy->GIDInStack(NPC_GOAL_CHEER) != 0)
            break;

        gid = psy->GIDOfPending();
        if (gid == NPC_GOAL_HURT || psy->GIDInStack(NPC_GOAL_HURT) != 0)
            break;

        if (msg->infotype == NPC_MDAT_AREANOTIFY)
        {
            if (msg->areadata.npc_origin == 0)
                break;
            if ((msg->areadata.npc_origin->SelfType() & 0xffffff00) != 'NTR\0')
                break;
        }

        cancheer = false;
        gid = psy->GIDOfActive();

        for (S32 i = 0; goalsWhichCheer[i] != 0; i++)
        {
            if (gid == goalsWhichCheer[i])
            {
                cancheer = true;
                break;
            }
        }

        if (cancheer && (cheer = (zNPCGoalCheer*)psy->FindGoal(NPC_GOAL_CHEER)) != 0)
        {
            cheer->LoopCountSet(3);
            psy->GoalPush(NPC_GOAL_CHEER, 0);
        }

        handled = 1;
        this->tmr_robonear = -1.0f;
        this->tmr_checkagain = -1.0f;
        break;

    default:
        handled = zNPCVillager::FolkHandleMail(msg);
        break;
    }

    return handled;
}

void zNPCFish::MonitorCowering(xScene* xscn, F32 dt)
{
    xVec3 vec; // from dwarf, unused?
    NPCTarget* tgt = &this->tgt_robonear;
    NPCConfig* cfg = this->cfg_npc;

    tgt->HaveTarget();
    if (!tgt->HaveTarget())
    {
        tgt->TargetClear();
    }
    else if (tgt->IsDead())
    {
        tgt->TargetClear();
    }
    else if (!tgt->InCylinder(xEntGetPos(this), g_rad_cowercheck, cfg->hyt_detect, cfg->off_detect))
    {
        tgt->TargetClear();
    }

    if (!tgt->HaveTarget())
    {
        tgt->FindNearest(NPC_TGT_ENT, this, xEntGetPos(this), g_rad_cowercheck);
    }

    if (tgt->HaveTarget())
    {
        this->tmr_robonear = cfg->tym_alert * (0.25f * (xurand() - 0.5f)) + cfg->tym_alert;
        this->tmr_checkagain = cfg->tym_alert * (0.25f * (xurand() - 0.5f)) + cfg->tym_alert;
        zNPCMsg_SendMsg(NPC_MID_BECOMESCARED, *(U32*)this);
    }
    else
    {
        this->tmr_robonear = -1.0f;
        this->tmr_checkagain =
            cfg->tym_alert * PI * (0.25f * (xurand() - 0.5f)) + cfg->tym_alert * PI;
        zNPCMsg_SendMsg(NPC_MID_NOLONGERSCARED, *(U32*)this);
    }
}

void zNPCFish::CheckDoChat()
{
}

void zNPCMerManChair::Init(xEntAsset* asset)
{
    zNPCVillager::Init(asset);
    flg_move = 1;
    flg_vuln = -1;
    flg_vuln = flg_vuln & 0x9effffff;
}

void zNPCMerManChair::Reset()
{
    zNPCVillager::Reset();
    this->npcset.allowPatrol = 0;
    this->npcset.allowWander = 0;
    this->flg_mermanchair = 0;

    if (globals.sceneCur->sceneID == 'BC02') // Mermalair (Main Chamber)
    {
        ztaskbox* pat_converse = (ztaskbox*)zSceneFindObject(this->npcass->taskWidgetSecond);
        if (pat_converse != NULL && (S32)pat_converse->StatusGet() == 5)
        {
            this->flg_mermanchair |= 1;
        }
    }
}

void zNPCMerManChair::SelfSetup()
{
    xBehaveMgr* bmgr = xBehaveMgr_GetSelf();
    xPsyche* psy = bmgr->Subscribe(this, 0);
    this->psy_instinct = psy;
    psy = this->psy_instinct;
    psy->BrainBegin();
    xGoal* goal = psy->AddGoal(NPC_GOAL_IDLE, NULL);
    goal->SetCallbacks(MERC_grul_goAlert, NULL, NULL, NULL);
    psy->AddGoal(NPC_GOAL_FIDGET, NULL);
    psy->AddGoal(NPC_GOAL_HURT, NULL);
    this->AddTalking(psy, NULL, NULL, NULL, NULL);
    psy->BrainEnd();
    psy->SetSafety(NPC_GOAL_IDLE);
}

U32 zNPCMerManChair::AnimPick(S32 gid, en_NPC_GOAL_SPOT gspot, xGoal* rawgoal)
{
    S32 idx;
    U32 da_anim;
    S32 superfolk;
    U32 which;
    static S32 choices[4] = { 0x05, 0x17, 0x18, 0x19 };

    da_anim = 0;
    idx = -1;

    switch (gid)
    {
    case NPC_GOAL_FIDGET:
    case NPC_GOAL_IDLE:
    case NPC_GOAL_HURT:
    case NPC_GOAL_PLAYERNEAR:
        if (flg_mermanchair & 1)
        {
            idx = 10;
        }
        else
        {
            da_anim = zNPCVillager::AnimPick(gid, gspot, rawgoal);
        }
        break;

    case NPC_GOAL_TALK:
    case NPC_GOAL_CHATTER:
    case NPC_GOAL_SPEAK:
        superfolk = (strcmp("zNPCSuperFriend", model->Anim->Table->Name) == 0);

        if (flg_mermanchair & 1)
        {
            if ((current_talk_anim < 0) || (current_talk_anim > 3))
            {
                idx = 10;
            }
            else if (!superfolk)
            {
                idx = 5;
            }
            else
            {
                idx = choices[current_talk_anim];
            }
        }
        else
        {
            if (!superfolk)
            {
                idx = 5;
            }
            else if ((current_talk_anim < 0) || (current_talk_anim > 3))
            {
                which = xrand();
                idx = choices[cfg_npc->talk_filter[(which >> 13) % cfg_npc->talk_filter_size]];
            }
            else
            {
                idx = choices[current_talk_anim];
            }
        }
        break;

    default:
        da_anim = zNPCVillager::AnimPick(gid, gspot, rawgoal);
        break;
    }

    if (idx >= 0)
    {
        da_anim = g_hash_folkanim[idx];
    }

    return da_anim;
}

void zNPCMerManChair::Process(xScene* scn, F32 dt)
{
    xModelInstance* minst;

    this->psy_instinct->Timestep(dt, NULL);
    if ((this->flg_misc & 4U) != 0)
    {
        for (minst = this->model; minst != NULL; minst = minst->Next)
        {
            xVec3Copy(&minst->Scale, &this->cfg_npc->scl_model);
        }
    }
}

static char* news_fish_audio[71] = {
    "FAB1001",   "FAB1002",   "FAB1003",   "FAB1004",   "FAB1011",   "FAB1017", "FAB1018",
    "FAB1019",   "FAB1020",   "FAB1021",   "FAB1022",   "FAB1023",   "FAB1025", "FAB1029",
    "FAB1030",   "FAB1032",   "FAB1033",   "FAB1034",   "FAB1035",   "FAB1038", "FAB1046",
    "FAB1047",   "FAB1049",   "FAB1073",   "FAB1074",   "FAB1076",   "FAB1077", "FAB1078",
    "FAB1079",   "FAB1080",   "FAB1006",   "FAB1012",   "FAB1016",   "FAB1024", "FAB1026",
    "FAB1065",   "FAB1039_a", "FAB1039_b", "FAB1039_c", "FAB1055",   "FAB1040", "FAB1053",
    "FAB1081_a", "FAB1081_b", "FAB1042",   "FAB1045",   "FAB1056",   "FAB1064", "FAB1050",
    "FAB1007",   "FAB1007_b", "FAB1031",   "FAB1082_a", "FAB1082_b", "FAB1010", "FAB1027",
    "FAB1037",   "FAB1052",   "FAB1067",   "FAB1014",   "FAB1008",   "FAB1036", "FAB1041_a",
    "FAB1041_b", "FAB1054",   "FAB1013",   "FAB1009",   "FAB1028",   "FAB1051", "FAB1072",
    "FAB1083"
};

static unsigned int news_fish_audio_hash[71];

// scheduling issue
void zNPCNewsFish::Init(xEntAsset* asset)
{
    zNPCVillager::Init(asset);

    this->was_reset = '\0';
    this->newsfishFlags = 0;
    this->onScreenCoords.x = 0.585f;
    this->onScreenCoords.y = 0.075f;
    this->offScreenCoords.x = 1.0f;
    this->offScreenCoords.y = 0.35f;
    this->screenCoords.x = this->offScreenCoords.x;
    this->screenCoords.y = this->offScreenCoords.y;
    this->screenSize = 0.35f;
    this->screenRot = 1.0f;
    this->appearSpeed = 5.0f;
    this->disappearSpeed = 1.0f;
    this->screenLerp = 0.0f;

    for (S32 i = 0; i < 71; i++)
    {
        news_fish_audio_hash[i] = xStrHash(news_fish_audio[i]);
    }
}

void zNPCNewsFish::PostSetup()
{
    xUpdateCull_SetCB(globals.updateMgr, this, xUpdateCull_AlwaysTrueCB, NULL);
}

void zNPCNewsFish::Process(xScene*, F32 dt)
{
    xModelInstance* minst;

    F32 lerp;
    F32 invLerp;

    this->was_reset = 0;
    if ((this->flg_misc & 4) != 0)
    {
        for (minst = this->model; minst != NULL; minst = minst->Next)
        {
            xVec3Copy(&minst->Scale, &this->cfg_npc->scl_model);
        }
    }

    xVec3 delta = {};

    NPCC_ds2_toCam(xEntGetPos(this), &delta);
    delta.y = 0.0f;
    this->frame->mode |= 0x30000;
    xVec3Normalize(&delta, &delta);

    xVec3Copy((xVec3*)&this->model->Mat->up, &g_Y3);
    xVec3Copy((xVec3*)&this->model->Mat->at, &delta);
    xVec3Cross((xVec3*)&this->model->Mat->right, &delta, &g_Y3);

    if (this->jawData != NULL)
    {
        this->jawTime += dt;
        F32 jawVal = xJaw_EvalData(this->jawData, this->jawTime);
        this->model->Anim->Single->BilinearLerp[0] = jawVal;
        if (globals.cmgr != NULL)
        {
            this->SpeakStop();
        }
        else
        {
            if (jawVal < 0.001f && !xSndIsPlayingByHandle(this->soundHandle))
            {
                this->soundHandle = 0;
                this->jawData = NULL;
                this->currSoundID = 0;
                if (this->nextSoundID != 0)
                {
                    this->SpeakStart(this->nextSoundID, 0, -1);
                    this->nextSoundID = 0;
                }
            }
        }
    }
    else
    {
        this->model->Anim->Single->BilinearLerp[0] = 0.0f;
    }

    if ((this->newsfishFlags & 1) != 0)
    {
        if (this->jawData != NULL)
        {
            minst = this->model;
            minst->Flags |= 2;
            this->screenLerp += this->appearSpeed * dt;
            if (this->screenLerp > 1.0f)
            {
                this->screenLerp = 1.0f;
            }
        }
        else
        {
            this->screenLerp -= this->disappearSpeed * dt;
            if (this->screenLerp < 0.0f)
            {
                this->screenLerp = 0.0f;
            }
            else
            {
                minst = this->model;
                minst->Flags |= 2;
            }
        }

        invLerp = 1.0f - this->screenLerp;

        this->screenCoords.x =
            (this->onScreenCoords.x * this->screenLerp) + (this->offScreenCoords.x * invLerp);

        this->screenCoords.y =
            (this->onScreenCoords.y * this->screenLerp) + (this->offScreenCoords.y * invLerp);
    }
}
void zNPCNewsFish::Reset()
{
    if (!this->was_reset)
    {
        this->was_reset = 1;
        this->soundHandle = 0;
        this->currSoundID = 0;
        this->nextSoundID = 0;
        this->jawData = 0;
        this->jawTime = 0.0f;
        this->screenLerp = 0.0f;

        zNPCVillager::Reset();
        zNPCNewsFish::reset_said();

        // clang-format off
        xDebugAddTweak("NPC|zNPCNewsFish|screen|on screen|x", &this->onScreenCoords.x, -5.0f, 5.0f, 0, 0, 0);
        xDebugAddTweak("NPC|zNPCNewsFish|screen|on screen|y", &this->onScreenCoords.y, -5.0f, 5.0f, 0, 0, 0);
        xDebugAddTweak("NPC|zNPCNewsFish|screen|off screen|x", &this->offScreenCoords.x, -5.0f, 5.0f, 0, 0, 0);
        xDebugAddTweak("NPC|zNPCNewsFish|screen|off screen|y", &this->offScreenCoords.y, -5.0f, 5.0f, 0, 0, 0);
        xDebugAddTweak("NPC|zNPCNewsFish|screen|size", &this->screenSize, 0.0001f, 1000000000.0f, 0, 0, 0);
        xDebugAddTweak("NPC|zNPCNewsFish|screen|rotation", &this->screenRot, -1000000000.0f, 1000000000.0f, 0, 0, 0);
        xDebugAddTweak("NPC|zNPCNewsFish|screen|appearSpeed", &this->appearSpeed, 0.0f, 1000000000.0f, 0, 0, 0);
        xDebugAddTweak("NPC|zNPCNewsFish|screen|disappearSpeed", &this->disappearSpeed, 0.0f, 1000000000.0f, 0, 0, 0);
        // clang-format on
    }
}

void zNPCNewsFish::SpeakStart(U32 sndid, U32 sndhandle, S32 anim)
{
    if (sndhandle)
    {
        this->SpeakStop();
        this->soundHandle = sndhandle;
        this->jawTime = 0.0f;
        this->jawData = xJaw_FindData(sndid);
    }
    else
    {
        if (this->IsTalking())
        {
            if (this->nextSoundID != this->currSoundID)
            {
                this->nextSoundID = sndid;
            }
        }
        else
        {
            this->soundHandle = xSndPlay(sndid, 1.0f, 0.0f, 0x80, 0, 0, SND_CAT_DIALOG, 0.0f);
            this->jawTime = 0.0f;
            this->jawData = xJaw_FindData(sndid);
            this->currSoundID = sndid;
        }
    }
}

void zNPCNewsFish::SpeakStop()
{
    S32 tempvar = zNPCNewsFish::IsTalking();
    if (tempvar != 0)
    {
        xSndStop(soundHandle);
    }
    currSoundID = 0;
    nextSoundID = 0;
    soundHandle = 0;
    jawData = 0;
}

S32 zNPCNewsFish::IsTalking()
{
    return (soundHandle) ? xSndIsPlayingByHandle(soundHandle) : false;
}

void zNPCNewsFish::TalkOnScreen(S32 talkOnScreen)
{
    if (talkOnScreen != 0)
    {
        newsfishFlags = newsfishFlags | 1;
        return;
    }
    newsfishFlags = newsfishFlags & 0xfffffffe;
    return;
}

void zNPCNewsFish::Render()
{
    xLightKit* lastLightKit;
    _SDRenderState oldstate;
    xMat4x3 oldMat;
    xNPCBasic::Render();
    if (globals.cmgr == NULL || globals.cmgr->csn == NULL)
    {
        U32 flags = this->newsfishFlags | 1;
        this->newsfishFlags = flags;
        if (flags != 0)
        {
            lastLightKit = gLastLightKit;
            xLightKit_Enable(NULL, globals.currWorld);
            oldstate = zRenderStateCurrent();
            zRenderState(SDRS_Newsfish);
            xMat4x3Copy(&oldMat, (const xMat4x3*)this->model->Mat);
            basic_rect<F32> r = { this->screenCoords.x, this->screenCoords.y, 1.0f, 1.0f };
            xVec3 from = { 0.0f, 0.0f, 1.0f };
            xVec3 to = { 0.0f, 0.0f, 0.0f };
            xVec3Init((xVec3*)&this->model->Mat->pos, 0.0f, 0.0f, 0.0f);
            xMat3x3RotZ((xMat3x3*)this->model->Mat, this->screenRot);
            xVec3SMulBy((xVec3*)&this->model->Mat->right, this->screenSize);
            xVec3SMulBy((xVec3*)&this->model->Mat->up, this->screenSize);
            xVec3SMulBy((xVec3*)&this->model->Mat->at, this->screenSize);
            xModelRender2D(*this->model->Next, r, from, to);
            xModelRender2D(*this->model, r, from, to);
            xMat4x3Copy((xMat4x3*)this->model->Mat, &oldMat);
            zRenderState(oldstate);
            xLightKit_Enable(lastLightKit, globals.currWorld);
        }
    }
}

U8 zNPCNewsFish::say(say_enum s, S32 flags)
{
    U32 id = news_fish_audio_hash[s];

    if (this->IsTalking())
    {
        if (id == this->currSoundID)
        {
            return 0;
        }

        if (flags & 1)
        {
            this->SpeakStop();
        }
        else if (flags & 2)
        {
            if (this->nextSoundID != 0)
            {
                if (this->nextSoundID != this->currSoundID)
                {
                    return 0;
                }
            }
            this->nextSoundID = id;
            return 1;
        }
        else
        {
            return 0;
        }
    }

    this->soundHandle = xSndPlay(id, 1.0f, 0.0f, 0x80, 0, 0, SND_CAT_DIALOG, 0.0f);
    this->jawTime = 0.0f;
    this->jawData = xJaw_FindData(id);
    this->currSoundID = id;

    return 1;
}

S32 zNPCNewsFish::say(const say_enum* s, unsigned long size, S32 flags, S32 max_say)
{
    if (size == 0)
    {
        return -1;
    }
    if (size == 1)
    {
        say_data* data = this->get_said(*s);
        data->prev_total = data->total;
        if (this->say(*s, flags))
        {
            data->total++;
            return 0;
        }
        return -1;
    }
    else
    {
        S32 min_say = 0x7fffffff;
        const say_enum* it;
        const say_enum* end = s + size;

        for (it = s; it != end; ++it)
        {
            say_data* data = this->get_said(*it);
            if (data->total < min_say && data->total == data->prev_total)
            {
                min_say = data->total;
            }
        }

        if (max_say >= 0 && min_say >= max_say)
        {
            return -1;
        }

        S32 total = 0;
        {
            const say_enum* it;
            const say_enum* end = s + size;
            for (it = s; it != end; ++it)
            {
                say_data* data = this->get_said(*it);
                if (data->total <= min_say && data->total == data->prev_total)
                {
                    total++;
                }
            }
        }

        S32 played = -1;
        S32 which;

        U32 r = xrand();
        which = (S32)((r >> 13) % total);

        {
            const say_enum* it;
            const say_enum* end = s + size;
            for (it = s; it != end; ++it)
            {
                say_data* data = this->get_said(*it);
                S32 new_total = data->total;

                U32 changed =
                    ((U32)(data->prev_total - new_total) | (U32)(new_total - data->prev_total)) >>
                    31;
                U8 last_changed = (U8)changed;

                data->prev_total = new_total;

                if (data->total <= min_say && !last_changed)
                {
                    which--;
                    if (which == -1)
                    {
                        if (this->say(*it, flags))
                        {
                            data->total++;
                            played = (S32)(it - s);
                        }
                    }
                }
            }
        }

        return played;
    }
}

void zNPCNewsFish::reset_said()
{
    say_data* s = this->said;
    say_data* end = s + (S32)MAX_SAY;

    for (; s != end; s++)
    {
        s->prev_total = 0;
        s->total = 0;
    }
}

void zNPCSandyBikini::Reset()
{
    zNPCVillager::Reset();
    tmr_leakCycle = 0.0f;
}

void zNPCSandyBikini::Process(xScene* xscn, F32 dt)
{
    zNPCVillager::Process(xscn, dt);
    zNPCSandyBikini::VFXLeakyFaucet(dt);
}

void zNPCSandyBikini::VFXLeakyFaucet(F32 dt)
{
    F32 rat_tym;
    xVec3 pos_emit;
    xVec3 dir_emit;
    F32 dist;
    static const xVec3 vec_boneOffset = { 0.05f, 0.0f, 0.0f };
    rat_tym = NPCC_TmrCycle(&this->tmr_leakCycle, dt, 0.3f);
    const xVec3* bone_pos = (const xVec3*)this->BonePos(17);
    pos_emit.x = bone_pos->x;
    pos_emit.y = bone_pos->y;
    pos_emit.z = bone_pos->z;
    pos_emit += vec_boneOffset;
    xMat3x3RMulVec(&pos_emit, (const xMat3x3*)this->BoneMat(0), &pos_emit);
    pos_emit *= this->cfg_npc->scl_model.x;
    pos_emit += *(xVec3*)this->BonePos(0);
    this->XZVecToPos(&dir_emit, &pos_emit, NULL);
    if (xVec3Length2(&dir_emit) > 0.0f)
    {
        dir_emit.invert();
        dist = xVec3Normalize(&dir_emit, &dir_emit);
        dir_emit.y += 0.25f;
        xVec3Normalize(&dir_emit, &dir_emit);
        F32 temp_sin = isin((PI / 4.0f) * rat_tym);
        xVec3SMul(&g_parf_aqualeak.vel, &dir_emit, temp_sin * dist);
        xVec3Copy(&g_parf_aqualeak.pos, &pos_emit);
        xParEmitterEmitCustom(g_pemit_aqualeak, dt, &g_parf_aqualeak);
    }
}

void zNPCBalloonBoy::Init(xEntAsset* asset)
{
    zNPCFish::Init(asset);
    rast_shadBalloon = 0;
    cfg_npc->dst_castShadow = -1;
    return;
}

void zNPCBalloonBoy::Reset()
{
    zNPCFish::Reset();

    if (!this->rast_shadBalloon)
    {
        this->rast_shadBalloon = NPCC_FindRWRaster("shadow_balloons");
    }
}

void zNPCBalloonBoy::SelfSetup()
{
    xPsyche* psy;
    zNPCFish::SelfSetup();
    psy = psy_instinct;
    psy->BrainExtend();
    zNPCBalloonBoy::AddBallooning(psy);
    psy->BrainEnd();
}

void zNPCBalloonBoy::Render()
{
    xNPCBasic::Render();
    zNPCBalloonBoy::PlatShadRend();
}

void zNPCBalloonBoy::PlatShadRend()
{
    F32 ds2_cam;
    S32 fillit;
    S32 needit;
    xMat4x3 mat_fake;

    if (this->rast_shadBalloon)
    {
        if (!plat_balloons && !shadCache)
        {
            return;
        }

        if (!plat_balloons)
        {
            NPCC_ShadowCacheRelease(shadCache);
            shadCache = NULL;
            return;
        }

        xVec3* pos = zNPCCommon::Pos();
        ds2_cam = NPCC_ds2_toCam(pos, NULL);

        static S32 takeThePain = 0;
        needit = 0;
        takeThePain--;
        if (takeThePain < 0)
        {
            takeThePain = 8;

            S32 is_close = (ds2_cam < SQ(30.0f)) ? 1 : 0;
            if (is_close && !shadCache)
            {
                shadCache = NPCC_ShadowCacheReserve();
            }
            else if (!is_close && shadCache)
            {
                NPCC_ShadowCacheRelease(shadCache);
                shadCache = NULL;
            }
            needit = 1;
        }

        if (shadCache)
        {
            F32 ratio = CLAMP(ds2_cam / SQ(30.0f), 0.0f, 1.0f);
            F32 alpha = CLAMP(1.0f - ratio + 0.3f, 0.0f, 1.0f);
            fillit = alpha;

            mat_fake.at = g_NY3;
            mat_fake.up = ((xMat4x3*)plat_balloons->model->Mat)->at;
            mat_fake.right = ((xMat4x3*)plat_balloons->model->Mat)->right;
            mat_fake.pos = *xEntGetCenter(plat_balloons);

            RwMatrixUpdate((RwMatrix*)&mat_fake);
            NPCC_RenderProjTexture(rast_shadBalloon, alpha, &mat_fake, 0.97f, 10.0f, shadCache,
                                   needit, plat_balloons);
        }
    }
}

void zNPCBalloonBoy::AddBallooning(xPsyche* psy)
{
    psy->AddGoal(NPC_GOAL_BALLOON, NULL);
    psy->AddGoal(NPC_GOAL_BOYRIDE, NULL);
    psy->AddGoal(NPC_GOAL_BOYFALL, NULL);
    psy->AddGoal(NPC_GOAL_BOYWEEP, NULL);
    psy->AddGoal(NPC_GOAL_BOYSWIM, NULL);
}

U32 zNPCBalloonBoy::AnimPick(S32 gid, en_NPC_GOAL_SPOT gspot, xGoal* rawgoal)
{
    S32 idx = -1;
    U32 da_anim = 0;

    switch (gid)
    {
    case NPC_GOAL_BALLOON:
        if (gspot == 0x20)
            idx = 0xb;
        else if (gspot == 0x21)
            idx = 0xb;
        else
            idx = 0xb;
        break;
    case NPC_GOAL_BOYRIDE:
        if (gspot == 0x20)
            idx = 0xb;
        else if (gspot == 0x21)
            idx = 0xb;
        else if (gspot == 0x24)
            idx = 0xc;
        else
            idx = 0xb;
        break;
    case NPC_GOAL_BOYFALL:
        if (gspot == 0x20)
            idx = 0xd;
        else if (gspot == 0x21)
            idx = 0xd;
        else if (gspot == 0x24)
            idx = 0xe;
        else
            idx = 0xd;
        break;
    case NPC_GOAL_BOYWEEP:
        idx = 0xf;
        break;
    case NPC_GOAL_BOYSWIM:
        idx = 0x10;
        break;
    default:
        da_anim = zNPCFish::AnimPick(gid, gspot, rawgoal);
        break;
    }

    if (idx >= 0)
    {
        da_anim = g_hash_folkanim[idx];
    }
    return da_anim;
}

S32 zNPCBalloonBoy::FolkHandleMail(NPCMsg* mail)
{
    S32 handled;

    switch (mail->msgid)
    {
    case NPC_MID_SYSEVENT:
        handled = this->ParseSysEvent(&mail->sysevent);
        break;
    default:
        if (this->IAmBallooning())
        {
            handled = 1;
        }
        else
        {
            handled = 0;
        }
        break;
    }

    if (handled == 0)
    {
        handled = zNPCFish::FolkHandleMail(mail);
    }

    return handled;
}

S32 zNPCBalloonBoy::ParseSysEvent(NPCSysEvent* sed)
{
    zPlatform* plat;
    S32 handled = 1;

    switch (sed->toEvent)
    {
    case eEventNPCSpecial_PlatformSnap:
        this->plat_balloons = NULL;
        plat = (zPlatform*)sed->toParamWidget;
        if (plat != NULL && plat->baseType == eBaseTypePlatform)
        {
            this->plat_balloons = plat;
        }
        if (this->plat_balloons == NULL)
        {
            plat = (zPlatform*)sed->from;
            if (plat != NULL && plat->baseType == eBaseTypePlatform)
            {
                this->plat_balloons = plat;
            }
        }
        if (this->plat_balloons != NULL)
        {
            this->psy_instinct->GoalSet(NPC_GOAL_BALLOON, 1);
        }
        else
        {
            this->psy_instinct->GoalSet(NPC_GOAL_IDLE, 1);
        }
        break;

    case eEventNPCSetActiveOn:
    case eEventNPCSetActiveOff:
        handled = 0;
        break;

    case eEventNPCSpecial_PlatformFall:
        break;
    default:
        if (this->IAmBallooning())
        {
            handled = 1;
        }
        else
        {
            handled = 0;
        }
        break;
    }

    return handled;
}

void zNPCBalloonBoy::PlatAnimSet(en_BBOY_PLATANIM platanim)
{
    F32 fvals[4] = { (F32)(platanim + 1), 0.0f, 0.0f, 0.0f };
    if (this->plat_balloons != NULL)
    {
        zEntAnimEvent(this->plat_balloons, 0xC3, fvals);
    }
}

void zNPCBalloonBoy::PlatAnimSync()
{
    zNPCCommon::AnimCurState();
}

S32 zNPCBalloonBoy::IAmBallooning()
{
    S32 goals[] = { NPC_GOAL_BALLOON, NPC_GOAL_BOYRIDE, NPC_GOAL_BOYFALL,
                    NPC_GOAL_BOYWEEP, NPC_GOAL_BOYSWIM, 0 };
    S32 result = 0;
    S32 goal_id = this->psy_instinct->GIDOfActive();

    for (S32* i = goals; *i != 0; i++)
    {
        if (goal_id == *i)
        {
            result = 1;
            break;
        }
    }

    return result;
}

void zNPCBubbleBuddy::Init(xEntAsset* a)
{
    zNPCFish::Init(a);

    CruiseBubbleDoesBubbleBuddyToo = this;
    this->aid_fresnelTxtr = 0;
    this->txtr_fresnel = 0;
    this->rast_fresnel = 0;
    this->aid_enviroTxtr = 0;
    this->txtr_enviro = 0;
    this->rast_enviro = 0;
    this->alf_currBubBud = 1.0f;
}

RpAtomic* NPC_BubBud_RenderCB(RpAtomic* atomic);

void zNPCBubbleBuddy::Setup()
{
    zNPCCommon::Setup();
    if (!this->rast_fresnel && !this->rast_enviro)
    {
        char* nam_fresTxtr = "gloss_edge";
        this->aid_fresnelTxtr = xStrHash(nam_fresTxtr);
        this->txtr_fresnel = NPCC_FindRWTexture(this->aid_fresnelTxtr);
        this->rast_fresnel = NPCC_FindRWRaster(this->txtr_fresnel);
        this->aid_enviroTxtr = xStrHash(nam_fresTxtr);
        this->txtr_enviro = NPCC_FindRWTexture(this->aid_enviroTxtr);
        this->rast_enviro = NPCC_FindRWRaster(this->txtr_enviro);
    }
    this->model->PipeFlags = (this->model->PipeFlags & 0xffffffcf) | 0x10;
    this->model->Data->renderCallBack = NPC_BubBud_RenderCB;
    if (this->model->Data->renderCallBack == NULL)
    {
        this->model->Data->renderCallBack = AtomicDefaultRenderCallBack;
    }
}

void zNPCBubbleBuddy::Reset()
{
    zNPCFish::Reset();
    flags |= 0x40;
}

void zNPCBubbleBuddy::RenderExtra()
{
    if (xEntIsVisible(this) && !(this->model->Flags & 0x400))
    {
        RwCullMode old_cull_mode;
        RwRenderStateGet(rwRENDERSTATECULLMODE, &old_cull_mode);
        RwRenderStateSet(rwRENDERSTATECULLMODE, (void*)0x3);
        xModelRender(this->model);
        RwRenderStateSet(rwRENDERSTATECULLMODE, (void*)0x2);
        xModelRender(this->model);
        RwRenderStateSet(rwRENDERSTATECULLMODE, (void*)old_cull_mode);
    }
}

void zNPCBubbleBuddy_AlphaUpdate(F32 dt)
{
    static F32 tmr_pulseAlpha = 0.0f; // non-matching: stfs too late
    F32 angle = NPCC_TmrCycle(&tmr_pulseAlpha, dt, 1.5f) * PI;
    zNPCBubbleBuddy::alf_currBubBud = LERP(MAX(0.0f, MIN(xabs(isin(angle)), 1.0f)), 0.5f, 0.5f);
}

RpAtomic* NPC_BubBud_RenderCB(RpAtomic* atomic)
{
    bb_env_texture = xStrHash("rainbowfilm_smooth32");
    bb_fresnel_texture = xStrHash("gloss_edge");

    F32 fade = zNPCBubbleBuddy::alf_currBubBud;

    if (zNPCBubbleBuddy::rast_fresnel != 0)
    {
        iModelSetMaterialAlpha(atomic, fade * 127.5f + 0.5f);
        gFXSurfaceFlags = 0x10;
        xFXAtomicEnvMapSetup(atomic, bb_fresnel_texture, fade);
        gFXSurfaceFlags = 0;
        (*gAtomicRenderCallBack)(atomic);
    }

    if (zNPCBubbleBuddy::rast_enviro != 0)
    {
        iModelSetMaterialAlpha(atomic, fade * 127.5f + 0.5f);
        AtomicDisableMatFX(atomic);
        gFXSurfaceFlags = 0x10;
        xFXAtomicEnvMapSetup(atomic, bb_env_texture, fade);
        gFXSurfaceFlags = 0;
        (*gAtomicRenderCallBack)(atomic);
    }

    return atomic;
}

S32 FOLK_grul_goAlert(xGoal* rawgoal, void*, en_trantype* trantype, F32, void*)
{
    S32 nextgoal = 0;
    zNPCVillager* npc = (zNPCVillager*)rawgoal->psyche->clt_owner;
    xVec3 vec; // from dwarf, unused?

    if (npc->SomethingWonderful())
    {
        return nextgoal;
    }

    if (npc->PlayerIsStaring())
    {
        *trantype = GOAL_TRAN_SET;
        nextgoal = NPC_GOAL_PLAYERNEAR;
    }

    return nextgoal;
}

S32 MERC_grul_goAlert(xGoal* rawgoal, void*, en_trantype* trantype, F32, void*)
{
    zNPCVillager* npc = (zNPCVillager*)rawgoal->psyche->clt_owner;
    xVec3 dir_plyr;

    if (npc->SomethingWonderful())
    {
        return 0;
    }

    if (!npc->PlayerIsStaring())
    {
        return 0;
    }

    if (xVec3Dot(NPCC_faceDir(npc), NPCC_faceDir(&globals.player.ent)) > -0.5f)
    {
        return 0;
    }

    F32 dst = npc->XZDstSqToPlayer(&dir_plyr, NULL);
    if (dst < 0.5f)
    {
        return 0;
    }

    F32 sqrt_dst = xsqrt(dst);
    xVec3SMulBy(&dir_plyr, 1.0f / sqrt_dst);

    if (xVec3Dot(NPCC_faceDir(npc), &dir_plyr) < 0.5f)
    {
        return 0;
    }

    *trantype = GOAL_TRAN_SET;
    return NPC_GOAL_PLAYERNEAR;
}

void FOLK_InitEffects()
{
    g_pemit_aqualeak = zParEmitterFind("PAREMIT_FOLK_SANDYB_LEAK");
    g_parf_aqualeak.custom_flags = 0x300;
    xVec3Copy(&g_parf_aqualeak.pos, &g_O3);
    xVec3Copy(&g_parf_aqualeak.vel, &g_O3);
}

void FOLK_KillEffects()
{
}

void __deadstripped_zNPCTypeVillager(ztaskbox::callback cb)
{
    // no xrefs to these exist, called to match weak .text section
    cb.on_talk_stop();
    cb.on_talk_start();
}
