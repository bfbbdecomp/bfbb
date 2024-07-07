#ifndef ZNPCTYPEBOSSPATRICK_H
#define ZNPCTYPEBOSSPATRICK_H

#include "zNPCTypeBoss.h"
#include "zNPCGoalCommon.h"
#include "zPlatform.h"
#include "zCutsceneMgr.h"
#include "zEntPickup.h"

#include "xCamera.h"

struct zNPCNewsFish;

struct bossPatGlob
{
    xParabola path;
    F32 t;
    xVec3 lastPos;
    xVec3 norm;
    xVec3 convVel;
    zPlatform* conv;
    U32 flags;
};

struct bossPatBox
{
    xEnt* box;
    F32 velocity;
    F32 pos;
    F32 minY;
    U32 flags;
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
    U32 bossFlags;
    S32 hitPoints;
    S32 round;
    F32 gooHeight;
    S32 gooLevel;
    S32 notSwingingLastFrame;
    xEnt* gooObj;
    RpAtomic* spitModel;
    RpAtomic* splatModel;
    xVec3 arenaExtent;
    xVec3 fudgePos;
    xVec3 fudgeFace;
    S32 numTasks;
    S32 currTask;
    S32 task[20];
    bossPatGlob glob[50];
    S32 currGlob;
    F32 splatTimer;
    xEnt** boundList;
    U32 chuckFlags[3];
    zNPCCommon* chuckList[3];
    zMovePoint* chuckMovePoint[3];
    xParEmitterCustomSettings freezeBreathSetting;
    zParEmitter* freezeBreathEmitter;
    xPar* parList[4];
    xPar* lastEmitted;
    S32 numParticles;
    F32 particleTimer;
    F32 frozenTimer;
    xAnimState* animState;
    xAnimTransitionList* animTranList;
    xEnt* fudgeHandle;
    zParEmitter* fudgeEmitter;
    zParEmitter* steamEmitter;
    bossPatBox box[3][8];
    bossPatBox backBox;
    zShrapnelAsset* boxBreak;
    zShrapnelAsset* boxSplash;
    F32 boxLandSndTimer;
    F32 boxSplashSndTimer;
    xEnt* swinger[8];
    S32 currSwinger;
    F32 origSwingerHeight;
    F32 swingTimer;
    xModelInstance* frozenSB;
    xModelInstance* frozenSBIce;
    RpAtomic* shardModel;
    bossPatShard shard[10];
    F32 iceScale;
    F32 shakeAmp;
    F32 shakePhase;
    zShrapnelAsset* iceBreak;
    RwRaster* iceWaveRaster;
    zCutsceneMgr* round1Csn;
    zCutsceneMgr* round2Csn;
    zCutsceneMgr* round3Csn;
    F32 csnTimer;
    _zPortal* safeGroundPortal;
    zNPCNewsFish* newsfish;
    U32 nfFlags;
    F32 badHitTimer;
    S32 numPCHitsInARow;
    S32 numMissesInARow;
    S32 firstTimeR1Csn;
    S32 firstUpdate;
    zEntPickup* underwear[2];
    zPlatform* conveyorBelt[7];
    xBinaryCamera bossCam;

    zNPCBPatrick(S32 myType);
};

struct zNPCGoalBossPatIdle : zNPCGoalCommon
{
    F32 timeInGoal;
    U32 stage;

    zNPCGoalBossPatIdle(S32 goalID) : zNPCGoalCommon(goalID)
    {
    }
};

struct zNPCGoalBossPatTaunt : zNPCGoalCommon
{
    F32 timeInGoal;
    U32 stage;

    zNPCGoalBossPatTaunt(S32 goalID) : zNPCGoalCommon(goalID)
    {
    }
};

struct zNPCGoalBossPatHit : zNPCGoalCommon
{
    F32 timeInGoal;
    U32 stage;

    zNPCGoalBossPatHit(S32 goalID) : zNPCGoalCommon(goalID)
    {
    }
};

struct zNPCGoalBossPatSpit : zNPCGoalCommon
{
    F32 timeInGoal;
    U32 stage;
    F32 timeLeftToSpit;

    zNPCGoalBossPatSpit(S32 goalID) : zNPCGoalCommon(goalID)
    {
    }
};

struct zNPCGoalBossPatRun : zNPCGoalCommon
{
    F32 timeInGoal;
    U32 stage;
    U32 runSndID;

    zNPCGoalBossPatRun(S32 goalID) : zNPCGoalCommon(goalID)
    {
    }
};

struct zNPCGoalBossPatSmack : zNPCGoalCommon
{
    F32 timeInGoal;
    U32 stage;
    F32 globNum;

    zNPCGoalBossPatSmack(S32 goalID) : zNPCGoalCommon(goalID)
    {
    }
};

struct zNPCGoalBossPatFreeze : zNPCGoalCommon
{
    F32 timeInGoal;
    U32 stage;
    F32 freezeSlope;

    zNPCGoalBossPatFreeze(S32 goalID) : zNPCGoalCommon(goalID)
    {
    }
};

struct zNPCGoalBossPatSpawn : zNPCGoalCommon
{
    F32 timeInGoal;
    U32 stage;

    zNPCGoalBossPatSpawn(S32 goalID) : zNPCGoalCommon(goalID)
    {
    }
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
};

struct zNPCGoalBossPatFudge : zNPCGoalCommon
{
    F32 timeInGoal;
    U32 stage;
    F32 lerp;
    F32 globNum;
    U32 vomitSndID;

    zNPCGoalBossPatFudge(S32 goalID) : zNPCGoalCommon(goalID)
    {
    }
};

void zNPCBPatrick_AddBoundEntsToGrid(zScene*);
void zNPCBPatrick_GameIsPaused(zScene*);

#endif
