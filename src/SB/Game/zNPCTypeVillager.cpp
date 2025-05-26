#include "zNPCTypeVillager.h"

#include "zNPCTypes.h"
#include "zNPCGoals.h"

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

extern U32 g_hash_folkanim[26];
extern char* g_strz_platanim[2];
extern U32 g_hash_platanim[2];
extern zParEmitter* g_pemit_aqualeak;
extern xParEmitterCustomSettings g_parf_aqualeak;
extern const xVec3 g_O3;

static char* g_strz_folkanim[26] =
{
    "Unknown",
    "Idle01",
    "Move01",
    "Hurt01",
    "Yawn01",
    "Talk01",
    "Flee01",
    "Fear01",
    "Pray01",
    "Clap01",
    "Special01",
    "Ride01",
    "Bump01",
    "Fall01",
    "Land01",
    "Weep01",
    "Swim01",
    "Idle02",
    "Idle03",
    "Idle04",
    "Yawn02",
    "Yawn03",
    "Yawn04",
    "Talk02",
    "Talk03",
    "Talk04",
};

// Taken from zNPCTypeVillager.s
// Defining these here makes the stringBase0 offsets match in the later functions.
static char* str27 = "fish_d_balloon_move";
static char* str28 = "fish_d_balloon_hit";
static char* str29 = "zNPCVillager";
static char* str30 = "zNPCBallonBoy";
static char* str31 = "zNPCSuperFriend";
static char* str32 = "NonRandomTalkAnims";
static char* str33 = "FAB1001";
static char* str34 = "FAB1002";
static char* str35 = "FAB1003";
static char* str36 = "FAB1004";
static char* str37 = "FAB1011";
static char* str38 = "FAB1017";
static char* str39 = "FAB1018";
static char* str40 = "FAB1019";
static char* str41 = "FAB1020";
static char* str42 = "FAB1021";
static char* str43 = "FAB1022";
static char* str44 = "FAB1023";
static char* str45 = "FAB1025";
static char* str46 = "FAB1029";
static char* str47 = "FAB1030";
static char* str48 = "FAB1032";
static char* str49 = "FAB1033";
static char* str50 = "FAB1034";
static char* str51 = "FAB1035";
static char* str52 = "FAB1038";
static char* str53 = "FAB1046";
static char* str54 = "FAB1047";
static char* str55 = "FAB1049";
static char* str56 = "FAB1073";
static char* str57 = "FAB1074";
static char* str58 = "FAB1076";
static char* str59 = "FAB1077";
static char* str60 = "FAB1078";
static char* str61 = "FAB1079";
static char* str62 = "FAB1080";
static char* str63 = "FAB1006";
static char* str64 = "FAB1012";
static char* str65 = "FAB1016";
static char* str66 = "FAB1024";
static char* str67 = "FAB1026";
static char* str68 = "FAB1065";
static char* str69 = "FAB1039_a";
static char* str70 = "FAB1039_b";
static char* str71 = "FAB1039_c";
static char* str72 = "FAB1055";
static char* str73 = "FAB1040";
static char* str74 = "FAB1053";
static char* str75 = "FAB1081_a";
static char* str76 = "FAB1081_b";
static char* str77 = "FAB1042";
static char* str78 = "FAB1045";
static char* str79 = "FAB1056";
static char* str80 = "FAB1064";
static char* str81 = "FAB1050";
static char* str82 = "FAB1007";
static char* str83 = "FAB1007_b";
static char* str84 = "FAB1031";
static char* str85 = "FAB1082_a";
static char* str86 = "FAB1082_b";
static char* str87 = "FAB1010";
static char* str88 = "FAB1027";
static char* str89 = "FAB1037";
static char* str90 = "FAB1052";
static char* str91 = "FAB1067";
static char* str92 = "FAB1014";
static char* str93 = "FAB1008";
static char* str94 = "FAB1036";
static char* str95 = "FAB1041_a";
static char* str96 = "FAB1041_b";
static char* str97 = "FAB1054";
static char* str98 = "FAB1013";
static char* str99 = "FAB1009";
static char* str100 = "FAB1028";
static char* str101 = "FAB1051";
static char* str102 = "FAB1072";
static char* str103 = "FAB1083";
static char* str104 = "NPC|zNPCNewsFish|screen|on screen|x";
static char* str105 = "NPC|zNPCNewsFish|screen|on screen|y";
static char* str106 = "NPC|zNPCNewsFish|screen|off screen|x";
static char* str107 = "NPC|zNPCNewsFish|screen|off screen|y";
static char* str108 = "NPC|zNPCNewsFish|screen|size";
static char* str109 = "NPC|zNPCNewsFish|screen|rotation";
static char* str110 = "NPC|zNPCNewsFish|screen|appearSpeed";
static char* str111 = "NPC|zNPCNewsFish|screen|disappearSpeed";
static char* str112 = "shadow_balloons";
static char* str113 = "gloss_edge";
static char* str114 = "rainbowfilm_smooth32";
static char* str115 = "PAREMIT_FOLK_SANDYB_LEAK";

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

