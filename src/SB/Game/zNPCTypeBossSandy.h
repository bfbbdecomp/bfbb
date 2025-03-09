#ifndef ZNPCTYPEBOSSSANDY_H
#define ZNPCTYPEBOSSSANDY_H

#include "zNPCTypeBoss.h"
#include "zNPCTypeVillager.h"
#include "zNPCGoalCommon.h"
#include "zCutsceneMgr.h"
#include "zEntPickup.h"

#include "xEntBoulder.h"
#include "xFX.h"
#include "xCamera.h"
#include "xModel.h"

struct BossDamageEffectRecord
{
    F32 save_F32[64];
    F32 BDEtimer;
    xModelInstance* BDEminst;
};

struct zNPCBSandy : zNPCBoss
{
    xEnt** boundList; // 0x2B4
    U32* boundFlags;
    F32* boundEmitTimer;
    U32 bossFlags;
    xVec3 currDir;
    F32 currVel;
    S32 hitPoints; // 0x2D4
    S32 round; // 0x2D8
    xVec3 ringCorner[8];
    xVec3 ringEdgeCenter[8];
    xVec3 ropeNormal[8];
    xVec3 bouncePoint[8];
    xEnt* ropeObject[4][8];
    xEnt* ropeObjectLo[8]; // 0x4DC
    xEnt* ropeSb; // 0x4FC
    xEnt* ropeSbDamaged; // 0x500
    xEnt* turnbuckle[8]; // 0x504
    F32 edgeAlpha[8];
    F32 scoreboardAlpha;
    S32 fromRope;
    S32 toRope;
    F32 limbLength;
    RwRaster* helmetRaster;
    RwRaster* feetRaster;
    RwRaster* targetRaster;
    RxObjSpace3DVertex iconVert[4];
    xVec3 targetPos;
    xQuat qHead;
    xQuat qBoulder;
    xVec3 pHead;
    xVec3 pBoulder;
    F32 magnetizeTime;
    xVec3 shockPos;
    xParEmitterCustomSettings dustEddieSetting;
    zParEmitter* dustEddieEmitter;
    zParEmitter* shockwaveEmitter;
    xEnt* hangingScoreboard; // 0x7B8
    xEnt* bustedScoreboard; // 0x7BC
    xEnt* crashedScoreboard; // 0x7C0
    xEntBoulder* headBoulder; // 0x7C4
    zShrapnelAsset* scoreboardShrap;
    zShrapnelAsset* sboardSecondShrap;
    zShrapnelAsset* sboardThirdShrap;
    zShrapnelAsset* lightRigShrap;
    xEnt* lightRig[4];
    zCutsceneMgr* round1Csn;
    zCutsceneMgr* round2Csn;
    zCutsceneMgr* round3Csn;
    F32 csnTimer;
    _tagLightningAdd sparks[6];
    zLightning* wireLight[2]; // 0x978
    xVec3 endPoints[2][4];
    xMat4x3 sparkTransform[2][2];
    F32 timeToNextBolt[2];
    F32 maxLightningWait[2];
    U32 springSndID;
    U32 ambientSndID;
    F32 jawTime;
    F32 jawLevel;
    F32 jawThreshold;
    void* jawData;
    S32 isBeat;
    xVec3 laserPoint[16];
    xFXRibbon laserShow;
    xFXRibbon::curve_node curveNode[2];
    F32 curveNodeAlpha;
    F32 curveNodeR;
    F32 curveNodeG;
    F32 curveNodeB;
    zNPCNewsFish* newsfish;
    U32 nfFlags;
    F32 shockRadius;
    F32 shockwaveGrowthRate;
    F32 shockwaveMaxRadius;
    F32 edropTurnMinTime;
    F32 edropShockwaveTime;
    S32 firstTimeR1Csn;
    S32 firstUpdate;
    zEntPickup* underwear[3]; // 0xD58
    xBinaryCamera bossCam;
    xBinaryCamera specialBossCam;

    zNPCBSandy(S32 myType);
    void hiddenByCutscene();

