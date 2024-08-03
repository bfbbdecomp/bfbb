#include <types.h>
#include "string.h"

#include "iModel.h"

#include "xCollide.h"
#include "xMath.h"
#include "xMath3.h"
#include "xstransvc.h"
#include "xSnd.h"
#include "xVec3.h"

#include "zCamera.h"
#include "zEntSimpleObj.h"
#include "zEntDestructObj.h"
#include "zGlobals.h"
#include "zGrid.h"
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

#define ANIM_IDLE01 1
#define ANIM_IDLE02 2
#define ANIM_TAUNT01 3
#define ANIM_RUN01 4
#define ANIM_MELEE01 6
#define ANIM_HIT01 7
#define ANIM_HIT02 8
#define ANIM_GETUP01 9
#define ANIM_FREEZE01 28
#define ANIM_FUDGEJUMP01 29
#define ANIM_FUDGEBLOW01 30
#define ANIM_FUDGEDONE01 31
#define ANIM_LICK01 32
#define ANIM_SPIT01 33
#define ANIM_SPIT02 34
#define ANIM_SPAWN01 35
#define ANIM_SPINBEGIN01 36
#define ANIM_SPINNING01 37
#define ANIM_SPINSTOP01 38
#define ANIM_DIZZY01 10
#define ANIM_DIZZYFALL01 39
#define ANIM_DIZZYSIT01 40
#define ANIM_UNKNOWN 0

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

static newsfishSound sNFComment[37] = {
    { "FAB1036" }, // 0 Look at that! The robot's made himself dizzy!
    { "FAB1042" }, // 1 Sandy will become a Banana Split after another one of those!
    { "FAB1046" }, // 2 That hot goo could melt anything!
    { "FAB1047" }, // 3 What is Sandy going to do to get SpongeBob unfrozen?!
    { "FAB1049" }, // 4 One more douse with that stuff and SpongeBob will be back in the ring!
    { "FAB1050" }, // 5 That does it! SpongeBob is back in the fight!
    { "FAB1034" }, // 6 AND SpongeBob gets a frigid reception from the robot!
    { "FAB1035" }, // 7 SpongeBob better stay FAR way from the robot's cold clutches!
    { "FAB1040" }, // 8 This boy must be SMOKING at the lanes!
    { "FAB1053" }, // 9 I see a prime bowling moment right here!
    { "FAB1055" }, // 10 NICE Seven-Ten Split by SpongeBob!
    { "FAB1056" }, // 11 THAT'S IT! That's the match! SpongeBob is STILL Champion!
    { "FAB1033" }, // 12 Ooh SpongeBob's been Ice-Creamed!
    { "FAB1037" }, // 13 Looks like SpongeBob has an opportunity here!
    { "FAB1052" }, // 14 There's another opportunity for SpongeBob!
    { "FAB1039_a" }, // 15 Strike!
    { "FAB1039_b" }, // 16 Strike!
    { "FAB1039_c" }, // 17 Strike!
    { "FAB1041_a" }, // 18 And the robot is DOWN!
    { "FAB1041_b" }, // 19 AND the robot is down!
    { "FAB1038" }, // 20 I'm no Einstein but I'm sure that note on the robot's back means SOMETHING!
    { "FAB1051" }, // 21 Do-si-do and around you go!
    { "FAB1054" }, // 22 Ooh and the robot is down!
    { "FAB1006" }, // 23 OOH! That's gotta sting!
    { "FAB1007" }, // 24 OW! I guess SpongeBob won't be winning THAT way!
    { "FAB1008" }, // 25 The robot's just too big for a direct attack like that!
    { "FAB1009" }, // 26 Looks like the robot's left itself vulnerable!
    { "FAB1012" }, // 27 Great barrier reef!
    { "FAB1013" }, // 28 Now the ROBOT'S taking a beating out there!
    { "FAB1014" }, // 29 The robot better change tactics and fast!
    { "FAB1016" }, // 30 Ooh! Close Encounters of the Painful Kind!
    { "FAB1028" }, // 31 There's the robot's vulnerability! Let's see if SpongeBob goes for it!
    { "FAB1064" }, // 32 Yikes! Looks like SpongeBob's in for a rough ride!
    { "FAB1065" }, // 33 Ooh! That was a doozy!
    { "FAB1067" }, // 34 Looks like SpongeBob may have a moment to act here!
    { "FAB1081_a" }, // 35 That's the ticket!
    { "FAB1081_b" }, // 36 That's the ticket!
};

// Give friendly names to news fish comment indicies
#define NF_ROBOT_MADE_HIMSELF_DIZZY 0
#define NF_SANDY_BECOME_BANANA_SPLIT 1
#define NF_HOT_GOO_COULD_MELT_ANYTHING 2
#define NF_SANDY_GET_SB_UNFROZEN 3
#define NF_ONE_MORE_DOUSE_WITH_THAT_STUFF 4
#define NF_SB_BACK_IN_FIGHT 5
#define NF_SB_FRIGID_RECEPTION 6
#define NF_SB_STAY_FAR_AWAY_FROM_CLUTCHES 7
#define NF_MUST_BE_SMOKING_AT_LANES 8
#define NF_PRIME_BOWLING_MOMENT 9
#define NF_NICE_7_10_SPLIT_BY_SB 10
#define NF_SB_STILL_CHAMPION 11
#define NF_SB_HAS_BEEN_ICE_CREAMED 12
#define NF_SB_HAS_OPPORTUNITY 13
#define NF_ANOTHER_OPPORTUNITY_FOR_SB 14
#define NF_STRIKE_A 15
#define NF_STRIKE_B 16
#define NF_STRIKE_C 17
#define NF_AND_ROBOT_IS_DOWN_A 18
#define NF_AND_ROBOT_IS_DOWN_B 19
#define NF_NOTE_ON_ROBOT_BACK_MEANS_SOMETHING 20
#define NF_DOSIDO_AROUND_YOU_GO 21
#define NF_OOH_ROBOT_IS_DOWN 22
#define NF_THATS_GOTTA_STING 23
#define NF_SB_WONT_WIN_THAT_WAY 24
#define NF_ROBOT_TOO_BIG_DIRECT_ATTACK 25
#define NF_ROBOT_LEFT_SELF_VULNERABLE 26
#define NF_GREAT_BARRIER_REEF 27
#define NF_ROBOT_TAKING_BEATING 28
#define NF_CHANGE_TACTICS_FAST 29
#define NF_CLOSE_ENCOUNTERS_PAINFUL_KIND 30
#define NF_ROBOT_VULN_WILL_SB_GO_FOR_IT 31
#define NF_SB_IN_FOR_ROUGH_RIDE 32
#define NF_THAT_WAS_A_DOOZY 33
#define NF_SB_HAS_MOMENT_TO_ACT 34
#define NF_THATS_THE_TICKET_A 35
#define NF_THATS_THE_TICKET_B 36

static U32 sCurrNFSound;

void test(S32)
{
}

xAnimTable* ZNPC_AnimTable_BossPatrick()
{
    // clang-format off
    S32 ourAnims[23] = {
        ANIM_IDLE01,
        ANIM_IDLE02,
        ANIM_TAUNT01,
        ANIM_RUN01,
        ANIM_MELEE01,
        ANIM_HIT01,
        ANIM_HIT02,
        ANIM_GETUP01,
        ANIM_FREEZE01,
        ANIM_FUDGEJUMP01,
        ANIM_FUDGEBLOW01,
        ANIM_FUDGEDONE01,
        ANIM_LICK01,
        ANIM_SPIT01,
        ANIM_SPIT02,
        ANIM_SPAWN01,
        ANIM_SPINBEGIN01,
        ANIM_SPINNING01,
        ANIM_SPINSTOP01,
        ANIM_DIZZY01,
        ANIM_DIZZYFALL01,
        ANIM_DIZZYSIT01,
        ANIM_UNKNOWN,
    };
    // clang-format on

    xAnimTable* table = xAnimTableNew("zNPCBPatrick", NULL, 0);

    xAnimTableNewState(table, g_strz_bossanim[ANIM_IDLE01], 0x10, 0, f831, NULL, NULL, f832, NULL,
                       NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_bossanim[ANIM_IDLE02], 0x10, 0, f831, NULL, NULL, f832, NULL,
                       NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_bossanim[ANIM_TAUNT01], 0x10, 0, f831, NULL, NULL, f832, NULL,
                       NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_bossanim[ANIM_RUN01], 0x10, 0x40, f831, NULL, NULL, f832, NULL,
                       NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_bossanim[ANIM_MELEE01], 0x10, 0, f831, NULL, NULL, f832, NULL,
                       NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_bossanim[ANIM_HIT01], 0x10, 0, f831, NULL, NULL, f832, NULL,
                       NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_bossanim[ANIM_HIT02], 0x10, 0, f831, NULL, NULL, f832, NULL,
                       NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_bossanim[ANIM_GETUP01], 0x10, 0, f831, NULL, NULL, f832, NULL,
                       NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_bossanim[ANIM_FREEZE01], 0x10, 0, f831, NULL, NULL, f832, NULL,
                       NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_bossanim[ANIM_FUDGEJUMP01], 0x10, 0, f831, NULL, NULL, f832,
                       NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_bossanim[ANIM_FUDGEBLOW01], 0x10, 0, f831, NULL, NULL, f832,
                       NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_bossanim[ANIM_FUDGEDONE01], 0x10, 0, f831, NULL, NULL, f832,
                       NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_bossanim[ANIM_LICK01], 0x10, 0, f831, NULL, NULL, f832, NULL,
                       NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_bossanim[ANIM_SPIT01], 0x10, 0, f831, NULL, NULL, f832, NULL,
                       NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_bossanim[ANIM_SPIT02], 0x10, 0, f831, NULL, NULL, f832, NULL,
                       NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_bossanim[ANIM_SPAWN01], 0x10, 0, f831, NULL, NULL, f832, NULL,
                       NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_bossanim[ANIM_SPINBEGIN01], 0x10, 0, f831, NULL, NULL, f832,
                       NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_bossanim[ANIM_SPINNING01], 0x10, 0, f831, NULL, NULL, f832,
                       NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_bossanim[ANIM_SPINSTOP01], 0x10, 0, f831, NULL, NULL, f832,
                       NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_bossanim[ANIM_DIZZY01], 0x10, 0, f831, NULL, NULL, f832, NULL,
                       NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_bossanim[ANIM_DIZZYFALL01], 0x10, 0, f831, NULL, NULL, f832,
                       NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_bossanim[ANIM_DIZZYSIT01], 0x10, 0, f831, NULL, NULL, f832,
                       NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);

    NPCC_BuildStandardAnimTran(table, g_strz_bossanim, ourAnims, 1, f833);

    return table;
}

