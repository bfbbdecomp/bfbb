#include <types.h>
#include "string.h"

#include "iModel.h"

#include "xMath.h"
#include "xMath3.h"
#include "xstransvc.h"
#include "xSnd.h"
#include "xVec3.h"

#include "zCamera.h"
#include "zEntSimpleObj.h"
#include "zEntDestructObj.h"
#include "zGlobals.h"
#include "zNPCTypeBossPatrick.h"
#include "zRenderState.h"
#include "zNPCGoals.h"
#include "zLightning.h"
#include "zNPCTypeRobot.h"
#include <xMathInlines.h>

#define f831 1.0f
#define f832 0.0f
#define f833 0.2f
#define f870 -1.0f
#define f875 (double)4503601774854144 // wtf?
#define f891 2.0f
#define f892 -0.4f
#define f1045 0.125f
#define f1046 0.5f
#define f1047 0.7f
#define f1048 8.0f
#define f1049 5.0f
#define f1050 2.5f
#define f1051 3.0f
#define f1052 4.2f
#define f1053 12.0f
#define f1054 6.0f
#define f1055 10.0f
#define f1056 50.0f
#define f1137 5.5f
#define f1138 6.5f
#define f1139 0.365f
#define f1140 3.1415927f
#define f1141 20.0f
#define f1142 15.0f
#define f1143 -1000000000.0f
#define f1144 1000000000.0f
#define f1656 0.0001f
#define f1657 400.0f
#define f1658 0.5775f
#define f1659 40.0f
#define f1660 -2.01f
#define f1661 0.175f
#define f1662 0.025f
#define f1663 1.25f
#define f1664 0.25f
#define f1665 80.0f
#define f1666 6.2831855f
#define f1667 3.15f
#define f1668 0.00001f
#define f1669 0.1f
#define f1670 4.0f
#define f1671 0.77f
#define f1672 0.3f
#define f1673 1.5707964f
#define f1674 0.15f
#define f1675 0.65f
#define f1676 0.75f
#define f1677 0.01f
#define f1678 0.33f
#define f1679 18.5f
#define f1680 -18.5f
#define f1681 -20.0f
#define f1682 7.0f
#define f2006 100.0f
#define f2077 5.95f
#define f2078 0.539f
#define f2215 8.5f
#define f2256 0.50049996f
#define f2257 0.45f
#define f2280 1.7f
#define f2405 -3.1415927f
#define f2423 0.4f
#define f2424 0.8f
#define f2425 1.2f
#define f2426 1.5f
#define f2427 1.8f
#define f2428 2.1f
#define f2512 0.35f
#define f2596 -0.08f
#define f2597 25.0f
#define f2610 0.6545f
#define f2629 0.7853982f
#define f2630 1.75f
#define f2696 -4.0f
#define f2697 300.0f
#define f2885 12.5f
#define f2994 7.5f

static unsigned char sUseBossCam;
static unsigned char sWasUsingBossCam;
static unsigned char sOthersHaventBeenAdded;
static zNPCBPatrick* sPat_Ptr;
static xVec3* sCamSubTarget;
static F32 sSecsSincePatWasCarryingHead;
static xVec3 sCamSubTargetFixed;
static F32 sCurrYaw;
static F32 sCurrHeight;
static F32 sCurrRadius;
static F32 sCurrPitch;
static F32 sCurrYawOffset;
static F32 sCurrCamInterp;
static F32 minYVel;
static F32 varYVel;
static F32 minHMul;
static F32 varHMul;
static F32 minT;
static F32 varT;
static S32 sBone[10];
static S32 sBoundBone[4];
static F32 sBoundRadius[4];
static xVec3 sBoneOffset[4];
static newsfishSound sNFComment[37];
static U32 sCurrNFSound;
static tweak_callback newsfish_cb;
static tweak_callback recenter_cb;

void test(S32)
{
}

static void Pat_ResetGlobalStuff()
{
}

void zNPCBPatrick::Init(xEntAsset* asset)
{
    /*
        signed int i; // r20
        class xEnt * ent; // r19
        class RwTexture * tempTexture; // r2
    */
}

void on_change_newsfish(const tweak_info&)
{
    sPat_Ptr->newsfish->SpeakStart(sNFComment[sCurrNFSound].soundID, 0, -1);
}

void on_change_recenter(const tweak_info&)
{
    sPat_Ptr->bossFlags |= 0x200;
}

