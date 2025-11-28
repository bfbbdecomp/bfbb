#include "xVec3Inlines.h"
#include <types.h>

#include "xAnim.h"
#include "xVec3.h"
#include "xEvent.h"
#include "xCamera.h"
#include "xMath3.h"
#include "xDebug.h"

#include "zEnt.h"
#include "zFX.h"
#include "zGlobals.h"
#include "zNPCSndTable.h"
#include "zNPCSndLists.h"
#include "zNPCTypeBossSandy.h"
#include "xMarkerAsset.h"
#include "zCamera.h"
#include "zGrid.h"

extern const char bossSandyStrings[];

#define Unknown 1
#define Idle01 2
#define Idle02 3
#define Taunt01 4
#define Run01 5
#define Walk01 6
#define Melee01 7
#define Hit01 8
#define Hit02 9
#define GetUp01 10
#define Dizzy01 11
#define ElbowDrop01 12
#define Leap01 13
#define Leap02 14
#define Leap03 15
#define Leap04 16
#define Sit01 17
#define SitShock01 18
#define CLBegin01 19
#define CLLoop01 20
#define CLEnd01 21
#define NoHeadIdle01 22
#define NoHeadWaving01 23
#define NoHeadGetUp01 24
#define NoHeadShotUp01 25
#define NoHeadShock01 26
#define NoHeadReplace01 27
#define NoHeadHit01 28

static F32 sSinTable[16];
static SandyLimbSpring sLeftArmSpring;
static SandyLimbSpring sRightArmSpring;
static SandyLimbSpring sLeftLegSpring;
static SandyLimbSpring sRightLegSpring;
static xVec3 sCamSubTargetFixed;
static U32 sNFSoundValue[30];
static BossDamageEffectRecord BDErecord[4];

static U8 sOthersHaventBeenAdded;
static U8 sPCWasBubbleBouncing;
static F32 sRadiusOfRing;
static F32 sElbowDropTimer;
static F32 sChaseTimer;
static S32 sNumAttacks;
static F32 sDidClothesline;
static F32 sElbowDropThreshold;
static zNPCBSandy* sSandyPtr;
static xVec3* sCamSubTarget;
static F32 sCurrYaw;
static F32 sCurrHeight;
static F32 sCurrRadius;
static F32 sCurrPitch;
static U32 sCurrNFSound;

static U8 sUseBossCam = TRUE;
static U8 sWasUsingBossCam = TRUE;
static F32 sPCHeightDiff = -1.0f;
static F32 sHeadPopOffFactor = -1.0f;
static S32 sLeftFootBones[2] = { 0x2B, 0x2C };
static S32 sRightFootBones[2] = { 0x30, 0x31 };

static S32 sBone[13] = {
    0x3, 0x5, 0x12, 0x14, 0x19, 0x1B, 0x22, 0x24, 0x26, 0x29, 0x2B, 0x2E, 0x30
};
static S32 sLeftHandBones[4] = { 0x14, 0x15, 0x16, 0x17 };
static S32 sRightHandBones[4] = { 0x1B, 0x1C, 0x1D, 0x1E };
static F32 sBoundRadius[13] = { 1.4f,        1.3f, -1.0f, 0.6f,        -1.0f, 0.6f,       0.6f,
                                0.69999999f, 0.8f, -1.0f, 0.89999999f, -1.0f, 0.89999999f };
static xVec3 sBoneOffset[13] = { {},
                                 { 0.0f, 1.1f, 0.0f },
                                 {},
                                 { 0.3f, 0.0f, 0.0f },
                                 {},
                                 { -0.3f, 0.0f, 0.0f },
                                 { 0.0f, 0.2f, 0.0f },
                                 { 0.0f, 0.2f, 0.0f },
                                 {},
                                 {},
                                 { 0.0f, -0.6f, 0.3f },
                                 {},
                                 { 0.0f, -0.6f, 0.3f } };
static char* sNFSoundLabel[30] = {
    "FAB1006", "FAB1007", "FAB1008", "FAB1009", "FAB1010", "FAB1011", "FAB1012", "FAB1013",
    "FAB1014", "FAB1015", "FAB1016", "FAB1017", "FAB1018", "FAB1018", "FAB1018", "FAB1018",
    "FAB1018", "FAB1018", "FAB1019", "FAB1020", "FAB1021", "FAB1022", "FAB1023", "FAB1024",
    "FAB1025", "FAB1026", "FAB1027", "FAB1028", "FAB1029", "FAB1030"
};

static const tweak_callback newsfish_cb = {};
static const tweak_callback shockwave_cb = {};

extern zGlobals globals;

static S32 idleCB(xGoal* rawgoal, void*, en_trantype* trantype, F32 dt, void*);
static S32 tauntCB(xGoal* rawgoal, void*, en_trantype* trantype, F32 dt, void*);
static S32 noHeadCB(xGoal* rawgoal, void*, en_trantype* trantype, F32 dt, void*);
static S32 elbowDropCB(xGoal* rawgoal, void*, en_trantype* trantype, F32 dt, void*);
static S32 leapCB(xGoal* rawgoal, void*, en_trantype* trantype, F32 dt, void*);
static S32 chaseCB(xGoal* rawgoal, void*, en_trantype* trantype, F32 dt, void*);
static S32 meleeCB(xGoal* rawgoal, void*, en_trantype* trantype, F32 dt, void*);
static S32 sitCB(xGoal* rawgoal, void*, en_trantype* trantype, F32 dt, void*);
static S32 getUpCB(xGoal* rawgoal, void*, en_trantype* trantype, F32 dt, void*);
static S32 runToRopeCB(xGoal* rawgoal, void*, en_trantype* trantype, F32 dt, void*);
static S32 clotheslineCB(xGoal* rawgoal, void*, en_trantype* trantype, F32 dt, void*);

void on_change_newsfish(const tweak_info& tweak)
{
    sSandyPtr->newsfish->SpeakStart(sCurrNFSound, 0, -1);
}

void on_change_shockwave(const tweak_info& tweak)
{
    sSandyPtr->bossFlags |= 0x800;

    xVec3Copy((xVec3*)(&sSandyPtr->shockwaveEmitter->tasset->pos),
              (xVec3*)(&sSandyPtr->model->Mat->pos));

    sSandyPtr->shockwaveEmitter->tasset->pos.y = 0.0f;
    sSandyPtr->shockRadius = 1.0f;
}

