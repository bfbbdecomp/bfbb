#ifndef ZNPCTYPEBOSSSANDY_H
#define ZNPCTYPEBOSSSANDY_H

#include "zNPCTypeBoss.h"
#include "zNPCTypeVillager.h"
#include "zNPCGoalCommon.h"
#include "zCutsceneMgr.h"
#include "zEntPickup.h"

#include "../Core/x/xEntBoulder.h"
#include "../Core/x/xFX.h"
#include "../Core/x/xCamera.h"
#include "../Core/x/xModel.h"

struct BossDamageEffectRecord
{
    float32 save_F32[64];
    float32 BDEtimer;
    xModelInstance* BDEminst;
};

struct zNPCBSandy : zNPCBoss
{
    xEnt** boundList; // 0x2B4
    uint32* boundFlags;
    float32* boundEmitTimer;
    uint32 bossFlags;
    xVec3 currDir;
    float32 currVel;
    int32 hitPoints;
    int32 round;
    xVec3 ringCorner[8];
    xVec3 ringEdgeCenter[8];
    xVec3 ropeNormal[8];
    xVec3 bouncePoint[8];
    xEnt* ropeObject[4][8];
    xEnt* ropeObjectLo[8];
    xEnt* ropeSb;
    xEnt* ropeSbDamaged;
    xEnt* turnbuckle[8];
    float32 edgeAlpha[8];
    float32 scoreboardAlpha;
    int32 fromRope;
    int32 toRope;
    float32 limbLength;
    RwRaster* helmetRaster;
    RwRaster* feetRaster;
    RwRaster* targetRaster;
    RxObjSpace3DVertex iconVert[4];
    xVec3 targetPos;
    xQuat qHead;
    xQuat qBoulder;
    xVec3 pHead;
    xVec3 pBoulder;
    float32 magnetizeTime;
    xVec3 shockPos;
    xParEmitterCustomSettings dustEddieSetting;
    zParEmitter* dustEddieEmitter;
    zParEmitter* shockwaveEmitter;
    xEnt* hangingScoreboard;
    xEnt* bustedScoreboard;
    xEnt* crashedScoreboard;
    xEntBoulder* headBoulder;
    zShrapnelAsset* scoreboardShrap;
    zShrapnelAsset* sboardSecondShrap;
    zShrapnelAsset* sboardThirdShrap;
    zShrapnelAsset* lightRigShrap;
    xEnt* lightRig[4];
    zCutsceneMgr* round1Csn;
    zCutsceneMgr* round2Csn;
    zCutsceneMgr* round3Csn;
    float32 csnTimer;
    _tagLightningAdd sparks[6];
    zLightning* wireLight[2];
    xVec3 endPoints[2][4];
    xMat4x3 sparkTransform[2][2];
    float32 timeToNextBolt[2];
    float32 maxLightningWait[2];
    uint32 springSndID;
    uint32 ambientSndID;
    float32 jawTime;
    float32 jawLevel;
    float32 jawThreshold;
    void* jawData;
    int32 isBeat;
    xVec3 laserPoint[16];
    xFXRibbon laserShow;
    xFXRibbon::curve_node curveNode[2];
    float32 curveNodeAlpha;
    float32 curveNodeR;
    float32 curveNodeG;
    float32 curveNodeB;
    zNPCNewsFish* newsfish;
    uint32 nfFlags;
    float32 shockRadius;
    float32 shockwaveGrowthRate;
    float32 shockwaveMaxRadius;
    float32 edropTurnMinTime;
    float32 edropShockwaveTime;
    int32 firstTimeR1Csn;
    int32 firstUpdate;
    zEntPickup* underwear[3];
    xBinaryCamera bossCam;
    xBinaryCamera specialBossCam;