// 73% match. Kind of a difficult function
void zNPCBPatrick::Setup()
{
    char tempString[32]; // r29+0xA0
    char objName[32]; // r29+0x80
    /*
        char tempString[32]; // r29+0xA0
        signed int i; // r18
        signed int j; // r20
        class RpAtomic * tempIModel; // r2
        class xMarkerAsset * marker; // r2
        char objName[32]; // r29+0x80
    */

    this->freezeBreathEmitter = zParEmitterFind("FREEZE_BREATH_EMIT");
    this->fudgeEmitter = zParEmitterFind("FUDGE_EMIT");
    this->steamEmitter = zParEmitterFind("STEAM PAR EMIT");
    this->gooObj = (xEnt*)zSceneFindObject(xStrHash("GOO OBJ"));
    this->fudgeHandle = (xEnt*)zSceneFindObject(xStrHash("FUDGE_HANDLE"));

    //

    strcpy(objName, "SWINGHOOK 00");
    this->origSwingerHeight = f832;

    for (S32 i = 0; i < 8; i++)
    {
        objName[11]++;
        this->swinger[i] = (xEnt*)zSceneFindObject(xStrHash(objName));
        this->origSwingerHeight =
            this->swinger[i]->model->Mat->pos.y * f1045 + this->origSwingerHeight;
    }

    for (S32 i = 0; i < 8; i++)
    {
        this->swinger[i]->model->Mat->pos.y +=
            (this->origSwingerHeight - this->swinger[i]->model->Mat->pos.y);
    }

    //

    strcpy(objName, "WOODEN_PLAT_00_00");

    for (S32 i = 0; i < 8; i++)
    {
        objName[16]++;

        for (S32 j = 0; j < 3; j++)
        {
            objName[13]++;
            this->box[j][i].box = (xEnt*)zSceneFindObject(xStrHash(objName));
            this->box[j][i].minY = this->box[j][i].box->model->Mat->pos.y;
            // must be being cast to some other data type to dereference 0xd8
            // probably zEntSimpleObj?
            ((zEntSimpleObj*)this->box[j][i].box)->sflags |= 8;
        }
    }

    this->backBox.box = (xEnt*)zSceneFindObject(xStrHash("WOODEN_PLAT_BACK"));
    this->backBox.minY = f1046;

    // must be being cast to some other data type to dereference 0xd8
    // zEntDestructObj?
    // zUI?
    // zEntSimpleObj?
    // zEGenerator?
    // not exactly sure what type it is exactly,
    // but it's probably zEntSimpleObj because 0xd8 is flags
    ((zEntSimpleObj*)this->backBox.box)->sflags |= 8;

    this->boxBreak = (zShrapnelAsset*)xSTFindAsset(xStrHash("b2_box_shrapnel"), NULL);
    this->boxSplash = (zShrapnelAsset*)xSTFindAsset(xStrHash("b2_box_splash_shrapnel"), NULL);
    this->spitModel = (RpAtomic*)xSTFindAsset(xStrHash("fx_boss_pa_spit"), NULL);
    this->splatModel = (RpAtomic*)xSTFindAsset(xStrHash("fx_boss_pa_splat"), NULL);
    this->shardModel = (RpAtomic*)xSTFindAsset(xStrHash("b2_ice_shard"), NULL);
    this->iceBreak = (zShrapnelAsset*)xSTFindAsset(xStrHash("sb_ice_break"), NULL);

    RpAtomic* tempIModel = (RpAtomic*)xSTFindAsset(xStrHash("b2_SB_frozen"), NULL);
    this->frozenSB = NULL;
    this->frozenSB = (xModelInstance*)xModelInstanceAlloc(tempIModel, NULL, 0, 0, NULL);

    tempIModel = (RpAtomic*)xSTFindAsset(xStrHash("b2_SB_frozen_ice"), NULL);
    this->frozenSBIce = NULL;
    this->frozenSBIce = (xModelInstance*)xModelInstanceAlloc(tempIModel, NULL, 0, 0, NULL);
    this->frozenSBIce->Alpha = f1047;

    this->round1Csn = (zCutsceneMgr*)zSceneFindObject(xStrHash("CSNMGR_ROUND1"));
    this->round2Csn = (zCutsceneMgr*)zSceneFindObject(xStrHash("CSNMGR_ROUND2"));
    this->round3Csn = (zCutsceneMgr*)zSceneFindObject(xStrHash("CSNMGR_ROUND3"));

    this->safeGroundPortal = (_zPortal*)zSceneFindObject(xStrHash("SAFEGROUND_PORTAL"));
    xVec3Copy(&this->arenaExtent, (xVec3*)xSTFindAsset(xStrHash("MK ARENA EXTENT"), NULL));
    xVec3Copy(&this->fudgePos, (xVec3*)xSTFindAsset(xStrHash("FUDGE_POS"), NULL));
    xVec3Init(&this->fudgeFace, f832, f832, f831);
    xVec3AddTo(&this->fudgeFace, &this->fudgePos);

    //

    strcpy(objName, "ROBOT_CHUCK_NPC01");

    for (S32 i = 0; i < 3; i++)
    {
        this->chuckList[i] = (zNPCCommon*)zSceneFindObject(xStrHash(objName));
        objName[16]++;
    }

    strcpy(objName, "MP_CHUCK_ARENA01");

    for (S32 i = 0; i < 3; i++)
    {
        this->chuckMovePoint[i] = (zMovePoint*)zSceneFindObject(xStrHash(objName));
        objName[15]++;
    }

    for (S32 i = 0; i < 3; i++)
    {
        ((zNPCRobot*)this->chuckList[i])->DuploOwner(this);
    }

    this->newsfish = (zNPCNewsFish*)zSceneFindObject(xStrHash("NEWSFISH"));
    this->newsfish->TalkOnScreen(1);

    strcpy(tempString, "HEALTH_00");

    for (S32 i = 0; i < 2; i++)
    {
        this->underwear[i] = (zEntPickup*)zSceneFindObject(xStrHash(tempString));
        tempString[8]++;
    }

    this->conveyorBelt[0] = (zPlatform*)zSceneFindObject(xStrHash("CONVEYOR BELT 01"));
    this->conveyorBelt[1] = (zPlatform*)zSceneFindObject(xStrHash("CONVEYOR BELT 02"));
    this->conveyorBelt[2] = (zPlatform*)zSceneFindObject(xStrHash("CONVEYOR BELT 03"));
    this->conveyorBelt[3] = (zPlatform*)zSceneFindObject(xStrHash("CONVEYOR BELT 04"));
    this->conveyorBelt[4] = (zPlatform*)zSceneFindObject(xStrHash("CONVEYOR BELT 08"));
    this->conveyorBelt[5] = (zPlatform*)zSceneFindObject(xStrHash("CONVEYOR BELT 09"));
    this->conveyorBelt[6] = (zPlatform*)zSceneFindObject(xStrHash("CONVEYOR BELT 10"));

    this->bossCam.cfg.zone_rest.distance = f1048;
    this->bossCam.cfg.zone_rest.height = f1049;
    this->bossCam.cfg.zone_rest.height_focus = f1050;
    this->bossCam.cfg.zone_above.distance = f1051;
    this->bossCam.cfg.zone_above.height = f1052;
    this->bossCam.cfg.zone_above.height_focus = f870;
    this->bossCam.cfg.zone_below.distance = f1053;
    this->bossCam.cfg.zone_below.height = f1051;
    this->bossCam.cfg.zone_below.height_focus = f1054;
    this->bossCam.cfg.move_speed = f1055;
    this->bossCam.cfg.turn_speed = f1055;
    this->bossCam.cfg.stick_speed = f1055;
    this->bossCam.cfg.stick_yaw_vel = f1055;
    this->bossCam.cfg.max_yaw_vel = f1056;
    this->bossCam.cfg.margin_angle = f870;

    this->bossCam.init();
    this->bossCam.add_tweaks("NPC|zNPCBPatrick|Boss Cam|");
    xDebugAddTweak("NPC|zNPCBPatrick|Boss Cam|Recenter", "*", (tweak_callback*)&recenter_cb,
                   (void*)0x0, 0);

    zNPCCommon::Setup();
}

