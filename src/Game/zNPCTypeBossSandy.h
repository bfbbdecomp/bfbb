#ifndef ZNPCTYPEBOSSSANDY_H
#define ZNPCTYPEBOSSSANDY_H

#include "zNPCTypeBoss.h"
#include "zCutsceneMgr.h"
#include "zEntPickup.h"

#include "../Core/x/xEntBoulder.h"
#include "../Core/x/xFX.h"
#include "../Core/x/xCamera.h"

struct zNPCNewsFish;

struct zNPCBSandy : zNPCBoss
{
    xEnt** boundList;
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
};

void zNPCBSandy_AddBoundEntsToGrid(zScene*);
void zNPCBSandy_GameIsPaused(zScene*);

#endif