static const tweak_callback newsfish_cb = {};
static const tweak_callback recenter_cb = {};

static void UpdatePatrickBossCam(zNPCBPatrick* pat, F32 dt)
{
    S32 needToCallStart = false;

    if (!(zCameraIsTrackingDisabled() & 8))
    {
        needToCallStart = true;
    }

    zCameraDisableTracking(CO_BOSS);

    if (needToCallStart)
    {
        pat->bossCam.start(globals.camera);
    }

    pat->bossCam.set_targets((xVec3&)globals.player.ent.model->Mat->pos,
                             (xVec3&)pat->model->Mat->pos, f891);

    if (pat->bossFlags & 0x200)
    {
        pat->bossCam.cfg.margin_angle = f870;
        pat->bossFlags &= 0xfffffdff;
    }

    if (pat->bossFlags & 0x80)
    {
        pat->bossCam.cfg.margin_angle = f870;
    }
    else
    {
        pat->bossCam.cfg.margin_angle += dt;

        if (pat->bossCam.cfg.margin_angle > f892)
        {
            pat->bossCam.cfg.margin_angle = f892;
        }
    }

    pat->bossCam.update(dt);
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

static void Pat_ResetGlobalStuff()
{
}

S32 BoundEventCB(xBase*, xBase*, U32, const F32*, xBase*);

void zNPCBPatrick::Init(xEntAsset* asset)
{
    /*
        signed int i; // r20
        class xEnt * ent; // r19
        class RwTexture * tempTexture; // r2
    */

    zNPCCommon::Init(asset);

    sPat_Ptr = this;

    this->round = 1;
    this->firstTimeR1Csn = 1;
    Pat_ResetGlobalStuff();
    this->boundList = (xEnt**)xMemAlloc(gActiveHeap, 0x10, 0);

    for (S32 i = 0; i < 4; i++)
    {
        this->boundList[i] = (xEnt*)xMemAlloc(gActiveHeap, 0xd0, 0);
        xEnt* ent = this->boundList[i];

        ent->id = i;
        ent->eventFunc = BoundEventCB;
        ent->driver = this;
        ent->baseType = eBaseTypeDynamic; // 0xc

        ent->collType = XENT_COLLTYPE_STAT; // 2
        ent->chkby = XENT_COLLTYPE_PLYR; // 0x10
        ent->penby = XENT_COLLTYPE_PLYR; // 0x10

        ent->baseFlags |= 0x21;
        ent->moreFlags = 0x10;
        ent->flags = this->flags;

        ent->model = this->model;

        ent->update = NULL;
        ent->bupdate = NULL;
        ent->render = NULL;
        ent->transl = NULL;

        ent->subType = 0;
        ent->collModel = NULL;
        ent->lightKit = NULL;

        ent->pflags = 0;
        ent->move = NULL;
        ent->frame = NULL;
        ent->collis = NULL;
        ent->ffx = NULL;
        ent->num_ffx = 0;
        ent->anim_coll = NULL;

        xGridBoundInit(&ent->gridb, &ent->id);
        ent->collLev = 1;
        ent->bound.cyl.r = sBoundRadius[0];
        GetBonePos(&this->boundList[i]->bound.mat->pos, (xMat4x3*)this->model->Mat,
                   sBone[sBoundBone[i]], sBoneOffset);
        xQuickCullForBound(&this->boundList[i]->bound.qcd, &this->boundList[i]->bound);
    }

    sOthersHaventBeenAdded = true;
    this->freezeBreathSetting.custom_flags = 0x300;

    RwTexture* tempTexture = (RwTexture*)xSTFindAsset(xStrHash("ice_wave"), NULL);

    if (tempTexture)
    {
        this->iceWaveRaster = tempTexture->raster;
    }
    else
    {
        this->iceWaveRaster = NULL;
    }

    for (S32 i = 0; i < 37; i++)
    {
        sNFComment[i].soundID = xStrHash(sNFComment[i].soundName);
    }
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
    xDebugAddTweak("NPC|zNPCBPatrick|Boss Cam|Recenter", "*", (tweak_callback*)&recenter_cb, NULL,
                   0);

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
                   NULL, 0);
    xDebugAddTweak("NPC|zNPCBPatrick|globs|varYVel", &varYVel, f1143, f1144, (tweak_callback*)0x0,
                   NULL, 0);
    xDebugAddTweak("NPC|zNPCBPatrick|globs|minHMul", (float*)&minHMul, f1143, f1144,
                   (tweak_callback*)0x0, NULL, 0);
    xDebugAddTweak("NPC|zNPCBPatrick|globs|varHMul", &varHMul, f1143, f1144, (tweak_callback*)0x0,
                   NULL, 0);
    xDebugAddTweak("NPC|zNPCBPatrick|globs|minT", (float*)&minT, f1143, f1144, (tweak_callback*)0x0,
                   NULL, 0);
    xDebugAddTweak("NPC|zNPCBPatrick|globs|varT", (float*)&varT, f1143, f1144, (tweak_callback*)0x0,
                   NULL, 0);
    xDebugAddTweak("NPC|zNPCBPatrick|Newsfish", "Speak", (tweak_callback*)&newsfish_cb, NULL, 0);
    xDebugAddTweak("NPC|zNPCBPatrick|NewsfishComment", &sCurrNFSound, 0, 0x24, (tweak_callback*)0x0,
                   NULL, 0);
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
    xVec3 snowDir; // r29+0x170
    xVec3 snowPos; // r29+0x160
    xVec3 knockback; // r29+0x150
    xVec3 bubbleVel; // r29+0x140
    xCollis colls; // r29+0xF0

    bool bVar1 = false;

    if (this->firstUpdate)
    {
        this->firstUpdate = 0;

        switch (this->round)
        {
        case 1:
        {
            if (this->firstTimeR1Csn)
            {
                this->firstTimeR1Csn = 0;
            }
            else
            {
                zEntEvent(this->round1Csn, eEventPreload);
            }
            break;
        }
        case 2:
        {
            zEntEvent(this->round2Csn, eEventPreload);
            break;
        }
        case 3:
        {
            zEntEvent(this->round3Csn, eEventPreload);
            break;
        }
        }
    }

    if (this->csnTimer)
    {
        bVar1 = true;
    }

    if (bVar1)
    {
        if (this->bossFlags & 0x100)
        {
            this->csnTimer += dt;

            if (this->csnTimer > f1656)
            {
                this->hiddenByCutscene();
                this->bossFlags &= 0xfffffeff;
            }

            this->bossFlags |= 0x80;
        }
    }
    else
    {
        this->csnTimer = f832;
        if (this->bossFlags & 0x80)
        {
            if (this->round == 1)
            {
                // TODO: fix index
                this->newsfish->SpeakStart(sNFComment[NF_SB_WONT_WIN_THAT_WAY].soundID, 0, -1);
            }
            else if (this->round == 2)
            {
                // TODO: fix index
                this->newsfish->SpeakStart(sNFComment[NF_SB_WONT_WIN_THAT_WAY].soundID, 0, -1);
            }
            else if (this->round == 3)
            {
                // TODO: fix index
                this->newsfish->SpeakStart(sNFComment[NF_SB_WONT_WIN_THAT_WAY].soundID, 0, -1);
            }
            this->bossFlags |= 0x200;
        }
        this->bossFlags &= 0xffffff7f;
    }

    if (this->psy_instinct)
    {
        this->psy_instinct->Timestep(dt, NULL);
    }

    if (sUseBossCam)
    {
        UpdatePatrickBossCam(this, dt);
    }
    else
    {
        zCameraEnableTracking(CO_BOSS);
    }

    F32 fVar3 = f1657 * -this->fudgeHandle->model->Mat->up.y;

    if (fVar3 < f832)
    {
        fVar3 = f832;
    }

    // TODO: certainly not right
    this->fudgeEmitter->rate = fVar3;

    if (globals.player.lassoInfo.swingTarget)
    {
        if (this->notSwingingLastFrame)
        {
            this->swingTimer = f832;

            for (S32 i = 0; i < 8; i++)
            {
                if (globals.player.lassoInfo.swingTarget == this->swinger[i])
                {
                    this->currSwinger = i;
                    break;
                }
            }
        }

        bool bVar1 = this->swingTimer <= f1046;
        this->swingTimer += dt;
        this->notSwingingLastFrame = 0;

        if (f1046 < this->swingTimer)
        {
            fVar3 = this->origSwingerHeight - f1046;
            F32 dVar21 = fVar3;
            F32* swingY = &this->swinger[this->currSwinger]->model->Mat->pos.y;

            if (dVar21 < *swingY)
            {
                *swingY = -(f1051 * dt - *swingY);

                if (*swingY < dVar21)
                {
                    *swingY = fVar3;
                }
            }

            if (bVar1)
            {
                xSndPlay3D(xStrHash("b201_lasso_activation"), f1658, f832, 0, 0,
                           (xVec3*)&this->swinger[this->currSwinger]->model->Mat->pos, f891, f1659,
                           SND_CAT_GAME, f832);

                for (S32 i = 0; i < 4; i++)
                {
                    for (S32 j = 0; j < 6; j++)
                    {
                        if (globals.player.lassoInfo.swingTarget ==
                            this->swinger[this->currSwinger])
                        {
                            this->box[i][j].flags |= 1;
                            // not sure if other flag updates were compiler expanded or actually written
                        }
                    }
                }

                if (this->bossFlags & 0x40)
                {
                    this->backBox.flags |= 1;
                    xVec3Copy((xVec3*)&this->backBox.box->model->Mat->pos,
                              (xVec3*)&this->model->Mat->pos);
                    xVec3AddScaled((xVec3*)&this->backBox.box->model->Mat->pos,
                                   (xVec3*)&this->model->Mat->up, f1660

                    );
                }
            }
        }
    }
    else
    {
        this->notSwingingLastFrame = 1;
        this->currSwinger = -1;
    }

    F32 dVar21 = f1051;
    for (S32 i = 0; i < 8; i++)
    {
        if (this->currSwinger != i)
        {
            RwMatrix* mat = this->swinger[i]->model->Mat;
            if (mat->pos.y < this->origSwingerHeight)
            {
                mat->pos.y += f1051 * dt;

                if (this->origSwingerHeight < mat->pos.y)
                {
                    mat->pos.y = this->origSwingerHeight;
                }
            }
        }
    }

    F32 finalHeight = this->gooLevel - f1046;
    if (finalHeight < this->gooHeight)
    {
        this->gooHeight = -(f1046 * dt - this->gooHeight);
        if (this->gooHeight < finalHeight)
        {
            this->gooHeight = finalHeight;
        }
    }

    // IDK why this code is written twice, almost identical to block above
    finalHeight = this->gooLevel - f1046;
    if (finalHeight < this->gooHeight)
    {
        this->gooHeight = (f1046 * dt - this->gooHeight);
        if (this->gooHeight < finalHeight)
        {
            this->gooHeight = finalHeight;
        }
    }

    if (this->gooHeight > f832)
    {
        this->steamEmitter->emit_flags &= 0xfe;
    }
    else
    {
        this->steamEmitter->emit_flags |= 1;
    }

    this->gooObj->model->Mat->pos.y = this->gooHeight;
    this->gooObj->bound.box.center.y = this->gooHeight; // might not be right bound float
    xQuickCullForBound(&this->gooObj->bound.qcd, &this->gooObj->bound);
    zGridUpdateEnt(this->gooObj);

    if (this->bossFlags & 0x10)
    {
        this->frozenTimer -= dt;

        if (globals.pad0->pressed & XPAD_BUTTON_X)
        {
            this->frozenTimer -= f1661;
            this->shakeAmp = f1662;
        }

        if (this->frozenTimer <= f832)
        {
            zEntPlayerControlOn(CONTROL_OWNER_FROZEN);
            this->bossFlags &= 0xffffffef;
            xEntShow(NULL);
            xSndPlay(xStrHash("b201_ice_shatter"), f1658, f832, 0, 0, 0, SND_CAT_GAME, f832);

            xModelInstance* tempModel = xModelInstanceAlloc(this->shardModel, NULL, 0, 0, NULL);

            if (tempModel && this->iceBreak && this->iceBreak->initCB)
            {
                for (S32 i = 0; i < 10; i++)
                {
                    if (this->shard[i].size > f832)
                    {
                        xMat3x3Rot((xMat3x3*)&tempModel->Mat, &this->shard[i].rotVec,
                                   this->shard[i].ang);
                        xVec3Copy((xVec3*)&tempModel->Mat->pos,
                                  (xVec3*)&globals.player.ent.model->Mat->pos);
                        xMat3x3SMul((xMat3x3*)&tempModel->Mat, (xMat3x3*)&tempModel->Mat,
                                    this->shard[i].size);
                        this->iceBreak->initCB(this->iceBreak, tempModel, NULL, NULL);
                    }
                }

                xModelInstanceFree(tempModel);
            }
        }
        else
        {
            this->flg_xtrarend |= 1;

            for (S32 i = 0; i < 10; i++)
            {
                F32 currSize = this->shard[i].size;
                this->shard[i].size = dt * (this->shard[i].maxSize - currSize) + currSize;
            }

            this->iceScale = (f1663 - this->iceScale) * dt + this->iceScale;
            this->shakeAmp = f1664 * dt - this->shakeAmp;
            if (this->shakeAmp < f832)
            {
                this->shakeAmp = f832;
            }
            this->shakePhase = f1665 * dt - this->shakePhase;
            if (f1666 < this->shakePhase)
            {
                this->shakePhase -= f1666;
            }
        }
    }

    this->particleTimer += dt;
    if (this->particleTimer < f1667)
    {
        this->flg_xtrarend |= 1;

        F32 rand = xurand();

        for (S32 i = 0; i < this->numParticles - 1; i++)
        {
            xVec3Sub(&bubbleVel, &this->parList[i]->m_pos, &this->parList[i]->m_pos);
            F32 dVar20 = xVec3Length(&bubbleVel);

            if (f1668 <= dVar20)
            {
                xVec3SMulBy(&bubbleVel, f831 / dVar20);
                // TODO: Fix me
                xVec3Sub(&knockback, NULL, &this->parList[i]->m_pos);
                F32 dVar18 = xVec3Dot(&bubbleVel, &knockback);

                if (dVar20 > dVar18)
                {
                    xVec3Copy(&snowPos, &this->parList[i]->m_pos);
                    dVar18 =
                        f1664 * this->parList[i]->totalLifespan; // TODO: figure out par 0x1c offset
                }
                else
                {
                    xVec3Copy(&snowPos, &this->parList[i]->m_pos);
                    xVec3AddScaled(&snowPos, &bubbleVel, dVar18);
                    dVar18 = f1664 * (dVar18 / dVar20); // * ??? wtf todo
                }
            }
        }

        xStrHash("b201_rp_freeze");
    }
}