static S32 idleCB(xGoal* rawgoal, void*, en_trantype* trantype, F32 dt, void*);
static S32 tauntCB(xGoal* rawgoal, void*, en_trantype* trantype, F32 dt, void*);
static S32 hitCB(xGoal* rawgoal, void*, en_trantype* trantype, F32 dt, void*);
static S32 spitCB(xGoal* rawgoal, void*, en_trantype* trantype, F32 dt, void*);
static S32 runCB(xGoal* rawgoal, void*, en_trantype* trantype, F32 dt, void*);
static S32 smackCB(xGoal* rawgoal, void*, en_trantype* trantype, F32 dt, void*);
static S32 freezeCB(xGoal* rawgoal, void*, en_trantype* trantype, F32 dt, void*);
static S32 spawnCB(xGoal* rawgoal, void*, en_trantype* trantype, F32 dt, void*);
static S32 spinCB(xGoal* rawgoal, void*, en_trantype* trantype, F32 dt, void*);
static S32 fudgeCB(xGoal* rawgoal, void*, en_trantype* trantype, F32 dt, void*);

void zNPCBPatrick::SelfSetup()
{
    Pat_ResetGlobalStuff();

    xBehaveMgr* bmgr = xBehaveMgr_GetSelf();
    this->psy_instinct = bmgr->Subscribe(this, 0);

    xPsyche* psy = this->psy_instinct;

    psy->BrainBegin();

    xGoal* goal = psy->AddGoal(NPC_GOAL_BOSSPATIDLE, NULL);
    goal->SetCallbacks(idleCB, NULL, NULL, NULL);

    goal = psy->AddGoal(NPC_GOAL_BOSSPATTAUNT, NULL);
    goal->SetCallbacks(tauntCB, NULL, NULL, NULL);

    goal = psy->AddGoal(NPC_GOAL_BOSSPATHIT, NULL);
    goal->SetCallbacks(hitCB, NULL, NULL, NULL);

    goal = psy->AddGoal(NPC_GOAL_BOSSPATSPIT, NULL);
    goal->SetCallbacks(spitCB, NULL, NULL, NULL);

    goal = psy->AddGoal(NPC_GOAL_BOSSPATRUN, NULL);
    goal->SetCallbacks(runCB, NULL, NULL, NULL);

    goal = psy->AddGoal(NPC_GOAL_BOSSPATSMACK, NULL);
    goal->SetCallbacks(smackCB, NULL, NULL, NULL);

    goal = psy->AddGoal(NPC_GOAL_BOSSPATFREEZE, NULL);
    goal->SetCallbacks(freezeCB, NULL, NULL, NULL);

    goal = psy->AddGoal(NPC_GOAL_BOSSPATSPAWN, NULL);
    goal->SetCallbacks(spawnCB, NULL, NULL, NULL);

    goal = psy->AddGoal(NPC_GOAL_BOSSPATSPIN, NULL);
    goal->SetCallbacks(spinCB, NULL, NULL, NULL);

    goal = psy->AddGoal(NPC_GOAL_BOSSPATFUDGE, NULL);
    goal->SetCallbacks(fudgeCB, NULL, NULL, NULL);

    psy->BrainEnd();

    psy->SetSafety(NPC_GOAL_BOSSPATIDLE);
}