xAnimTable* ZNPC_AnimTable_BossSandy()
{
    // clang-format off
    S32 ourAnims[25] = {
        Idle01,
        Idle02,
        Taunt01,
        Run01,
        Walk01,
        Melee01,
        Hit01,
        Hit02,
        GetUp01,
        Dizzy01,
        ElbowDrop01,
        Leap01,
        Leap02,
        Leap03 ,
        Leap04,
        Sit01,
        SitShock01,
        CLBegin01,
        CLLoop01,
        CLEnd01,
        NoHeadIdle01,
        NoHeadWaving01,
        NoHeadGetUp01,
        NoHeadShotUp01,
        NoHeadShock01,
    };
    // clang-format on

    xAnimTransition* tList;
    xAnimTable* table;
    table = xAnimTableNew("zNPCBSandy", NULL, 0);

    xAnimTableNewState(table, g_strz_bossanim[Unknown], 0x10, 0x40, 1.0f, NULL, NULL, 0.0f, NULL,
                       NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_bossanim[Idle02], 0x10, 0x40, 1.0f, NULL, NULL, 0.0f, NULL,
                       NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_bossanim[Taunt01], 0x10, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_bossanim[Run01], 0x10, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_bossanim[Walk01], 0x10, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_bossanim[Dizzy01], 0x10, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_bossanim[ElbowDrop01], 0x10, 0, 1.0f, NULL, NULL, 0.0f, NULL,
                       NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_bossanim[Leap01], 0x10, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_bossanim[Leap02], 0x10, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_bossanim[Leap03], 0x10, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_bossanim[Leap04], 0x10, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_bossanim[Sit01], 0x10, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_bossanim[Hit02], 0x10, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_bossanim[SitShock01], 0x10, 0, 1.0f, NULL, NULL, 0.0f, NULL,
                       NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_bossanim[CLBegin01], 0x10, 0, 1.0f, NULL, NULL, 0.0f, NULL,
                       NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_bossanim[CLLoop01], 0x10, 0, 1.0f, NULL, NULL, 0.0f, NULL,
                       NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_bossanim[CLEnd01], 0x10, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_bossanim[NoHeadIdle01], 0x10, 0, 1.0f, NULL, NULL, 0.0f, NULL,
                       NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_bossanim[NoHeadWaving01], 0x10, 0, 1.0f, NULL, NULL, 0.0f,
                       NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_bossanim[NoHeadGetUp01], 0x10, 0, 1.0f, NULL, NULL, 0.0f, NULL,
                       NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_bossanim[NoHeadShotUp01], 0x10, 0, 1.0f, NULL, NULL, 0.0f,
                       NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_bossanim[NoHeadShock01], 0x10, 0, 1.0f, NULL, NULL, 0.0f, NULL,
                       NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_bossanim[NoHeadReplace01], 0x10, 0, 1.0f, NULL, NULL, 0.0f,
                       NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);

    NPCC_BuildStandardAnimTran(table, g_strz_bossanim, ourAnims, 1, 0.2f);

    tList = table->TransitionList;
    while (tList != NULL)
    {
        tList->BlendRecip = 3.3333333f;
        tList = tList->Next;
    }

    return table;
}

U32 HeadIsCarried(xAnimTransition*, xAnimSingle*, void*)
{
    return globals.player.carry.grabbed == sSandyPtr->headBoulder;
}

U32 HeadNotCarried(xAnimTransition*, xAnimSingle*, void*)
{
    return !(globals.player.carry.grabbed == sSandyPtr->headBoulder);
}

U32 HeadIsShocked(xAnimTransition*, xAnimSingle*, void*)
{
    return sSandyPtr->bossFlags & 0x100;
}

U32 HeadNotShocked(xAnimTransition*, xAnimSingle*, void*)
{
    return !(sSandyPtr->bossFlags & 0x100);
}

xAnimTable* ZNPC_AnimTable_BossSandyHead()
{
    xAnimTable* table;

    table = xAnimTableNew("SandyBossHead", NULL, 0);

    xAnimTableNewState(table, "Idle01", 0x10, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, "Carried01", 0x10, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, "Shocked01", 0x10, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);

    xAnimTableNewTransition(table, "Idle01", "Carried01", HeadIsCarried, NULL, 0, 0, 0.0f, 0.0f, 0,
                            0, 0.25f, NULL);
    xAnimTableNewTransition(table, "Carried01", "Idle01", HeadNotCarried, NULL, 0, 0, 0.0f, 0.0f, 0,
                            0, 0.25f, NULL);
    xAnimTableNewTransition(table, "Idle01", "Shocked01", HeadIsShocked, NULL, 0, 0, 0.0f, 0.0f, 0,
                            0, 0.25f, NULL);
    xAnimTableNewTransition(table, "Shocked01", "Idle01", HeadNotShocked, NULL, 0, 0, 0.0f, 0.0f, 0,
                            0, 0.25f, NULL);

    return table;
}

xAnimTable* ZNPC_AnimTable_BossSandyScoreboard()
{
    xAnimTable* table;

    table = xAnimTableNew("SandyBossScoreboard", NULL, 0);

    xAnimTableNewState(table, "Idle01", 0x10, 0x0, 1.0f, NULL, NULL, 0.0f, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, "Shocked01", 0x10, 0x0, 1.0f, NULL, NULL, 0.0f, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);

    xAnimTableNewTransition(table, "Idle01", "Shocked01", HeadIsShocked, NULL, 0x0, 0x0, 0.0f, 0.0f,
                            0, 0, 0.25f, NULL);
    xAnimTableNewTransition(table, "Shocked01", "Idle01", HeadIsShocked, NULL, 0x0, 0x0, 0.0f, 0.0f,
                            0, 0, 0.25f, NULL);

    return table;
}

void zNPCBSandy::Init(xEntAsset* asset)
{
    S32 i;
    xEnt* ent;
    char objName[32];
    xMarkerAsset* laserMarker;
    U32 colorPicker;
    RwRGBA* _col;
    // RwRGBA* _col;
    // RwRGBA* _col;
    // RwRGBA* _col;

    zNPCCommon::Init(asset);
    sSandyPtr = this;

    round = 1;
    firstTimeR1Csn = 1;
    boundFlags = (U32*)xMemAlloc(gActiveHeap, 13 * sizeof(U32), 0x0);
    boundList = (xEnt**)xMemAlloc(gActiveHeap, 13 * sizeof(xEnt*), 0x0);

    for (i = 0; i < 13; i++)
    {
    }
}

void zNPCBSandy::Setup()
{
    S32 i;
    char objName[32];

    newsfish = (zNPCNewsFish*)zSceneFindObject(xStrHash("NPC_NEWSCASTER"));
    newsfish->TalkOnScreen(1);

    strcpy(objName, "HEALTH_00");
    for (i = 0; i < 3; i++)
    {
        objName[8] = '1' + (char)i;
        underwear[i] = (zEntPickup*)zSceneFindObject(xStrHash(objName));
    }

    // Configure and initialize bossCam
    bossCam.cfg.zone_rest.distance = 6.0f;
    bossCam.cfg.zone_rest.height = 1.3f;
    bossCam.cfg.zone_rest.height_focus = 2.0f;

    bossCam.cfg.zone_above.distance = 3.0f;
    bossCam.cfg.zone_above.height = 8.2f;
    bossCam.cfg.zone_above.height_focus = 4.0f;

    bossCam.cfg.zone_below.distance = 4.5f;
    bossCam.cfg.zone_below.height = 0.15f;
    bossCam.cfg.zone_below.height_focus = 2.0f;

    bossCam.cfg.move_speed = 10.0f;
    bossCam.cfg.turn_speed = 10.0f;
    bossCam.cfg.stick_speed = 10.0f;
    bossCam.cfg.stick_yaw_vel = 10.0f;
    bossCam.cfg.max_yaw_vel = 10.0f;
    bossCam.cfg.margin_angle = -0.4f;

    bossCam.init();
    bossCam.add_tweaks("NPC|zNPCBSandy|Boss Cam|");

    // Configure and initialize specialBossCam
    specialBossCam.cfg.zone_rest.distance = 9.7f;
    specialBossCam.cfg.zone_rest.height = 4.0f;
    specialBossCam.cfg.zone_rest.height_focus = 4.0f;

    specialBossCam.cfg.zone_above.distance = 10.0f;
    specialBossCam.cfg.zone_above.height = 7.0f;
    specialBossCam.cfg.zone_above.height_focus = 0.15f;

    specialBossCam.cfg.zone_below.distance = 10.0f;
    specialBossCam.cfg.zone_below.height = 0.5f;
    specialBossCam.cfg.zone_below.height_focus = 5.0f;

    specialBossCam.cfg.move_speed = 10.0f;
    specialBossCam.cfg.turn_speed = 10.0f;
    specialBossCam.cfg.stick_speed = 10.0f;
    specialBossCam.cfg.stick_yaw_vel = 10.0f;
    specialBossCam.cfg.max_yaw_vel = 10.0f;
    specialBossCam.cfg.margin_angle = -0.4f;

    specialBossCam.init();
    specialBossCam.add_tweaks("NPC|zNPCBSandy|Mat Smash Cam|");

    zNPCCommon::Setup();
}

