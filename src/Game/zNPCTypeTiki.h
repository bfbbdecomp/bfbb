#ifndef ZNPCTYPETIKI_H
#define ZNPCTYPETIKI_H

#include <types.h>

#include "zNPCTypeCommon.h"

struct zScene;

struct zNPCTiki : zNPCCommon
{
    uint32 tikiFlag;
    xVec3 lastAt;
    xBound origLocalBound;
    xVec3 deltaPos;
    float32 timeToLive;
    float32 t1;
    float32 t2;
    float32 t3;
    xVec3 v1;
    float32 vel;
    float32 landHt;
    xEnt* nonTikiParent;
    xVec3 nonTikiParentDisp;
    uint8 numParents;
    zNPCTiki* parents[4];
    uint8 numChildren;
    zNPCTiki* children[4];
    zNPCTiki* nextOrphan;
    uint32 updatedParents;
    int32 contactParent;
    void* tikiAnim;
    float32 tikiAnimTime;

    void BUpdate(xVec3* pos);
    int32 IsAlive();
    void RemoveFromFamily();
    void FindParents(zScene* zsc);
    int32 SysEvent(xBase* from, xBase* to, uint32 toEvent, float32* toParam, xBase* toParamWidget,
                   int32* handled);
    void Process(xScene* xscn, float32 dt);
    void ParseINI();
    void SelfSetup();
    int32 SetCarryState(en_NPC_CARRY_STATE cs);
    void Damage(en_NPC_DAMAGE_TYPE damtype);
    void Init(xEntAsset* entass);
    void Setup();
    void Reset();
    bool IsHealthy();
};

#endif