WEAK void xDebugAddTweak(const char*, U32*, U32, U32, const tweak_callback*, void*, U32);
void xDebugAddTweak(const char*, float*, float, float, const tweak_callback*, void*, unsigned int);

void zNPCBPatrick::Reset()
{
    /*
        signed int i; // r5
        class bossPatBox * bx; // r2
    */
    Pat_ResetGlobalStuff();

    if (this->model)
    {
        if (this->model->Next)
        {
            if (this->model->Next->Next)
            {
                if (this->model->Next->Next->Next)
                {
                    this->model->Next->Next->Next->Flags &= 0xfffe;
                }
            }
        }
    }

    sUseBossCam = 1;
    sCurrHeight = f1137;
    sCurrRadius = f1138;
    sCurrPitch = f1139;
    sCurrYaw = f1140;
    zCameraDisableTracking(CO_BOSS);
    sCamSubTarget = (xVec3*)&this->model->Mat->pos;

    this->bossFlags = 0x100;
    gotoRound(this->round);
    this->firstUpdate = true;
    this->notSwingingLastFrame = true;

    S32 i = 0;

    for (i = 0; i < 50; i++)
    {
        this->glob[i].flags = 0;
    }

    /*
    for (S32 i = 2; i > 0; i++)
    {
        // this->
    }
    */

    this->currGlob = 0;
    this->splatTimer = f832;

    for (i = 0; i < 6; i++)
    {
        bossPatBox* box = &this->box[0][i];

        box->velocity = f832;
        box->flags = 0;
        box->pos = f1141 + this->box[0][i].minY;
    }

    this->backBox.velocity = f832;
    this->backBox.flags = 0;
    this->backBox.pos = f1141 + (this->backBox.minY);

    this->chuckFlags[0] = 1;
    this->chuckFlags[1] = 1;
    this->chuckFlags[2] = 1;

    this->frozenTimer = f870;

    zEntPlayerControlOn(CONTROL_OWNER_FROZEN);

    this->csnTimer = f832;
    this->nfFlags = 0;

    this->badHitTimer = f832;
    this->numPCHitsInARow = 0;
    this->numMissesInARow = 0;

    zNPCCommon::Reset();

    if (this->psy_instinct)
    {
        this->psy_instinct->GoalSet(NPC_GOAL_BOSSPATIDLE, 0);
    }

    minHMul = f1142;
    minT = f1049;
    minYVel = f1049;
    varHMul = f832;
    varT = f1049;
    varYVel = f832;

    xDebugAddTweak("NPC|zNPCBPatrick|globs|minYVel", &minYVel, f1143, f1144, (tweak_callback*)0x0,
                   (void*)0x0, 0);
    xDebugAddTweak("NPC|zNPCBPatrick|globs|varYVel", &varYVel, f1143, f1144, (tweak_callback*)0x0,
                   (void*)0x0, 0);
    xDebugAddTweak("NPC|zNPCBPatrick|globs|minHMul", (float*)&minHMul, f1143, f1144,
                   (tweak_callback*)0x0, (void*)0x0, 0);
    xDebugAddTweak("NPC|zNPCBPatrick|globs|varHMul", &varHMul, f1143, f1144, (tweak_callback*)0x0,
                   (void*)0x0, 0);
    xDebugAddTweak("NPC|zNPCBPatrick|globs|minT", (float*)&minT, f1143, f1144, (tweak_callback*)0x0,
                   (void*)0x0, 0);
    xDebugAddTweak("NPC|zNPCBPatrick|globs|varT", (float*)&varT, f1143, f1144, (tweak_callback*)0x0,
                   (void*)0x0, 0);
    xDebugAddTweak("NPC|zNPCBPatrick|Newsfish", "Speak", (tweak_callback*)&newsfish_cb, (void*)0x0,
                   0);
    xDebugAddTweak("NPC|zNPCBPatrick|NewsfishComment", &sCurrNFSound, 0, 0x24, (tweak_callback*)0x0,
                   (void*)0x0, 0);
}

void zNPCBPatrick::Destroy()
{
    if (this->frozenSB)
    {
        xModelInstanceFree(this->frozenSB);
        this->frozenSB = NULL;
    }

    if (this->frozenSBIce)
    {
        xModelInstanceFree(this->frozenSBIce);
        this->frozenSBIce = NULL;
    }

    zNPCCommon::Destroy();
}