void zNPCBSandy::SelfSetup()
{
    xBehaveMgr* bmgr = xBehaveMgr_GetSelf();
    psy_instinct = bmgr->Subscribe(this, 0);

    xPsyche* psy = psy_instinct;
    psy->BrainBegin();

    xGoal* goal = psy->AddGoal('NGB1', NULL);
    goal->SetCallbacks(idleCB, NULL, NULL, NULL);

    goal = psy->AddGoal('NGB2', NULL);
    goal->SetCallbacks(tauntCB, NULL, NULL, NULL);

    goal = psy->AddGoal('NGB3', NULL);
    goal->SetCallbacks(chaseCB, NULL, NULL, NULL);

    goal = psy->AddGoal('NGB4', NULL);
    goal->SetCallbacks(meleeCB, NULL, NULL, NULL);

    goal = psy->AddGoal('NGB5', NULL);
    goal->SetCallbacks(noHeadCB, NULL, NULL, NULL);

    goal = psy->AddGoal('NGB6', NULL);
    goal->SetCallbacks(elbowDropCB, NULL, NULL, NULL);

    goal = psy->AddGoal('NGB7', NULL);
    goal->SetCallbacks(leapCB, NULL, NULL, NULL);

    goal = psy->AddGoal('NGB8', NULL);
    goal->SetCallbacks(sitCB, NULL, NULL, NULL);

    goal = psy->AddGoal('NGB9', NULL);
    goal->SetCallbacks(getUpCB, NULL, NULL, NULL);

    goal = psy->AddGoal('NGB:', NULL);
    goal->SetCallbacks(runToRopeCB, NULL, NULL, NULL);

    goal = psy->AddGoal('NGB;', NULL);
    goal->SetCallbacks(clotheslineCB, NULL, NULL, NULL);

    psy->BrainEnd();
    psy->SetSafety('NGB1');
}

void zNPCBSandy::ParseINI()
{
    zNPCCommon::ParseINI();

    this->cfg_npc->snd_traxShare = NULL;
    this->cfg_npc->snd_trax = g_sndTrax_BossSandy;

    NPCS_SndTablePrepare(g_sndTrax_BossSandy);
}

U32 zNPCBSandy::AnimPick(S32 gid, en_NPC_GOAL_SPOT param_2, xGoal* rawgoal)
{
    S32 index = -1;
    U32 animID = 0;
    zNPCGoalBossSandyClothesline* cl;

    switch (gid)
    {
    case 'NGB1':
        index = 1;
        break;
    case 'NGB2':
        index = 3;
        break;
    case 'NGB3':
        index = 5;
        break;
    case 'NGB4':
        index = 6;
        break;
    case 'NGB5':
        zNPCGoalBossSandyNoHead* noHeadGoal = (zNPCGoalBossSandyNoHead*)rawgoal;
        U32 anid = noHeadGoal->stage;
        if (anid == 0)
        {
            if (round == 2)
            {
                index = 23;
            }
            else
            {
                index = 24;
            }
        }
        else if (anid == 1)
        {
            if (round == 2)
            {
                index = 21;
            }
            else
            {
                index = 22;
            }
        }
        else if (anid == 2)
        {
            index = 25;
        }
        else if (anid == 3)
        {
            index = 21;
        }
        else if (anid == 4)
        {
            index = 26;
        }
        else if (anid == 5)
        {
            index = 27;
        }
        break;
    case 'NGB6':
        index = 11;
        break;
    case 'NGB7':
        index = 12;
        break;
    case 'NGB8':
        zNPCGoalBossSandySit* sitGoal = (zNPCGoalBossSandySit*)rawgoal;
        if ((sitGoal->sitFlags & 2) != 0x0)
        {
            index = 17;
        }
        else
        {
            index = 16;
        }
        break;
    case 'NGB:':
        index = 4;
        break;
    case 'NGB;':
        cl = (zNPCGoalBossSandyClothesline*)rawgoal;
        if (cl->stage == 0)
        {
            index = 18;
        }
        else if (cl->stage == 1 && cl->playedAnimEarly == FALSE)
        {
            index = 19;
        }
        else
        {
            index = 20;
        }
        break;
    case 'NGB9':
        index = 9;
        break;
    default:
        index = 1;
        break;
    }

    if (index > -1)
    {
        animID = g_hash_bossanim[index];
    }

    return animID;
}

void zNPCBSandy_BossDamageEffect_Init()
{
    for (S32 i = 0; i < 4; i++)
    {
        BDErecord[i].BDEminst = NULL;
    }
}

void zNPCBSandy::CalcMagnetizeInfo()
{
    xMat4x3 boneMat;
    xQuatFromMat(&this->qBoulder, (xMat3x3*)this->headBoulder->model->Mat);
    xVec3Copy(&this->pBoulder, (xVec3*)&this->headBoulder->model->Mat->pos);
    xMat4x3Mul(&boneMat, (xMat4x3*)&this->model->Mat[sBone[1]], (xMat4x3*)this->model->Mat);
    xQuatFromMat(&this->qHead, &boneMat);
    xMat3x3RMulVec(&this->pHead, &boneMat, &sBoneOffset[1]);
    xVec3AddTo(&this->pHead, &boneMat.pos);
    magnetizeTime = xVec3Dist(&this->pHead, &this->pBoulder) * 0.1f;
}

