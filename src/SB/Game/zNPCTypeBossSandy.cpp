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
static F32 sNumAttacks;
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

extern NPCSndTrax g_sndTrax_BossSandy[1];

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
    S32 ourAnims[28] = {
        Unknown,
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
        NoHeadReplace01, 
        NoHeadHit01,
    };
    // clang-format on

    //Missing like 2 logic lines or something, too tired to figure it out
    xAnimTable* table = xAnimTableNew("zNPCBSandy", NULL, 0);

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

    xAnimTransition* tList = table->TransitionList;
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

#define str_SandyBossHead (bossSandyStrings + 0xff)
#define str_Idle01 (bossSandyStrings + 0x10d)
#define str_Carried01 (bossSandyStrings + 0x114)
#define str_Shocked01 (bossSandyStrings + 0x11e)

xAnimTable* ZNPC_AnimTable_BossSandyHead()
{
    xAnimTable* table;

    table = xAnimTableNew(str_SandyBossHead, NULL, 0);

    xAnimTableNewState(table, str_Idle01, 0x10, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, str_Carried01, 0x10, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, str_Shocked01, 0x10, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);

    xAnimTableNewTransition(table, str_Idle01, str_Carried01, HeadIsCarried, NULL, 0, 0, 0.0f, 0.0f,
                            0, 0, 0.25f, NULL);
    xAnimTableNewTransition(table, str_Carried01, str_Idle01, HeadNotCarried, NULL, 0, 0, 0.0f,
                            0.0f, 0, 0, 0.25f, NULL);
    xAnimTableNewTransition(table, str_Idle01, str_Shocked01, HeadIsShocked, NULL, 0, 0, 0.0f, 0.0f,
                            0, 0, 0.25f, NULL);
    xAnimTableNewTransition(table, str_Shocked01, str_Idle01, HeadNotShocked, NULL, 0, 0, 0.0f,
                            0.0f, 0, 0, 0.25f, NULL);

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

static S32 sitCB(xGoal* rawgoal, void*, en_trantype* trantype, F32 dt, void*);
static S32 getUpCB(xGoal* rawgoal, void*, en_trantype* trantype, F32 dt, void*);
static S32 runToRopeCB(xGoal* rawgoal, void*, en_trantype* trantype, F32 dt, void*);
static S32 clotheslineCB(xGoal* rawgoal, void*, en_trantype* trantype, F32 dt, void*);

S32 zNPCGoalBossSandyIdle::Enter(F32 dt, void* updCtxt)
{
    zNPCBSandy* sandy;

    // xVec3Init();

    return zNPCGoalCommon::Enter(dt, updCtxt);
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