U32 zNPCBPatrick::AnimPick(S32 rawgoal, en_NPC_GOAL_SPOT gspot, xGoal* goal)
{
    S32 index = -1;
    U32 animId = 0;

    switch (rawgoal)
    {
    case NPC_GOAL_BOSSPATIDLE:
        index = 1;
        break;
    case NPC_GOAL_BOSSPATTAUNT:
        index = 3;
        break;
    case NPC_GOAL_BOSSPATHIT:
        index = 7;
        break;
    case NPC_GOAL_BOSSPATSPIT:
    {
        S32 stage = ((zNPCGoalBossPatSpit*)rawgoal)->stage;
        // animId = *(int*)(param_3 + 0x50);
        if (stage == 0)
        {
            index = 0x20;
        }
        else if (stage == 1)
        {
            index = 0x21;
        }
        else if (stage == 2)
        {
            index = 0x22;
        }
        break;
    }
    case NPC_GOAL_BOSSPATRUN:
        index = 4;
        break;
    case NPC_GOAL_BOSSPATSMACK:
        index = 6;
        break;
    case NPC_GOAL_BOSSPATFREEZE:
        index = 0x1c;
        break;
    case NPC_GOAL_BOSSPATSPAWN:
        index = 0x23;
        break;
    case NPC_GOAL_BOSSPATSPIN:
    {
        S32 stage = ((zNPCGoalBossPatSpin*)rawgoal)->stage;
        if (stage == 0)
        {
            index = 0x24;
        }
        else if (stage == 1)
        {
            index = 0x25;
        }
        else if (stage == 2)
        {
            index = 0x26;
        }
        else if (stage == 3)
        {
            index = 10;
        }
        else if (stage == 4)
        {
            index = 0x27;
        }
        else if (stage == 5)
        {
            index = 0x28;
        }
        else if (stage == 6)
        {
            index = 9;
        }
        break;
    }
    case NPC_GOAL_BOSSPATFUDGE:
    {
        S32 stage = ((zNPCGoalBossPatFudge*)rawgoal)->stage;

        if (((stage == 0) || (stage == 1)) || (stage == 2))
        {
            index = 4;
        }
        else if ((stage == 3) || (stage == 4))
        {
            index = 0x1d;
        }
        else if (stage == 5)
        {
            index = 0x1e;
        }
        else if (stage == 6)
        {
            index = 0x1f;
        }
        break;
    }
    default:
        index = 1;
        break;
    }

    if (index > -1)
    {
        animId = g_hash_bossanim[index];
    }

    return animId;
}

void zNPCBPatrick::Process(xScene* xscn, F32 dt)
{
    /*
        signed int i; // r5
        signed int j; // r21
        signed int csn; // r17
        float fudgeRate; // r1
        float * swingY; // r4
        signed int shouldPlayIt; // r3
        float finalHeight; // r2
        class xModelInstance * tempModel; // r19
        float maxDist; // r28
        float numSnowflakes; // r27
        float currSize; // r26
        class xVec3 snowDir; // r29+0x170
        class xVec3 snowPos; // r29+0x160
        signed int numSamples; // r20
        float interp; // r25
        signed int numToEmit; // r19
        float theta; // r21
        float moveSplat; // r20
        float timeTillEnd; // r1
        class xCollis colls; // r29+0xF0
        unsigned int doDamage; // r20
        class xVec3 knockback; // r29+0x150
        signed int touchDamage; // r19
        class xCollis * coll; // r6
        class xCollis * cend; // r5
        class xVec3 bubbleVel; // r29+0x140
        unsigned int picker; // r2
        signed int num; // r17
    */
}

void zNPCBPatrick::DuploNotice(en_SM_NOTICES note, void* data)
{
    if (note != 1)
    {
        return;
    }

    for (S32 i = 0; i < 3; i++)
    {
        if (this->chuckList[i] == (zNPCCommon*)data)
        {
            this->chuckFlags[i] |= 1;
        }
    }
}

void zNPCBPatrick::Damage(en_NPC_DAMAGE_TYPE dmg_type, xBase* who, const xVec3* vec_hit)
{
    xVec3 toHit;

    if (dmg_type == DMGTYP_SIDE || dmg_type == DMGTYP_CRUISEBUBBLE || dmg_type == DMGTYP_BUBBOWL)
    {
        if (this->bossFlags & 4)
        {
            if (vec_hit)
            {
                xVec3Copy(&toHit, vec_hit);
            }
            else
            {
                xVec3Sub(&toHit, (xVec3*)&this->model->Mat->pos,
                         (xVec3*)&globals.player.ent.model->Mat->pos);
            }

            toHit.y = f832;

            xVec3Normalize(&toHit, &toHit);

            if (xVec3Dot(&toHit, (xVec3*)&this->model->Mat->at) > f832)
            {
                this->bossFlags |= 8;
                this->badHitTimer = f1054;
            }
        }
        else if (this->badHitTimer < f832)
        {
            if (this->nfFlags & 4)
            {
                if (xrand() & 0x80 && this->round != 2)
                {
                    this->newsfish->SpeakStart(sNFComment[24].soundID, 0, -1);
                }
                else
                {
                    this->newsfish->SpeakStart(sNFComment[25].soundID, 0, -1);
                }
            }
            else
            {
                if (this->round != 2)
                {
                    this->newsfish->SpeakStart(sNFComment[24].soundID, 0, -1);
                }
                else
                {
                    this->newsfish->SpeakStart(sNFComment[25].soundID, 0, -1);
                }

                this->nfFlags |= 4;
            }
            this->badHitTimer = f1054;
        }
    }
}

void zNPCBPatrick_GameIsPaused(zScene* scn)
{
    if (sPat_Ptr && sPat_Ptr->bossFlags & 0x100)
    {
        sPat_Ptr->bossFlags &= 0xfffffeff;
        sPat_Ptr->hiddenByCutscene();
    }
}

void zNPCBPatrick::RenderGlobs()
{
    /*
        class xMat4x3 globMat; // r29+0xB0
        signed int i; // r29+0xA0
    */
}