void zNPCBSandy::InitFX()
{
    this->timeToNextBolt[0] = 0.0f;
    this->timeToNextBolt[1] = 0.0f;
    this->maxLightningWait[0] = 0.0f;
    this->maxLightningWait[1] = 0.0f;

    xMat4x3Copy((xMat4x3*)&this->sparkTransform[0][0], (xMat4x3*)&this->hangingScoreboard->model->Mat);
    xMat4x3Copy((xMat4x3*)&this->sparkTransform[0][1], (xMat4x3*)&this->hangingScoreboard->model->Mat);
    xMat4x3Copy((xMat4x3*)&this->sparkTransform[1][0], (xMat4x3*)&this->crashedScoreboard->model->Mat);
    xVec3SMul((xVec3*)&this->sparkTransform[1][1], (xVec3*)&this->crashedScoreboard->model->Mat, 0.8f);
    xVec3SMul((xVec3*)&this->sparkTransform[1][1].up, (xVec3*)&this->crashedScoreboard->model->Mat->at, -0.8f);
    xVec3SMul((xVec3*)&this->sparkTransform[1][1].at, (xVec3*)&this->crashedScoreboard->model->Mat->up, 0.8f);
    xVec3Copy((xVec3*)&this->sparkTransform[1][1].pos, (xVec3*)&this->crashedScoreboard->model->Mat->pos);
    xVec3AddScaled((xVec3*)&this->sparkTransform[1][1].pos, (xVec3*)&this->crashedScoreboard->model->Mat->up, 4.5f);
    xVec3AddScaled((xVec3*)&this->sparkTransform[1][1].pos, (xVec3*)&this->crashedScoreboard->model->Mat->at, 5.0f);
    xVec3Init((xVec3*)&this->endPoints[0][0], -2.0f, 2.0f, 0.0f);
    xVec3Init((xVec3*)&this->endPoints[0][1], 2.0f, 2.0f, 0.0f);

    this->sparks[0].type = 0x3;
    this->sparks[0].setup_degrees = 66.0f;
    this->sparks[0].move_degrees = 66.0f;
    this->sparks[0].rot_radius = 66.0f;
    this->sparks[0].total_points = 0x10;
    this->sparks[0].end_points = 0;
    this->sparks[0].time = 0.25f;
    this->sparks[0].arc_height = -1.5f;
    this->sparks[0].thickness = 1.0f;
    this->sparks[0].color.r = 0xa0;
    this->sparks[0].color.g = 0xa0;
    this->sparks[0].color.b = 0xff;
    this->sparks[0].color.a = 0xc8;
    this->sparks[0].rand_radius = 13.0f;
    this->sparks[0].flags = 0x1c28;

    xVec3Init((xVec3*)&this->endPoints[0][2], -2.0f, 2.0f, 0.0f);
    xVec3Init((xVec3*)&this->endPoints[0][3], 2.0f, 2.0f, 0.0f);

    this->sparks[1].type = 0x3;
    this->sparks[1].setup_degrees = 66.0f;
    this->sparks[1].move_degrees = 66.0f;
    this->sparks[1].rot_radius = 66.0f;
    this->sparks[1].total_points = 0x10;
    this->sparks[1].end_points = 0;
    this->sparks[1].time = 0.25f;
    this->sparks[1].arc_height = -1.5f;
    this->sparks[1].thickness = 1.0f;
    this->sparks[1].color.r = 0xc8;
    this->sparks[1].color.g = 0xc8;
    this->sparks[1].color.b = 0x37;
    this->sparks[1].color.a = 0xc8;
    this->sparks[1].rand_radius = 13.0f;
    this->sparks[1].flags = 0x1c28;

    xVec3Init((xVec3*)&this->endPoints[1][0], 0.0f, 2.0f, 0.0f);
    xVec3Init((xVec3*)&this->endPoints[1][1], 3.5f, 2.0f, 0.0f);

    this->sparks[2].type = 0x3;
    this->sparks[2].setup_degrees = 66.0f;
    this->sparks[2].move_degrees = 66.0f;
    this->sparks[2].rot_radius = 66.0f;
    this->sparks[2].total_points = 0x8;
    this->sparks[2].end_points = 0;
    this->sparks[2].time = 0.25f;
    this->sparks[2].arc_height = -1.5f;
    this->sparks[2].thickness = 1.0f;
    this->sparks[2].color.r = 0xa0;
    this->sparks[2].color.g = 0xa0;
    this->sparks[2].color.b = 0xff;
    this->sparks[2].color.a = 0xc8;
    this->sparks[2].rand_radius = 13.0f;
    this->sparks[2].flags = 0x1c20;

    xVec3Init((xVec3*)&this->endPoints[1][2], 0.0f, 2.0f, 0.0f);
    xVec3Init((xVec3*)&this->endPoints[1][3], 3.5f, 2.0f, 0.0f);

    this->sparks[3].type = 0x3;
    this->sparks[3].zeus_normal_offset = 1.0f;
    this->sparks[3].zeus_back_offset = -1.0f;
    this->sparks[3].zeus_side_offset = 0.0f;
    this->sparks[3].total_points = 0xa;
    this->sparks[3].end_points = 0;
    this->sparks[3].time = 0.25f;
    this->sparks[3].arc_height = -2.5f;
    this->sparks[3].thickness = 1.0f;
    this->sparks[3].color.r = 0xc8;
    this->sparks[3].color.g = 0xc8;
    this->sparks[3].color.b = 0x37;
    this->sparks[3].color.a = 0xc8;
    this->sparks[3].rand_radius = 15.0f;
    this->sparks[3].flags = 0x1c20;
    this->sparks[4].type = 0x3;
    this->sparks[4].color.r = 0xc8;
    this->sparks[4].color.g = 0xc8;
    this->sparks[4].color.b = 0xc8;
    this->sparks[4].color.a = 0xff;
    this->sparks[4].time = 1.0f;
    this->sparks[4].thickness = 1.0f;
    this->sparks[4].flags = 0x110;
    this->sparks[5].type = 0x3;
    this->sparks[5].color.r = 0x32;
    this->sparks[5].color.g = 0x32;
    this->sparks[5].color.b = 0xc8;
    this->sparks[5].color.a = 0xff;
    this->sparks[5].time = 1.0f;
    this->sparks[5].thickness = 1.0f;
    this->sparks[5].flags = 0x110;
}

static void UpdateSandyBossCam(zNPCBSandy* sandy, F32 dt)
{
    S32 needToCallStart = 0;
    xVec3 tempTarget;

    if ((zCameraIsTrackingDisabled() & 0x8) == 0)
    {
        needToCallStart = 1;
    }

    zCameraDisableTracking(CO_BOSS);

    if (needToCallStart)
    {
        sandy->bossCam.start(globals.camera);
    }

    if (sandy->bossFlags & 0x40)
    {
        if ((sandy->bossFlags & 0x2000) == 0)
        {
            sandy->specialBossCam.start(globals.camera);
        }

        tempTarget.x = globals.player.ent.model->Mat->pos.x;
        tempTarget.y = 0.0f;
        tempTarget.z = globals.player.ent.model->Mat->pos.z;
        sandy->specialBossCam.set_targets(tempTarget, (xVec3&)sCamSubTarget, 2.0f);

        if ((sandy->bossFlags & 0x4000))
        {
            sandy->specialBossCam.update(10.0f);
            sandy->bossFlags &= ~0x4000;
        }
        else
        {
            sandy->specialBossCam.update(dt);
        }
    }
    else
    {
        if (sandy->bossFlags & 0x2000)
        {
            sandy->bossCam.start(globals.camera);
        }

        sandy->bossCam.set_targets(*((xVec3*)&globals.player.ent.model->Mat->pos),
                                   (xVec3&)sCamSubTarget, 10.0f);

        if (sandy->bossFlags & 0x4000)
        {
            sandy->bossCam.update(10.0f);
            sandy->bossFlags &= ~0x4000;
        }
        else
        {
            sandy->bossCam.update(dt);
        }
    }

    if (sandy->bossFlags & 0x40)
    {
        sandy->bossFlags |= 0x2000;
    }
    else
    {
        sandy->bossFlags &= ~0x2000;
    }
}

static void GetBonePos(xVec3* result, xMat4x3* matArray, S32 index, xVec3* offset)
{
    xMat4x3 tmpMat;

    if (index == 0)
    {
        xMat3x3RMulVec(result, matArray, offset);
        xVec3AddTo(result, &matArray->pos);
    }
    else
    {
        xMat4x3Mul(&tmpMat, &matArray[index], matArray);

        if (offset)
        {
            xMat3x3RMulVec(result, &tmpMat, offset);
            xVec3AddTo(result, &tmpMat.pos);
        }
        else
        {
            xVec3Copy(result, &tmpMat.pos);
        }
    }
}