    /*
    Sandy Full V-Table data:

    0 0x0 00000000 NULL
    1 0x4 00000000 NULL
    2 0x8 8013dca0 zNPCBSandy::Init(xEntAsset *)
    3 0xc 800f4738 xNPCBasic::PostInit(void)
    4 0x10 8013e418 zNPCBSandy::Setup(void)
    5 0x14 800eed68 xNPCBasic::PostSetup(void)
    6 0x18 8013e830 zNPCBSandy::Reset(void)
    7 0x1c 8014075c zNPCBSandy::Process(xScene *, float)
    8 0x20 800f0164 zNPCCommon::BUpdate(xVec3 *)
    9 0x24 801419d0 zNPCBSandy::NewTime(xScene *, float)
    10 0x28 800f0004 zNPCCommon::Move(xScene *, float, xEntFrame *)
    11 0x2c 800f03d0 zNPCCommon::SysEvent(xBase *, xBase *, unsigned int, float const *, xBase *, int *)
    12 0x30 8013f9bc zNPCBSandy::Render(void)
    13 0x34 800b51f4 xNPCBasic::Save( const(xSerial *))
    14 0x38 800b51f8 xNPCBasic::Load(xSerial *)
    15 0x3c 800f1770 zNPCCommon::CollideReview(void)
    16 0x40 80136554 zNPCBoss::ColChkFlags( const(void))
    17 0x44 8013655c zNPCBoss::ColPenFlags( const(void))
    18 0x48 80136564 zNPCBoss::ColChkByFlags( const(void))
    19 0x4c 8013656c zNPCBoss::ColPenByFlags( const(void))
    20 0x50 80136574 zNPCBoss::PhysicsFlags( const(void))
    21 0x54 800efa10 zNPCCommon::Destroy(void)
    22 0x58 800efd30 zNPCCommon::NPCMessage(NPCMsg *)
    23 0x5c 800eed6c zNPCCommon::RenderExtra(void)
    24 0x60 800eed70 zNPCCommon::RenderExtraPostParticles(void)
    25 0x64 8013f1ac zNPCBSandy::ParseINI(void)
    26 0x68 800f1394 zNPCCommon::ParseLinks(void)
    27 0x6c 800f1718 zNPCCommon::ParseProps(void)
    28 0x70 8013e5ec zNPCBSandy::SelfSetup(void)
    29 0x74 800f19ac zNPCCommon::SelfDestroy(void)
    30 0x78 80060028 zNPCCommon::IsHealthy(void)
    31 0x7c 800ee2c0 zNPCCommon::IsAlive(void)
    32 0x80 8014184c zNPCBSandy::Damage(en_NPC_DAMAGE_TYPE, xBase *, xVec3 const *)
    33 0x84 800efc34 zNPCCommon::Respawn(xVec3 const *, zMovePoint *, zMovePoint *)
    34 0x88 800f46b0 zNPCCommon::DuploOwner(zNPCCommon *)
    35 0x8c 800ec87c zNPCCommon::DuploNotice(en_SM_NOTICES, void *)
    36 0x90 80082bd8 zNPCCommon::CanRope(void)
    37 0x94 800f3f24 zNPCCommon::LassoNotify(en_LASSO_EVENT)
    38 0x98 80082bd0 zNPCCommon::SetCarryState(en_NPC_CARRY_STATE)
    39 0x9c 800ee2c8 zNPCCommon::Stun(float)
    40 0xa0 800f46b8 zNPCCommon::SpeakBegin(void)
    41 0xa4 800f46bc zNPCCommon::SpeakEnd(void)
    42 0xa8 800f46c0 zNPCCommon::SpeakStart(unsigned int, unsigned int, int)
    43 0xac 800f46c4 zNPCCommon::SpeakStop(void)
    44 0xb0 8013f1f8 zNPCBSandy::AnimPick(int, en_NPC_GOAL_SPOT, xGoal *)
    45 0xb4 800f2448 zNPCCommon::GetParm(en_npcparm, void *)
    46 0xb8 800f25d0 zNPCCommon::GetParmDefault(en_npcparm, void *)
    47 0xbc 800f46c8 zNPCCommon::GenShadCacheRad(void)
    48 0xc0 800f4664 zNPCCommon::PRIV_GetDriverData(void)
    49 0xc4 800f46a8 zNPCCommon::PRIV_GetLassoData(void)
    50 0xc8 800f3b68 zNPCCommon::LassoSetup(void)
    51 0xcc 8013657c zNPCBoss::AttackTimeLeft(void)
    52 0xd0 80136584 zNPCBoss::HoldUpDude(void)
    53 0xd4 80136588 zNPCBoss::ThanksImDone(void)
    54 0xd8 00000000 NULL
    */