void zNPCVillager_SceneTimestep(F32 dt)
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
    S32 ourAnims[11] = { Idle01, Move01, Hurt01, Yawn01, Talk01, Flee01,
                         Fear01, Pray01, Clap01, Special01, Unknown };
    xAnimTable* table = callerTable;
    char** names = g_strz_folkanim;

    if (table == NULL)
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

    NPCC_BuildStandardAnimTran(table, names, ourAnims, 1, 0.2f);

    xAnimTableNewTransition(table, names[Pray01], names[Fear01], NULL, NULL, 0x10, 0x0, 0.0f, 0.0f,
                            0, 0, 0.35f, NULL);

    return table;
}

xAnimTable* ZNPC_AnimTable_BalloonBoy()
{
    return ZNPC_AnimTable_BalloonBoy(NULL);
}

xAnimTable* ZNPC_AnimTableBalloonBoy(xAnimTable* callerTable)
{
    S32 ourAnims[7] = { Ride01, Bump01, Fall01, Land01, Weep01, Swim01, Unknown };
    xAnimTable* table = callerTable;
    char** names = g_strz_folkanim;

    if (table == NULL)
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

    NPCC_BuildStandardAnimTran(table, names, ourAnims, 1, 0.2f);

    xAnimTableNewTransition(table, names[Fall01], names[Bump01], NULL, NULL, 0x10, 0x0, 0.0f, 0.0f,
                            0, 0, 0.35f, NULL);
    xAnimTableNewTransition(table, names[Land01], names[Weep01], NULL, NULL, 0x10, 0x0, 0.0f, 0.0f,
                            0, 0, 0.35f, NULL);

    return table;
}

xAnimTable* ZNPC_AnimTable_SuperFriend()
{
    return ZNPC_AnimTable_SuperFriend(NULL);
}