void zNPCBSandy::hiddenByCutscene()
{
    for (S32 i = 0; i < 3; i++)
    {
        this->underwear[i]->state = (this->underwear[i]->state & 0xffffffc0) | 1;
        zEntEvent(this->underwear[i], eEventCollision_Visible_On);
        this->underwear[i]->timer = 0.0f; // 0.0
    }

    switch (this->round)
    {
    case 1:
    {
        this->hangingScoreboard->chkby &= 0xef;
        this->hangingScoreboard->flags |= 1;
        this->bustedScoreboard->chkby &= 0xef;
        this->bustedScoreboard->flags &= 0xfe;
        this->crashedScoreboard->chkby &= 0xef;
        this->crashedScoreboard->flags &= 0xfe;

        this->ropeObjectLo[4] = this->ropeSb;

        xEntHide(this->ropeSbDamaged);
        xEntShow(this->ropeSb);

        gCurrentPlayer = eCurrentPlayerSpongeBob;

        zLightningShow(this->wireLight[0], 0);
        zLightningShow(this->wireLight[1], 0);

        break;
    }
    case 2:
    {
        this->crashedScoreboard->chkby |= 0x10;
        this->crashedScoreboard->flags |= 1;
        this->hangingScoreboard->chkby &= 0xef;
        this->hangingScoreboard->flags &= 0xfe;
        this->bustedScoreboard->chkby &= 0xef;
        this->bustedScoreboard->flags &= 0xfe;

        this->ropeObjectLo[4] = this->ropeSbDamaged;

        xEntHide(this->ropeSb);
        xEntShow(this->ropeSbDamaged);

        zLightningShow(this->wireLight[0], 1);
        zLightningShow(this->wireLight[1], 1);

        gCurrentPlayer = eCurrentPlayerPatrick;

        break;
    }
    case 3:
    {
        gCurrentPlayer = eCurrentPlayerSpongeBob;
        break;
    }
    }
}

void zNPCBSandy::Damage(en_NPC_DAMAGE_TYPE damtype, xBase*, const xVec3*)
{
    if (damtype == DMGTYP_INSTAKILL)
    {
        this->bossFlags |= 0x100;
    }
}

void zNPCBSandy_AddBoundEntsToGrid(zScene* scn)
{
    S32 i;
    S32 isLimb;
    xEnt* ent;

    if (sOthersHaventBeenAdded)
    {
        sOthersHaventBeenAdded = 0;

        for (i = 0; i < 13; i++)
        {
            ent = sSandyPtr->boundList[i];
            if (i == 2 || i == 4 || i == 9 || i == 11)
            {
                isLimb = TRUE;
            }
            else
            {
                isLimb = FALSE;
            }

            if (isLimb || xGridEntIsTooBig(&colls_grid, ent) != FALSE)
            {
                xGridAdd(&colls_oso_grid, ent);

                if (isLimb || xGridEntIsTooBig(&colls_oso_grid, ent) != FALSE)
                {
                    ent->gridb.oversize = 0x2;
                }
                else
                {
                    ent->gridb.oversize = 0x1;
                }
            }
            else
            {
                xGridAdd(&colls_grid, ent);
                ent->gridb.oversize = 0x0;
            }
        }
    }
    else
    {
        sSandyPtr = NULL;
    }
}

void zNPCBSandy_GameIsPaused(zScene*)
{
    if (sSandyPtr)
    {
        if (sSandyPtr->bossFlags & 0x400)
        {
            sSandyPtr->bossFlags &= ~0x400; // clear bit
            sSandyPtr->hiddenByCutscene();
        }
    }
}

static S32 idleCB(xGoal* rawgoal, void*, en_trantype* trantype, F32, void*)
{
    zNPCGoalBossSandyIdle* idle = (zNPCGoalBossSandyIdle*)rawgoal;
    zNPCBSandy* sandy = (zNPCBSandy*)idle->psyche->clt_owner;
    S32 nextgoal = 0;
    xVec3 tempVector;

    if (sandy->bossFlags & 0x400)
    {
        return 0;
    }

    if (globals.player.ControlOff)
    {
        return 0;
    }

    if (sandy->hitPoints == 0)
    {
        return 0;
    }

    xVec3Sub(&tempVector, (xVec3*)&globals.player.ent.model->Mat->pos,
             (xVec3*)&sandy->model->Mat->pos);

    tempVector.y = 0.0f; // 0.0

    F32 length = xVec3Length2(&tempVector);

    if (idle->timeInGoal > 0.30000001192092896f) // 0.3
    {
        if (length > 12.0f) // 12.0
        {
            *trantype = GOAL_TRAN_SET;
            nextgoal = 'NGB3';
        }
        else
        {
            *trantype = GOAL_TRAN_SET;
            nextgoal = 'NGB4';
        }
    }

    return nextgoal;
}

static S32 tauntCB(xGoal* rawgoal, void*, en_trantype* trantype, F32 dt, void*)
{
    zNPCGoalBossSandyTaunt* taunt = (zNPCGoalBossSandyTaunt*)rawgoal;
    zNPCBSandy* sandy = (zNPCBSandy*)taunt->psyche->clt_owner;
    S32 nextgoal = 0;
    xVec3 tempVector;

    if (taunt->timeInGoal > 0.30000001192092896f) // 0.3
    {
        if (sandy->bossFlags & 0x400)
        {
            *trantype = GOAL_TRAN_SET;
            return 'NGB1';
        }
    }

    xVec3Sub(&tempVector, (xVec3*)&globals.player.ent.model->Mat->pos,
             (xVec3*)&sandy->model->Mat->pos);

    tempVector.y = 0.0f; // 0.0

    F32 length = xVec3Length2(&tempVector);

    if (sandy->AnimTimeRemain(NULL) < 1.100000023841858f * dt) // 1.1
    {
        if (globals.player.ControlOff)
        {
            *trantype = GOAL_TRAN_SET;
            nextgoal = 'NGB1';
        }
        else if (length > 12.0f) // 12.0
        {
            *trantype = GOAL_TRAN_SET;
            nextgoal = 'NGB3';
        }
        else
        {
            *trantype = GOAL_TRAN_SET;
            nextgoal = 'NGB4';
        }
    }

    return nextgoal;
}

static S32 chaseCB(xGoal* rawgoal, void*, en_trantype* trantype, F32 dt, void*);
static S32 meleeCB(xGoal* rawgoal, void*, en_trantype* trantype, F32 dt, void*);

static S32 noHeadCB(xGoal* rawgoal, void*, en_trantype* trantype, F32 dt, void*)
{
    zNPCGoalBossSandyNoHead* noHead = (zNPCGoalBossSandyNoHead*)rawgoal;
    zNPCBSandy* sandy = (zNPCBSandy*)noHead->psyche->clt_owner;
    S32 nextgoal = 0;

    if (noHead->stage == 4 || noHead->stage == 5)
    {
        if (sandy->AnimTimeRemain(NULL) < 1.7000000476837158f * dt) // 1.7
        {
            *trantype = GOAL_TRAN_SET;
            nextgoal = 'NGB1';
        }
    }

    return nextgoal;
}

static S32 elbowDropCB(xGoal* rawgoal, void*, en_trantype* trantype, F32 dt, void*)
{
    zNPCGoalBossSandyElbowDrop* edrop = (zNPCGoalBossSandyElbowDrop*)rawgoal;
    zNPCBSandy* sandy = (zNPCBSandy*)edrop->psyche->clt_owner;
    S32 nextgoal = 0;
    xVec3 tempVector;

    if (edrop->timeInGoal > 0.30000001192092896f) // 0.3
    {
        if (sandy->bossFlags & 0x400)
        {
            *trantype = GOAL_TRAN_SET;
            return 'NGB1';
        }
    }

    xVec3Sub(&tempVector, (xVec3*)&globals.player.ent.model->Mat->pos,
             (xVec3*)&sandy->model->Mat->pos);

    tempVector.y = 0.0f; // 0.0

    F32 length = xVec3Length2(&tempVector);

    if (sandy->AnimTimeRemain(NULL) < 1.7000000476837158f * dt) // 1.7
    {
        if (globals.player.ControlOff)
        {
            *trantype = GOAL_TRAN_SET;
            nextgoal = 'NGB1';
        }
        else if (sandy->bossFlags & 2)
        {
            sandy->bossFlags &= ~2; // clear bit 2
            *trantype = GOAL_TRAN_SET;
            nextgoal = 'NGB2';
        }
        else if (length < 12.0f) // 12.0
        {
            *trantype = GOAL_TRAN_SET;
            nextgoal = 'NGB4';
        }
        else
        {
            *trantype = GOAL_TRAN_SET;
            nextgoal = 'NGB3';
        }
    }

    return nextgoal;
}

