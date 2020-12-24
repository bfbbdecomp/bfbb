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
    void RemoveFromFamily();
    void FindParents(zScene* zsc);
    int32 SysEvent(xBase* from, xBase* to, uint32 toEvent, float32* toParam, xBase* toParamWidget,
                   int32* handled);
    void Process(xScene* xscn, float32 dt);
    int32 SetCarryState(en_NPC_CARRY_STATE cs);
    void Damage(en_NPC_DAMAGE_TYPE damtype);
    void Init(xEntAsset* entass);
    void Setup();
    void Reset();
    int32 NPCMessage(NPCMsg* mail);
	void RenderExtra();
    void RenderExtraPostParticles();
    void ParseINI();
    void ParseLinks();
    void ParseProps();
    void SelfSetup();
    void SelfDestroy();
    int32 IsHealthy();
    int32 IsAlive();
    void Damage(en_NPC_DAMAGE_TYPE damtype, xBase* who, xVec3* vec_hit);
    int32 Respawn(xVec3* pos, zMovePoint* mvptFirst, zMovePoint* mvptSpawnRef);
    void DuploOwner(zNPCCommon* duper);
    void DuploNotice();
};

void ZNPC_Tiki_Startup();
void ZNPC_Tiki_Shutdown();

#endif