void zNPCBPatrick::DuploNotice(en_SM_NOTICES note, void* data)
{
    if (note != SM_NOTE_NPCSTANDBY)
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
                    this->newsfish->SpeakStart(sNFComment[NF_SB_WONT_WIN_THAT_WAY].soundID, 0, -1);
                }
                else
                {
                    this->newsfish->SpeakStart(sNFComment[NF_ROBOT_TOO_BIG_DIRECT_ATTACK].soundID,
                                               0, -1);
                }
            }
            else
            {
                if (this->round != 2)
                {
                    this->newsfish->SpeakStart(sNFComment[NF_SB_WONT_WIN_THAT_WAY].soundID, 0, -1);
                }
                else
                {
                    this->newsfish->SpeakStart(sNFComment[NF_ROBOT_TOO_BIG_DIRECT_ATTACK].soundID,
                                               0, -1);
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

// 70%
void zNPCBPatrick::RenderGlobs()
{
    /*
        class xMat4x3 globMat; // r29+0xB0
        signed int i; // r29+0xA0
    */
    xMat4x3 globMat;
    S32 i;

    iModelSetMaterialAlpha(this->spitModel, 215);
    iModelMaterialMul(this->spitModel, f832, f831, f832);

    iModelSetMaterialAlpha(this->splatModel, 215);
    iModelMaterialMul(this->splatModel, f832, f831, f832);

    for (i = 0; i < 50; i++)
    {
        bossPatGlob* glob = &this->glob[i];
        if (glob->flags & 1)
        {
            if (glob->flags & 4)
            {
                xVec3Copy(&globMat.pos, &glob->path.initPos);
                xVec3Copy(&glob->lastPos, &globMat.pos);
                xVec3Init(&globMat.up, f832, f831, f832);
                globMat.at.x = -glob->path.initVel.x;
                globMat.at.y = f832;
                globMat.at.z = -glob->path.initVel.z;

                F32 dVar4 = xVec3Length(&globMat.at);

                if (dVar4 > f1668)
                {
                    xVec3SMulBy(&globMat.at, f831 / dVar4);
                }

                xVec3Cross(&globMat.right, &globMat.up, &globMat.at);
                xMat3x3SMul(&globMat, &globMat, f891);

                if (!iModelCull(this->splatModel, (RwMatrix*)&globMat))
                {
                    iModelRender(this->splatModel, (RwMatrix*)&globMat);
                }
            }
            else
            {
                xParabolaEvalPos(&glob->path, &globMat.pos, glob->t);

                if (this->gooHeight < globMat.pos.y)
                {
                    glob->flags = 0;
                    this->playSplat(&globMat.pos);
                }
                else
                {
                    xVec3Copy(&glob->lastPos, &globMat.pos);
                    xParabolaEvalVel(&glob->path, &globMat.at, glob->t);

                    F32 dVar4 = xVec3Length(&globMat.at);

                    if (dVar4 > f1668)
                    {
                        xVec3Init(&globMat.at, f832, f870, f832);
                        xVec3Init(&globMat.right, f831, f832, f832);
                    }
                    else
                    {
                        xVec3SMulBy(&globMat.at, f831 / dVar4);
                        globMat.right.x = globMat.at.z;
                        globMat.right.z = -globMat.at.x;
                        globMat.right.y = f832;
                        xVec3Normalize(&globMat.right, &globMat.right);
                    }

                    xVec3Cross(&globMat.up, &globMat.at, &globMat.right);
                    xMat3x3SMul(&globMat, &globMat, f891);

                    if (!iModelCull(this->spitModel, (RwMatrix*)&globMat))
                    {
                        iModelRender(this->spitModel, (RwMatrix*)&globMat);
                    }
                }
            }
        }
    }

    iModelResetMaterial(this->spitModel);
    iModelResetMaterial(this->splatModel);
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

    for (S32 i = 0; i < 4; i++)
    {
        if (sBoundRadius[i] > f832)
        {
            GetBonePos(&this->boundList[i]->bound.box.center, (xMat4x3*)&this->model->Mat,
                       sBone[sBoundBone[i]], &sBoneOffset[i]);

            xQuickCullForBound(&this->boundList[i]->bound.qcd, &this->boundList[i]->bound);
            zGridUpdateEnt(this->boundList[i]);
        }
    }

    zNPCCommon::NewTime(xscn, dt);
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

// 95% match, string offsets are just incorrect for now.
// Should fix itself when strings are all correct.
void zNPCBPatrick::playSplat(xVec3* pos)
{
    if (this->splatTimer > f1664)
    {
        this->splatTimer = f832;

        F32 picker = xurand() * f2077;

        if (picker < f831)
        {
            xSndPlay3D(xStrHash("b201_rp_spin_spurt1"), f2078, f832, 0, 0, pos, f891, f1659,
                       SND_CAT_GAME, f832);
        }
        else if (picker < f891)
        {
            xSndPlay3D(xStrHash("b201_rp_spin_spurt2"), f2078, f832, 0, 0, pos, f891, f1659,
                       SND_CAT_GAME, f832);
        }
        else if (picker < f1051)
        {
            xSndPlay3D(xStrHash("b201_rp_spin_spurt3"), f2078, f832, 0, 0, pos, f891, f1659,
                       SND_CAT_GAME, f832);
        }
        else if (picker < f1670)
        {
            xSndPlay3D(xStrHash("b201_rp_spin_spurt4"), f2078, f832, 0, 0, pos, f891, f1659,
                       SND_CAT_GAME, f832);
        }
        else if (picker < f1049)
        {
            xSndPlay3D(xStrHash("b201_rp_spin_spurt5"), f2078, f832, 0, 0, pos, f891, f1659,
                       SND_CAT_GAME, f832);
        }
        else
        {
            xSndPlay3D(xStrHash("b201_rp_spin_spurt6"), f2078, f832, 0, 0, pos, f891, f1659,
                       SND_CAT_GAME, f832);
        }
    }
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
        zEntEvent(this, eEventDeath);
        this->numTasks = 1;
        this->task[0] = NPC_GOAL_BOSSPATIDLE;
        this->currTask = 0;
        this->hitPoints = 0;
        this->gooLevel = 3;
        break;
    }
    }
}

// I think xPlatformAsset type might not be correct
// WIP
F32 zNPCBPatrick::ConveyorTimeLeft(zPlatform* platform, xVec3* vec_unk)
{
    xVec3 output;

    F32 fVar1;

    if (platform->passet->pad > f832)
    {
        fVar1 = platform->bound.box.center.x;
    }
    else
    {
        fVar1 = platform->bound.box.center.y;
    }

    xVec3Sub(&output, vec_unk, &platform->bound.box.center);
    F32 dVar3 = xVec3Dot(&output, &platform->bound.box.center);
    F32 dVar4 = xVec3Length2(&platform->bound.box.center);

    return fVar1 - dVar3 / dVar4 / platform->passet->pad;
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

    F32 t[2];

    for (S32 i = 0; i < 7; i++)
    {
        // This code is a mess, don't feel like working on this fn right now.
        zPlatform* pzVar4 = this->conveyorBelt[i];
        xVec3* pxVar3 = &pzVar4->bound.box.center;
        F32 dVar7 = f1046 - path->gravity;
        F32 dVar8 = path->initVel.y;
        test(dVar8);

        for (S32 j = 0; j < 2; j++)
        {
        }
    }
}

// not in PS2 dwarf
void zNPCBPatrick::bossPatBoxCheckCollide(bossPatBox* box)
{
    if (box->flags & 1 && box->pos < f2215)
    {
        F32 z = this->model->Mat->pos.z - box->box->model->Mat->pos.z;
        F32 x = this->model->Mat->pos.x - box->box->model->Mat->pos.x;

        if (x * x + z * z < f1670)
        {
            zShrapnelAsset* shrap = this->boxBreak;

            if (shrap && shrap->initCB)
            {
                shrap->initCB(shrap, box->box->model, NULL, NULL);
            }

            box->velocity = f832;
            box->flags = 0;
            box->pos = f1141 + box->minY;
        }
    }
}

// very close, but there are some if statements not quite right
void zNPCBPatrick::bossPatBoxUpdate(bossPatBox* bx, F32 dt)
{
    if (bx->flags & 1)
    {
        bx->velocity = -(f1055 * dt - bx->velocity);
        bx->pos = bx->velocity * dt + bx->pos;

        if (bx->pos < this->gooHeight)
        {
            bx->pos = this->gooHeight;
            bx->velocity = f832;

            if (!(bx->flags & 2))
            {
                bx->flags |= 2;

                if (this->boxSplash && this->boxSplash->initCB)
                {
                    this->boxSplash->initCB(this->boxSplash, bx->box->model, NULL, NULL);
                }

                if (this->boxSplashSndTimer > f1046)
                {
                    xSndPlay3D(xStrHash("b201_box_splash"), f2256, f832, 0, 0,
                               (xVec3*)&bx->box->model->Mat->pos, f891, f1659, SND_CAT_GAME, f832);

                    this->boxSplashSndTimer = f832;
                }
            }
        }
        else
        {
            if (bx->pos < bx->minY)
            {
                if (!(bx->flags & 2))
                {
                    bx->flags |= 2;

                    if (bx->minY > f2257 + this->gooHeight)
                    {
                        if (this->boxLandSndTimer > f1046)
                        {
                            xSndPlay3D(xStrHash("b201_box_splash"), f2256, f832, 0, 0,
                                       (xVec3*)&bx->box->model->Mat->pos, f891, f1659, SND_CAT_GAME,
                                       f832);
                            this->boxLandSndTimer = f832;
                        }

                        if (this->boxSplash && this->boxSplash->initCB)
                        {
                            this->boxSplash->initCB(this->boxSplash, bx->box->model, NULL, NULL);
                        }

                        if (this->boxSplashSndTimer > f1046)
                        {
                            xSndPlay3D(xStrHash("b201_box_landing"), f2256, f832, 0, 0,
                                       (xVec3*)&bx->box->model->Mat->pos, f891, f1659, SND_CAT_GAME,
                                       f832);
                            this->boxSplashSndTimer = f832;
                        }
                    }
                }

                bx->pos = bx->minY;
                bx->velocity = f832;
            }
        }

        if (bx->flags & 2)
        {
            bx->box->chkby |= 0x10;
        }
        else
        {
            bx->box->chkby &= 0xef;
        }
    }

    bx->box->model->Mat->pos.y = bx->pos;
    xQuickCullForBound(&bx->box->bound.qcd, &bx->box->bound);
    zGridUpdateEnt(bx->box);
}

static S32 idleCB(xGoal* rawgoal, void*, en_trantype* trantype, F32 dt, void*)
{
    zNPCGoalBossPatIdle* idle = (zNPCGoalBossPatIdle*)rawgoal;
    zNPCBPatrick* pat = (zNPCBPatrick*)idle->GetOwner();
    S32 nextgoal = 0;

    if (globals.player.ControlOff & 0xffffbaff)
    {
        return 0;
    }

    if (pat->bossFlags & 2)
    {
        *trantype = GOAL_TRAN_SET;
        nextgoal = NPC_GOAL_BOSSPATTAUNT;
    }
    else if (idle->timeInGoal > f1676 && idle->timeInGoal > f891)
    {
        nextgoal = pat->nextGoal();
        *trantype = GOAL_TRAN_SET;
    }

    return nextgoal;
}

static S32 tauntCB(xGoal* rawgoal, void*, en_trantype* trantype, F32 dt, void*)
{
    zNPCGoalBossPatTaunt* taunt = (zNPCGoalBossPatTaunt*)rawgoal;
    zNPCBPatrick* pat = (zNPCBPatrick*)taunt->GetOwner();
    S32 nextgoal = 0;

    if (globals.player.ControlOff & 0xffffbaff)
    {
        *trantype = GOAL_TRAN_SET;
        return NPC_GOAL_BOSSPATIDLE;
    }

    if (pat->AnimTimeRemain(NULL) < f2280 * dt)
    {
        pat->bossFlags &= 0xfffffffd;
        nextgoal = pat->nextGoal();
        *trantype = GOAL_TRAN_SET;
    }

    return nextgoal;
}

static S32 hitCB(xGoal* rawgoal, void*, en_trantype* trantype, F32 dt, void*)
{
    zNPCGoalBossPatHit* hit = (zNPCGoalBossPatHit*)rawgoal;
    zNPCBPatrick* pat = (zNPCBPatrick*)hit->GetOwner();
    S32 nextgoal = 0;

    if (globals.player.ControlOff & 0xffffbaff)
    {
        *trantype = GOAL_TRAN_SET;
        return NPC_GOAL_BOSSPATIDLE;
    }

    if (pat->AnimTimeRemain(NULL) < f2280 * dt)
    {
        if (pat->round == 2)
        {
            nextgoal = NPC_GOAL_BOSSPATFUDGE;
            *trantype = GOAL_TRAN_SET;
        }
        else
        {
            nextgoal = pat->nextGoal();
            *trantype = GOAL_TRAN_SET;
        }
    }

    return nextgoal;
}

static S32 spitCB(xGoal* rawgoal, void*, en_trantype* trantype, F32 dt, void*)
{
    zNPCGoalBossPatSpit* spit = (zNPCGoalBossPatSpit*)rawgoal;
    zNPCBPatrick* pat = (zNPCBPatrick*)spit->GetOwner();
    S32 nextgoal = 0;

    if (globals.player.ControlOff & 0xffffbaff)
    {
        *trantype = GOAL_TRAN_SET;
        return NPC_GOAL_BOSSPATIDLE;
    }

    if ((spit->stage == 1 || spit->stage == 2) && pat->AnimTimeRemain(NULL) < f2280 * dt)
    {
        nextgoal = pat->nextGoal();
        *trantype = GOAL_TRAN_SET;
    }

    return nextgoal;
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

static S32 freezeCB(xGoal* rawgoal, void*, en_trantype* trantype, F32 dt, void*)
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

static S32 spawnCB(xGoal* rawgoal, void*, en_trantype* trantype, F32 dt, void*)
{
    zNPCGoalBossPatSpawn* spawn = (zNPCGoalBossPatSpawn*)rawgoal;
    zNPCBPatrick* pat = (zNPCBPatrick*)rawgoal->GetOwner();
    S32 nextgoal = 0;

    if (globals.player.ControlOff & 0xffffbaff)
    {
        *trantype = GOAL_TRAN_SET;
        return NPC_GOAL_BOSSPATIDLE;
    }

    if (spawn->stage == 3 && pat->AnimTimeRemain(NULL) < f2280 * dt)
    {
        nextgoal = pat->nextGoal();
        *trantype = GOAL_TRAN_SET;
    }

    return nextgoal;
}

// This function was a PITA to match
static S32 spinCB(xGoal* rawgoal, void*, en_trantype* trantype, F32 dt, void*)
{
    zNPCGoalBossPatSpin* spin = (zNPCGoalBossPatSpin*)rawgoal;
    zNPCBPatrick* pat = (zNPCBPatrick*)rawgoal->GetOwner();
    S32 nextgoal = 0;

    if (globals.player.ControlOff & 0xffffbaff)
    {
        *trantype = GOAL_TRAN_SET;
        return NPC_GOAL_BOSSPATIDLE;
    }

    if (spin->stage == 6)
    {
        if (pat->AnimTimeRemain(NULL) < f2280 * dt)
        {
            nextgoal = pat->nextGoal();
            *trantype = GOAL_TRAN_SET;
        }
    }
    else if (spin->stage == 2 && pat->bossFlags & 2)
    {
        if (pat->AnimTimeRemain(NULL) < f2280 * dt)
        {
            nextgoal = NPC_GOAL_BOSSPATTAUNT;
            *trantype = GOAL_TRAN_SET;
        }
    }
    else if (pat->bossFlags & 4 && pat->bossFlags & 8)
    {
        pat->hitPoints--;
        zEntEvent(pat, pat, eEventNPCHPDecremented);
        *trantype = GOAL_TRAN_SET;
        nextgoal = NPC_GOAL_BOSSPATHIT;

        if (!(pat->nfFlags & 0x800))
        {
            pat->newsfish->SpeakStart(sNFComment[NF_THATS_THE_TICKET_A].soundID, 0, -1);
            pat->nfFlags |= 0x800;
        }
        else if (pat->numMissesInARow > 5)
        {
            pat->newsfish->SpeakStart(sNFComment[NF_CHANGE_TACTICS_FAST].soundID, 0, -1);
            pat->numMissesInARow = 0;
        }
        else if (pat->numPCHitsInARow > 2 || (pat->numPCHitsInARow == 2 && (xrand() & 0x80)))
        {
            pat->newsfish->SpeakStart(sNFComment[NF_ROBOT_TAKING_BEATING].soundID, 0, -1);
        }
        else
        {
            U32 picker = xrand();

            if (!(picker & 0x300))
            {
                if (picker & 0x40)
                {
                    pat->newsfish->SpeakStart(sNFComment[NF_THATS_THE_TICKET_A].soundID, 0, -1);
                }
                else
                {
                    pat->newsfish->SpeakStart(sNFComment[NF_THATS_THE_TICKET_B].soundID, 0, -1);
                }
            }
        }

        pat->numPCHitsInARow = 0;
    }

    return nextgoal;
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

/*
    I think the multi-dimensional box array might be changed
    between PS2 and gamecube.
    When we use the PS2 dwarf: bossPatBox box[3][8]; 3 * 8 = 24
        1. the compiler generates addi r3, r3, 0x78 for the loop, which is incorrect
        2. The hardcoded loop values are both 4 and 6, and 4 * 6 = 24.
    I think it's supposed to be bossPatBox box[4][6] instead.
    because the two issues above are resolved and things make more sense this way
    and the box arrays still take up the same size.
*/
void zNPCBPatrick::hiddenByCutscene()
{
    for (S32 i = 0; i < 2; i++)
    {
        this->underwear[i]->state = this->underwear[i]->state & ~0x3F | 1;
        zEntEvent(this->underwear[i], eEventCollision_Visible_On);
        this->underwear[i]->timer = f832;
    }

    switch (this->round)
    {
    case 1:
    {
        zEntPlayer_SNDStop(ePlayerSnd_Heli);
        globals.player.lassoInfo.swingTarget = NULL;
        gCurrentPlayer = eCurrentPlayerSpongeBob;

        for (S32 i = 0; i < 4; i++)
        {
            for (S32 j = 0; j < 6; j++)
            {
                bossPatBox* bx = &this->box[i][j];
                bx->velocity = f832;
                bx->flags = 0;
                bx->pos = f1141 + bx->minY;
            }
        }

        this->backBox.velocity = f832;
        this->backBox.flags = 0;
        this->backBox.pos = f1141 + this->backBox.minY;

        break;
    }
    case 2:
    {
        gCurrentPlayer = eCurrentPlayerSandy;
        zEntEvent(this->safeGroundPortal, eEventTeleportPlayer);
        xEntShow(this->fudgeHandle);
        break;
    }
    case 3:
    {
        zEntPlayer_SNDStop(ePlayerSnd_Heli);
        globals.player.lassoInfo.swingTarget = NULL;
        gCurrentPlayer = eCurrentPlayerSpongeBob;
        zEntEvent(this->safeGroundPortal, eEventTeleportPlayer);

        for (S32 i = 0; i < 4; i++)
        {
            for (S32 j = 0; j < 6; j++)
            {
                bossPatBox* bx = &this->box[i][j];
                bx->velocity = f832;
                bx->flags = 0;
                bx->pos = f1141 + bx->minY;
            }
        }

        this->backBox.velocity = f832;
        this->backBox.flags = 0;
        this->backBox.pos = f1141 + this->backBox.minY;

        xEntHide(this->fudgeHandle);

        break;
    }
    case 4:
    {
        gCurrentPlayer = eCurrentPlayerSpongeBob;
        zEntEvent(this->safeGroundPortal, eEventTeleportPlayer);
        break;
    }
    }
}

void zNPCBPatrick_AddBoundEntsToGrid(zScene* scn)
{
    if (sOthersHaventBeenAdded)
    {
        sOthersHaventBeenAdded = false;

        for (S32 i = 0; i < 4; i++)
        {
            xEnt* ent = sPat_Ptr->boundList[i];

            if (xGridEntIsTooBig(&colls_grid, ent))
            {
                xGridAdd(&colls_oso_grid, ent);

                if (xGridEntIsTooBig(&colls_oso_grid, ent))
                {
                    ent->gridb.oversize = 2;
                }
                else
                {
                    ent->gridb.oversize = 1;
                }
            }
            else
            {
                xGridAdd(&colls_grid, ent);
                ent->gridb.oversize = 0;
            }
        }
    }
    else
    {
        sPat_Ptr = NULL;
    }
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

S32 zNPCGoalBossPatTaunt::Enter(F32 dt, void* updCtxt)
{
    zNPCBPatrick* pat = (zNPCBPatrick*)this->GetOwner();

    pat->bossFlags &= 0xfffffffd;
    this->timeInGoal = f832;
    pat->bossFlags |= 0x20;

    xSndPlay3D(xStrHash("b201_rp_chestbang1"), f1671, f832, 0, 0, pat, f1142, f1659, SND_CAT_GAME,
               f2423);
    xSndPlay3D(xStrHash("b201_rp_chestbang2"), f1671, f832, 0, 0, pat, f1142, f1659, SND_CAT_GAME,
               f2424);
    xSndPlay3D(xStrHash("b201_rp_chestbang3"), f1671, f832, 0, 0, pat, f1142, f1659, SND_CAT_GAME,
               f2425);
    xSndPlay3D(xStrHash("b201_rp_chestbang4"), f1671, f832, 0, 0, pat, f1142, f1659, SND_CAT_GAME,
               f2426);
    xSndPlay3D(xStrHash("b201_rp_chestbang5"), f1671, f832, 0, 0, pat, f1142, f1659, SND_CAT_GAME,
               f2427);
    xSndPlay3D(xStrHash("b201_rp_chestbang6"), f1671, f832, 0, 0, pat, f1142, f1659, SND_CAT_GAME,
               f2428);

    return zNPCGoalCommon::Enter(dt, updCtxt);
}

S32 zNPCGoalBossPatTaunt::Process(en_trantype* trantype, F32 dt, void* ctxt, xScene* scene)
{
    zNPCBPatrick* pat = (zNPCBPatrick*)this->GetOwner();
    this->timeInGoal += dt;
    Pat_FaceTarget(pat, (xVec3*)&globals.player.ent.model->Mat->pos, f1673, dt);
    return xGoal::Process(trantype, dt, ctxt, scene);
}

S32 zNPCGoalBossPatHit::Enter(F32 dt, void* updCtxt)
{
    zNPCBPatrick* pat = (zNPCBPatrick*)this->GetOwner();

    pat->bossFlags &= 0xffffffd3;

    sPat_Ptr->boundList[0]->chkby &= 0xef; // TODO substitute out enum XENT_COLLTYPE_
    sPat_Ptr->boundList[1]->chkby &= 0xef;
    sPat_Ptr->boundList[2]->chkby &= 0xef;
    sPat_Ptr->boundList[3]->chkby &= 0xef;

    this->timeInGoal = f832;

    xSndPlay3D(xStrHash("b201_rp_hurt_jump"), f1671, f832, 0, 0, pat, f1142, f1659, SND_CAT_GAME,
               f832);

    if (xrand() & 0x20000)
    {
        xSndPlay3D(xStrHash("b201_rp_hurt_talk"), f1671, f832, 0, 0, pat, f1142, f1659,
                   SND_CAT_GAME, f832);
    }
    else
    {
        xSndPlay3D(xStrHash("b201_rp_hurt_talk_alt"), f1671, f832, 0, 0, pat, f1142, f1659,
                   SND_CAT_GAME, f832);
    }

    return zNPCGoalCommon::Enter(dt, updCtxt);
}

S32 zNPCGoalBossPatHit::Process(en_trantype* trantype, F32 dt, void* ctxt, xScene* scene)
{
    zNPCBPatrick* pat = (zNPCBPatrick*)this->GetOwner();
    this->timeInGoal += dt;
    Pat_FaceTarget(pat, (xVec3*)&globals.player.ent.model->Mat->pos, f1673, dt);
    return xGoal::Process(trantype, dt, ctxt, scene);
}

S32 zNPCGoalBossPatHit::Exit(F32 dt, void* updCtxt)
{
    zNPCBPatrick* pat = (zNPCBPatrick*)this->GetOwner();

    sPat_Ptr->boundList[0]->chkby |= 0x10;
    sPat_Ptr->boundList[1]->chkby |= 0x10;
    sPat_Ptr->boundList[2]->chkby |= 0x10;
    sPat_Ptr->boundList[3]->chkby |= 0x10;

    return xGoal::Exit(dt, updCtxt);
}

S32 zNPCGoalBossPatSpit::Enter(F32 dt, void* updCtxt)
{
    zNPCBPatrick* pat = (zNPCBPatrick*)this->GetOwner();

    this->timeInGoal = f832;
    this->timeLeftToSpit = f831;
    this->stage = 0;

    pat->bossFlags |= 0x20;
    pat->numMissesInARow++;

    return zNPCGoalCommon::Enter(dt, updCtxt);
}

S32 zNPCGoalBossPatSpit::Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* xscn)
{
    xVec3 futurePos;
    xVec3 offset;
    xVec3 upperLip;
    xVec3 lowerLip;
    xVec3 lowerLipRight;
    xCollis colls;

    zNPCBPatrick* pat = (zNPCBPatrick*)this->GetOwner();
    this->timeInGoal += dt;

    S32 bVar5 = (this->timeLeftToSpit < f832) ? 0 : 1;

    F32 leadTime = f831;

    switch (this->stage)
    {
    case 0:
    {
        leadTime += f2512 + pat->AnimTimeRemain(NULL);

        if (pat->AnimTimeRemain(NULL) < f2280 * dt)
        {
            this->stage = 1;
            this->timeLeftToSpit = f2512;
            this->DoAutoAnim(NPC_GSPOT_START, 0);
            this->timeInGoal = f832;
        }

        break;
    }
    case 1:
    {
        this->timeLeftToSpit -= dt;

        if (this->timeLeftToSpit >= f832)
        {
            leadTime += this->timeLeftToSpit;
        }

        break;
    }
    case 2:
    {
        this->timeLeftToSpit -= dt;

        if (this->timeLeftToSpit >= f832)
        {
            leadTime += this->timeLeftToSpit;
        }

        break;
    }
    }

    zEntPlayer_PredictPos(&futurePos, leadTime, f831, true);
    Pat_FaceTarget(pat, &futurePos, f1673, dt);

    if (bVar5 && this->timeLeftToSpit < f832)
    {
        bossPatGlob* glob = pat->getNextFreeGlob();
        glob->t = f832;
        glob->path.minTime = f832;
        leadTime = xurand();
        glob->path.maxTime = f1678 * leadTime + f831;
        glob->path.gravity = f1055;

        xVec3Init(&offset, f832, f832, f832);
        GetBonePos(&upperLip, (xMat4x3*)pat->model->Mat, sBone[1], &offset);
        GetBonePos(&lowerLip, (xMat4x3*)pat->model->Mat, sBone[2], &offset);

        xVec3Init(&offset, f831, f832, f832);
        GetBonePos(&lowerLipRight, (xMat4x3*)pat->model->Mat, sBone[2], &offset);
        xVec3SubFrom(&lowerLipRight, &lowerLip);
        xVec3Normalize(&lowerLipRight, &lowerLipRight);
        xVec3SMul(&glob->path.initPos, &upperLip, f1046);
        xVec3Copy(&glob->lastPos, &glob->path.initPos);
        xVec3AddScaled(&glob->path.initPos, &lowerLip, f1046);

        F32 t = f831;

        glob->path.initVel.x = t * (futurePos.x - glob->path.initPos.x);
        glob->path.initVel.z = t * (futurePos.z - glob->path.initPos.z);
        glob->path.initVel.y =
            f1046 * glob->path.gravity + t * (futurePos.y - glob->path.initPos.y);

        leadTime = xVec3Dot(&lowerLipRight, &glob->path.initVel);
        xVec3AddScaled(&glob->path.initVel, &lowerLipRight, -leadTime);
        xParabolaHitsEnv(&glob->path, globals.sceneCur->env, &colls);

        if (colls.flags & 1)
        {
            glob->path.maxTime = colls.dist; // TODO: not sure if right
            xVec3Copy(&glob->norm, &colls.norm);
            glob->flags |= 2;
        }

        colls.flags &= 0xfffffffe; // TODO: clean this up

        pat->ParabolaHitsConveyors(&glob->path, &colls);

        if (colls.flags & 1)
        {
            glob->path.maxTime = colls.dist;
            glob->flags |= 2;

            if (colls.tohit.x < f1679 && colls.tohit.x > f1680 && colls.tohit.z > f1681)
            {
                glob->flags |= 8;
                xVec3Init(&glob->norm, f832, f831, f832);
                glob->conv = (zPlatform*)colls.optr;
                xVec3SMul(&glob->convVel, &glob->conv->bound.mat->right,
                          glob->conv->passet->cb.speed);
            }
            else
            {
                xVec3Init(&glob->norm, f832, f870, f832);
            }
        }

        if (xrand() & 0x20000)
        {
            xSndPlay3D(xStrHash("b201_rp_spit"), f1671, f832, 0, 0, &glob->path.initPos, f1142,
                       f1659, SND_CAT_GAME, f832);
        }
        else
        {
            xSndPlay3D(xStrHash("b201_rp_spitalt"), f1671, f832, 0, 0, &glob->path.initPos, f1142,
                       f1659, SND_CAT_GAME, f832);
        }
    }

    return xGoal::Process(trantype, dt, updCtxt, xscn);
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

S32 zNPCGoalBossPatSmack::Enter(F32 dt, void* unk)
{
    zNPCBPatrick* pat = (zNPCBPatrick*)this->GetOwner();

    this->timeInGoal = f832;
    this->globNum = f832;

    pat->bossFlags |= 0x20;
    pat->numMissesInARow++;

    return zNPCGoalCommon::Enter(dt, unk);
}

S32 zNPCGoalBossPatSmack::Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* xscn)
{
    /*
        signed int i; // r19
        class zNPCBPatrick * pat; // r18
        signed int playSmack; // r16
        class xVec3 offset; // r29+0x110
        class xVec3 cone; // r29+0x100
        signed int numGlobs; // r17
        class xCollis colls; // r29+0xB0
    */
    xVec3 offset;
    xVec3 cone;
    xCollis colls;

    zNPCBPatrick* pat = (zNPCBPatrick*)this->GetOwner();

    S32 playSmack = 0;

    if (this->timeInGoal <= f1675)
    {
        playSmack = 1;
    }

    this->timeInGoal += dt;

    Pat_FaceTarget(pat, (xVec3*)&globals.player.ent.model->Mat->pos, f1673, dt);

    if ((this->timeInGoal > f1675) && this->timeInGoal < f831)
    {
        xVec3Init(&offset, f832, f832, f832);
        GetBonePos(&cone, (xMat4x3*)pat->model->Mat, sBone[9], &offset);

        if (playSmack)
        {
            xSndPlay3D(xStrHash("b201_rp_smack"), f1671, f832, 0, 0, &cone, f1142, f1659,
                       SND_CAT_GAME, f832);
        }

        S32 numGlobs = 0x4330;
        // F32 rand = xurand();

        // lines 114-170 (objdiff) are super confusing for me
        F32 f1 = xurand();
        F32 f0 = f1046;
        F32 f2 = f1056;

        f1 = f0 + f1;

        f0 = this->globNum;
        f1 = f2 * f1;
        f0 = dt * f1 + f0;
        this->globNum = f0;
        // A * C + B

        f2 = this->globNum;
        f1 = f875;

        numGlobs = this->globNum;

        // this->globNum = f1056 * (f1046 * xurand()) + this->globNum;

        for (S32 i = 0; i < numGlobs; i++)
        {
            bossPatGlob* glob = pat->getNextFreeGlob();
            glob->t = f832;
            glob->path.gravity = f832;
            glob->path.maxTime = f1678 * xurand() + f831;
            glob->path.gravity = f1055;

            xVec3Copy(&glob->path.initPos, &cone);
            xVec3Copy(&glob->lastPos, &glob->path.initPos);
            xVec3Copy(&glob->path.initPos, (xVec3*)&pat->model->Mat->at);

            xVec3AddScaled(&glob->path.initPos, (xVec3*)&pat->model->Mat->right,
                           f1676 * xurand() - f1046);

            glob->path.initPos.x *= f1049 * (xurand() + f891);
            glob->path.initPos.y *= f1670 * (xurand() + f891);
            glob->path.initPos.z *= f1049 * (xurand() + f891);

            xParabolaHitsEnv(&glob->path, globals.sceneCur->env, &colls);

            if (colls.flags & 1)
            {
                glob->path.maxTime = colls.dist;
                xVec3Copy(&glob->norm, &cone);
                glob->flags |= 2;
            }

            colls.flags &= 0xfffffffe;

            pat->ParabolaHitsConveyors(&glob->path, &colls);

            if (colls.flags & 1)
            {
                glob->path.maxTime = colls.dist;
                glob->flags |= 2;

                if (colls.tohit.x < f1679 && colls.tohit.x > f1680 && colls.tohit.z > f1681)
                {
                    glob->flags |= 8;
                    xVec3Init(&glob->norm, f832, f831, f832);
                    glob->conv = (zPlatform*)colls.optr;

                    xVec3SMul(&glob->convVel, (xVec3*)&glob->conv->bound.mat->right,
                              glob->conv->passet->cb.speed);
                }
                else
                {
                    xVec3Init(&glob->norm, f832, f870, f832);
                }
            }
        }
    }

    return xGoal::Process(trantype, dt, updCtxt, xscn);
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

void EmitFreezeBreath(xVec3* pos, xVec3* vel, F32 dt, F32 elapsed, F32 total)
{
    zNPCBPatrick* pat = sPat_Ptr;

    xVec3Copy(&pat->freezeBreathSetting.vel, vel);
    xVec3Copy(&pat->freezeBreathSetting.pos, pos);

    F32 x = pat->freezeBreathSetting.vel.x;
    F32 z = pat->freezeBreathSetting.vel.z;
    F32 dVar6 = xsqrt(x * x + z * z);
    pat->freezeBreathSetting.vel.y = f2596 * dVar6;

    dVar6 = xVec3Length(&pat->freezeBreathSetting.vel);
    xVec3SMulBy(&pat->freezeBreathSetting.vel, f2597 / dVar6);

    pat->lastEmitted =
        xParEmitterEmitCustom(pat->freezeBreathEmitter, dt, &pat->freezeBreathSetting);

    if (pat->numParticles < 4 && (elapsed / total) > pat->numParticles / f1051 && pat->lastEmitted)
    {
        pat->parList[pat->numParticles] = pat->lastEmitted;
        pat->numParticles++;
    }
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

S32 zNPCGoalBossPatFreeze::Enter(F32 dt, void* updCtxt)
{
    zNPCBPatrick* pat = (zNPCBPatrick*)this->GetOwner();

    this->timeInGoal = f832;

    StartFreezeBreath();

    pat->bossFlags |= 0x20;

    xSndPlay3D(xStrHash("b201_rp_inhale"), f2610, f832, 0, 0, pat, f1142, f1659, SND_CAT_GAME,
               f832);

    return zNPCGoalCommon::Enter(dt, updCtxt);
}

S32 zNPCGoalBossPatFreeze::Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* xscn)
{
    xVec3 offset;
    xVec3 lip;
    xVec3 pos;
    xVec3 vel;

    zNPCBPatrick* pat = (zNPCBPatrick*)this->GetOwner();

    S32 playFreeze = 0;

    if (this->timeInGoal < f1663)
    {
        playFreeze = 1;
    }

    this->timeInGoal += dt;

    Pat_FaceTarget(pat, (xVec3*)&globals.player.ent.model->Mat->pos, f2629, dt);

    if (!(this->timeInGoal < f1663))
    {
        if (this->timeInGoal < f2630)
        {
            if (playFreeze)
            {
                xSndPlay3D(xStrHash("b201_rp_exhale"), f1671, f832, 0, 0, pat, f1142, f1659,
                           SND_CAT_GAME, f832);
            }

            xVec3Init(&offset, f832, f832, f832);
            GetBonePos(&pos, (xMat4x3*)pat->model->Mat, sBone[2], &offset);
            GetBonePos(&lip, (xMat4x3*)pat->model->Mat, sBone[1], &offset);
            xVec3AddTo(&pos, &lip);
            xVec3SMulBy(&pos, f1046);
            xVec3Init(&offset, f832, f832, f831);
            GetBonePos(&vel, (xMat4x3*)pat->model->Mat, sBone[1], &offset);
            xVec3SubFrom(&vel, &pos);
            EmitFreezeBreath(&pos, &vel, dt, this->timeInGoal - f1663, f1046);
        }
        else
        {
            if (pat->numParticles < 4)
            {
                StopFreezeBreath();
            }
        }
    }

    return xGoal::Process(trantype, dt, updCtxt, xscn);
}

S32 zNPCGoalBossPatSpawn::Enter(F32 dt, void* updCtxt)
{
    zNPCBPatrick* pat = (zNPCBPatrick*)this->GetOwner();

    this->timeInGoal = f832;
    this->stage = 1;
    pat->bossFlags |= 0x20;

    return zNPCGoalCommon::Enter(dt, updCtxt);
}

S32 zNPCGoalBossPatSpawn::Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* xscn)
{
    xVec3 offset;
    xVec3 spawnPos;

    zNPCBPatrick* pat = (zNPCBPatrick*)this->GetOwner();

    this->timeInGoal += dt;

    Pat_FaceTarget(pat, (xVec3*)&globals.player.ent.model->Mat->pos, f2629, dt);

    F32 animTime = pat->model->Anim->Single->Time;

    if (this->stage == 2 && animTime < f2630)
    {
        this->stage = 1;
    }

    if (this->stage == 1 && animTime > 2630)
    {
        S32 i;

        this->stage = 3;

        for (i = 0; i < 3; i++)
        {
            if (pat->chuckFlags[i] & 1)
            {
                break;
            }
        }

        pat->chuckFlags[i] &= 0xfffffffe;
        xVec3Init(&offset, f832, f832, f832);
        GetBonePos(&spawnPos, (xMat4x3*)pat->model->Mat, sBone[9], &offset);
        pat->chuckList[i]->Respawn(&spawnPos, pat->chuckMovePoint[i], NULL);

        for (i = 0; i < 3; i++)
        {
            if (pat->chuckFlags[i] & 1)
            {
                break;
            }
        }

        if (i < 3)
        {
            this->stage = 2;
        }
    }

    return xGoal::Process(trantype, dt, updCtxt, xscn);
}

S32 zNPCGoalBossPatSpin::Enter(F32 dt, void* updCtxt)
{
    /*
        class zNPCBPatrick * pat; // r18
        class xVec3 offset; // r29+0xA0
        class xVec3 back; // r29+0x90
        class xVec3 center; // r29+0x80
        class xVec3 cone; // r29+0x70
        float param1; // r29+0xB0
        float param2; // r1
        float det; // r1
        signed int i; // r17
        float a; // r8
        float b; // r5
    */

    xVec3 offset;
    xVec3 back;
    xVec3 center;
    xVec3 cone;
    xVec3 unk;

    zNPCBPatrick* pat = (zNPCBPatrick*)this->GetOwner();

    this->stage = 0;

    xSndPlay3D(xStrHash("b201_rp_spin_start"), f1671, f832, 0, 0, pat, f1142, f1659, SND_CAT_GAME,
               f832);

    pat->bossFlags &= 0xfffffffd;

    xVec3SMul(&this->vel, (xVec3*)&pat->model->Mat->right, f1053);
    this->vel.y = f832;

    if (this->vel.x<f1670&& this->vel.x> f2696)
    {
        this->vel.x = f1670;
    }
    if (this->vel.z<f1670&& this->vel.z> f2696)
    {
        this->vel.z = f1670;
    }

    F32 dVar7 = xVec3Length(&this->vel);
    xVec3SMulBy(&this->vel, f1053 / dVar7);

    this->timeInGoal = f832;
    pat->bossFlags &= 0xffffffdf;

    xVec3Init(&offset, f832, f832, f832);
    GetBonePos(&center, (xMat4x3*)pat->model->Mat, sBone[0], &offset);
    GetBonePos(&cone, (xMat4x3*)pat->model->Mat, sBone[3], &offset);
    offset.z = f870;
    GetBonePos(&back, (xMat4x3*)pat->model->Mat, sBone[0], &offset);
    xVec3SubFrom(&back, &center);
    back.y = f832;
    xVec3Normalize(&back, &back);

    F32 dVar9 = back.x * back.x + back.z * back.z;
    F32 dVar8 = f891 * (cone.x * back.x + cone.z * back.z);
    F32 dVar5 = f832;
    F32 fVar1 = (dVar8 * dVar8 - ((f1670 * dVar9) * ((cone.x * cone.x + cone.z * cone.z) - f2697)));
    dVar7 = dVar5;

    if (dVar5 >= fVar1)
    {
        dVar7 = xsqrt(fVar1);
        dVar5 = (-dVar8 - dVar7) / (f891 * dVar9);
        dVar7 = (-dVar8 + dVar7) / (f891 * dVar9);
    }
    else
    {
        dVar7 = dVar5;
    }

    if (dVar7 > dVar5)
    {
        dVar7 = dVar5;
    }

    xVec3Copy(&this->pole[0], &cone);
    xVec3AddScaled(&this->pole[0], &back, dVar7);

    this->pole[0].y = f832;
    xVec3Init(&unk, this->pole[0].z, f832, -this->pole[0].x);

    U32 uVar3 = 1;
    for (S32 i = 0; i < 4; i++)
    {
        fVar1 = f1666 * uVar3++ * 1664;
        dVar5 = fVar1;
        dVar7 = icos(fVar1);
        xVec3SMul(&this->pole[i], &this->pole[i], dVar7);
        dVar7 = isin(dVar5);
        xVec3AddScaled(&this->pole[i], &unk, dVar7);
    }

    this->currPole = 0;
    pat->numMissesInARow++;

    return zNPCGoalCommon::Enter(dt, updCtxt);
}

S32 zNPCGoalBossPatSpin::Process(en_trantype* trantype, F32 dt, void* ctxt, xScene* scene)
{
    /*
        class zNPCBPatrick * pat; // r16
        class xVec3 awayFromPlayer; // r29+0x190
        class xVec3 offset; // r29+0x180
        class xVec3 center; // r29+0x170
        class xVec3 cone; // r29+0x160
        class xVec3 back; // r29+0x150
        float passedPole; // r23
        float ang; // r29+0x1A0
        class xMat3x3 rotMat; // r29+0x120
        class xCollis colls; // r29+0xD0
        signed int turning; // r18
        unsigned int picker; // r2
    */
    xVec3 awayFromPlayer; // r29+0x190
    xVec3 offset; // r29+0x180
    xVec3 center; // r29+0x170
    xVec3 cone; // r29+0x160
    xVec3 back; // r29+0x150
    F32 ang; // r29+0x1A0
    xMat3x3 rotMat; // r29+0x120
    xCollis colls; // r29+0xD0

    zNPCBPatrick* pat = (zNPCBPatrick*)this->GetOwner();

    this->timeInGoal += dt;

    switch (this->stage)
    {
    case 0:
    {
        if (pat->AnimTimeRemain(NULL) < f2280 * dt)
        {
            this->stage = 1;

            this->spinSndID = xSndPlay3D(xStrHash("b201_rp_spin_loop"), f2610, f832, 0, 0, pat,
                                         f1142, f1659, SND_CAT_GAME, f832);
            this->globSndID = xSndPlay3D(xStrHash("b201_rp_spin_spurt_loop"), f2610, f832, 0, 0,
                                         pat, f1142, f1659, SND_CAT_GAME, f832);
            pat->bossFlags |= 1;
            this->DoAutoAnim(NPC_GSPOT_START, 0);
            this->timeInGoal = f832;
            if (!(pat->nfFlags & 0x1000))
            {
                pat->newsfish->SpeakStart(sNFComment[NF_GREAT_BARRIER_REEF].soundID, 0, -1);
                pat->nfFlags |= 0x1000;
            }
            else if (!(xrand() & 0x300))
            {
                pat->newsfish->SpeakStart(sNFComment[NF_DOSIDO_AROUND_YOU_GO].soundID, 0, -1);
            }
        }
        break;
    }
    case 1:
    {
        if (pat->round != 3)
        {
            xVec3Sub(&awayFromPlayer, (xVec3*)&pat->model->Mat->pos,
                     (xVec3*)&globals.player.ent.model->Mat->pos);
            xVec3AddTo(&awayFromPlayer, (xVec3*)&pat->model->Mat->pos);

            Pat_FaceTarget(pat, &awayFromPlayer, f1673, dt);
        }

        xVec3Init(&offset, f832, f832, f832);
        GetBonePos(&center, (xMat4x3*)&pat->model->Mat, sBone[0], &offset);
        GetBonePos(&cone, (xMat4x3*)&pat->model->Mat, sBone[1], &offset);
        offset.z = f870;
        GetBonePos(&back, (xMat4x3*)&pat->model->Mat, sBone[2], &offset);
        xVec3SubFrom(&back, &center);
        back.y = f832;
        xVec3Normalize(&back, &back);

        /*
        F32 fVar1 = f1664 * this->timeInGoal;
        if (f1666 < fVar1)
        {
            fVar1 = ang - fVar1;
        }
        xMat3x3RotY(&rotMat, fVar1);
        */

        xVec3AddScaled((xVec3*)&pat->frame->mat.pos.y, &this->vel, dt);

        if (pat->arenaExtent.x < pat->frame->mat.pos.x && f832 < this->vel.x)
        {
            this->vel.x = (-this->vel.x + xurand()) - f1046;
            this->vel.z = (-this->vel.z + xurand()) - f1046;
        }

        if (pat->arenaExtent.z < pat->frame->mat.pos.z && f832 < this->vel.z)
        {
            this->vel.z = (-this->vel.z + xurand()) - f1046;
            this->vel.x = (-this->vel.x + xurand()) - f1046;
        }

        if (pat->frame->mat.pos.x < -pat->arenaExtent.x && this->vel.x < f832)
        {
            this->vel.x = (-this->vel.x + xurand()) - f1046;
            this->vel.z = (-this->vel.z + xurand()) - f1046;
        }

        if (pat->frame->mat.pos.z < -pat->arenaExtent.z && this->vel.z < f832)
        {
            this->vel.z = (-this->vel.z + xurand()) - f1046;
            this->vel.x = (-this->vel.x + xurand()) - f1046;
        }

        if (pat->AnimTimeRemain(NULL) < f2280 * dt)
        {
            if (!(pat->bossFlags & 2))
            {
                if ((pat->round != 1 && pat->round != 2) || this->timeInGoal < f1055)
                {
                    if (pat->round == 3 && f1055 < this->timeInGoal)
                    {
                        F32 dVar7 =
                            xVec3Dot((xVec3*)&pat->frame->mat.pos, (xVec3*)&pat->model->Mat->at);
                        F32 fVar1 = pat->arenaExtent.x;
                        F32 fVar2 = pat->frame->mat.pos.x;

                        if ((fVar2 <= f2424 * fVar1) && (f2424 * -fVar1 <= fVar2))
                        {
                            fVar1 = pat->arenaExtent.z;
                            fVar2 = pat->frame->mat.pos.z;

                            if ((fVar2 <= f2424 * fVar1) && (f2424 * -fVar1 <= fVar2))
                            {
                                break;
                            }
                        }

                        if (dVar7 < f832)
                        {
                            this->stage = 2;
                            xSndStop(this->spinSndID);
                            xSndStop(this->globSndID);
                            pat->bossFlags |= 0x40;
                            this->DoAutoAnim(NPC_GSPOT_START, 0);
                            this->timeInGoal = f832;
                        }
                    }
                }
                else
                {
                    this->stage = 2;
                    xSndStop(this->spinSndID);
                    xSndStop(this->globSndID);
                    pat->bossFlags |= 0x40;
                    this->DoAutoAnim(NPC_GSPOT_START, 0);
                    this->timeInGoal = f832;
                }
            }
            else
            {
                this->stage = 2;
                xSndStop(this->spinSndID);
                xSndStop(this->globSndID);
                pat->bossFlags |= 0x40;
                this->DoAutoAnim(NPC_GSPOT_START, 0);
                this->timeInGoal = f832;
            }
        }
        break;
    }
    case 2:
    {
        if (!(pat->bossFlags & 2) && pat->AnimTimeRemain(NULL) < f2280 * dt)
        {
            this->stage = 3;
            xSndPlay3D(xStrHash("b201_rp_spin_dizzy"), f2610, f832, 0, 0, pat, f1142, f1659,
                       SND_CAT_GAME, f832);
            this->DoAutoAnim(NPC_GSPOT_START, 0);
            this->timeInGoal = f832;
            pat->bossFlags &= 0xfffffff6;
            pat->bossFlags |= 4;
        }
        break;
    }
    case 3:
    {
        S32 turning = 0;
        if (pat->round == 3)
        {
            turning = Pat_FaceTarget(pat, &g_O3, f1673, dt);
        }

        if (pat->AnimTimeRemain(NULL) < f2280 * dt && !turning)
        {
            this->stage = 4;
            xSndPlay3D(xStrHash("b201_rp_spin_fall"), f2610, f832, 0, 0, pat, f1142, f1659,
                       SND_CAT_GAME, f1675);
            this->DoAutoAnim(NPC_GSPOT_START, 0);
            this->timeInGoal = f832;

            if (pat->nfFlags & 1)
            {
                U32 picker = xrand();

                if (pat->round == 1)
                {
                    if (pat->hitPoints == 9)
                    {
                        U32 uVar5 = pat->nfFlags;
                        if ((uVar5 & 8) == 0)
                        {
                            pat->newsfish->SpeakStart(sNFComment[NF_GREAT_BARRIER_REEF].soundID, 0,
                                                      -1);
                            pat->nfFlags = pat->nfFlags | 8;
                        }
                        else if ((uVar5 & 0x10) == 0)
                        {
                            pat->newsfish->SpeakStart(sNFComment[NF_GREAT_BARRIER_REEF].soundID, 0,
                                                      -1);
                            pat->nfFlags = pat->nfFlags | 0x10;
                        }
                        else if ((uVar5 & 0x20) == 0)
                        {
                            pat->newsfish->SpeakStart(sNFComment[NF_GREAT_BARRIER_REEF].soundID, 0,
                                                      -1);
                            pat->nfFlags = pat->nfFlags | 0x20;
                        }
                        else if ((picker & 0x100) == 0)
                        {
                            pat->newsfish->SpeakStart(sNFComment[NF_GREAT_BARRIER_REEF].soundID, 0,
                                                      -1);
                        }
                        else
                        {
                            pat->newsfish->SpeakStart(sNFComment[NF_GREAT_BARRIER_REEF].soundID, 0,
                                                      -1);
                        }
                    }
                    else if ((picker & 0x1f) < 0xb)
                    {
                        pat->newsfish->SpeakStart(sNFComment[NF_GREAT_BARRIER_REEF].soundID, 0, -1);
                    }
                    else if ((picker & 0x1f) < 0x15)
                    {
                        pat->newsfish->SpeakStart(sNFComment[NF_GREAT_BARRIER_REEF].soundID, 0, -1);
                    }
                    else
                    {
                        pat->newsfish->SpeakStart(sNFComment[NF_GREAT_BARRIER_REEF].soundID, 0, -1);
                    }
                }
                else if (pat->round == 2)
                {
                    if ((picker & 0x300) != 0)
                    {
                        if ((picker & 0x1f) < 0xb)
                        {
                            pat->newsfish->SpeakStart(sNFComment[NF_GREAT_BARRIER_REEF].soundID, 0,
                                                      -1);
                        }
                        else if ((picker & 0x1f) < 0x15)
                        {
                            pat->newsfish->SpeakStart(sNFComment[NF_GREAT_BARRIER_REEF].soundID, 0,
                                                      -1);
                        }
                        else
                        {
                            pat->newsfish->SpeakStart(sNFComment[NF_GREAT_BARRIER_REEF].soundID, 0,
                                                      -1);
                        }
                    }
                }
                else if (pat->hitPoints == 3)
                {
                    U32 uVar5 = pat->nfFlags;
                    if ((uVar5 & 0x80) == 0)
                    {
                        pat->newsfish->SpeakStart(sNFComment[NF_GREAT_BARRIER_REEF].soundID, 0, -1);
                        pat->nfFlags = pat->nfFlags | 0x80;
                    }
                    else if ((uVar5 & 0x100) == 0)
                    {
                        pat->newsfish->SpeakStart(sNFComment[NF_GREAT_BARRIER_REEF].soundID, 0, -1);
                        pat->nfFlags = pat->nfFlags | 0x100;
                    }
                    else if ((uVar5 & 0x200) == 0)
                    {
                        pat->newsfish->SpeakStart(sNFComment[NF_GREAT_BARRIER_REEF].soundID, 0, -1);
                        pat->nfFlags = pat->nfFlags | 0x200;
                    }
                    else if ((picker & 0x100) == 0)
                    {
                        pat->newsfish->SpeakStart(sNFComment[NF_GREAT_BARRIER_REEF].soundID, 0, -1);
                    }
                    else
                    {
                        pat->newsfish->SpeakStart(sNFComment[NF_GREAT_BARRIER_REEF].soundID, 0, -1);
                    }
                }
                else
                {
                    picker = picker & 0x3f;
                    if (picker < 0xb)
                    {
                        pat->newsfish->SpeakStart(sNFComment[NF_GREAT_BARRIER_REEF].soundID, 0, -1);
                    }
                    else if (picker < 0x16)
                    {
                        pat->newsfish->SpeakStart(sNFComment[NF_GREAT_BARRIER_REEF].soundID, 0, -1);
                    }
                    else if (picker < 0x20)
                    {
                        pat->newsfish->SpeakStart(sNFComment[NF_GREAT_BARRIER_REEF].soundID, 0, -1);
                    }
                    else if (picker < 0x2b)
                    {
                        pat->newsfish->SpeakStart(sNFComment[NF_GREAT_BARRIER_REEF].soundID, 0, -1);
                    }
                    else if (picker < 0x35)
                    {
                        pat->newsfish->SpeakStart(sNFComment[NF_GREAT_BARRIER_REEF].soundID, 0, -1);
                    }
                    else
                    {
                        pat->newsfish->SpeakStart(sNFComment[NF_GREAT_BARRIER_REEF].soundID, 0, -1);
                    }
                }
            }
            else
            {
                pat->newsfish->SpeakStart(sNFComment[NF_GREAT_BARRIER_REEF].soundID, 0, -1);
                pat->nfFlags |= 1;
            }
        }

        break;
    }
    case 4:
    {
        F32 dvar10 = pat->AnimTimeRemain(NULL);
        if (dvar10 < f2280 * dt)
        {
            this->stage = 5;
            this->DoAutoAnim(NPC_GSPOT_START, 0);
            this->timeInGoal = f832;
        }
        break;
    }
    case 5:
    {
        if ((pat->round == 1 && this->timeInGoal > f1049) ||
            (pat->round == 2 && this->timeInGoal > f1142) ||
            (pat->round == 3 && this->timeInGoal > f2597))
        {
            this->stage = 6;
            pat->bossFlags &= 0xffffffbf;
            this->DoAutoAnim(NPC_GSPOT_START, 0);
            this->timeInGoal = f832;
        }
        else if (pat->round == 3 && !(pat->nfFlags & 0x200) && this->timeInGoal > f2885)
        {
            pat->newsfish->SpeakStart(sNFComment[NF_PRIME_BOWLING_MOMENT].soundID, 0, -1);
            pat->nfFlags |= 0x200;
        }
        break;
    }
    }

    return xGoal::Process(trantype, dt, ctxt, scene);
}

S32 zNPCGoalBossPatSpin::Exit(F32 dt, void* updCtxt)
{
    zNPCBPatrick* pat = (zNPCBPatrick*)this->GetOwner();

    pat->bossFlags &= 0xffffffb3;

    return xGoal::Exit(dt, updCtxt);
}

S32 zNPCGoalBossPatFudge::Enter(F32 dt, void* updCtxt)
{
    zNPCBPatrick* pat = (zNPCBPatrick*)this->GetOwner();

    this->timeInGoal = f832;
    this->stage = 0;
    this->lerp = f831;
    this->vomitSndID = 0;

    pat->bossFlags |= 0x20;
    pat->numMissesInARow++;

    return zNPCGoalCommon::Enter(dt, updCtxt);
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