static S32 leapCB(xGoal* rawgoal, void*, en_trantype* trantype, F32 dt, void*)
{
    zNPCGoalBossSandyLeap* leap = (zNPCGoalBossSandyLeap*)rawgoal;
    zNPCBSandy* sandy = (zNPCBSandy*)leap->psyche->clt_owner;
    S32 nextgoal = 0;

    if (leap->stage == 3)
    {
        if (sandy->AnimTimeRemain(NULL) < 1.7000000476837158f * dt) // 1.7
        {
            if (sandy->bossFlags & 2)
            {
                *trantype = GOAL_TRAN_SET;
                nextgoal = 'NGB9';
            }
            else
            {
                *trantype = GOAL_TRAN_SET;
                nextgoal = 'NGB8';
            }
        }
    }

    return nextgoal;
}

static S32 sitCB(xGoal* rawgoal, void*, en_trantype* trantype, F32 dt, void*)
{
    zNPCGoalBossSandySit* sit = (zNPCGoalBossSandySit*)rawgoal;
    zNPCBSandy* sandy = (zNPCBSandy*)sit->psyche->clt_owner;
    S32 nextgoal = 0;

    if (sandy->round == 3 && sHeadPopOffFactor > 0.0f)
    {
        xSndPlay3D(xStrHash("B101_SC_headoff1"), 2.31f, 0.0f, 0x0, 0x0, sandy, 30.0f, SND_CAT_GAME,
                   0.0f);
        *trantype = GOAL_TRAN_SET;
        nextgoal = 'NGB5';
    }
    else if (sit->sitFlags & 0x1)
    {
        if (sit->timeInGoal > sit->totalTime)
        {
            if (sandy->round == 1)
            {
                nextgoal = 'NGB9';
                *trantype = GOAL_TRAN_SET;
            }
            else
            {
                nextgoal = 'NGB5';
                *trantype = GOAL_TRAN_SET;
            }
        }
    }
    else if (sit->timeInGoal > 5.0f)
    {
        nextgoal = 'NGB9';
        *trantype = GOAL_TRAN_SET;
    }

    return nextgoal;
}

static S32 getUpCB(xGoal* rawgoal, void*, en_trantype* trantype, F32 dt, void*)
{
    zNPCGoalBossSandyRunToRope* runGoal = (zNPCGoalBossSandyRunToRope*)rawgoal;
    zNPCBSandy* sandy = (zNPCBSandy*)runGoal->psyche->clt_owner;
    S32 nextgoal = 0;
    xVec3 pcFuturePos;
    F32 futureDist;

    xVec3Sub(&pcFuturePos, (xVec3*)&globals.player.ent.model->Mat->pos,
             (xVec3*)&sandy->model->Mat->pos);

    pcFuturePos.y = 0.0f;
    futureDist = xVec3Length2(&pcFuturePos);

    if (sandy->AnimTimeRemain(NULL) < 1.7f * dt)
    {
        if ((sandy->round == 1 && !(sandy->hitPoints > 6)) ||
            (sandy->round == 2 && !(sandy->hitPoints > 3)) ||
            (sandy->round == 3 && !(sandy->hitPoints > 0)) || (globals.player.ControlOff))
        {
            nextgoal = 'NGB1';
            *trantype = GOAL_TRAN_SET;
        }
        else if (sandy->bossFlags & 0x2)
        {
            sandy->bossFlags &= ~0x2;
            nextgoal = 'NGB2';
            *trantype = GOAL_TRAN_SET;
        }
        else if (futureDist < 12.0f)
        {
            nextgoal = 'NGB4';
            *trantype = GOAL_TRAN_SET;
        }
        else
        {
            nextgoal = 'NGB3';
            *trantype = GOAL_TRAN_SET;
        }
    }

    return nextgoal;
}

static S32 runToRopeCB(xGoal* rawgoal, void*, en_trantype* trantype, F32 dt, void*)
{
    zNPCGoalBossSandyRunToRope* runGoal = (zNPCGoalBossSandyRunToRope*)rawgoal;
    zNPCBSandy* sandy = (zNPCBSandy*)runGoal->psyche->clt_owner;
    S32 nextgoal = 0;
    F32 projection;
    xVec3 newPos;

    xVec3Sub(&newPos, &sandy->bouncePoint[sandy->fromRope], (xVec3*)&sandy->model->Mat->pos);

    newPos.y = 0.0f;
    projection = xVec3Dot(&newPos, &sandy->ropeNormal[sandy->fromRope]);

    if (globals.player.ControlOff != FALSE)
    {
        nextgoal = 'NGB1';
        *trantype = GOAL_TRAN_SET;
    }
    else if (projection > 0.0f)
    {
        nextgoal = 'NGB;';
        *trantype = GOAL_TRAN_SET;
        sandy->boundFlags[10] &= ~0x10;
        sandy->boundFlags[12] &= ~0x10;
    }

    return nextgoal;
}

static S32 clotheslineCB(xGoal* rawgoal, void*, en_trantype* trantype, F32 dt, void*)
{
    zNPCGoalBossSandyClothesline* cl = (zNPCGoalBossSandyClothesline*)rawgoal;
    zNPCBSandy* sandy = (zNPCBSandy*)cl->psyche->clt_owner;
    S32 nextgoal = 0;

    if (cl->stage == 2 && sandy->AnimTimeRemain(NULL) < 1.7f * dt)
    {
        sandy->boundFlags[10] &= ~0x10;
        sandy->boundFlags[12] &= ~0x10;

        if (globals.player.ControlOff)
        {
            nextgoal = 'NGB1';
            *trantype = GOAL_TRAN_SET;
        }
        else if (sandy->bossFlags & 0x2)
        {
            sandy->bossFlags &= ~0x2;
            nextgoal = 'NGB2';
            *trantype = GOAL_TRAN_SET;
        }
        else
        {
            nextgoal = 'NGB3';
            *trantype = GOAL_TRAN_SET;
        }
    }

    return nextgoal;
}

S32 zNPCGoalBossSandyIdle::Enter(F32 dt, void* updCtxt)
{
    zNPCBSandy* sandy = (zNPCBSandy*)psyche->clt_owner;

    timeInGoal = 0.0f;
    sandy->bossFlags |= 0x20;

    xVec3Init(&sandy->frame->vel, 0.0f, 0.0f, 0.0f);

    sandy->boundFlags[10] |= 0x10;
    sandy->boundFlags[12] |= 0x10;

    return zNPCGoalCommon::Enter(dt, updCtxt);
}