void zNPCBPatrick::RenderFrozenPlayer()
{
    xMat4x3 globMat;
    xVec3 player_pos;

    xVec3Copy(&player_pos, (xVec3*)&globals.player.ent.model->Mat->pos);

    player_pos.x = this->shakeAmp * isin(this->shakePhase) + player_pos.x;
    player_pos.z = this->shakeAmp * icos(this->shakePhase) + player_pos.z;

    for (S32 i = 0; i < 10; i++)
    {
        if (this->shard[i].size > f832)
        {
            xMat3x3Rot(&globMat, &this->shard[i].rotVec, this->shard[i].ang);
            xVec3Copy(&globMat.pos, &player_pos);
            xMat3x3SMul(&globMat, &globMat, this->shard[i].size);
            if (!iModelCull(this->shardModel, (RwMatrixTag*)&globMat))
            {
                F32 ivar1 = f2006 * ((f831 - this->shard[i].maxSize) + this->shard[i].size);
                iModelSetMaterialAlpha(this->shardModel, ivar1);
                iModelRender(this->shardModel, (RwMatrix*)&globMat);
            }
        }
    }

    RwRenderStateSet(rwRENDERSTATESRCBLEND, (void*)5);
    RwRenderStateSet(rwRENDERSTATEDESTBLEND, (void*)6);
    RwRenderStateSet(rwRENDERSTATEZWRITEENABLE, (void*)1);

    if (this->frozenSB)
    {
        // I don't think Mat->right here is necessarily correct
        // It looks like it should just be Mat
        xMat4x3Copy((xMat4x3*)&this->frozenSB->Mat->right,
                    (xMat4x3*)&globals.player.ent.model->Mat->right);
        xModelRender(this->frozenSB);
    }

    RwRenderStateSet(rwRENDERSTATESRCBLEND, (void*)5);
    RwRenderStateSet(rwRENDERSTATEDESTBLEND, (void*)2);
    RwRenderStateSet(rwRENDERSTATEZWRITEENABLE, (void*)0);

    if (this->frozenSBIce)
    {
        xMat4x3Copy((xMat4x3*)&this->frozenSBIce->Mat->right,
                    (xMat4x3*)&globals.player.ent.model->Mat->right);
        xModelRender(this->frozenSBIce);
    }
}

void zNPCBPatrick::RenderExtra()
{
    zNPCCommon::RenderExtra();

    _SDRenderState oldState = zRenderStateCurrent();

    RwRenderStateSet(rwRENDERSTATESRCBLEND, (void*)5);
    RwRenderStateSet(rwRENDERSTATEDESTBLEND, (void*)2);

    this->RenderGlobs();

    if (this->bossFlags & 0x10)
    {
        this->RenderFrozenPlayer();
    }

    zRenderState(SDRS_Default);
    zRenderState(oldState);
}

void zNPCBPatrick::NewTime(xScene* xscn, F32 dt)
{
    // signed int i; // r20
}

S32 zNPCBPatrick::nextGoal()
{
    S32 nextgoal = 0;

    if (this->bossFlags & 0x100)
    {
        return NPC_GOAL_BOSSPATIDLE;
    }

    if (this->bossFlags & 2)
    {
        return NPC_GOAL_BOSSPATTAUNT;
    }

    nextgoal = this->task[this->currTask];
    this->currTask++;

    if (this->currTask >= this->numTasks)
    {
        this->currTask = 0;
    }

    if (nextgoal == NPC_GOAL_BOSSPATSPAWN && !this->canSpawnChucks())
    {
        nextgoal = this->nextGoal();
    }

    return nextgoal;
}

// not in PS2 dwarf
bossPatGlob* zNPCBPatrick::getNextFreeGlob()
{
    bossPatGlob* glob = &this->glob[this->currGlob];

    this->currGlob++;

    if (this->currGlob >= 50)
    {
        this->currGlob = 0;
    }

    glob->flags = 1;
    return glob;
}

void zNPCBPatrick::playSplat(xVec3* pos)
{
    // float picker; // r2
}

U32 zNPCBPatrick::canSpawnChucks()
{
    U32 result = 0;

    for (S32 i = 0; i < 3; i++)
    {
        if (this->chuckFlags[i] & 1)
        {
            result = 1;
            break;
        }
    }

    return result;
}

