#include <types.h>
#include "string.h"

#include "iModel.h"

#include "xCollide.h"
#include "xDebug.h"
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
#include "zParPTank.h"
#include "zEntPlayer.h"
#include <xMathInlines.h>

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

static unsigned char sUseBossCam = 1;
static unsigned char sOthersHaventBeenAdded;
static zNPCBPatrick* sPat_Ptr;
static xVec3* sCamSubTarget;
static F32 sCurrYaw;
static F32 sCurrHeight;
static F32 sCurrRadius;
static F32 sCurrPitch;
static F32 minYVel;
static F32 varYVel;
static F32 minHMul;
static F32 varHMul;
static F32 minT;
static F32 varT;
static S32 sBone[10] = { 4, 0x13, 0x17, 0x2a, 0x20, 0x22, 0x27, 0x28, 0x2d, 0x2e };
static S32 sBoundBone[4] = { 6, 7, 8, 9 };
static F32 sBoundRadius[4] = { 1.0f, 0.9f, 1.0f, 0.5f };
static xVec3 sBoneOffset[4] = {
    { -0.2f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.5f }, { 0.2f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }
};

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

U8 zEntPlayerDyingInGoo();

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

    xAnimTableNewState(table, g_strz_bossanim[ANIM_IDLE01], 0x10, 0, 1.0f, NULL, NULL, 0.0f, NULL,
                       NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_bossanim[ANIM_IDLE02], 0x10, 0, 1.0f, NULL, NULL, 0.0f, NULL,
                       NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_bossanim[ANIM_TAUNT01], 0x10, 0, 1.0f, NULL, NULL, 0.0f, NULL,
                       NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_bossanim[ANIM_RUN01], 0x10, 0x40, 1.0f, NULL, NULL, 0.0f, NULL,
                       NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_bossanim[ANIM_MELEE01], 0x10, 0, 1.0f, NULL, NULL, 0.0f, NULL,
                       NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_bossanim[ANIM_HIT01], 0x10, 0, 1.0f, NULL, NULL, 0.0f, NULL,
                       NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_bossanim[ANIM_HIT02], 0x10, 0, 1.0f, NULL, NULL, 0.0f, NULL,
                       NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_bossanim[ANIM_GETUP01], 0x10, 0, 1.0f, NULL, NULL, 0.0f, NULL,
                       NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_bossanim[ANIM_FREEZE01], 0x10, 0, 1.0f, NULL, NULL, 0.0f, NULL,
                       NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_bossanim[ANIM_FUDGEJUMP01], 0x10, 0, 1.0f, NULL, NULL, 0.0f,
                       NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_bossanim[ANIM_FUDGEBLOW01], 0x10, 0, 1.0f, NULL, NULL, 0.0f,
                       NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_bossanim[ANIM_FUDGEDONE01], 0x10, 0, 1.0f, NULL, NULL, 0.0f,
                       NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_bossanim[ANIM_LICK01], 0x10, 0, 1.0f, NULL, NULL, 0.0f, NULL,
                       NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_bossanim[ANIM_SPIT01], 0x10, 0, 1.0f, NULL, NULL, 0.0f, NULL,
                       NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_bossanim[ANIM_SPIT02], 0x10, 0, 1.0f, NULL, NULL, 0.0f, NULL,
                       NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_bossanim[ANIM_SPAWN01], 0x10, 0, 1.0f, NULL, NULL, 0.0f, NULL,
                       NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_bossanim[ANIM_SPINBEGIN01], 0x10, 0, 1.0f, NULL, NULL, 0.0f,
                       NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_bossanim[ANIM_SPINNING01], 0x10, 0, 1.0f, NULL, NULL, 0.0f,
                       NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_bossanim[ANIM_SPINSTOP01], 0x10, 0, 1.0f, NULL, NULL, 0.0f,
                       NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_bossanim[ANIM_DIZZY01], 0x10, 0, 1.0f, NULL, NULL, 0.0f, NULL,
                       NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_bossanim[ANIM_DIZZYFALL01], 0x10, 0, 1.0f, NULL, NULL, 0.0f,
                       NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_bossanim[ANIM_DIZZYSIT01], 0x10, 0, 1.0f, NULL, NULL, 0.0f,
                       NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);

    NPCC_BuildStandardAnimTran(table, g_strz_bossanim, ourAnims, 1, 0.2f);

    return table;
}

void on_change_newsfish(const tweak_info&);
void on_change_recenter(const tweak_info&);