S32 zNPCGoalBossSandyIdle::Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* xscn)
{
    zNPCBSandy* sandy = (zNPCBSandy*)psyche->clt_owner;

    timeInGoal += dt;

    xVec3 newAt;
    xVec3Sub(&newAt, (xVec3*)&globals.player.ent.model->Mat->pos, (xVec3*)&sandy->model->Mat->pos);

    newAt.y = 0.0f;

    xVec3Normalize(&newAt, &newAt);
    xVec3SMul((xVec3*)&sandy->frame->mat.at, (xVec3*)&sandy->model->Mat->at, 0.98f);

    xVec3AddScaled((xVec3*)&sandy->frame->mat.at, &newAt, 0.02f);

    sandy->frame->mat.at.y = 0.0f;
    xVec3Normalize(&sandy->frame->mat.at, &sandy->frame->mat.at);
    xVec3Cross(&sandy->frame->mat.right, &sandy->frame->mat.up, &sandy->frame->mat.at);

    sandy->frame->mat.pos.y = 0.0f;
    xVec3Dot(&newAt, (xVec3*)&sandy->model->Mat->right);

    F32 lerp = 1.0f;
    lerp -= 0.02f;
    sandy->model->Anim->Single->BilinearLerp[0] = lerp;
    sandy->model->Anim->Single->Blend->BilinearLerp[0] = lerp;

    return xGoal::Process(trantype, dt, updCtxt, xscn);
}

S32 zNPCGoalBossSandyIdle::Exit(F32 dt, void* updCtxt)
{
    zNPCBSandy* sandy = (zNPCBSandy*)psyche->clt_owner;

    sandy->bossFlags &= ~0x20;
    sandy->boundFlags[10] &= ~0x10;
    sandy->boundFlags[12] &= ~0x10;

    return xGoal::Exit(dt, updCtxt);
}

S32 zNPCGoalBossSandyTaunt::Enter(F32 dt, void* updCtxt)
{
    zNPCBSandy* sandy = (zNPCBSandy*)psyche->clt_owner;

    timeInGoal = 0.0f;

    xVec3Init(&sandy->frame->vel, 0.0f, 0.0f, 0.0f);
    xSndPlay3D(xStrHash("B101_SC_taunt"), 0.77f, 0.0f, 0x0, 0x0, sandy, 30.0f, SND_CAT_GAME, 0.6f);

    return zNPCGoalCommon::Enter(dt, updCtxt);
}

S32 zNPCGoalBossSandyTaunt::Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* xscn)
{
    zNPCBSandy* sandy = (zNPCBSandy*)psyche->clt_owner;

    timeInGoal += dt;

    xVec3 newAt;
    xVec3Sub(&newAt, (xVec3*)&globals.player.ent.model->Mat->pos, (xVec3*)&sandy->model->Mat->pos);

    newAt.y = 0.0f;

    xVec3Normalize(&newAt, &newAt);
    xVec3SMul((xVec3*)&sandy->frame->mat.at, (xVec3*)&sandy->model->Mat->at, 0.98f);

    xVec3AddScaled((xVec3*)&sandy->frame->mat.at, &newAt, 0.02f);

    sandy->frame->mat.at.y = 0.0f;
    xVec3Normalize(&sandy->frame->mat.at, &sandy->frame->mat.at);
    xVec3Cross(&sandy->frame->mat.right, &sandy->frame->mat.up, &sandy->frame->mat.at);

    sandy->frame->mat.pos.y = 0.0f;

    return zNPCGoalCommon::Process(trantype, dt, updCtxt, xscn);
}

S32 zNPCGoalBossSandyChase::Enter(F32 dt, void* updCtxt)
{
    zNPCBSandy* sandy = (zNPCBSandy*)psyche->clt_owner;

    sandy->bossFlags |= 0x20;
    timeInGoal = 0.0f;

    sandy->boundFlags[10] |= 0x10;
    sandy->boundFlags[12] |= 0x10;

    return zNPCGoalCommon::Enter(dt, updCtxt);
}

S32 zNPCGoalBossSandyChase::Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* xscn)
{
    zNPCBSandy* sandy = (zNPCBSandy*)psyche->clt_owner;

    sChaseTimer += dt;
    timeInGoal += dt;

    xVec3 newAt;
    xVec3Sub(&newAt, (xVec3*)&globals.player.ent.model->Mat->pos, (xVec3*)&sandy->model->Mat->pos);

    newAt.y = 0.0f;

    xVec3Normalize(&newAt, &newAt);
    xVec3SMul((xVec3*)&sandy->frame->mat.at, (xVec3*)&sandy->model->Mat->at, 0.98f);

    xVec3AddScaled((xVec3*)&sandy->frame->mat.at, &newAt, 0.02f);

    sandy->frame->mat.at.y = 0.0f;
    xVec3Normalize(&sandy->frame->mat.at, &sandy->frame->mat.at);
    xVec3Cross(&sandy->frame->mat.right, &sandy->frame->mat.up, &sandy->frame->mat.at);

    sandy->frame->mat.pos.y = 0.0f;
    xVec3SMul(&sandy->frame->vel, &sandy->frame->mat.at, sandy->cfg_npc->spd_moveMax);

    return zNPCGoalCommon::Process(trantype, dt, updCtxt, xscn);
}

S32 zNPCGoalBossSandyChase::Exit(F32 dt, void* updCtxt)
{
    zNPCBSandy* sandy = (zNPCBSandy*)psyche->clt_owner;

    sandy->bossFlags &= ~0x20;
    sandy->boundFlags[10] &= ~0x10;
    sandy->boundFlags[12] &= ~0x10;

    return zNPCGoalCommon::Exit(dt, updCtxt);
}

S32 zNPCGoalBossSandyMelee::Enter(F32 dt, void* updCtxt)
{
    zNPCBSandy* sandy = (zNPCBSandy*)psyche->clt_owner;

    timeInGoal = 0.0f;
    sandy->bossFlags &= ~0x2;

    xVec3Init(&sandy->frame->vel, 0.0f, 0.0f, 0.0f);

    sandy->boundList[2]->penby = 0x0;
    sandy->boundList[3]->penby = 0x0;
    sandy->boundList[4]->penby = 0x0;
    sandy->boundList[5]->penby = 0x0;
    sandy->boundList[6]->penby = 0x0;
    sandy->boundList[7]->penby = 0x0;
    sandy->boundList[8]->penby = 0x0;

    xSndPlay3D(xStrHash("B101_SC_chop"), 0.77f, 0.0f, 0x0, 0x0, sandy, 30.0f, SND_CAT_GAME, 0.6f);

    return zNPCGoalCommon::Enter(dt, updCtxt);
}

S32 zNPCGoalBossSandyMelee::Exit(F32 dt, void* updCtxt)
{
    zNPCBSandy* sandy = (zNPCBSandy*)psyche->clt_owner;

    sandy->boundList[2]->penby = 0x10;
    sandy->boundList[3]->penby = 0x10;
    sandy->boundList[4]->penby = 0x10;
    sandy->boundList[5]->penby = 0x10;
    sandy->boundList[6]->penby = 0x10;
    sandy->boundList[7]->penby = 0x10;
    sandy->boundList[8]->penby = 0x10;

    return zNPCGoalCommon::Exit(dt, updCtxt);
}

