#include "zNPCTypeVillager.h"

#include "zNPCTypes.h"
#include "zNPCGoals.h"

#define ANIM_Idle01 1
#define ANIM_Move01 2
#define ANIM_Hurt01 3
#define ANIM_Yawn01 4
#define ANIM_Talk01 5
#define ANIM_Flee01 6
#define ANIM_Fear01 7
#define ANIM_Pray01 8
#define ANIM_Clap01 9
#define ANIM_Special01 10
#define ANIM_Unknown 0

extern char* g_strz_folkanim[26];
extern U32 g_hash_folkanim[26];
extern char* g_strz_platanim[2];
extern U32 g_hash_platanim[2];
extern zParEmitter* g_pemit_aqualeak;
extern xParEmitterCustomSettings g_parf_aqualeak;
extern xVec3 g_O3;

// Taken from zNPCTypeVillager.s
// Defining these here makes the stringBase0 offsets match in the later functions.
char* str1 = "Unknown";
char* str2 = "Idle01";
char* str3 = "Move01";
char* str4 = "Hurt01";
char* str5 = "Yawn01";
char* str6 = "Talk01";
char* str7 = "Flee01";
char* str8 = "Fear01";
char* str9 = "Pray01";
char* str10 = "Clap01";
char* str11 = "Special01";
char* str12 = "Ride01";
char* str13 = "Bump01";
char* str14 = "Fall01";
char* str15 = "Land01";
char* str16 = "Weep01";
char* str17 = "Swim01";
char* str18 = "Idle02";
char* str19 = "Idle03";
char* str20 = "Idle04";
char* str21 = "Yawn02";
char* str22 = "Yawn03";
char* str23 = "Yawn04";
char* str24 = "Talk02";
char* str25 = "Talk03";
char* str26 = "Talk04";
char* str27 = "fish_d_balloon_move";
char* str28 = "fish_d_balloon_hit";
char* str29 = "zNPCVillager";
char* str30 = "zNPCBallonBoy";
char* str31 = "zNPCSuperFriend";
char* str32 = "NonRandomTalkAnims";
char* str33 = "FAB1001";
char* str34 = "FAB1002";
char* str35 = "FAB1003";
char* str36 = "FAB1004";
char* str37 = "FAB1011";
char* str38 = "FAB1017";
char* str39 = "FAB1018";
char* str40 = "FAB1019";
char* str41 = "FAB1020";
char* str42 = "FAB1021";
char* str43 = "FAB1022";
char* str44 = "FAB1023";
char* str45 = "FAB1025";
char* str46 = "FAB1029";
char* str47 = "FAB1030";
char* str48 = "FAB1032";
char* str49 = "FAB1033";
char* str50 = "FAB1034";
char* str51 = "FAB1035";
char* str52 = "FAB1038";
char* str53 = "FAB1046";
char* str54 = "FAB1047";
char* str55 = "FAB1049";
char* str56 = "FAB1073";
char* str57 = "FAB1074";
char* str58 = "FAB1076";
char* str59 = "FAB1077";
char* str60 = "FAB1078";
char* str61 = "FAB1079";
char* str62 = "FAB1080";
char* str63 = "FAB1006";
char* str64 = "FAB1012";
char* str65 = "FAB1016";
char* str66 = "FAB1024";
char* str67 = "FAB1026";
char* str68 = "FAB1065";
char* str69 = "FAB1039_a";
char* str70 = "FAB1039_b";
char* str71 = "FAB1039_c";
char* str72 = "FAB1055";
char* str73 = "FAB1040";
char* str74 = "FAB1053";
char* str75 = "FAB1081_a";
char* str76 = "FAB1081_b";
char* str77 = "FAB1042";
char* str78 = "FAB1045";
char* str79 = "FAB1056";
char* str80 = "FAB1064";
char* str81 = "FAB1050";
char* str82 = "FAB1007";
char* str83 = "FAB1007_b";
char* str84 = "FAB1031";
char* str85 = "FAB1082_a";
char* str86 = "FAB1082_b";
char* str87 = "FAB1010";
char* str88 = "FAB1027";
char* str89 = "FAB1037";
char* str90 = "FAB1052";
char* str91 = "FAB1067";
char* str92 = "FAB1014";
char* str93 = "FAB1008";
char* str94 = "FAB1036";
char* str95 = "FAB1041_a";
char* str96 = "FAB1041_b";
char* str97 = "FAB1054";
char* str98 = "FAB1013";
char* str99 = "FAB1009";
char* str100 = "FAB1028";
char* str101 = "FAB1051";
char* str102 = "FAB1072";
char* str103 = "FAB1083";
char* str104 = "NPC|zNPCNewsFish|screen|on screen|x";
char* str105 = "NPC|zNPCNewsFish|screen|on screen|y";
char* str106 = "NPC|zNPCNewsFish|screen|off screen|x";
char* str107 = "NPC|zNPCNewsFish|screen|off screen|y";
char* str108 = "NPC|zNPCNewsFish|screen|size";
char* str109 = "NPC|zNPCNewsFish|screen|rotation";
char* str110 = "NPC|zNPCNewsFish|screen|appearSpeed";
char* str111 = "NPC|zNPCNewsFish|screen|disappearSpeed";
char* str112 = "shadow_balloons";
char* str113 = "gloss_edge";
char* str114 = "rainbowfilm_smooth32";
char* str115 = "PAREMIT_FOLK_SANDYB_LEAK";

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

xAnimTable* ZNPC_AnimTable_BalloonBoy()
{
    return ZNPC_AnimTable_BalloonBoy(NULL);
}

xAnimTable* ZNPC_AnimTable_SuperFriend()
{
    return ZNPC_AnimTable_SuperFriend(NULL);
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

void zNPCVillager::SpeakEnd() //80%
{
    xPsyche* psy = psy_instinct;
    psy->GIDInStack(NPC_GOAL_LIMBO);

    if ((psy == 0) && (psy->GIDOfSafety() != 0))
    {
        psy->GoalSet(NPC_GOAL_LIMBO, 1);
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
//     case 'NTF0':
//     {
//     }
//     case 'NPC_TYPE_FISH_MALE':
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

void xMat3x3RMulVec(xVec3* o, const xMat3x3* m, const xVec3* v)
{
    F32 x = m->right.x * v->x + m->up.x * v->y + m->at.x * v->z;
    F32 y = m->right.y * v->x + m->up.y * v->y + m->at.y * v->z;
    F32 z = m->right.z * v->x + m->up.z * v->y + m->at.z * v->z;

    o->x = x;
    o->y = y;
    o->z = z;
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

void zNPCBalloonBoy::Init(xEntAsset* asset) //68%
{
    zNPCFish::Init(asset);
    rast_shadBalloon = 0;
    bound.type = 0;

    //cg_npc 0x1d8
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
