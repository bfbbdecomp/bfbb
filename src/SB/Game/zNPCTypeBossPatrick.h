#ifndef ZNPCTYPEBOSSPATRICK_H
#define ZNPCTYPEBOSSPATRICK_H

#include "zNPCTypeBoss.h"
#include "zNPCGoalCommon.h"
#include "zPlatform.h"
#include "zCutsceneMgr.h"
#include "zEntPickup.h"

#include "xCamera.h"
#include "zNPCTypeVillager.h"

class newsfishSound
{
    // total size: 0x8
public:
    char* soundName; // offset 0x0, size 0x4
    unsigned int soundID; // offset 0x4, size 0x4
};

struct bossPatGlob
{
    xParabola path; // offset 0x0, size 0x24
    F32 t; // offset 0x24, size 0x4
    xVec3 lastPos; // offset 0x28, size 0xC
    xVec3 norm; // offset 0x34, size 0xC
    xVec3 convVel; // offset 0x40, size 0xC
    zPlatform* conv; // offset 0x4C, size 0x4
    U32 flags; // offset 0x50, size 0x4
};

struct bossPatBox
{
    xEnt* box;
    F32 velocity; // 0x1594
    F32 pos; // 0x1598
    F32 minY; // 0x159C
    U32 flags; // 0x15A0
};

struct bossPatShard
{
    xVec3 rotVec;
    F32 ang;
    F32 size;
    F32 maxSize;
};

struct zNPCBPatrick : zNPCBoss
{
    U32 bossFlags; // offset 0x2B4, size 0x4
    S32 hitPoints; // offset 0x2B8, size 0x4
    S32 round; // offset 0x2BC, size 0x4
    F32 gooHeight; // offset 0x2C0, size 0x4
    S32 gooLevel; // offset 0x2C4, size 0x4
    S32 notSwingingLastFrame; // offset 0x2C8, size 0x4
    xEnt* gooObj; // offset 0x2CC, size 0x4
    RpAtomic* spitModel; // offset 0x2D0, size 0x4
    RpAtomic* splatModel; // offset 0x2D4, size 0x4
    xVec3 arenaExtent; // offset 0x2D8, size 0xC
    xVec3 fudgePos; // offset 0x2E4, size 0xC
    xVec3 fudgeFace; // offset 0x2F0, size 0xC
    S32 numTasks; // offset 0x2FC, size 0x4
    S32 currTask; // offset 0x300, size 0x4
    S32 task[20]; // offset 0x304, size 0x50
    bossPatGlob glob[50]; // offset 0x354, size 0x1068
    S32 currGlob; // offset 0x13BC, size 0x4
    F32 splatTimer; // offset 0x13C0, size 0x4
    xEnt** boundList; // offset 0x13C4, size 0x4
    U32 chuckFlags[3]; // offset 0x13C8, size 0xC
    zNPCCommon* chuckList[3]; // offset 0x13D4, size 0xC
    zMovePoint* chuckMovePoint[3]; // offset 0x13E0, size 0xC
    xParEmitterCustomSettings freezeBreathSetting; // offset 0x13EC, size 0x16C
    zParEmitter* freezeBreathEmitter; // offset 0x1558, size 0x4
    xPar* parList[4]; // offset 0x155C, size 0x10
    xPar* lastEmitted; // offset 0x156C, size 0x4
    S32 numParticles; // offset 0x1570, size 0x4
    F32 particleTimer; // offset 0x1574, size 0x4
    F32 frozenTimer; // offset 0x1578, size 0x4
    xAnimState* animState; // offset 0x157C, size 0x4
    xAnimTransitionList* animTranList; // offset 0x1580, size 0x4
    xEnt* fudgeHandle; // offset 0x1584, size 0x4
    zParEmitter* fudgeEmitter; // offset 0x1588, size 0x4
    zParEmitter* steamEmitter; // offset 0x158C, size 0x4
    bossPatBox box[4][6]; // offset 0x1590, size 0x1E0
    bossPatBox backBox; // offset 0x1770, size 0x14
    zShrapnelAsset* boxBreak; // offset 0x1784, size 0x4
    zShrapnelAsset* boxSplash; // offset 0x1788, size 0x4
    F32 boxLandSndTimer; // offset 0x178C, size 0x4
    F32 boxSplashSndTimer; // offset 0x1790, size 0x4
    xEnt* swinger[8]; // offset 0x1794, size 0x20
    S32 currSwinger; // offset 0x17B4, size 0x4
    F32 origSwingerHeight; // offset 0x17B8, size 0x4
    F32 swingTimer; // offset 0x17BC, size 0x4
    xModelInstance* frozenSB; // offset 0x17C0, size 0x4
    xModelInstance* frozenSBIce; // offset 0x17C4, size 0x4
    RpAtomic* shardModel; // offset 0x17C8, size 0x4
    bossPatShard shard[10]; // offset 0x17CC, size 0xF0
    F32 iceScale; // offset 0x18BC, size 0x4
    F32 shakeAmp; // offset 0x18C0, size 0x4
    F32 shakePhase; // offset 0x18C4, size 0x4
    zShrapnelAsset* iceBreak; // offset 0x18C8, size 0x4
    RwRaster* iceWaveRaster; // offset 0x18CC, size 0x4
    zCutsceneMgr* round1Csn; // offset 0x18D0, size 0x4
    zCutsceneMgr* round2Csn; // offset 0x18D4, size 0x4
    zCutsceneMgr* round3Csn; // offset 0x18D8, size 0x4
    F32 csnTimer; // offset 0x18DC, size 0x4
    _zPortal* safeGroundPortal; // offset 0x18E0, size 0x4
    zNPCNewsFish* newsfish; // offset 0x18E4, size 0x4
    U32 nfFlags; // offset 0x18E8, size 0x4
    F32 badHitTimer; // offset 0x18EC, size 0x4
    S32 numPCHitsInARow; // offset 0x18F0, size 0x4
    S32 numMissesInARow; // offset 0x18F4, size 0x4
    S32 firstTimeR1Csn; // offset 0x18F8, size 0x4
    S32 firstUpdate; // offset 0x18FC, size 0x4
    zEntPickup* underwear[2]; // offset 0x1900, size 0x8
    zPlatform* conveyorBelt[7]; // offset 0x1908, size 0x1C
    xBinaryCamera bossCam;