S32 zNPCGoalBossSandyMelee::Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* xscn)
{
    zNPCBSandy* sandy = (zNPCBSandy*)psyche->clt_owner;
    timeInGoal += dt;

    if (timeInGoal > 0.1f && timeInGoal < 0.75f)
    {
        xVec3 newAt;
        xVec3Sub(&newAt, (xVec3*)&globals.player.ent.model->Mat->pos,
                 (xVec3*)&sandy->model->Mat->pos);

        newAt.y = 0.0f;
        xVec3Normalize(&newAt, &newAt);
        xVec3SMul((xVec3*)&sandy->frame->mat.at, (xVec3*)&sandy->model->Mat->at, 0.9f);

        xVec3AddScaled((xVec3*)&sandy->frame->mat.at, &newAt, 0.1f);

        sandy->frame->mat.at.y = 0.0f;
        xVec3Normalize(&sandy->frame->mat.at, &sandy->frame->mat.at);
        xVec3Cross(&sandy->frame->mat.right, &sandy->frame->mat.up, &sandy->frame->mat.at);
    }

    sandy->boundFlags[2] |= 0x1;
    sandy->boundFlags[3] |= 0x1;
    sandy->boundFlags[4] |= 0x1;
    sandy->boundFlags[5] |= 0x1;
    sandy->boundFlags[6] |= 0x1;
    sandy->boundFlags[7] |= 0x1;
    sandy->boundFlags[8] |= 0x1;

    sandy->bossFlags |= 0x1;

    return zNPCGoalCommon::Process(trantype, dt, updCtxt, xscn);
}

S32 zNPCGoalBossSandyNoHead::Enter(F32 dt, void* updCtxt)
{
    zNPCBSandy* sandy = (zNPCBSandy*)psyche->clt_owner;

    sandy->bossFlags &= ~0x100;
    timeInGoal = 0.0f;

    xVec3Init(&sandy->frame->vel, 0.0f, 0.0f, 0.0f);

    if (sandy->round == 2)
    {
        sandy->headBoulder->collis_chk = 0x26;
        sandy->headBoulder->collis_pen = 0x0;
    }

    stage = 0;
    secsSincePatWasCarryingHead = 1.0f;

    return zNPCGoalCommon::Enter(dt, updCtxt);
}

S32 zNPCGoalBossSandyNoHead::Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* xscn)
{
    zNPCBSandy* sandy = (zNPCBSandy*)psyche->clt_owner;
    U32 numHints;
    xVec3 newAt;
    F32 lerpFactor;
    xMat4x3 boneMat;
    xQuat q;

    timeInGoal += dt;
    if (globals.player.carry.grabbed == sandy->headBoulder)
    {
        secsSincePatWasCarryingHead = 0.0f;
    }
    else
    {
        secsSincePatWasCarryingHead += dt;
    }

    if (stage == 0)
    {
        if (sandy->AnimTimeRemain(NULL) < 1.7f * dt)
        {
            stage = 1;
            DoAutoAnim(NPC_GSPOT_START, FALSE);
            timeInGoal = 0.0f;

            if (sandy->round == 3)
            {
                sandy->boundFlags[10] |= 0x10;
                sandy->boundFlags[12] |= 0x10;
            }

            if ((sandy->nfFlags & 0x4) == 0 && (sandy->round == 2 || sandy->round == 3))
            {
                if (((sandy->nfFlags >> 3) & 3) < 3 || (xrand() & 0x300) == 0)
                {
                    numHints = 2;
                    if (((sandy->nfFlags >> 3) & 3) < 3)
                    {
                        numHints = (sandy->nfFlags >> 3) & 3;
                    }

                    if (sandy->round == 2)
                    {
                        sandy->newsfish->SpeakStart(sNFSoundValue[numHints + 12], 0, 0xFFFFFFFF);
                    }
                    else
                    {
                        sandy->newsfish->SpeakStart(sNFSoundValue[numHints + 21], 0, 0xFFFFFFFF);
                    }

                    sandy->nfFlags &= ~0x18;
                    sandy->nfFlags |= (numHints + 1) * 8;
                }
            }
        }

        if (sandy->round == 2)
        {
            if (secsSincePatWasCarryingHead > 0.5f)
            {
                sCamSubTarget = &sandy->headBoulder->localCenter;
            }
            else
            {
                sCamSubTarget = &sandy->bouncePoint[0];
            }
        }
    }
    else if (stage == 1)
    {
        if (sandy->round == 2)
        {
        }
        else if (secsSincePatWasCarryingHead <= 15.0f)
        {
            if (((sandy->boundFlags[0] + 4) & 4) == 0)
            {
                sandy->bossFlags |= 0x80;
            }
            else
            {
            }
        }
        else
        {
            stage = 4;
            sandy->boundFlags[10] &= 0x100;
            sandy->boundFlags[12] &= 0x100;

            xSndPlay3D(xStrHash("B101_SC_headback"), 1.155f, 0.0f, 0x0, 0x0, sandy, 30.0f,
                       SND_CAT_GAME, 0.8f);
            DoAutoAnim(NPC_GSPOT_START, FALSE);
            timeInGoal = 0.0f;
            sandy->bossFlags &= ~0x80;
        }
    }
    else if (stage == 2)
    {
    }
    else if (stage == 3)
    {
    }

    return zNPCGoalCommon::Process(trantype, dt, updCtxt, xscn);
}

S32 zNPCGoalBossSandyElbowDrop::Enter(F32 dt, void* updCtxt)
{
    zNPCBSandy* sandy = (zNPCBSandy*)psyche->clt_owner;

    timeInGoal = 0;
    sandy->bossFlags &= 0xfffffffd;
    sNumAttacks++;

    xVec3Init(&sandy->frame->vel, 0.0f, 0.0f, 0.0f);

    xSndPlay3D(xStrHash("B101_SC_drop"), 0.77f, 0.0f, 0x0, 0x0, sandy, 30.0f, SND_CAT_GAME, 0.65f);
    xSndPlay3D(xStrHash("B101_SC_drop"), 0.77f, 0.0f, 0x0, 0x0, sandy, 30.0f, SND_CAT_GAME, 1.3f);
    xSndPlay3D(xStrHash("B101_SC_hitring"), 0.77f, 0.0f, 0x0, 0x0, sandy, 30.0f, SND_CAT_GAME,
               2.25f);
    elbowFlags = 0;
    return zNPCGoalCommon::Enter(dt, updCtxt);
}

// This function is certified not cool
S32 zNPCGoalBossSandyElbowDrop::Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* xscn)
{
    zNPCBSandy* sandy = (zNPCBSandy*)psyche->clt_owner;
    xVec3 newAt;

    if (timeInGoal > 0.75f)
    {
        for (S32 i = 0; i < 13; i++)
        {
            sandy->boundFlags[i] |= 0x1;
        }
    }

    if (timeInGoal <= sandy->edropTurnMinTime)
    {
        if (sandy->shockwaveMaxRadius < timeInGoal)
        {
        }
    }

    return xGoal::Process(trantype, dt, updCtxt, xscn);
}

S32 zNPCGoalBossSandyElbowDrop::Exit(F32 dt, void* updCtxt)
{
    sElbowDropTimer = 0.0f;
    sElbowDropThreshold = 0.0f;
    sChaseTimer = 0.0f;
    return xGoal::Exit(dt, updCtxt);
}

S32 zNPCGoalBossSandyLeap::Exit(F32 dt, void* updCtxt)
{
    sChaseTimer = 0.0f;
    return xGoal::Exit(dt, updCtxt);
}

S32 zNPCGoalBossSandyGetUp::Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* scene)
{
    timeInGoal += dt;
    return xGoal::Process(trantype, dt, updCtxt, scene);
}

S32 zNPCGoalBossSandyRunToRope::Exit(F32 dt, void* updCtxt)
{
    sChaseTimer = 0.0f;
    return xGoal::Exit(dt, updCtxt);
}

void xBinaryCamera::add_tweaks(char const*)
{
}

void xBinaryCamera::set_targets(xVec3 const& par_1, xVec3 const& par_2, F32 par_3)
{
    this->s1 = (xVec3*)(&par_1);
    this->s2 = (xVec3*)(&par_2);
    this->s2_radius = par_3;
}

S32 zNPCGoalBossSandyLeap::Name()
{
    return 0;
}