    virtual void Init(xEntAsset* asset); // 8013dca0 entry=2
    virtual void Setup(); // 8013e418 entry=4
    virtual void Reset(); // 8013e830 entry=6
    virtual void Process(xScene* xscn, F32 dt); // 8014075c entry=7
    virtual void NewTime(xScene* xscn, F32 dt); // 801419d0 entry=9
    virtual void Render(); // 8013f9bc entry=12
    virtual void ParseINI(); // 8013f1ac entry=25
    virtual void SelfSetup(); // 8013e5ec entry=28
    virtual void Damage(en_NPC_DAMAGE_TYPE damtype, xBase*, xVec3 const*); // 8014184c entry=32
    virtual U32 AnimPick(S32 gid, en_NPC_GOAL_SPOT param_2,
                         xGoal* rawgoal); // 8013f1f8 entry=44
};

struct zNPCGoalBossSandyIdle : zNPCGoalCommon
{
    F32 timeInGoal;

    zNPCGoalBossSandyIdle(S32 goalID) : zNPCGoalCommon(goalID)
    {
    }
};

struct zNPCGoalBossSandyTaunt : zNPCGoalCommon
{
    F32 timeInGoal;

    zNPCGoalBossSandyTaunt(S32 goalID) : zNPCGoalCommon(goalID)
    {
    }
};

struct zNPCGoalBossSandyChase : zNPCGoalCommon
{
    F32 timeInGoal;

    zNPCGoalBossSandyChase(S32 goalID) : zNPCGoalCommon(goalID)
    {
    }
};

struct zNPCGoalBossSandyMelee : zNPCGoalCommon
{
    F32 timeInGoal;

    zNPCGoalBossSandyMelee(S32 goalID) : zNPCGoalCommon(goalID)
    {
    }
};

struct zNPCGoalBossSandyNoHead : zNPCGoalCommon
{
    F32 timeInGoal;
    U32 stage;
    F32 secsSincePatWasCarryingHead;

    zNPCGoalBossSandyNoHead(S32 goalID) : zNPCGoalCommon(goalID)
    {
    }
};

struct zNPCGoalBossSandyElbowDrop : zNPCGoalCommon
{
    F32 timeInGoal;
    U32 elbowFlags;

    zNPCGoalBossSandyElbowDrop(S32 goalID) : zNPCGoalCommon(goalID)
    {
    }
};

struct zNPCGoalBossSandyLeap : zNPCGoalCommon
{
    F32 timeInGoal;
    U32 stage;
    F32 startX;
    F32 startZ;
    F32 endX;
    F32 endZ;

    zNPCGoalBossSandyLeap(S32 goalID) : zNPCGoalCommon(goalID)
    {
    }

    S32 Name();
};

struct zNPCGoalBossSandySit : zNPCGoalCommon
{
    F32 timeInGoal;
    F32 totalTime;
    U32 sitFlags;

    zNPCGoalBossSandySit(S32 goalID) : zNPCGoalCommon(goalID)
    {
    }
};

struct zNPCGoalBossSandyGetUp : zNPCGoalCommon
{
    F32 timeInGoal;

    zNPCGoalBossSandyGetUp(S32 goalID) : zNPCGoalCommon(goalID)
    {
    }
};

struct zNPCGoalBossSandyRunToRope : zNPCGoalCommon
{
    F32 timeInGoal;

    zNPCGoalBossSandyRunToRope(S32 goalID) : zNPCGoalCommon(goalID)
    {
    }
};

struct zNPCGoalBossSandyClothesline : zNPCGoalCommon
{
    F32 timeInGoal;
    U32 stage;
    U32 playedAnimEarly;
    F32 totalHoverTime;
    xVec3 bounceStartPoint;

    zNPCGoalBossSandyClothesline(S32 goalID) : zNPCGoalCommon(goalID)
    {
    }
};

void zNPCBSandy_AddBoundEntsToGrid(zScene*);
void zNPCBSandy_GameIsPaused(zScene*);

xAnimTable* ZNPC_AnimTable_BossSandy();
xAnimTable* ZNPC_AnimTable_BossSandyHead();
xAnimTable* ZNPC_AnimTable_BossSandyScoreboard();

U32 HeadNotShocked(xAnimTransition*, xAnimSingle*, void*);
U32 HeadIsShocked(xAnimTransition*, xAnimSingle*, void*);
U32 HeadNotCarried(xAnimTransition*, xAnimSingle*, void*);
U32 HeadIsCarried(xAnimTransition*, xAnimSingle*, void*);

#endif