    zNPCBSandy(int32 myType);

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
    virtual void Process(xScene* xscn, float32 dt); // 8014075c entry=7
    virtual void NewTime(xScene* xscn, float32 dt); // 801419d0 entry=9
    virtual void Render(); // 8013f9bc entry=12
    virtual void ParseINI(); // 8013f1ac entry=25
    virtual void SelfSetup(); // 8013e5ec entry=28
    virtual void Damage(en_NPC_DAMAGE_TYPE damtype, xBase*, xVec3 const*); // 8014184c entry=32
    virtual uint32 AnimPick(int32 gid, en_NPC_GOAL_SPOT param_2,
                            xGoal* rawgoal); // 8013f1f8 entry=44
};

struct zNPCGoalBossSandyIdle : zNPCGoalCommon
{
    float32 timeInGoal;

    zNPCGoalBossSandyIdle(int32 goalID) : zNPCGoalCommon(goalID)
    {
    }
};

struct zNPCGoalBossSandyTaunt : zNPCGoalCommon
{
    float32 timeInGoal;

    zNPCGoalBossSandyTaunt(int32 goalID) : zNPCGoalCommon(goalID)
    {
    }
};

struct zNPCGoalBossSandyChase : zNPCGoalCommon
{
    float32 timeInGoal;

    zNPCGoalBossSandyChase(int32 goalID) : zNPCGoalCommon(goalID)
    {
    }
};

struct zNPCGoalBossSandyMelee : zNPCGoalCommon
{
    float32 timeInGoal;

    zNPCGoalBossSandyMelee(int32 goalID) : zNPCGoalCommon(goalID)
    {
    }
};

struct zNPCGoalBossSandyNoHead : zNPCGoalCommon
{
    float32 timeInGoal;
    uint32 stage;
    float32 secsSincePatWasCarryingHead;

    zNPCGoalBossSandyNoHead(int32 goalID) : zNPCGoalCommon(goalID)
    {
    }
};

struct zNPCGoalBossSandyElbowDrop : zNPCGoalCommon
{
    float32 timeInGoal;
    uint32 elbowFlags;

    zNPCGoalBossSandyElbowDrop(int32 goalID) : zNPCGoalCommon(goalID)
    {
    }
};

struct zNPCGoalBossSandyLeap : zNPCGoalCommon
{
    float32 timeInGoal;
    uint32 stage;
    float32 startX;
    float32 startZ;
    float32 endX;
    float32 endZ;

    zNPCGoalBossSandyLeap(int32 goalID) : zNPCGoalCommon(goalID)
    {
    }

    int32 Name();
};

struct zNPCGoalBossSandySit : zNPCGoalCommon
{
    float32 timeInGoal;
    float32 totalTime;
    uint32 sitFlags;

    zNPCGoalBossSandySit(int32 goalID) : zNPCGoalCommon(goalID)
    {
    }
};

struct zNPCGoalBossSandyGetUp : zNPCGoalCommon
{
    float32 timeInGoal;

    zNPCGoalBossSandyGetUp(int32 goalID) : zNPCGoalCommon(goalID)
    {
    }
};

struct zNPCGoalBossSandyRunToRope : zNPCGoalCommon
{
    float32 timeInGoal;

    zNPCGoalBossSandyRunToRope(int32 goalID) : zNPCGoalCommon(goalID)
    {
    }
};

struct zNPCGoalBossSandyClothesline : zNPCGoalCommon
{
    float32 timeInGoal;
    uint32 stage;
    uint32 playedAnimEarly;
    float32 totalHoverTime;
    xVec3 bounceStartPoint;

    zNPCGoalBossSandyClothesline(int32 goalID) : zNPCGoalCommon(goalID)
    {
    }
};

void zNPCBSandy_AddBoundEntsToGrid(zScene*);
void zNPCBSandy_GameIsPaused(zScene*);

uint32 HeadNotShocked(xAnimTransition*, xAnimSingle*, void*);
uint32 HeadIsShocked(xAnimTransition*, xAnimSingle*, void*);
uint32 HeadNotCarried(xAnimTransition*, xAnimSingle*, void*);
uint32 HeadIsCarried(xAnimTransition*, xAnimSingle*, void*);

#endif