void zNPCBPatrick::gotoRound(S32 num)
{
    this->round = num;

    switch (this->round)
    {
    case 1:
    {
        this->numTasks = 12;
        this->task[0] = NPC_GOAL_BOSSPATIDLE;
        this->task[1] = NPC_GOAL_BOSSPATSMACK;
        this->task[2] = NPC_GOAL_BOSSPATIDLE;
        this->task[3] = NPC_GOAL_BOSSPATSPIT;
        this->task[4] = NPC_GOAL_BOSSPATIDLE;
        this->task[5] = NPC_GOAL_BOSSPATSPIN;
        this->task[6] = NPC_GOAL_BOSSPATIDLE;
        this->task[7] = NPC_GOAL_BOSSPATSMACK;
        this->task[8] = NPC_GOAL_BOSSPATIDLE;
        this->task[9] = NPC_GOAL_BOSSPATSPIT;
        this->task[10] = NPC_GOAL_BOSSPATIDLE;
        this->task[11] = NPC_GOAL_BOSSPATSPIN;
        this->currTask = 0;
        this->hitPoints = 9;
        this->gooLevel = 0;
        this->gooHeight = this->gooLevel - f1046;
        break;
    }
    case 2:
    {
        this->numTasks = 8;
        this->task[0] = NPC_GOAL_BOSSPATIDLE;
        this->task[1] = NPC_GOAL_BOSSPATSPIT;
        this->task[2] = NPC_GOAL_BOSSPATIDLE;
        this->task[3] = NPC_GOAL_BOSSPATSPIN;
        this->task[4] = NPC_GOAL_BOSSPATIDLE;
        this->task[5] = NPC_GOAL_BOSSPATSPIT;
        this->task[6] = NPC_GOAL_BOSSPATIDLE;
        this->task[7] = NPC_GOAL_BOSSPATSPIN;
        this->currTask = 0;
        this->hitPoints = 6;
        this->gooLevel = 0;
        this->gooHeight = this->gooLevel - f1046;
        break;
    }
    case 3:
    {
        this->numTasks = 10;
        this->task[0] = NPC_GOAL_BOSSPATIDLE;
        this->task[1] = NPC_GOAL_BOSSPATFREEZE;
        this->task[2] = NPC_GOAL_BOSSPATSPIT;
        this->task[3] = NPC_GOAL_BOSSPATIDLE;
        this->task[4] = NPC_GOAL_BOSSPATSPIN;
        this->task[5] = NPC_GOAL_BOSSPATIDLE;
        this->task[6] = NPC_GOAL_BOSSPATFREEZE;
        this->task[7] = NPC_GOAL_BOSSPATSPIT;
        this->task[8] = NPC_GOAL_BOSSPATIDLE;
        this->task[9] = NPC_GOAL_BOSSPATSPIN;
        this->currTask = 0;
        this->hitPoints = 3;
        this->gooLevel = 3;
        break;
    }
    case 4:
    {
        zEntEvent(this, 36);
        this->numTasks = 1;
        this->task[0] = NPC_GOAL_BOSSPATIDLE;
        this->currTask = 0;
        this->hitPoints = 0;
        this->gooLevel = 3;
        break;
    }
    }
}

// return type probably wrong. not in PS2 dwarf
void zNPCBPatrick::ConveyorTimeLeft(zPlatform* platform, xVec3* vec_unk)
{
}

void zNPCBPatrick::ParabolaHitsConveyors(xParabola* path, xCollis* colls)
{
    /*
        signed int i; // r13
        signed int j; // r12
        class xMat4x3 * mat; // r11
        class xVec3 * lower; // r10
        class xVec3 * upper; // r9
        float a; // r10
        float b; // r9
        float det; // r4
        float t[2]; // r29+0x18
        float dispX; // r11
        float dispZ; // r8
    */
}

// return type probably wrong. not in PS2 dwarf
void zNPCBPatrick::bossPatBoxCheckCollide(bossPatBox* bx)
{
}

void zNPCBPatrick::bossPatBoxUpdate(bossPatBox* bx, F32 dt)
{
}

static S32 idleCB(xGoal* rawgoal, void*, en_trantype* trantype, F32 dt, void*)
{
}

static S32 tauntCB(xGoal* rawgoal, void*, en_trantype* trantype, F32 dt, void*)
{
}

static S32 hitCB(xGoal* rawgoal, void*, en_trantype* trantype, F32 dt, void*)
{
}

static S32 spitCB(xGoal* rawgoal, void*, en_trantype* trantype, F32 dt, void*)
{
}

static S32 runCB(xGoal* rawgoal, void*, en_trantype* trantype, F32 dt, void*)
{
    zNPCBPatrick* pat = (zNPCBPatrick*)rawgoal->GetOwner();
    S32 nextgoal = 0;

    if (globals.player.ControlOff & 0xffffbaff)
    {
        *trantype = GOAL_TRAN_SET;
        return NPC_GOAL_BOSSPATIDLE;
    }

    if (pat->AnimTimeRemain(NULL) < f2280 * dt)
    {
        nextgoal = pat->nextGoal();
        *trantype = GOAL_TRAN_SET;
    }

    return nextgoal;
}

static S32 smackCB(xGoal* rawgoal, void*, en_trantype* trantype, F32 dt, void*)
{
}

static S32 freezeCB(xGoal* rawgoal, void*, en_trantype* trantype, F32 dt, void*)
{
}

static S32 spawnCB(xGoal* rawgoal, void*, en_trantype* trantype, F32 dt, void*)
{
}

static S32 spinCB(xGoal* rawgoal, void*, en_trantype* trantype, F32 dt, void*)
{
}

static S32 fudgeCB(xGoal* rawgoal, void*, en_trantype* trantype, F32 dt, void*)
{
    zNPCGoalBossPatFudge* fudge = (zNPCGoalBossPatFudge*)rawgoal;
    zNPCBPatrick* pat = (zNPCBPatrick*)rawgoal->GetOwner();
    S32 nextgoal = 0;

    if (fudge->stage == 5 && globals.player.ControlOff & 0xffffbaff)
    {
        if (fudge->vomitSndID)
        {
            xSndStop(fudge->vomitSndID);
        }

        *trantype = GOAL_TRAN_SET;
        return NPC_GOAL_BOSSPATIDLE;
    }

    if (fudge->stage == 6 && pat->AnimTimeRemain(NULL) < f2280 * dt)
    {
        nextgoal = pat->nextGoal();
        *trantype = GOAL_TRAN_SET;
    }

    return nextgoal;
}

