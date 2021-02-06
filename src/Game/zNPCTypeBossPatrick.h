#ifndef ZNPCTYPEBOSSPATRICK_H
#define ZNPCTYPEBOSSPATRICK_H

#include "zNPCTypeBoss.h"
#include "zPlatform.h"
#include "zCutsceneMgr.h"
#include "zEntPickup.h"

#include "../Core/x/xCamera.h"

struct zNPCNewsFish;

struct bossPatGlob
{
    xParabola path;
    float32 t;
    xVec3 lastPos;
    xVec3 norm;
    xVec3 convVel;
    zPlatform* conv;
    uint32 flags;
};

struct bossPatBox
{
    xEnt* box;
    float32 velocity;
    float32 pos;
    float32 minY;
    uint32 flags;
};

struct bossPatShard
{
    xVec3 rotVec;
    float32 ang;
    float32 size;
    float32 maxSize;
};

struct zNPCBPatrick : zNPCBoss
{
    uint32 bossFlags;
    int32 hitPoints;
    int32 round;
    float32 gooHeight;
    int32 gooLevel;
    int32 notSwingingLastFrame;
    xEnt* gooObj;
    RpAtomic* spitModel;
    RpAtomic* splatModel;
    xVec3 arenaExtent;
    xVec3 fudgePos;
    xVec3 fudgeFace;
    int32 numTasks;
    int32 currTask;
    int32 task[20];
    bossPatGlob glob[50];
    int32 currGlob;
    float32 splatTimer;
    xEnt** boundList;
    uint32 chuckFlags[3];
    zNPCCommon* chuckList[3];
    zMovePoint* chuckMovePoint[3];
    xParEmitterCustomSettings freezeBreathSetting;
    zParEmitter* freezeBreathEmitter;
    xPar* parList[4];
    xPar* lastEmitted;
    int32 numParticles;
    float32 particleTimer;
    float32 frozenTimer;
    xAnimState* animState;
    xAnimTransitionList* animTranList;
    xEnt* fudgeHandle;
    zParEmitter* fudgeEmitter;
    zParEmitter* steamEmitter;
    bossPatBox box[3][8];
    bossPatBox backBox;
    zShrapnelAsset* boxBreak;
    zShrapnelAsset* boxSplash;
    float32 boxLandSndTimer;
    float32 boxSplashSndTimer;
    xEnt* swinger[8];
    int32 currSwinger;
    float32 origSwingerHeight;
    float32 swingTimer;
    xModelInstance* frozenSB;
    xModelInstance* frozenSBIce;
    RpAtomic* shardModel;
    bossPatShard shard[10];
    float32 iceScale;
    float32 shakeAmp;
    float32 shakePhase;
    zShrapnelAsset* iceBreak;
    RwRaster* iceWaveRaster;
    zCutsceneMgr* round1Csn;
    zCutsceneMgr* round2Csn;
    zCutsceneMgr* round3Csn;
    float32 csnTimer;
    _zPortal* safeGroundPortal;
    zNPCNewsFish* newsfish;
    uint32 nfFlags;
    float32 badHitTimer;
    int32 numPCHitsInARow;
    int32 numMissesInARow;
    int32 firstTimeR1Csn;
    int32 firstUpdate;
    zEntPickup* underwear[2];
    zPlatform* conveyorBelt[7];
    xBinaryCamera bossCam;

    zNPCBPatrick(int32 myType);
};

void zNPCBPatrick_AddBoundEntsToGrid(zScene*);
void zNPCBPatrick_GameIsPaused(zScene*);

#endif