    zNPCBPatrick(S32 myType);

    void Init(xEntAsset* asset);
    void Setup();
    void SelfSetup();
    void Reset();
    void Destroy();
    U32 AnimPick(S32 rawgoal, en_NPC_GOAL_SPOT gspot, xGoal* goal);
    void Process(xScene* xscn, F32 dt);
    void DuploNotice(en_SM_NOTICES note, void* data);
    void Damage(en_NPC_DAMAGE_TYPE dmg_type, xBase* who, const xVec3* vec_hit);

    void RenderGlobs();
    void RenderFrozenPlayer();
    void RenderExtra();
    void NewTime(xScene* xscn, F32 dt);
    S32 nextGoal();
    bossPatGlob* getNextFreeGlob(); // Not in PS2 DWARF
    void playSplat(xVec3* pos);
    U32 canSpawnChucks();
    void gotoRound(S32 num);
    F32 ConveyorTimeLeft(zPlatform* platform, xVec3* vec_unk); // Not in PS2 DWARF
    void ParabolaHitsConveyors(xParabola* parabola, xCollis* collis_unk);
    void bossPatBoxCheckCollide(bossPatBox* bx); // Not in PS2 DWARF
    void bossPatBoxUpdate(bossPatBox* bx, F32 dt);
    void hiddenByCutscene();
};

struct zNPCGoalBossPatIdle : zNPCGoalCommon
{
    F32 timeInGoal;
    U32 stage;

    zNPCGoalBossPatIdle(S32 goalID) : zNPCGoalCommon(goalID)
    {
    }