static const tweak_callback newsfish_cb = { (void (*)(tweak_info&))on_change_newsfish };
static const tweak_callback recenter_cb = { (void (*)(tweak_info&))on_change_recenter };

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
                             (xVec3&)pat->model->Mat->pos, 2.0f);

    if (pat->bossFlags & 0x200)
    {
        pat->bossCam.cfg.margin_angle = -1.0f;
        pat->bossFlags &= 0xfffffdff;
    }

    if (pat->bossFlags & 0x80)
    {
        pat->bossCam.cfg.margin_angle = -1.0f;
    }
    else
    {
        pat->bossCam.cfg.margin_angle += dt;

        if (pat->bossCam.cfg.margin_angle > -0.4f)
        {
            pat->bossCam.cfg.margin_angle = -0.4f;
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
    this->origSwingerHeight = 0.0f;

    for (S32 i = 0; i < 8; i++)
    {
        objName[11]++;
        this->swinger[i] = (xEnt*)zSceneFindObject(xStrHash(objName));
        this->origSwingerHeight =
            this->swinger[i]->model->Mat->pos.y * 0.125f + this->origSwingerHeight;
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
    this->backBox.minY = 0.5f;

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
    this->frozenSBIce->Alpha = 0.7f;

    this->round1Csn = (zCutsceneMgr*)zSceneFindObject(xStrHash("CSNMGR_ROUND1"));
    this->round2Csn = (zCutsceneMgr*)zSceneFindObject(xStrHash("CSNMGR_ROUND2"));
    this->round3Csn = (zCutsceneMgr*)zSceneFindObject(xStrHash("CSNMGR_ROUND3"));

    this->safeGroundPortal = (_zPortal*)zSceneFindObject(xStrHash("SAFEGROUND_PORTAL"));
    xVec3Copy(&this->arenaExtent, (xVec3*)xSTFindAsset(xStrHash("MK ARENA EXTENT"), NULL));
    xVec3Copy(&this->fudgePos, (xVec3*)xSTFindAsset(xStrHash("FUDGE_POS"), NULL));
    xVec3Init(&this->fudgeFace, 0.0f, 0.0f, 1.0f);
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

    this->bossCam.cfg.zone_rest.distance = 8.0f;
    this->bossCam.cfg.zone_rest.height = 5.0f;
    this->bossCam.cfg.zone_rest.height_focus = 2.5f;
    this->bossCam.cfg.zone_above.distance = 3.0f;
    this->bossCam.cfg.zone_above.height = 4.2f;
    this->bossCam.cfg.zone_above.height_focus = -1.0f;
    this->bossCam.cfg.zone_below.distance = 12.0f;
    this->bossCam.cfg.zone_below.height = 3.0f;
    this->bossCam.cfg.zone_below.height_focus = 6.0f;
    this->bossCam.cfg.move_speed = 10.0f;
    this->bossCam.cfg.turn_speed = 10.0f;
    this->bossCam.cfg.stick_speed = 10.0f;
    this->bossCam.cfg.stick_yaw_vel = 10.0f;
    this->bossCam.cfg.max_yaw_vel = 50.0f;
    this->bossCam.cfg.margin_angle = -1.0f;

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
    sCurrHeight = 5.5f;
    sCurrRadius = 6.5f;
    sCurrPitch = 0.365f;
    sCurrYaw = 3.1415927f;
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
    this->splatTimer = 0.0f;

    for (i = 0; i < 6; i++)
    {
        bossPatBox* box = &this->box[0][i];

        box->velocity = 0.0f;
        box->flags = 0;
        box->pos = 20.0f + this->box[0][i].minY;
    }

    this->backBox.velocity = 0.0f;
    this->backBox.flags = 0;
    this->backBox.pos = 20.0f + (this->backBox.minY);

    this->chuckFlags[0] = 1;
    this->chuckFlags[1] = 1;
    this->chuckFlags[2] = 1;

    this->frozenTimer = -1.0f;

    zEntPlayerControlOn(CONTROL_OWNER_FROZEN);

    this->csnTimer = 0.0f;
    this->nfFlags = 0;

    this->badHitTimer = 0.0f;
    this->numPCHitsInARow = 0;
    this->numMissesInARow = 0;

    zNPCCommon::Reset();

    if (this->psy_instinct)
    {
        this->psy_instinct->GoalSet(NPC_GOAL_BOSSPATIDLE, 0);
    }

    minHMul = 15.0f;
    minT = 5.0f;
    minYVel = 5.0f;
    varHMul = 0.0f;
    varT = 5.0f;
    varYVel = 0.0f;

    xDebugAddTweak("NPC|zNPCBPatrick|globs|minYVel", &minYVel, -1000000000.0f, 1000000000.0f,
                   (tweak_callback*)0x0, NULL, 0);
    xDebugAddTweak("NPC|zNPCBPatrick|globs|varYVel", &varYVel, -1000000000.0f, 1000000000.0f,
                   (tweak_callback*)0x0, NULL, 0);
    xDebugAddTweak("NPC|zNPCBPatrick|globs|minHMul", (float*)&minHMul, -1000000000.0f,
                   1000000000.0f, (tweak_callback*)0x0, NULL, 0);
    xDebugAddTweak("NPC|zNPCBPatrick|globs|varHMul", &varHMul, -1000000000.0f, 1000000000.0f,
                   (tweak_callback*)0x0, NULL, 0);
    xDebugAddTweak("NPC|zNPCBPatrick|globs|minT", (float*)&minT, -1000000000.0f, 1000000000.0f,
                   (tweak_callback*)0x0, NULL, 0);
    xDebugAddTweak("NPC|zNPCBPatrick|globs|varT", (float*)&varT, -1000000000.0f, 1000000000.0f,
                   (tweak_callback*)0x0, NULL, 0);
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
    xVec3 parDir;
    xVec3 toPar;
    xVec3 breathPos;
    xVec3 toBreath;
    xVec3 snowDir;
    xVec3 snowPos;
    xVec3 splatMove;
    xVec3 knockback;
    xVec3 bubbleVel;
    xCollis colls;

    S32 i;
    S32 j;
    S32 csn = 0;

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

    if (globals.cmgr && globals.cmgr->csn->Ready)
    {
        csn = 1;
    }

    if (csn)
    {
        if (this->bossFlags & 0x100)
        {
            this->csnTimer += dt;

            if (this->csnTimer >= 0.0001f)
            {
                this->hiddenByCutscene();
                this->bossFlags &= 0xfffffeff;
            }
        }

        this->bossFlags |= 0x80;
    }
    else
    {
        this->csnTimer = 0.0f;

        if (this->bossFlags & 0x80)
        {
            if (this->round == 1)
            {
                this->newsfish->SpeakStart(sNFComment[NF_SB_IN_FOR_ROUGH_RIDE].soundID, 0, -1);
            }
            else if (this->round == 2)
            {
                this->newsfish->SpeakStart(sNFComment[NF_SANDY_GET_SB_UNFROZEN].soundID, 0, -1);
            }
            else if (this->round == 3)
            {
                this->newsfish->SpeakStart(sNFComment[NF_SB_BACK_IN_FIGHT].soundID, 0, -1);
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

    F32 fudgeRate = 400.0f * -this->fudgeHandle->model->Mat[2].at.y;

    if (fudgeRate < 0.0f)
    {
        fudgeRate = 0.0f;
    }

    this->fudgeEmitter->prop->rate.val[0] = fudgeRate;

    if (globals.player.lassoInfo.swingTarget)
    {
        if (this->notSwingingLastFrame)
        {
            this->swingTimer = 0.0f;

            for (i = 0; i < 8; i++)
            {
                if (globals.player.lassoInfo.swingTarget == this->swinger[i])
                {
                    this->currSwinger = i;
                    break;
                }
            }
        }

        S32 shouldPlayIt = 0;

        if (this->swingTimer <= 0.5f)
        {
            shouldPlayIt = 1;
        }

        this->swingTimer += dt;
        this->notSwingingLastFrame = 0;

        if (this->swingTimer > 0.5f)
        {
            F32 finalHeight = this->origSwingerHeight - 0.5f;
            F32* swingY = &this->swinger[this->currSwinger]->model->Mat->pos.y;

            if (*swingY > finalHeight)
            {
                *swingY -= 3.0f * dt;

                if (*swingY < finalHeight)
                {
                    *swingY = finalHeight;
                }
            }

            if (shouldPlayIt)
            {
                xSndPlay3D(xStrHash("b201_lasso_activation"), 0.5775f, 0.0f, 0, 0,
                           (xVec3*)&this->swinger[this->currSwinger]->model->Mat->pos, 2.0f, 40.0f,
                           SND_CAT_GAME, 0.0f);

                for (i = 0; i < 8; i++)
                {
                    if (globals.player.lassoInfo.swingTarget == this->swinger[i])
                    {
                        for (j = 0; j < 3; j++)
                        {
                            this->box[i][j].flags |= 1;
                        }

                        break;
                    }
                }

                if (this->bossFlags & 0x40)
                {
                    this->backBox.flags |= 1;

                    xVec3Copy((xVec3*)&this->backBox.box->model->Mat->pos,
                              (xVec3*)&this->model->Mat->pos);
                    xVec3AddScaled((xVec3*)&this->backBox.box->model->Mat->pos,
                                   (xVec3*)&this->model->Mat->at, -2.01f);
                }
            }
        }
    }
    else
    {
        this->notSwingingLastFrame = 1;
        this->currSwinger = -1;
    }

    for (i = 0; i < 8; i++)
    {
        if (i != this->currSwinger)
        {
            RwMatrix* mat = this->swinger[i]->model->Mat;

            if (mat->pos.y < this->origSwingerHeight)
            {
                mat->pos.y += 3.0f * dt;

                if (mat->pos.y > this->origSwingerHeight)
                {
                    mat->pos.y = this->origSwingerHeight;
                }
            }
        }
    }

    if (this->gooHeight > this->gooLevel - 0.5f)
    {
        this->gooHeight -= 0.5f * dt;

        if (this->gooHeight < this->gooLevel - 0.5f)
        {
            this->gooHeight = this->gooLevel - 0.5f;
        }
    }

    if (this->gooHeight < this->gooLevel - 0.5f)
    {
        this->gooHeight += 0.5f * dt;

        if (this->gooHeight > this->gooLevel - 0.5f)
        {
            this->gooHeight = this->gooLevel - 0.5f;
        }
    }

    if (this->gooHeight > 0.0f)
    {
        this->steamEmitter->emit_flags &= 0xfe;
    }
    else
    {
        this->steamEmitter->emit_flags |= 1;
    }

    this->gooObj->model->Mat->pos.y = this->gooHeight;
    this->gooObj->bound.box.center.y = this->gooHeight;

    xQuickCullForBound(&this->gooObj->bound.qcd, &this->gooObj->bound);
    zGridUpdateEnt(this->gooObj);

    if (this->bossFlags & 0x10)
    {
        this->frozenTimer -= dt;

        if (globals.pad0->pressed & XPAD_BUTTON_X)
        {
            this->frozenTimer -= 0.175f;
            this->shakeAmp = 0.025f;
        }

        if (this->frozenTimer <= 0.0f || globals.player.DamageTimer > 0.0f)
        {
            zEntPlayerControlOn(CONTROL_OWNER_FROZEN);

            this->bossFlags &= 0xffffffef;

            xEntShow(&globals.player.ent);
            xSndPlay(xStrHash("b201_ice_shatter"), 0.5775f, 0.0f, 0, 0, 0, SND_CAT_GAME, 0.0f);

            xModelInstance* tempModel = xModelInstanceAlloc(this->shardModel, NULL, 0, 0, NULL);

            if (tempModel && this->iceBreak && this->iceBreak->initCB)
            {
                for (i = 0; i < 10; i++)
                {
                    if (this->shard[i].size > 0.0f)
                    {
                        xMat3x3Rot((xMat3x3*)tempModel->Mat, &this->shard[i].rotVec,
                                   this->shard[i].ang);
                        xVec3Copy((xVec3*)&tempModel->Mat->pos,
                                  (xVec3*)&globals.player.ent.model->Mat->pos);
                        xMat3x3SMul((xMat3x3*)tempModel->Mat, (xMat3x3*)tempModel->Mat,
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

            for (i = 0; i < 10; i++)
            {
                this->shard[i].size += dt * (this->shard[i].maxSize - this->shard[i].size);
            }

            this->iceScale += (1.25f - this->iceScale) * dt;

            this->shakeAmp -= 0.25f * dt;

            if (this->shakeAmp < 0.0f)
            {
                this->shakeAmp = 0.0f;
            }

            this->shakePhase += 80.0f * dt;

            if (this->shakePhase > 6.2831855f)
            {
                this->shakePhase -= 6.2831855f;
            }
        }
    }

    this->particleTimer += dt;

    if (this->particleTimer < 3.15f)
    {
        this->flg_xtrarend |= 1;

        if (globals.player.DamageTimer <= 0.0f)
        {
            F32 emitAccum = xurand();

            xVec3Init(&snowDir, 0.0f, -1.0f, 0.0f);

            for (i = 0; i < this->numParticles - 1; i++)
            {
                xVec3Sub(&parDir, &this->parList[i + 1]->m_pos, &this->parList[i]->m_pos);

                F32 maxDist = xVec3Length(&parDir);

                if (maxDist < 0.00001f)
                {
                    continue;
                }

                xVec3SMulBy(&parDir, 1.0f / maxDist);
                xVec3Sub(&toPar, &globals.player.ent.bound.sph.center, &this->parList[i]->m_pos);

                F32 currSize = xVec3Dot(&parDir, &toPar);

                if (currSize < 0.0f)
                {
                    xVec3Copy(&breathPos, &this->parList[i]->m_pos);
                    currSize = 0.25f * this->parList[i]->m_size;
                }
                else if (currSize > maxDist)
                {
                    xVec3Copy(&breathPos, &this->parList[i + 1]->m_pos);
                    currSize = 0.25f * this->parList[i + 1]->m_size;
                }
                else
                {
                    xVec3Copy(&breathPos, &this->parList[i]->m_pos);
                    xVec3AddScaled(&breathPos, &parDir, currSize);

                    currSize = 0.25f * ((currSize / maxDist) * (this->parList[i + 1]->m_size -
                                                            this->parList[i]->m_size) +
                                        this->parList[i]->m_size);
                }

                S32 numSamples = maxDist / 0.1f;

                for (j = 0; j < numSamples; j++)
                {
                    F32 numSnowflakes;
                    F32 interp = ((j + xurand()) - 0.5f) / numSamples;

                    numSnowflakes = this->parList[i]->m_size * (1.0f - interp);
                    numSnowflakes += this->parList[i + 1]->m_size * interp;

                    emitAccum += dt * (numSnowflakes * (0.5f + xurand()));

                    S32 numToEmit = emitAccum;

                    emitAccum -= numToEmit;

                    if (numToEmit > 0)
                    {
                        xVec3SMul(&snowPos, &this->parList[i]->m_pos, 1.0f - interp);
                        xVec3AddScaled(&snowPos, &this->parList[i + 1]->m_pos, interp);

                        snowDir.x = 0.2f * xurand();
                        snowDir.z = 0.2f * xurand();

                        zParPTankSpawnSnow(&snowPos, &snowDir, numToEmit);
                    }
                }

                xVec3Sub(&toBreath, &globals.player.ent.bound.sph.center, &breathPos);

                if (xVec3Length2(&toBreath) <
                    currSize * currSize + globals.player.ent.bound.sph.r)
                {
                    this->frozenTimer = 4.0f;

                    if (this->bossFlags & 0x10)
                    {
                        continue;
                    }

                    zEntPlayerControlOff(CONTROL_OWNER_FROZEN);

                    globals.player.ControlOffTimer = 0.0f;
                    this->bossFlags |= 0x10;

                    xSndPlay(xStrHash("b201_rp_freeze"), 0.77f, 0.0f, 0, 0, 0, SND_CAT_GAME, 0.0f);
                    xEntHide(&globals.player.ent);

                    for (j = 0; j < 10; j++)
                    {
                        this->shard[j].size = 0.25f - xurand();
                        this->shard[j].maxSize = 0.3f * xurand() + 0.7f;

                        F32 theta = 6.2831855f * xurand();

                        this->shard[j].rotVec.x = isin(theta);
                        this->shard[j].rotVec.y = 0.0f;
                        this->shard[j].rotVec.z = icos(theta);
                        this->shard[j].ang = 1.5707964f * (0.65f * xurand() + 0.15f);

                        if (j & 1)
                        {
                            if (this->shard[j].rotVec.x < 0.0f)
                            {
                                this->shard[j].rotVec.x = -this->shard[j].rotVec.x;
                            }
                        }
                        else
                        {
                            if (this->shard[j].rotVec.x > 0.0f)
                            {
                                this->shard[j].rotVec.x = -this->shard[j].rotVec.x;
                            }
                        }

                        if (j & 2)
                        {
                            if (this->shard[j].rotVec.z < 0.0f)
                            {
                                this->shard[j].rotVec.z = -this->shard[j].rotVec.z;
                            }
                        }
                        else
                        {
                            if (this->shard[j].rotVec.z > 0.0f)
                            {
                                this->shard[j].rotVec.z = -this->shard[j].rotVec.z;
                            }
                        }
                    }

                    this->iceScale = 1.0f;
                    this->shakeAmp = 0.0f;
                    this->shakePhase = 0.0f;

                    if (this->nfFlags & 2)
                    {
                        if (xrand() & 0x80)
                        {
                            this->newsfish->SpeakStart(
                                sNFComment[NF_SB_HAS_BEEN_ICE_CREAMED].soundID, 0, -1);
                        }
                        else
                        {
                            this->newsfish->SpeakStart(
                                sNFComment[NF_SB_STAY_FAR_AWAY_FROM_CLUTCHES].soundID, 0, -1);
                        }
                    }
                    else
                    {
                        this->newsfish->SpeakStart(
                            sNFComment[NF_SB_FRIGID_RECEPTION].soundID, 0, -1);
                        this->nfFlags |= 2;
                    }
                }
            }
        }
    }

    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 3; j++)
        {
            this->bossPatBoxCheckCollide(&this->box[i][j]);
        }
    }

    this->bossPatBoxCheckCollide(&this->backBox);

    this->boxLandSndTimer += dt;
    this->boxSplashSndTimer += dt;
    this->splatTimer += dt;

    for (i = 0; i < 50; i++)
    {
        if (!(this->glob[i].flags & 1))
        {
            continue;
        }

        this->flg_xtrarend |= 1;

        if (this->glob[i].flags & 4)
        {
            this->glob[i].t += dt;

            if (this->glob[i].t > 1.0f)
            {
                this->glob[i].flags = 0;
            }
            else if (this->glob[i].flags & 8)
            {
                xVec3AddScaled(&this->glob[i].path.initPos, &this->glob[i].convVel, dt);
            }
        }
        else
        {
            this->glob[i].t += dt;

            if (this->glob[i].t > 2.0f)
            {
                this->glob[i].flags = 0;
            }
            else if (this->glob[i].t > this->glob[i].path.maxTime)
            {
                if (this->glob[i].flags & 2)
                {
                    if (this->glob[i].norm.y > 0.75f)
                    {
                        this->glob[i].flags |= 4;

                        F32 moveSplat = 2.0f * this->splatModel->boundingSphere.radius;

                        xParabolaRecenter(&this->glob[i].path, this->glob[i].path.maxTime);

                        this->glob[i].t = 0.0f;

                        splatMove.x = this->glob[i].path.initVel.x;
                        splatMove.y = 0.0f;
                        splatMove.z = this->glob[i].path.initVel.z;

                        F32 len = xVec3Length(&splatMove);

                        if (len > 0.00001f)
                        {
                            xVec3SMulBy(&splatMove, moveSplat / len);
                        }

                        if (this->glob[i].path.initPos.x > this->arenaExtent.x ||
                            this->glob[i].path.initPos.z > this->arenaExtent.z ||
                            this->glob[i].path.initPos.x < -this->arenaExtent.x ||
                            this->glob[i].path.initPos.z < -this->arenaExtent.z)
                        {
                            xVec3AddTo(&this->glob[i].path.initPos, &splatMove);
                        }

                        this->playSplat(&this->glob[i].path.initPos);

                        if (this->glob[i].flags & 8)
                        {
                            F32 timeTillEnd =
                                2.0f - this->ConveyorTimeLeft(this->glob[i].conv,
                                                              &this->glob[i].path.initPos);

                            if (this->glob[i].t < timeTillEnd)
                            {
                                this->glob[i].t = timeTillEnd;
                            }
                        }
                    }
                    else
                    {
                        this->glob[i].flags = 0;
                        this->playSplat(&this->glob[i].lastPos);
                    }
                }
                else
                {
                    this->glob[i].path.minTime = this->glob[i].path.maxTime - 0.01f;
                    this->glob[i].path.maxTime += 0.33f * xurand() + 1.0f;

                    xParabolaHitsEnv(&this->glob[i].path, globals.sceneCur->env, &colls);

                    if (colls.flags & 1)
                    {
                        this->glob[i].path.maxTime = colls.dist;
                        xVec3Copy(&this->glob[i].norm, &colls.norm);
                        this->glob[i].flags |= 2;
                    }

                    colls.flags &= 0xfffffffe;

                    this->ParabolaHitsConveyors(&this->glob->path, &colls);

                    // BFBB bug? Everything before ParabolaHitsConveyors uses this->glob[i],
                    // but everything after is written as this->glob->
                    if (colls.flags & 1)
                    {
                        this->glob->path.maxTime = colls.dist;
                        this->glob->flags |= 2;

                        if (colls.tohit.x < 18.5f && colls.tohit.x > -18.5f &&
                            colls.tohit.z > -20.0f)
                        {
                            this->glob->flags |= 8;

                            xVec3Init(&this->glob->norm, 0.0f, 1.0f, 0.0f);

                            this->glob->conv = (zPlatform*)colls.optr;

                            xVec3SMul(&this->glob->convVel,
                                      (xVec3*)&this->glob->conv->bound.mat->right,
                                      this->glob->conv->passet->cb.speed);
                        }
                        else
                        {
                            xVec3Init(&this->glob->norm, 0.0f, -1.0f, 0.0f);
                        }
                    }
                }
            }
        }
    }

    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 3; j++)
        {
            this->bossPatBoxUpdate(&this->box[i][j], dt);
        }
    }

    this->bossPatBoxUpdate(&this->backBox, dt);

    U32 doDamage = 0;

    xVec3Init(&knockback, 0.0f, 7.0f, 0.0f);

    S32 touchDamage = 0;

    if (this->bossFlags & 1)
    {
        xCollis* coll = globals.player.ent.collis->colls;
        xCollis* cend = coll + globals.player.ent.collis->idx;

        for (; coll < cend; coll++)
        {
            if (!(coll->flags & 1))
            {
                continue;
            }

            xEnt* hit = (xEnt*)coll->optr;

            if ((hit && hit->baseType == eBaseTypeDynamic && hit->driver == (xEnt*)this) ||
                hit == (xEnt*)this)
            {
                this->bossFlags |= 2;
                doDamage = 1;
                touchDamage = 1;
                this->bossFlags &= 0xfffffffe;
                goto damage; // TODO: Fix goto
            }
        }
    }

    if (globals.player.JumpState == 0)
    {
        for (i = 0; i < 50; i++)
        {
            if (!(this->glob[i].flags & 1) || !(this->glob[i].flags & 4))
            {
                continue;
            }

            if (xVec3Dist2(&this->glob[i].lastPos, &globals.player.ent.bound.sph.center) < 1.0f)
            {
                this->bossFlags |= 2;
                this->glob[i].flags = 0;
                doDamage = 1;

                this->playSplat(&this->glob[i].lastPos);

                this->bossFlags &= 0xfffffffe;
                goto damage; // TODO: fix goto
            }
        }
    }

    xVec3Init(&bubbleVel, 0.0f, 1.0f, 0.0f);

    for (i = 0; i < 50; i++)
    {
        if (!(this->glob[i].flags & 1) || (this->glob[i].flags & 4))
        {
            continue;
        }

        if (xrand() & 0x200)
        {
            zParPTankSpawnBubbles(&this->glob[i].lastPos, &bubbleVel, 1, 1.0f);
        }

        if (xVec3Dist2(&this->glob[i].lastPos, &globals.player.ent.bound.sph.center) < 1.0f)
        {
            this->bossFlags |= 2;
            this->glob[i].flags = 0;
            doDamage = 1;

            this->playSplat(&this->glob[i].lastPos);

            this->bossFlags &= 0xfffffffe;
            break;
        }
    }

damage: // TODO: fix goto
    if (doDamage && zEntPlayer_Damage(NULL, 1, &knockback))
    {
        U32 picker = xrand();

        if (globals.player.Health == 1 && this->round == 2)
        {
            this->newsfish->SpeakStart(sNFComment[NF_SANDY_BECOME_BANANA_SPLIT].soundID, 0, -1);
        }
        else if (touchDamage && !(picker & 0x3000))
        {
            this->newsfish->SpeakStart(sNFComment[NF_CLOSE_ENCOUNTERS_PAINFUL_KIND].soundID, 0,
                                       -1);
        }
        else if ((picker & 0x1f) <= 0xa)
        {
            this->newsfish->SpeakStart(sNFComment[NF_THAT_WAS_A_DOOZY].soundID, 0, -1);
        }
        else if ((picker & 0x1f) <= 0x14)
        {
            this->newsfish->SpeakStart(sNFComment[NF_THATS_GOTTA_STING].soundID, 0, -1);
        }
    }

    S32 num = this->round;

    if (!globals.player.ControlOff)
    {
        if (this->round == 1)
        {
            if (this->hitPoints <= 6)
            {
                num = 2;
            }
        }
        else if (this->round == 2)
        {
            if (this->gooLevel >= 3)
            {
                num = 3;
            }
        }
        else if (this->round == 3)
        {
            if (this->hitPoints <= 0)
            {
                num = 4;
            }
        }
    }

    if (num != this->round && (this->bossFlags & 0x20) && !globals.player.ControlOff &&
        globals.player.Health && !zEntPlayerDyingInGoo())
    {
        this->bossFlags |= 0x100;

        this->gotoRound(num);

        switch (num)
        {
        case 1:
        {
            zEntEvent(this->round1Csn, eEventPreload);
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

    this->badHitTimer -= dt;

    if (globals.player.DamageTimer != 0.0f)
    {
        if (!(this->nfFlags & 0x400))
        {
            this->numPCHitsInARow++;
            this->numMissesInARow = 0;
        }

        this->nfFlags |= 0x400;
    }
    else
    {
        this->nfFlags &= 0xfffffbff;
    }

    zNPCCommon::Process(xscn, dt);
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

            toHit.y = 0.0f;

            xVec3Normalize(&toHit, &toHit);

            if (xVec3Dot(&toHit, (xVec3*)&this->model->Mat->at) > 0.0f)
            {
                this->bossFlags |= 8;
                this->badHitTimer = 6.0f;
            }
        }
        else if (this->badHitTimer < 0.0f)
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
            this->badHitTimer = 6.0f;
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
    iModelMaterialMul(this->spitModel, 0.0f, 1.0f, 0.0f);

    iModelSetMaterialAlpha(this->splatModel, 215);
    iModelMaterialMul(this->splatModel, 0.0f, 1.0f, 0.0f);

    for (i = 0; i < 50; i++)
    {
        bossPatGlob* glob = &this->glob[i];
        if (glob->flags & 1)
        {
            if (glob->flags & 4)
            {
                xVec3Copy(&globMat.pos, &glob->path.initPos);
                xVec3Copy(&glob->lastPos, &globMat.pos);
                xVec3Init(&globMat.up, 0.0f, 1.0f, 0.0f);
                globMat.at.x = -glob->path.initVel.x;
                globMat.at.y = 0.0f;
                globMat.at.z = -glob->path.initVel.z;

                F32 dVar4 = xVec3Length(&globMat.at);

                if (dVar4 > 0.00001f)
                {
                    xVec3SMulBy(&globMat.at, 1.0f / dVar4);
                }

                xVec3Cross(&globMat.right, &globMat.up, &globMat.at);
                xMat3x3SMul(&globMat, &globMat, 2.0f);

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

                    if (dVar4 > 0.00001f)
                    {
                        xVec3Init(&globMat.at, 0.0f, -1.0f, 0.0f);
                        xVec3Init(&globMat.right, 1.0f, 0.0f, 0.0f);
                    }
                    else
                    {
                        xVec3SMulBy(&globMat.at, 1.0f / dVar4);
                        globMat.right.x = globMat.at.z;
                        globMat.right.z = -globMat.at.x;
                        globMat.right.y = 0.0f;
                        xVec3Normalize(&globMat.right, &globMat.right);
                    }

                    xVec3Cross(&globMat.up, &globMat.at, &globMat.right);
                    xMat3x3SMul(&globMat, &globMat, 2.0f);

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
        if (this->shard[i].size > 0.0f)
        {
            xMat3x3Rot(&globMat, &this->shard[i].rotVec, this->shard[i].ang);
            xVec3Copy(&globMat.pos, &player_pos);
            xMat3x3SMul(&globMat, &globMat, this->shard[i].size);
            if (!iModelCull(this->shardModel, (RwMatrixTag*)&globMat))
            {
                F32 ivar1 = 100.0f * ((1.0f - this->shard[i].maxSize) + this->shard[i].size);
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
        if (sBoundRadius[i] > 0.0f)
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
    if (this->splatTimer > 0.25f)
    {
        this->splatTimer = 0.0f;

        F32 picker = xurand() * 5.95f;

        if (picker < 1.0f)
        {
            xSndPlay3D(xStrHash("b201_rp_spin_spurt1"), 0.539f, 0.0f, 0, 0, pos, 2.0f, 40.0f,
                       SND_CAT_GAME, 0.0f);
        }
        else if (picker < 2.0f)
        {
            xSndPlay3D(xStrHash("b201_rp_spin_spurt2"), 0.539f, 0.0f, 0, 0, pos, 2.0f, 40.0f,
                       SND_CAT_GAME, 0.0f);
        }
        else if (picker < 3.0f)
        {
            xSndPlay3D(xStrHash("b201_rp_spin_spurt3"), 0.539f, 0.0f, 0, 0, pos, 2.0f, 40.0f,
                       SND_CAT_GAME, 0.0f);
        }
        else if (picker < 4.0f)
        {
            xSndPlay3D(xStrHash("b201_rp_spin_spurt4"), 0.539f, 0.0f, 0, 0, pos, 2.0f, 40.0f,
                       SND_CAT_GAME, 0.0f);
        }
        else if (picker < 5.0f)
        {
            xSndPlay3D(xStrHash("b201_rp_spin_spurt5"), 0.539f, 0.0f, 0, 0, pos, 2.0f, 40.0f,
                       SND_CAT_GAME, 0.0f);
        }
        else
        {
            xSndPlay3D(xStrHash("b201_rp_spin_spurt6"), 0.539f, 0.0f, 0, 0, pos, 2.0f, 40.0f,
                       SND_CAT_GAME, 0.0f);
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
        this->gooHeight = this->gooLevel - 0.5f;
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
        this->gooHeight = this->gooLevel - 0.5f;
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

F32 zNPCBPatrick::ConveyorTimeLeft(zPlatform* platform, xVec3* vec_unk)
{
    xVec3 disp;
    F32 edge;

    if (platform->passet->cb.speed < 0.0f)
    {
        edge = platform->bound.box.box.lower.x;
    }
    else
    {
        edge = platform->bound.box.box.upper.x;
    }

    xVec3Sub(&disp, vec_unk, &platform->bound.mat->pos);

    F32 dispX = xVec3Dot(&disp, (xVec3*)&platform->bound.mat->right);

    dispX /= xVec3Length2((xVec3*)&platform->bound.mat->right);

    return (edge - dispX) / platform->passet->cb.speed;
}

void zNPCBPatrick::ParabolaHitsConveyors(xParabola* path, xCollis* colls)
{
    xVec3 pos;
    xVec3 disp;
    F32 t[2];

    for (S32 i = 0; i < 7; i++)
    {
        S32 j;

        xMat4x3* mat = this->conveyorBelt[i]->bound.mat;
        xVec3* lower = &this->conveyorBelt[i]->bound.box.box.lower;
        xVec3* upper = &this->conveyorBelt[i]->bound.box.box.upper;

        F32 a = 0.5f * -path->gravity;
        F32 b = path->initVel.y;
        F32 det = b * b - 4.0f * a * (path->initPos.y - (mat->up.y * upper->y + mat->pos.y));

        if (det < 0.0f)
        {
            continue;
        }

        det = xsqrt(det);

        t[0] = (-b + det) / (2.0f * a);
        t[1] = (-b - det) / (2.0f * a);

        for (j = 0; j < 2; j++)
        {
            if (t[j] >= path->minTime && t[j] < path->maxTime && t[j] < colls->dist)
            {
                xParabolaEvalPos(path, &pos, t[j]);
                xVec3Sub(&disp, &pos, &mat->pos);

                F32 dispX = xVec3Length2((xVec3*)&mat->right);
                F32 dispZ = xVec3Length2((xVec3*)&mat->at);

                dispX = xVec3Dot(&disp, (xVec3*)&mat->right) / dispX;
                dispZ = xVec3Dot(&disp, (xVec3*)&mat->at) / dispZ;

                if (dispX > lower->x && dispX < upper->x && dispZ > lower->z && dispZ < upper->z)
                {
                    colls->flags |= 1;
                    xVec3Copy(&colls->tohit, &pos);
                    colls->dist = t[j];
                    colls->optr = this->conveyorBelt[i];
                }
            }
        }
    }
}

// not in PS2 dwarf
void zNPCBPatrick::bossPatBoxCheckCollide(bossPatBox* box)
{
    if (box->flags & 1 && box->pos < 8.5f)
    {
        F32 z = this->model->Mat->pos.z - box->box->model->Mat->pos.z;
        F32 x = this->model->Mat->pos.x - box->box->model->Mat->pos.x;

        if (x * x + z * z < 4.0f)
        {
            zShrapnelAsset* shrap = this->boxBreak;

            if (shrap && shrap->initCB)
            {
                shrap->initCB(shrap, box->box->model, NULL, NULL);
            }

            box->velocity = 0.0f;
            box->flags = 0;
            box->pos = 20.0f + box->minY;
        }
    }
}

// very close, but there are some if statements not quite right
void zNPCBPatrick::bossPatBoxUpdate(bossPatBox* bx, F32 dt)
{
    if (bx->flags & 1)
    {
        bx->velocity = -(10.0f * dt - bx->velocity);
        bx->pos = bx->velocity * dt + bx->pos;

        if (bx->pos < this->gooHeight)
        {
            bx->pos = this->gooHeight;
            bx->velocity = 0.0f;

            if (!(bx->flags & 2))
            {
                bx->flags |= 2;

                if (this->boxSplash && this->boxSplash->initCB)
                {
                    this->boxSplash->initCB(this->boxSplash, bx->box->model, NULL, NULL);
                }

                if (this->boxSplashSndTimer > 0.5f)
                {
                    xSndPlay3D(xStrHash("b201_box_splash"), 0.50049996f, 0.0f, 0, 0,
                               (xVec3*)&bx->box->model->Mat->pos, 2.0f, 40.0f, SND_CAT_GAME, 0.0f);

                    this->boxSplashSndTimer = 0.0f;
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

                    if (bx->minY > 0.45f + this->gooHeight)
                    {
                        if (this->boxLandSndTimer > 0.5f)
                        {
                            xSndPlay3D(xStrHash("b201_box_splash"), 0.50049996f, 0.0f, 0, 0,
                                       (xVec3*)&bx->box->model->Mat->pos, 2.0f, 40.0f, SND_CAT_GAME,
                                       0.0f);
                            this->boxLandSndTimer = 0.0f;
                        }

                        if (this->boxSplash && this->boxSplash->initCB)
                        {
                            this->boxSplash->initCB(this->boxSplash, bx->box->model, NULL, NULL);
                        }

                        if (this->boxSplashSndTimer > 0.5f)
                        {
                            xSndPlay3D(xStrHash("b201_box_landing"), 0.50049996f, 0.0f, 0, 0,
                                       (xVec3*)&bx->box->model->Mat->pos, 2.0f, 40.0f, SND_CAT_GAME,
                                       0.0f);
                            this->boxSplashSndTimer = 0.0f;
                        }
                    }
                }

                bx->pos = bx->minY;
                bx->velocity = 0.0f;
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
    else if (idle->timeInGoal > 0.75f && idle->timeInGoal > 2.0f)
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

    if (pat->AnimTimeRemain(NULL) < 1.7f * dt)
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

    if (pat->AnimTimeRemain(NULL) < 1.7f * dt)
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

    if ((spit->stage == 1 || spit->stage == 2) && pat->AnimTimeRemain(NULL) < 1.7f * dt)
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

    if (pat->AnimTimeRemain(NULL) < 1.7f * dt)
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

    if (pat->AnimTimeRemain(NULL) < 1.7f * dt)
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

    if (pat->AnimTimeRemain(NULL) < 1.7f * dt)
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

    if (spawn->stage == 3 && pat->AnimTimeRemain(NULL) < 1.7f * dt)
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
        if (pat->AnimTimeRemain(NULL) < 1.7f * dt)
        {
            nextgoal = pat->nextGoal();
            *trantype = GOAL_TRAN_SET;
        }
    }
    else if (spin->stage == 2 && pat->bossFlags & 2)
    {
        if (pat->AnimTimeRemain(NULL) < 1.7f * dt)
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

    if (fudge->stage == 6 && pat->AnimTimeRemain(NULL) < 1.7f * dt)
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

    newAt.y = 0.0f;
    F32 a = xVec3Normalize(&newAt, &newAt);

    F32 currRot = xatan2(pat->model->Mat->at.x, pat->model->Mat->at.z);
    F32 desireRot = xatan2(newAt.x, newAt.z);

    F32 diffRot = desireRot - currRot;

    if (diffRot > 3.1415927f)
    {
        diffRot -= 6.2831855f;
    }

    if (diffRot < -3.1415927f)
    {
        diffRot += 6.2831855f;
    }

    F32 deltaRot = turn_rate * dt;

    if ((F32)iabs(diffRot) < deltaRot)
    {
        pat->frame->mat.at = newAt;
        retval = 0;
    }
    else
    {
        if (diffRot < 0.0f)
        {
            deltaRot = -deltaRot;
            retval = 1;
        }

        desireRot = currRot + deltaRot;
        deltaRot = isin(currRot + deltaRot);
        pat->frame->mat.at.x = deltaRot;
        pat->frame->mat.at.y = 0.0f;
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
        this->underwear[i]->timer = 0.0f;
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
                bx->velocity = 0.0f;
                bx->flags = 0;
                bx->pos = 20.0f + bx->minY;
            }
        }

        this->backBox.velocity = 0.0f;
        this->backBox.flags = 0;
        this->backBox.pos = 20.0f + this->backBox.minY;

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
                bx->velocity = 0.0f;
                bx->flags = 0;
                bx->pos = 20.0f + bx->minY;
            }
        }

        this->backBox.velocity = 0.0f;
        this->backBox.flags = 0;
        this->backBox.pos = 20.0f + this->backBox.minY;

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
    this->timeInGoal = 0.0f;
    pat->bossFlags |= 0x20;
    xVec3Init(&pat->frame->vel, 0.0f, 0.0f, 0.0f);
    return zNPCGoalCommon::Enter(dt, unk);
}

S32 zNPCGoalBossPatIdle::Process(en_trantype* trantype, F32 dt, void* ctxt, xScene* scene)
{
    zNPCBPatrick* pat = (zNPCBPatrick*)this->GetOwner();
    this->timeInGoal += dt;
    Pat_FaceTarget(pat, (xVec3*)&globals.player.ent.model->Mat->pos, 1.5707964f, dt);
    return xGoal::Process(trantype, dt, ctxt, scene);
}

S32 zNPCGoalBossPatTaunt::Enter(F32 dt, void* updCtxt)
{
    zNPCBPatrick* pat = (zNPCBPatrick*)this->GetOwner();

    pat->bossFlags &= 0xfffffffd;
    this->timeInGoal = 0.0f;
    pat->bossFlags |= 0x20;

    xSndPlay3D(xStrHash("b201_rp_chestbang1"), 0.77f, 0.0f, 0, 0, pat, 15.0f, 40.0f, SND_CAT_GAME,
               0.4f);
    xSndPlay3D(xStrHash("b201_rp_chestbang2"), 0.77f, 0.0f, 0, 0, pat, 15.0f, 40.0f, SND_CAT_GAME,
               0.8f);
    xSndPlay3D(xStrHash("b201_rp_chestbang3"), 0.77f, 0.0f, 0, 0, pat, 15.0f, 40.0f, SND_CAT_GAME,
               1.2f);
    xSndPlay3D(xStrHash("b201_rp_chestbang4"), 0.77f, 0.0f, 0, 0, pat, 15.0f, 40.0f, SND_CAT_GAME,
               1.5f);
    xSndPlay3D(xStrHash("b201_rp_chestbang5"), 0.77f, 0.0f, 0, 0, pat, 15.0f, 40.0f, SND_CAT_GAME,
               1.8f);
    xSndPlay3D(xStrHash("b201_rp_chestbang6"), 0.77f, 0.0f, 0, 0, pat, 15.0f, 40.0f, SND_CAT_GAME,
               2.1f);

    return zNPCGoalCommon::Enter(dt, updCtxt);
}

S32 zNPCGoalBossPatTaunt::Process(en_trantype* trantype, F32 dt, void* ctxt, xScene* scene)
{
    zNPCBPatrick* pat = (zNPCBPatrick*)this->GetOwner();
    this->timeInGoal += dt;
    Pat_FaceTarget(pat, (xVec3*)&globals.player.ent.model->Mat->pos, 1.5707964f, dt);
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

    this->timeInGoal = 0.0f;

    xSndPlay3D(xStrHash("b201_rp_hurt_jump"), 0.77f, 0.0f, 0, 0, pat, 15.0f, 40.0f, SND_CAT_GAME,
               0.0f);

    if (xrand() & 0x20000)
    {
        xSndPlay3D(xStrHash("b201_rp_hurt_talk"), 0.77f, 0.0f, 0, 0, pat, 15.0f, 40.0f,
                   SND_CAT_GAME, 0.0f);
    }
    else
    {
        xSndPlay3D(xStrHash("b201_rp_hurt_talk_alt"), 0.77f, 0.0f, 0, 0, pat, 15.0f, 40.0f,
                   SND_CAT_GAME, 0.0f);
    }

    return zNPCGoalCommon::Enter(dt, updCtxt);
}

S32 zNPCGoalBossPatHit::Process(en_trantype* trantype, F32 dt, void* ctxt, xScene* scene)
{
    zNPCBPatrick* pat = (zNPCBPatrick*)this->GetOwner();
    this->timeInGoal += dt;
    Pat_FaceTarget(pat, (xVec3*)&globals.player.ent.model->Mat->pos, 1.5707964f, dt);
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

    this->timeInGoal = 0.0f;
    this->timeLeftToSpit = 1.0f;
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

    S32 bVar5 = (this->timeLeftToSpit < 0.0f) ? 0 : 1;

    F32 leadTime = 1.0f;

    switch (this->stage)
    {
    case 0:
    {
        leadTime += 0.35f + pat->AnimTimeRemain(NULL);

        if (pat->AnimTimeRemain(NULL) < 1.7f * dt)
        {
            this->stage = 1;
            this->timeLeftToSpit = 0.35f;
            this->DoAutoAnim(NPC_GSPOT_START, 0);
            this->timeInGoal = 0.0f;
        }

        break;
    }
    case 1:
    {
        this->timeLeftToSpit -= dt;

        if (this->timeLeftToSpit >= 0.0f)
        {
            leadTime += this->timeLeftToSpit;
        }

        break;
    }
    case 2:
    {
        this->timeLeftToSpit -= dt;

        if (this->timeLeftToSpit >= 0.0f)
        {
            leadTime += this->timeLeftToSpit;
        }

        break;
    }
    }

    zEntPlayer_PredictPos(&futurePos, leadTime, 1.0f, true);
    Pat_FaceTarget(pat, &futurePos, 1.5707964f, dt);

    if (bVar5 && this->timeLeftToSpit < 0.0f)
    {
        bossPatGlob* glob = pat->getNextFreeGlob();
        glob->t = 0.0f;
        glob->path.minTime = 0.0f;
        leadTime = xurand();
        glob->path.maxTime = 0.33f * leadTime + 1.0f;
        glob->path.gravity = 10.0f;

        xVec3Init(&offset, 0.0f, 0.0f, 0.0f);
        GetBonePos(&upperLip, (xMat4x3*)pat->model->Mat, sBone[1], &offset);
        GetBonePos(&lowerLip, (xMat4x3*)pat->model->Mat, sBone[2], &offset);

        xVec3Init(&offset, 1.0f, 0.0f, 0.0f);
        GetBonePos(&lowerLipRight, (xMat4x3*)pat->model->Mat, sBone[2], &offset);
        xVec3SubFrom(&lowerLipRight, &lowerLip);
        xVec3Normalize(&lowerLipRight, &lowerLipRight);
        xVec3SMul(&glob->path.initPos, &upperLip, 0.5f);
        xVec3Copy(&glob->lastPos, &glob->path.initPos);
        xVec3AddScaled(&glob->path.initPos, &lowerLip, 0.5f);

        F32 t = 1.0f;

        glob->path.initVel.x = t * (futurePos.x - glob->path.initPos.x);
        glob->path.initVel.z = t * (futurePos.z - glob->path.initPos.z);
        glob->path.initVel.y =
            0.5f * glob->path.gravity + t * (futurePos.y - glob->path.initPos.y);

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

            if (colls.tohit.x < 18.5f && colls.tohit.x > -18.5f && colls.tohit.z > -20.0f)
            {
                glob->flags |= 8;
                xVec3Init(&glob->norm, 0.0f, 1.0f, 0.0f);
                glob->conv = (zPlatform*)colls.optr;
                xVec3SMul(&glob->convVel, &glob->conv->bound.mat->right,
                          glob->conv->passet->cb.speed);
            }
            else
            {
                xVec3Init(&glob->norm, 0.0f, -1.0f, 0.0f);
            }
        }

        if (xrand() & 0x20000)
        {
            xSndPlay3D(xStrHash("b201_rp_spit"), 0.77f, 0.0f, 0, 0, &glob->path.initPos, 15.0f,
                       40.0f, SND_CAT_GAME, 0.0f);
        }
        else
        {
            xSndPlay3D(xStrHash("b201_rp_spitalt"), 0.77f, 0.0f, 0, 0, &glob->path.initPos, 15.0f,
                       40.0f, SND_CAT_GAME, 0.0f);
        }
    }

    return xGoal::Process(trantype, dt, updCtxt, xscn);
}

S32 zNPCGoalBossPatRun::Enter(F32 dt, void* unk)
{
    zNPCBPatrick* pat = (zNPCBPatrick*)this->GetOwner();

    this->timeInGoal = 0.0f;

    U32 hash = xStrHash("b201_rp_run_loop");

    this->runSndID =
        xSndPlay3D(hash, 0.77f, 0.0f, (U32)0, (U32)0, pat, 2.0f, 40.0f, SND_CAT_GAME, 0.0f);

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

    this->timeInGoal = 0.0f;
    this->globNum = 0.0f;

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
    S32 i;
    zNPCBPatrick* pat = (zNPCBPatrick*)this->GetOwner();
    S32 playSmack;
    xVec3 offset;
    xVec3 cone;
    S32 numGlobs;
    xCollis colls;

    playSmack = 0;

    if (this->timeInGoal <= 0.65f)
    {
        playSmack = 1;
    }

    this->timeInGoal += dt;

    Pat_FaceTarget(pat, (xVec3*)&globals.player.ent.model->Mat->pos, 1.5707964f, dt);

    if ((this->timeInGoal > 0.65f) && this->timeInGoal < 1.0f)
    {
        xVec3Init(&offset, 0.0f, 0.0f, 0.0f);
        GetBonePos(&cone, (xMat4x3*)pat->model->Mat, sBone[3], &offset);

        if (playSmack)
        {
            xSndPlay3D(xStrHash("b201_rp_smack"), 0.77f, 0.0f, 0, 0, &cone, 15.0f, 40.0f,
                       SND_CAT_GAME, 0.0f);
        }

        this->globNum += dt * (50.0f * (0.5f + xurand()));

        numGlobs = this->globNum;

        this->globNum -= numGlobs;

        for (i = 0; i < numGlobs; i++)
        {
            bossPatGlob* glob = pat->getNextFreeGlob();

            glob->t = 0.0f;
            glob->path.minTime = 0.0f;
            glob->path.maxTime = 0.33f * xurand() + 1.0f;
            glob->path.gravity = 10.0f;

            xVec3Copy(&glob->path.initPos, &cone);
            xVec3Copy(&glob->lastPos, &glob->path.initPos);
            xVec3Copy(&glob->path.initVel, (xVec3*)&pat->model->Mat->at);

            xVec3AddScaled(&glob->path.initVel, (xVec3*)&pat->model->Mat->right,
                           0.75f * (xurand() - 0.5f));

            glob->path.initVel.x *= 5.0f * xurand() + 2.0f;
            glob->path.initVel.y += 4.0f * xurand() + 3.0f;
            glob->path.initVel.z *= 5.0f * xurand() + 2.0f;

            xParabolaHitsEnv(&glob->path, globals.sceneCur->env, &colls);

            if (colls.flags & 1)
            {
                glob->path.maxTime = colls.dist;
                xVec3Copy(&glob->norm, &colls.norm);
                glob->flags |= 2;
            }

            colls.flags &= 0xfffffffe;

            pat->ParabolaHitsConveyors(&glob->path, &colls);

            if (colls.flags & 1)
            {
                glob->path.maxTime = colls.dist;
                glob->flags |= 2;

                if (colls.tohit.x < 18.5f && colls.tohit.x > -18.5f && colls.tohit.z > -20.0f)
                {
                    glob->flags |= 8;
                    xVec3Init(&glob->norm, 0.0f, 1.0f, 0.0f);
                    glob->conv = (zPlatform*)colls.optr;

                    xVec3SMul(&glob->convVel, (xVec3*)&glob->conv->bound.mat->right,
                              glob->conv->passet->cb.speed);
                }
                else
                {
                    xVec3Init(&glob->norm, 0.0f, -1.0f, 0.0f);
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
    pat->particleTimer = 0.0f;
}

void EmitFreezeBreath(xVec3* pos, xVec3* vel, F32 dt, F32 elapsed, F32 total)
{
    zNPCBPatrick* pat = sPat_Ptr;

    xVec3Copy(&pat->freezeBreathSetting.vel, vel);
    xVec3Copy(&pat->freezeBreathSetting.pos, pos);

    F32 x = pat->freezeBreathSetting.vel.x;
    F32 z = pat->freezeBreathSetting.vel.z;
    F32 dVar6 = xsqrt(x * x + z * z);
    pat->freezeBreathSetting.vel.y = -0.08f * dVar6;

    dVar6 = xVec3Length(&pat->freezeBreathSetting.vel);
    xVec3SMulBy(&pat->freezeBreathSetting.vel, 25.0f / dVar6);

    pat->lastEmitted =
        xParEmitterEmitCustom(pat->freezeBreathEmitter, dt, &pat->freezeBreathSetting);

    if (pat->numParticles < 4 && (elapsed / total) > pat->numParticles / 3.0f && pat->lastEmitted)
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

    this->timeInGoal = 0.0f;

    StartFreezeBreath();

    pat->bossFlags |= 0x20;

    xSndPlay3D(xStrHash("b201_rp_inhale"), 0.6545f, 0.0f, 0, 0, pat, 15.0f, 40.0f, SND_CAT_GAME,
               0.0f);

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

    if (this->timeInGoal < 1.25f)
    {
        playFreeze = 1;
    }

    this->timeInGoal += dt;

    Pat_FaceTarget(pat, (xVec3*)&globals.player.ent.model->Mat->pos, 0.7853982f, dt);

    if (!(this->timeInGoal < 1.25f))
    {
        if (this->timeInGoal < 1.75f)
        {
            if (playFreeze)
            {
                xSndPlay3D(xStrHash("b201_rp_exhale"), 0.77f, 0.0f, 0, 0, pat, 15.0f, 40.0f,
                           SND_CAT_GAME, 0.0f);
            }

            xVec3Init(&offset, 0.0f, 0.0f, 0.0f);
            GetBonePos(&pos, (xMat4x3*)pat->model->Mat, sBone[2], &offset);
            GetBonePos(&lip, (xMat4x3*)pat->model->Mat, sBone[1], &offset);
            xVec3AddTo(&pos, &lip);
            xVec3SMulBy(&pos, 0.5f);
            xVec3Init(&offset, 0.0f, 0.0f, 1.0f);
            GetBonePos(&vel, (xMat4x3*)pat->model->Mat, sBone[1], &offset);
            xVec3SubFrom(&vel, &pos);
            EmitFreezeBreath(&pos, &vel, dt, this->timeInGoal - 1.25f, 0.5f);
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

    this->timeInGoal = 0.0f;
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

    Pat_FaceTarget(pat, (xVec3*)&globals.player.ent.model->Mat->pos, 0.7853982f, dt);

    F32 animTime = pat->model->Anim->Single->Time;

    if (this->stage == 2 && animTime < 1.75f)
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
        xVec3Init(&offset, 0.0f, 0.0f, 0.0f);
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
    F32 param1;
    F32 param2;
    F32 det;
    S32 i;
    F32 a;
    F32 b;

    zNPCBPatrick* pat = (zNPCBPatrick*)this->GetOwner();

    this->stage = 0;

    xSndPlay3D(xStrHash("b201_rp_spin_start"), 0.77f, 0.0f, 0, 0, pat, 15.0f, 40.0f, SND_CAT_GAME,
               0.0f);

    pat->bossFlags &= 0xfffffffd;

    xVec3SMul(&this->vel, (xVec3*)&pat->model->Mat->right, 12.0f);
    this->vel.y = 0.0f;

    if (this->vel.x<4.0f&& this->vel.x> -4.0f)
    {
        this->vel.x = 4.0f;
    }
    if (this->vel.z<4.0f&& this->vel.z> -4.0f)
    {
        this->vel.z = 4.0f;
    }

    F32 dVar7 = xVec3Length(&this->vel);
    xVec3SMulBy(&this->vel, 12.0f / dVar7);

    this->timeInGoal = 0.0f;
    pat->bossFlags &= 0xffffffdf;

    xVec3Init(&offset, 0.0f, 0.0f, 0.0f);
    GetBonePos(&center, (xMat4x3*)pat->model->Mat, sBone[0], &offset);
    GetBonePos(&cone, (xMat4x3*)pat->model->Mat, sBone[3], &offset);
    offset.z = -1.0f;
    GetBonePos(&back, (xMat4x3*)pat->model->Mat, sBone[0], &offset);
    xVec3SubFrom(&back, &center);
    back.y = 0.0f;
    xVec3Normalize(&back, &back);

    a = back.x * back.x + back.z * back.z;
    b = 2.0f * (cone.x * back.x + cone.z * back.z);
    det = b * b - 4.0f * a * ((cone.x * cone.x + cone.z * cone.z) - 300.0f);

    if (det >= 0.0f)
    {
        det = xsqrt(det);

        param1 = (-b + det) / (2.0f * a);
        param2 = (-b - det) / (2.0f * a);
    }
    else
    {
        param1 = 0.0f;
        param2 = 0.0f;
    }

    if (param2 > param1)
    {
        param1 = param2;
    }

    xVec3Copy(&this->pole[0], &cone);
    xVec3AddScaled(&this->pole[0], &back, param1);

    this->pole[0].y = 0.0f;

    xVec3Init(&unk, this->pole[0].z, 0.0f, -this->pole[0].x);

    for (i = 1; i < 4; i++)
    {
        det = 6.2831855f * i;
        det *= 0.25f;

        xVec3SMul(&this->pole[i], &this->pole[0], icos(det));
        xVec3AddScaled(&this->pole[i], &unk, isin(det));
    }

    this->currPole = 0;
    pat->numMissesInARow++;

    return zNPCGoalCommon::Enter(dt, updCtxt);
}

S32 zNPCGoalBossPatSpin::Process(en_trantype* trantype, F32 dt, void* ctxt, xScene* scene)
{
    xVec3 awayFromPlayer;
    xVec3 offset;
    xVec3 center;
    xVec3 cone;
    xVec3 back;
    xVec3 toPole;
    xVec3 polePos;
    xVec3 alongVel;
    xMat3x3 rotMat;
    xCollis colls;

    zNPCBPatrick* pat = (zNPCBPatrick*)this->GetOwner();

    this->timeInGoal += dt;

    switch (this->stage)
    {
    case 0:
    {
        if (pat->AnimTimeRemain(NULL) < 1.7f * dt)
        {
            this->stage = 1;

            this->spinSndID = xSndPlay3D(xStrHash("b201_rp_spin_loop"), 0.6545f, 0.0f, 0, 0, pat,
                                         15.0f, 40.0f, SND_CAT_GAME, 0.0f);
            this->globSndID = xSndPlay3D(xStrHash("b201_rp_spin_spurt_loop"), 0.6545f, 0.0f, 0, 0,
                                         pat, 15.0f, 40.0f, SND_CAT_GAME, 0.0f);

            pat->bossFlags |= 1;

            this->DoAutoAnim(NPC_GSPOT_START, 0);

            this->timeInGoal = 0.0f;

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
        F32 passedPole;
        F32 ang;

        if (pat->round != 3)
        {
            xVec3Sub(&awayFromPlayer, (xVec3*)&pat->model->Mat->pos,
                     (xVec3*)&globals.player.ent.model->Mat->pos);
            xVec3AddTo(&awayFromPlayer, (xVec3*)&pat->model->Mat->pos);

            Pat_FaceTarget(pat, &awayFromPlayer, 1.5707964f, dt);
        }

        xVec3Init(&offset, 0.0f, 0.0f, 0.0f);

        GetBonePos(&center, (xMat4x3*)pat->model->Mat, sBone[0], &offset);
        GetBonePos(&cone, (xMat4x3*)pat->model->Mat, sBone[3], &offset);

        offset.z = -1.0f;

        GetBonePos(&back, (xMat4x3*)pat->model->Mat, sBone[0], &offset);
        xVec3SubFrom(&back, &center);

        back.y = 0.0f;

        xVec3Normalize(&back, &back);

        ang = 0.25f * this->timeInGoal;

        if (ang > 6.2831855f)
        {
            ang -= 6.2831855f * (S32)(ang / 6.2831855f);
        }

        xMat3x3RotY(&rotMat, ang);

        do
        {
            xMat3x3RMulVec(&polePos, &rotMat, &this->pole[this->currPole]);
            xVec3Sub(&toPole, &polePos, &cone);

            passedPole = back.x * toPole.z - back.z * toPole.x;

            if (passedPole > 0.0f)
            {
                bossPatGlob* glob = pat->getNextFreeGlob();

                glob->t = 0.0f;
                glob->path.minTime = 0.0f;
                glob->path.maxTime = 0.33f * xurand() + 1.0f;
                glob->path.gravity = 10.0f;

                xVec3Copy(&glob->path.initPos, &cone);
                xVec3Copy(&glob->lastPos, &glob->path.initPos);
                xVec3Copy(&glob->path.initVel, &toPole);
                xVec3Normalize(&glob->path.initVel, &glob->path.initVel);
                xVec3SMul(&alongVel, &glob->path.initVel,
                          xVec3Dot(&glob->path.initVel, &this->vel));

                glob->path.initVel.x *= 15.0f;
                glob->path.initVel.y += 5.0f;
                glob->path.initVel.z *= 15.0f;

                xVec3AddScaled(&glob->path.initVel, &alongVel, 0.25f);
                xParabolaHitsEnv(&glob->path, globals.sceneCur->env, &colls);

                if (colls.flags & 1)
                {
                    glob->path.maxTime = colls.dist;
                    xVec3Copy(&glob->norm, &colls.norm);
                    glob->flags |= 2;
                }

                colls.flags &= 0xfffffffe;

                pat->ParabolaHitsConveyors(&glob->path, &colls);

                if (colls.flags & 1)
                {
                    glob->path.maxTime = colls.dist;
                    glob->flags |= 2;

                    if (colls.tohit.x < 18.5f && colls.tohit.x > -18.5f && colls.tohit.z > -20.0f)
                    {
                        glob->flags |= 8;

                        xVec3Init(&glob->norm, 0.0f, 1.0f, 0.0f);

                        glob->conv = (zPlatform*)colls.optr;

                        xVec3SMul(&glob->convVel, (xVec3*)&glob->conv->bound.mat->right,
                                  glob->conv->passet->cb.speed);
                    }
                    else
                    {
                        xVec3Init(&glob->norm, 0.0f, -1.0f, 0.0f);
                    }
                }

                this->currPole++;

                if (this->currPole >= 4)
                {
                    this->currPole = 0;
                }
            }
        } while (passedPole > 0.0f);

        xVec3AddScaled(&pat->frame->mat.pos, &this->vel, dt);

        if (pat->frame->mat.pos.x > pat->arenaExtent.x && this->vel.x > 0.0f)
        {
            this->vel.x = (-this->vel.x + xurand()) - 0.5f;
            this->vel.z = (this->vel.z + xurand()) - 0.5f;
        }

        if (pat->frame->mat.pos.z > pat->arenaExtent.z && this->vel.z > 0.0f)
        {
            this->vel.z = (-this->vel.z + xurand()) - 0.5f;
            this->vel.x = (this->vel.x + xurand()) - 0.5f;
        }

        if (pat->frame->mat.pos.x < -pat->arenaExtent.x && this->vel.x < 0.0f)
        {
            this->vel.x = (-this->vel.x + xurand()) - 0.5f;
            this->vel.z = (this->vel.z + xurand()) - 0.5f;
        }

        if (pat->frame->mat.pos.z < -pat->arenaExtent.z && this->vel.z < 0.0f)
        {
            this->vel.z = (-this->vel.z + xurand()) - 0.5f;
            this->vel.x = (this->vel.x + xurand()) - 0.5f;
        }

        if (pat->AnimTimeRemain(NULL) < 1.7f * dt)
        {
            if (pat->bossFlags & 2)
            {
                this->stage = 2;

                xSndStop(this->spinSndID);
                xSndStop(this->globSndID);

                pat->bossFlags |= 0x40;

                this->DoAutoAnim(NPC_GSPOT_START, 0);

                this->timeInGoal = 0.0f;
            }
            else if ((pat->round == 1 || pat->round == 2) && this->timeInGoal > 10.0f)
            {
                this->stage = 2;

                xSndStop(this->spinSndID);
                xSndStop(this->globSndID);

                pat->bossFlags |= 0x40;

                this->DoAutoAnim(NPC_GSPOT_START, 0);

                this->timeInGoal = 0.0f;
            }
            else if (pat->round == 3 && this->timeInGoal > 10.0f)
            {
                F32 facing =
                    xVec3Dot((xVec3*)&pat->frame->mat.pos, (xVec3*)&pat->model->Mat->at);

                if (pat->frame->mat.pos.x > 0.8f * pat->arenaExtent.x ||
                    pat->frame->mat.pos.x < 0.8f * -pat->arenaExtent.x ||
                    pat->frame->mat.pos.z > 0.8f * pat->arenaExtent.z ||
                    pat->frame->mat.pos.z < 0.8f * -pat->arenaExtent.z)
                {
                    if (facing < 0.0f)
                    {
                        this->stage = 2;

                        xSndStop(this->spinSndID);
                        xSndStop(this->globSndID);

                        pat->bossFlags |= 0x40;

                        this->DoAutoAnim(NPC_GSPOT_START, 0);

                        this->timeInGoal = 0.0f;
                    }
                }
            }
        }

        break;
    }
    case 2:
    {
        if (!(pat->bossFlags & 2) && pat->AnimTimeRemain(NULL) < 1.7f * dt)
        {
            this->stage = 3;

            xSndPlay3D(xStrHash("b201_rp_spin_dizzy"), 0.6545f, 0.0f, 0, 0, pat, 15.0f, 40.0f,
                       SND_CAT_GAME, 0.0f);

            this->DoAutoAnim(NPC_GSPOT_START, 0);

            this->timeInGoal = 0.0f;

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
            turning = Pat_FaceTarget(pat, &g_O3, 1.5707964f, dt);
        }

        if (pat->AnimTimeRemain(NULL) < 1.7f * dt && !turning)
        {
            this->stage = 4;

            xSndPlay3D(xStrHash("b201_rp_spin_fall"), 0.6545f, 0.0f, 0, 0, pat, 15.0f, 40.0f,
                       SND_CAT_GAME, 0.65f);

            this->DoAutoAnim(NPC_GSPOT_START, 0);

            this->timeInGoal = 0.0f;

            if (pat->nfFlags & 1)
            {
                U32 picker = xrand();

                if (pat->round == 1)
                {
                    if (pat->hitPoints == 9)
                    {
                        U32 said = pat->nfFlags;

                        if (!(said & 8))
                        {
                            pat->newsfish->SpeakStart(sNFComment[NF_SB_HAS_OPPORTUNITY].soundID, 0,
                                                      -1);
                            pat->nfFlags |= 8;
                        }
                        else if (!(said & 0x10))
                        {
                            pat->newsfish->SpeakStart(
                                sNFComment[NF_ANOTHER_OPPORTUNITY_FOR_SB].soundID, 0, -1);
                            pat->nfFlags |= 0x10;
                        }
                        else if (!(said & 0x20))
                        {
                            pat->newsfish->SpeakStart(
                                sNFComment[NF_NOTE_ON_ROBOT_BACK_MEANS_SOMETHING].soundID, 0, -1);
                            pat->nfFlags |= 0x20;
                        }
                        else if (picker & 0x100)
                        {
                            pat->newsfish->SpeakStart(
                                sNFComment[NF_NOTE_ON_ROBOT_BACK_MEANS_SOMETHING].soundID, 0, -1);
                        }
                        else
                        {
                            pat->newsfish->SpeakStart(
                                sNFComment[NF_ANOTHER_OPPORTUNITY_FOR_SB].soundID, 0, -1);
                        }
                    }
                    else if ((picker & 0x1f) <= 0xa)
                    {
                        pat->newsfish->SpeakStart(sNFComment[NF_AND_ROBOT_IS_DOWN_A].soundID, 0,
                                                  -1);
                    }
                    else if ((picker & 0x1f) <= 0x14)
                    {
                        pat->newsfish->SpeakStart(sNFComment[NF_AND_ROBOT_IS_DOWN_B].soundID, 0,
                                                  -1);
                    }
                    else
                    {
                        pat->newsfish->SpeakStart(sNFComment[NF_OOH_ROBOT_IS_DOWN].soundID, 0, -1);
                    }
                }
                else if (pat->round == 2)
                {
                    if (picker & 0x300)
                    {
                        if ((picker & 0x1f) <= 0xa)
                        {
                            pat->newsfish->SpeakStart(sNFComment[NF_AND_ROBOT_IS_DOWN_A].soundID, 0,
                                                      -1);
                        }
                        else if ((picker & 0x1f) <= 0x14)
                        {
                            pat->newsfish->SpeakStart(sNFComment[NF_AND_ROBOT_IS_DOWN_B].soundID, 0,
                                                      -1);
                        }
                        else
                        {
                            pat->newsfish->SpeakStart(sNFComment[NF_OOH_ROBOT_IS_DOWN].soundID, 0,
                                                      -1);
                        }
                    }
                }
                else if (pat->hitPoints == 3)
                {
                    U32 said = pat->nfFlags;

                    if (!(said & 0x80))
                    {
                        pat->newsfish->SpeakStart(sNFComment[NF_SB_HAS_OPPORTUNITY].soundID, 0, -1);
                        pat->nfFlags |= 0x80;
                    }
                    else if (!(said & 0x100))
                    {
                        pat->newsfish->SpeakStart(sNFComment[NF_ANOTHER_OPPORTUNITY_FOR_SB].soundID,
                                                  0, -1);
                        pat->nfFlags |= 0x100;
                    }
                    else if (!(said & 0x200))
                    {
                        pat->newsfish->SpeakStart(sNFComment[NF_PRIME_BOWLING_MOMENT].soundID, 0,
                                                  -1);
                        pat->nfFlags |= 0x200;
                    }
                    else if (picker & 0x100)
                    {
                        pat->newsfish->SpeakStart(sNFComment[NF_PRIME_BOWLING_MOMENT].soundID, 0,
                                                  -1);
                    }
                    else
                    {
                        pat->newsfish->SpeakStart(sNFComment[NF_ANOTHER_OPPORTUNITY_FOR_SB].soundID,
                                                  0, -1);
                    }
                }
                else if ((picker & 0x3f) <= 0xa)
                {
                    pat->newsfish->SpeakStart(sNFComment[NF_AND_ROBOT_IS_DOWN_A].soundID, 0, -1);
                }
                else if ((picker & 0x3f) <= 0x15)
                {
                    pat->newsfish->SpeakStart(sNFComment[NF_AND_ROBOT_IS_DOWN_B].soundID, 0, -1);
                }
                else if ((picker & 0x3f) <= 0x1f)
                {
                    pat->newsfish->SpeakStart(sNFComment[NF_OOH_ROBOT_IS_DOWN].soundID, 0, -1);
                }
                else if ((picker & 0x3f) <= 0x2a)
                {
                    pat->newsfish->SpeakStart(sNFComment[NF_SB_HAS_OPPORTUNITY].soundID, 0, -1);
                }
                else if ((picker & 0x3f) <= 0x34)
                {
                    pat->newsfish->SpeakStart(sNFComment[NF_ANOTHER_OPPORTUNITY_FOR_SB].soundID, 0,
                                              -1);
                }
                else
                {
                    pat->newsfish->SpeakStart(sNFComment[NF_PRIME_BOWLING_MOMENT].soundID, 0, -1);
                }
            }
            else
            {
                pat->newsfish->SpeakStart(sNFComment[NF_ROBOT_MADE_HIMSELF_DIZZY].soundID, 0, -1);
                pat->nfFlags |= 1;
            }
        }

        break;
    }
    case 4:
    {
        if (pat->AnimTimeRemain(NULL) < 1.7f * dt)
        {
            this->stage = 5;

            this->DoAutoAnim(NPC_GSPOT_START, 0);

            this->timeInGoal = 0.0f;
        }

        break;
    }
    case 5:
    {
        if ((pat->round == 1 && this->timeInGoal > 5.0f) ||
            (pat->round == 2 && this->timeInGoal > 15.0f) ||
            (pat->round == 3 && this->timeInGoal > 25.0f))
        {
            this->stage = 6;

            pat->bossFlags &= 0xffffffbf;

            this->DoAutoAnim(NPC_GSPOT_START, 0);

            this->timeInGoal = 0.0f;
        }
        else if (pat->round == 3 && !(pat->nfFlags & 0x200) && this->timeInGoal > 12.5f)
        {
            pat->newsfish->SpeakStart(sNFComment[NF_PRIME_BOWLING_MOMENT].soundID, 0, -1);
            pat->nfFlags |= 0x200;
        }

        break;
    }
    case 6:
    {
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

    this->timeInGoal = 0.0f;
    this->stage = 0;
    this->lerp = 1.0f;
    this->vomitSndID = 0;

    pat->bossFlags |= 0x20;
    pat->numMissesInARow++;

    return zNPCGoalCommon::Enter(dt, updCtxt);
}

S32 zNPCGoalBossPatFudge::Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* xscn)
{
    zNPCBPatrick* pat = (zNPCBPatrick*)this->GetOwner();

    F32 anim;
    S32 i;
    S32 numGlobs;
    xVec3 dir;
    xVec3 offset;
    xVec3 lipL;
    xVec3 lipU;
    xCollis colls;

    this->timeInGoal += dt;

    switch (this->stage)
    {
    case 0:
    {
        S32 turning = Pat_FaceTarget(pat, &pat->fudgePos, 3.1415927f, dt);

        if (turning == 0)
        {
            this->stage = 1;
            this->DoAutoAnim(NPC_GSPOT_START, 0);
            this->timeInGoal = 0.0f;

            if (this->lerp > 1.0f)
            {
                this->lerp -= 2.5f * dt;

                if (this->lerp < 1.0f)
                {
                    this->lerp = 1.0f;
                }
            }
            else
            {
                this->lerp += 2.5f * dt;

                if (this->lerp > 1.0f)
                {
                    this->lerp = 1.0f;
                }
            }
        }
        else if (turning == -1)
        {
            this->lerp -= 2.5f * dt;

            if (this->lerp < 0.5f)
            {
                this->lerp = 0.5f;
            }
        }
        else
        {
            this->lerp += 2.5f * dt;

            if (this->lerp > 1.5f)
            {
                this->lerp = 1.5f;
            }
        }

        break;
    }
    case 1:
    {
        xVec3Sub(&dir, &pat->fudgePos, &pat->frame->mat.pos);

        F32 dist = xVec3Length(&dir);

        if (dist < 20.0f * dt)
        {
            xVec3Copy(&pat->frame->mat.pos, &pat->fudgePos);

            this->stage = 2;
            this->DoAutoAnim(NPC_GSPOT_START, 0);
            this->timeInGoal = 0.0f;
        }
        else
        {
            xVec3AddScaled(&pat->frame->mat.pos, &dir, 20.0f * dt / dist);

            if (this->lerp > 1.0f)
            {
                this->lerp -= 2.5f * dt;

                if (this->lerp < 1.0f)
                {
                    this->lerp = 1.0f;
                }
            }
            else
            {
                this->lerp += 2.5f * dt;

                if (this->lerp > 1.0f)
                {
                    this->lerp = 1.0f;
                }
            }
        }

        break;
    }
    case 2:
    {
        S32 turning = Pat_FaceTarget(pat, &pat->fudgeFace, 3.1415927f, dt);

        if (turning == 0)
        {
            this->stage = 3;
            this->DoAutoAnim(NPC_GSPOT_START, 0);
            this->timeInGoal = 0.0f;

            anim = 2.0f;
            zEntEvent(pat->fudgeHandle, eEventAnimPlay, &anim);

            if (pat->round != 2 || pat->hitPoints != 3)
            {
                xSndPlay3D(xStrHash("b201_rp_fudge_filling"), 0.77f, 0.0f, 0, 0, pat->fudgeHandle,
                           15.0f, 40.0f, SND_CAT_GAME, 0.5f);
                xSndPlay3D(xStrHash("b201_rp_fudge_pull"), 0.77f, 0.0f, 0, 0, pat->fudgeHandle,
                           15.0f, 40.0f, SND_CAT_GAME, 0.5f);
                xSndPlay3D(xStrHash("b201_rp_fudge_dismount"), 0.77f, 0.0f, 0, 0, pat->fudgeHandle,
                           15.0f, 40.0f, SND_CAT_GAME, 2.5f);
            }
            else
            {
                pat->gooLevel++;

                if (pat->gooLevel > 3)
                {
                    pat->gooLevel = 3;
                }
            }
        }
        else if (turning == -1)
        {
            this->lerp -= 2.5f * dt;

            if (this->lerp < 0.5f)
            {
                this->lerp = 0.5f;
            }
        }
        else
        {
            this->lerp += 2.5f * dt;

            if (this->lerp > 1.5f)
            {
                this->lerp = 1.5f;
            }
        }

        break;
    }
    case 3:
    {
        if (this->timeInGoal > 1.0f)
        {
            this->stage = 4;

            pat->gooLevel++;

            if (pat->gooLevel > 3)
            {
                pat->gooLevel = 3;
            }
        }

        break;
    }
    case 4:
    {
        if (pat->AnimTimeRemain(NULL) < 1.7f * dt)
        {
            this->stage = 5;

            this->vomitSndID =
                xSndPlay3D(xStrHash("b201_rp_fudge_vomit_loop"), 0.5775f, 0.0f, 0, 0, pat, 20.0f,
                           40.0f, SND_CAT_GAME, 0.0f);

            this->DoAutoAnim(NPC_GSPOT_START, 0);
            this->timeInGoal = 0.0f;
            this->globNum = 0.0f;

            if (pat->hitPoints == 4)
            {
                pat->newsfish->SpeakStart(sNFComment[NF_ONE_MORE_DOUSE_WITH_THAT_STUFF].soundID, 0,
                                          -1);
            }
            else if (pat->hitPoints == 5)
            {
                if (!(pat->nfFlags & 0x40) || !xrand())
                {
                    pat->newsfish->SpeakStart(sNFComment[NF_HOT_GOO_COULD_MELT_ANYTHING].soundID, 0,
                                              -1);
                    pat->nfFlags |= 0x40;
                }
            }
        }

        break;
    }
    case 5:
    {
        this->globNum += dt * (25.0f * (0.5f + xurand()));

        numGlobs = this->globNum;

        this->globNum -= numGlobs;

        for (i = 0; i < numGlobs; i++)
        {
            bossPatGlob* glob = pat->getNextFreeGlob();

            glob->t = 0.0f;
            glob->path.minTime = 0.0f;
            glob->path.maxTime = 0.33f * xurand() + 1.0f;
            glob->path.gravity = 10.0f;

            xVec3Init(&offset, 0.0f, 0.0f, 0.0f);
            GetBonePos(&lipL, (xMat4x3*)pat->model->Mat, sBone[2], &offset);
            GetBonePos(&lipU, (xMat4x3*)pat->model->Mat, sBone[1], &offset);

            xVec3Add(&glob->path.initPos, &lipL, &lipU);
            xVec3SMulBy(&glob->path.initPos, 0.5f);

            glob->path.initPos.y += xurand() - 0.5f;

            xVec3AddScaled(&glob->path.initPos, (xVec3*)&pat->model->Mat->right,
                           xurand() - 0.5f);

            xVec3Copy(&glob->lastPos, &glob->path.initPos);
            xVec3Copy(&glob->path.initVel, (xVec3*)&pat->model->Mat->at);
            xVec3AddScaled(&glob->path.initVel, (xVec3*)&pat->model->Mat->right,
                           0.25f * (xurand() - 0.5f));

            glob->path.initVel.x *= 5.0f * xurand() + 15.0f;
            glob->path.initVel.y += 8.0f * xurand();
            glob->path.initVel.z *= 5.0f * xurand() + 15.0f;

            xParabolaHitsEnv(&glob->path, globals.sceneCur->env, &colls);

            if (colls.flags & 1)
            {
                glob->path.maxTime = colls.dist;
                xVec3Copy(&glob->norm, &colls.norm);
                glob->flags |= 2;
            }

            colls.flags &= 0xfffffffe;

            pat->ParabolaHitsConveyors(&glob->path, &colls);

            if (colls.flags & 1)
            {
                glob->path.maxTime = colls.dist;
                glob->flags |= 2;

                if (colls.tohit.x < 18.5f && colls.tohit.x > -18.5f && colls.tohit.z > -20.0f)
                {
                    glob->flags |= 8;
                    xVec3Init(&glob->norm, 0.0f, 1.0f, 0.0f);
                    glob->conv = (zPlatform*)colls.optr;

                    xVec3SMul(&glob->convVel, (xVec3*)&glob->conv->bound.mat->right,
                              glob->conv->passet->cb.speed);
                }
                else
                {
                    xVec3Init(&glob->norm, 0.0f, -1.0f, 0.0f);
                }
            }
        }

        Pat_FaceTarget(pat, (xVec3*)&globals.player.ent.model->Mat->pos, 0.5f, dt);

        if (this->timeInGoal > 7.5f || (pat->bossFlags & 2))
        {
            this->stage = 6;

            xSndStop(this->vomitSndID);

            this->DoAutoAnim(NPC_GSPOT_START, 0);
            this->timeInGoal = 0.0f;
        }

        break;
    }
    }

    pat->model->Anim->Single->BilinearLerp[0] = this->lerp;
    pat->model->Anim->Single->Blend->BilinearLerp[0] = this->lerp;

    return xGoal::Process(trantype, dt, updCtxt, xscn);
}

WEAK void xDebugAddTweak(const char*, U32*, U32, U32, const tweak_callback*, void*, U32)
{
}

S32 BoundEventCB(xBase*, xBase*, U32, const F32*, xBase*)
{
    return 1;
}