static S32 Pat_FaceTarget(zNPCBPatrick* pat, const xVec3* target, F32 turn_rate, F32 dt)
{
    S32 retval = -1;
    xVec3 newAt;

    xVec3Sub(&newAt, target, (xVec3*)&pat->model->Mat->pos);

    newAt.y = f832;
    F32 a = xVec3Normalize(&newAt, &newAt);

    F32 currRot = xatan2(pat->model->Mat->at.x, pat->model->Mat->at.z);
    F32 desireRot = xatan2(newAt.x, newAt.z);

    F32 diffRot = desireRot - currRot;

    if (diffRot > f1140)
    {
        diffRot -= f1666;
    }

    if (diffRot < f2405)
    {
        diffRot += f1666;
    }

    F32 deltaRot = turn_rate * dt;

    if ((F32)iabs(diffRot) < deltaRot)
    {
        pat->frame->mat.at = newAt;
        retval = 0;
    }
    else
    {
        if (diffRot < f832)
        {
            deltaRot = -deltaRot;
            retval = 1;
        }

        desireRot = currRot + deltaRot;
        deltaRot = isin(currRot + deltaRot);
        pat->frame->mat.at.x = deltaRot;
        pat->frame->mat.at.y = f832;
        deltaRot = icos(desireRot);
        pat->frame->mat.at.z = deltaRot;
    }

    xVec3Cross(&pat->frame->mat.right, &pat->frame->mat.up, &pat->frame->mat.at);

    return retval;
}

void zNPCBPatrick::hiddenByCutscene()
{
    /*
        signed int i; // r17
        class bossPatBox * bx; // r2
        class bossPatBox * bx; // r2
    */
}

void zNPCBPatrick_AddBoundEntsToGrid(zScene* scn)
{
    /*
        signed int i; // r17
        class xEnt * ent; // r18
    */
}

S32 zNPCGoalBossPatIdle::Enter(F32 dt, void* unk)
{
    zNPCBPatrick* pat = (zNPCBPatrick*)this->GetOwner();
    this->timeInGoal = f832;
    pat->bossFlags |= 0x20;
    xVec3Init(&pat->frame->vel, f832, f832, f832);
    return zNPCGoalCommon::Enter(dt, unk);
}

S32 zNPCGoalBossPatIdle::Process(en_trantype* trantype, F32 dt, void* ctxt, xScene* scene)
{
    zNPCBPatrick* pat = (zNPCBPatrick*)this->GetOwner();
    this->timeInGoal += dt;
    Pat_FaceTarget(pat, (xVec3*)&globals.player.ent.model->Mat->pos, f1673, dt);
    return xGoal::Process(trantype, dt, ctxt, scene);
}

S32 zNPCGoalBossPatRun::Enter(F32 dt, void* unk)
{
    zNPCBPatrick* pat = (zNPCBPatrick*)this->GetOwner();

    this->timeInGoal = f832;

    U32 hash = xStrHash("b201_rp_run_loop");

    this->runSndID =
        xSndPlay3D(hash, f1671, f832, (U32)0, (U32)0, pat, f891, f1659, SND_CAT_GAME, f832);

    pat->bossFlags |= 0x20;

    return zNPCGoalCommon::Enter(dt, unk);
}

S32 zNPCGoalBossPatRun::Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* xscn)
{
    zNPCBPatrick* pat = (zNPCBPatrick*)this->GetOwner();

    this->timeInGoal += dt;

    return xGoal::Process(trantype, dt, updCtxt, xscn);
}

S32 zNPCGoalBossPatRun::Exit(F32 dt, void* unk)
{
    zNPCBPatrick* pat = (zNPCBPatrick*)this->GetOwner();
    xSndStop(this->runSndID);
    return xGoal::Exit(dt, unk);
}

void StartFreezeBreath()
{
    zNPCBPatrick* pat = sPat_Ptr;

    pat->parList[0] = NULL;
    pat->parList[1] = NULL;
    pat->parList[2] = NULL;
    pat->parList[3] = NULL;

    pat->numParticles = 0;
    pat->particleTimer = f832;
}

void StopFreezeBreath()
{
    zNPCBPatrick* pat = sPat_Ptr;

    if (!pat->lastEmitted)
    {
        return;
    }

    pat->parList[pat->numParticles] = pat->lastEmitted;
    pat->numParticles++;
}

static void xMat3x3RMulVec(xVec3* o, const xMat3x3* m, const xVec3* v)
{
    F32 x = m->right.x * v->x + m->up.x * v->y + m->at.x * v->z;
    F32 y = m->right.y * v->x + m->up.y * v->y + m->at.y * v->z;
    F32 z = m->right.z * v->x + m->up.z * v->y + m->at.z * v->z;

    o->x = x;
    o->y = y;
    o->z = z;
}

WEAK void xDebugAddTweak(const char*, U32*, U32, U32, const tweak_callback*, void*, U32)
{
}

S32 BoundEventCB(xBase*, xBase*, U32, const F32*, xBase*)
{
    return 1;
}