xAnimTable* ZNPC_AnimTableSuperFriend(xAnimTable* callerTable)
{
    S32 ourAnims[10] = { Idle02, Idle03, Idle04, Yawn02, Yawn03,
                         Yawn04, Talk02, Talk03, Talk04, Unknown };
    xAnimTable* table = callerTable;
    char** names = g_strz_folkanim;

    if (table == NULL)
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

    NPCC_BuildStandardAnimTran(table, names, ourAnims, 1, 0.35f);

    xAnimTableNewTransition(table, names[Yawn02], names[Idle02], NULL, NULL, 0x10, 0x0, 0.0f, 0.0f,
                            0, 0, 0.35f, NULL);
    xAnimTableNewTransition(table, names[Yawn03], names[Idle03], NULL, NULL, 0x10, 0x0, 0.0f, 0.0f,
                            0, 0, 0.35f, NULL);
    xAnimTableNewTransition(table, names[Yawn04], names[Idle04], NULL, NULL, 0x10, 0x0, 0.0f, 0.0f,
                            0, 0, 0.35f, NULL);

    return table;
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

// void zNPCVillager::Reset() //Not sure what the correct values are for the IFs
// {
//     NPCConfig* cfg;
//     this->zNPCCommon::Reset();

//     if (psy_instinct != 0)
//     {
//         this->psy_instinct->GoalSet(NPC_GOAL_IDLE, 1);
//     }
// }
void zNPCVillager::Reset()
{
}

void zNPCVillager::ParseINI()
{
    zNPCCommon::ParseINI();
    cfg_npc->snd_traxShare = &g_sndTrax_Villager;
    NPCS_SndTablePrepare((NPCSndTrax*)&g_sndTrax_Villager);
    zNPCVillager::ParseNonRandTalk();
}

void zNPCVillager::ParseNonRandTalk()
{
    // NPCConfig* cfg; //0x1d8
    // F32 non_choices[4];
    // S32 found;
    // S32 i;
    // U8 skip;
    // S32 j;

    // cfg = cfg_npc;
    // cfg = 0;
    // non_choices[0] = 0.0;
    // non_choices[1] = 0.0;
    // non_choices[2] = 0.0;
    // non_choices[3] = 0.0;

    //
}

void zNPCVillager::Process(xScene* xscn, float dt)
{
    zNPCVillager::ChkCheatSize();
    if (psy_instinct != 0)
    {
        this->psy_instinct->Timestep(dt, NULL);
    }
    zNPCCommon::Process(xscn, dt);
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

void zNPCVillager::TossMyConverse()
{
    converse = 0;
}

void zNPCFish::Reset()
{
}

void zNPCFish::ParseINI()
{
    zNPCVillager::ParseINI();
    zNPCFish::FishSoundTables();
}

// void zNPCFish::FishSoundTables()
// {
//     S32 tempR;
//     tempR = xNPCBasic::SelfType();
//     switch (tempR)
//     {
//     case NPC_TYPE_FISH:
//     {
//     }
//     case NPC_TYPE_FISH_MALE:
//     {
//     }
// }
// }

/*
void FOLK_InitEffects()
{
    g_pemit_aqualeak = zParEmitterFind("PAREMIT_FOLK_SANDYB_LEAK");
    g_parf_aqualeak.custom_flags = 0x300; // 0x138
    xVec3Copy((xVec3*)&g_parf_aqualeak.pos, (xVec3*)&g_O3); // 0x140
    xVec3Copy((xVec3*)&g_parf_aqualeak.vel, (xVec3*)&g_O3); // 0x14c
}
*/

void FOLK_KillEffects()
{
}

void zNPCNewsFish::SelfSetup()
{
}

void zNPCFish::CheckDoChat()
{
}

void zNPCMerManChair::Init(xEntAsset*) //Seems to load an extra value?
{
    zNPCVillager::Init(asset);
    flg_move = 1;
    flg_vuln = -1;
    flg_vuln = flg_vuln & 0x9effffff;
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

void zNPCNewsFish::reset_said()
{
    //
}

void zNPCSandyBikini::Reset() //100% code match
{
    zNPCVillager::Reset();
    tmr_leakCycle = 0.0;
}

void zNPCSandyBikini::Process(xScene* xscn, float dt) //100% code match
{
    zNPCVillager::Process(xscn, dt);
    zNPCSandyBikini::VFXLeakyFaucet(dt);
}

void zNPCBalloonBoy::Init(xEntAsset* asset)
{
    zNPCFish::Init(asset);
    rast_shadBalloon = 0;
    cfg_npc->dst_castShadow = -1;
    return;

    //cfg_npc 0x1d8
    //bound.type 0x84
}

void zNPCBalloonBoy::SelfSetup() //100% code match
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

void zNPCBalloonBoy::AddBallooning(xPsyche* psy)
{
    psy->AddGoal(NPC_GOAL_BALLOON, NULL);
    psy->AddGoal(NPC_GOAL_BOYRIDE, NULL);
    psy->AddGoal(NPC_GOAL_BOYFALL, NULL);
    psy->AddGoal(NPC_GOAL_BOYWEEP, NULL);
    psy->AddGoal(NPC_GOAL_BOYSWIM, NULL);
}

void zNPCBalloonBoy::PlatAnimSet(en_BBOY_PLATANIM platanim)
{
    F32 fvals[4];
}

void zNPCBalloonBoy::PlatAnimSync()
{
    zNPCCommon::AnimCurState();
}

void zNPCBubbleBuddy::Reset() // possible scheduling meme?
{
    zNPCFish::Reset();
    // flags = flags | 0x40;
    flags |= 0x40;
}

void ztaskbox::callback::on_talk_start()
{
}

void ztaskbox::callback::on_talk_stop()
{
}

U8 zNPCNewsFishTV::PhysicsFlags() const
{
    return 0;
}

U8 zNPCNewsFishTV::ColPenByFlags() const
{
    return 0;
}

U8 zNPCNewsFishTV::ColChkByFlags() const
{
    return 0;
}

U8 zNPCNewsFishTV::ColPenFlags() const
{
    return 0;
}

U8 zNPCNewsFishTV::ColChkFlags() const
{
    return 0;
}

U8 zNPCMerManChair::PhysicsFlags() const
{
    return 0;
}

U8 zNPCMerManChair::ColPenFlags() const
{
    return 0;
}

U8 zNPCMerManChair::ColChkFlags() const
{
    return 0;
}

U8 zNPCVillager::ColPenByFlags() const
{
    return 24;
}

U8 zNPCVillager::ColChkByFlags() const
{
    return 24;
}