    S32 Enter(F32 dt, void* unk);
    S32 Process(en_trantype* trantype, F32 dt, void* ctxt, xScene* scene);
};

struct zNPCGoalBossPatTaunt : zNPCGoalCommon
{
    F32 timeInGoal;
    U32 stage;

    zNPCGoalBossPatTaunt(S32 goalID) : zNPCGoalCommon(goalID)
    {
    }

    S32 Enter(F32 dt, void* updCtxt);
    S32 Process(en_trantype* trantype, F32 dt, void* ctxt, xScene* scene);
};

struct zNPCGoalBossPatHit : zNPCGoalCommon
{
    F32 timeInGoal;
    U32 stage;

    zNPCGoalBossPatHit(S32 goalID) : zNPCGoalCommon(goalID)
    {
    }

    S32 Enter(F32 dt, void* updCtxt);
    S32 Process(en_trantype* trantype, F32 dt, void* ctxt, xScene* scene);
    S32 Exit(F32 dt, void* updCtxt);
};

struct zNPCGoalBossPatSpit : zNPCGoalCommon
{
    F32 timeInGoal;
    U32 stage;
    F32 timeLeftToSpit;

    zNPCGoalBossPatSpit(S32 goalID) : zNPCGoalCommon(goalID)
    {
    }

    S32 Enter(F32 dt, void* updCtxt);
    S32 Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* xscn);
};

struct zNPCGoalBossPatRun : zNPCGoalCommon
{
    F32 timeInGoal;
    U32 stage;
    U32 runSndID;

    zNPCGoalBossPatRun(S32 goalID) : zNPCGoalCommon(goalID)
    {
    }

    S32 Enter(F32 dt, void* unk);
    S32 Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* xscn);
    S32 Exit(F32 dt, void* unk);
};

struct zNPCGoalBossPatSmack : zNPCGoalCommon
{
    F32 timeInGoal; // 0x4c
    U32 stage; // 0x50
    F32 globNum; // 0x54

    zNPCGoalBossPatSmack(S32 goalID) : zNPCGoalCommon(goalID)
    {
    }

    S32 Enter(F32 dt, void* unk);
    S32 Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* xscn);
};

struct zNPCGoalBossPatFreeze : zNPCGoalCommon
{
    F32 timeInGoal;
    U32 stage;
    F32 freezeSlope;

    zNPCGoalBossPatFreeze(S32 goalID) : zNPCGoalCommon(goalID)
    {
    }

    S32 Enter(float, void*);
    S32 Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* xscn);
};

struct zNPCGoalBossPatSpawn : zNPCGoalCommon
{
    F32 timeInGoal;
    U32 stage;

    zNPCGoalBossPatSpawn(S32 goalID) : zNPCGoalCommon(goalID)
    {
    }

    S32 Enter(F32 dt, void* updCtxt);
};

struct zNPCGoalBossPatSpin : zNPCGoalCommon
{
    F32 timeInGoal;
    U32 stage;
    F32 numGlobs;
    xVec3 vel;
    xVec3 pole[4];
    S32 currPole;
    U32 spinSndID;
    U32 globSndID;

    zNPCGoalBossPatSpin(S32 goalID) : zNPCGoalCommon(goalID)
    {
    }

    S32 Exit(F32 dt, void* updCtxt);
};

struct zNPCGoalBossPatFudge : zNPCGoalCommon
{
    F32 timeInGoal; // offset 0x4C, size 0x4
    U32 stage; // offset 0x50, size 0x4
    F32 lerp; // offset 0x54, size 0x4
    F32 globNum; // offset 0x58, size 0x4
    U32 vomitSndID; // offset 0x5C, size 0x4

    zNPCGoalBossPatFudge(S32 goalID) : zNPCGoalCommon(goalID)
    {
    }

    S32 Enter(F32 dt, void* updCtxt);
};

void zNPCBPatrick_AddBoundEntsToGrid(zScene*);
void zNPCBPatrick_GameIsPaused(zScene*);

#endif
