#ifndef ZNPCTYPETIKI_H
#define ZNPCTYPETIKI_H

#include "zNPCTypeCommon.h"

#define NPC_TYPE_ID_TIKIWOOD NPC_TYPE_ID('T', 0)
#define NPC_TYPE_ID_TIKILOVEY NPC_TYPE_ID('T', 1)
#define NPC_TYPE_ID_TIKISHHH NPC_TYPE_ID('T', 2)
#define NPC_TYPE_ID_TIKITHUNDER NPC_TYPE_ID('T', 3)
#define NPC_TYPE_ID_TIKISTONE NPC_TYPE_ID('T', 4)

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

    zNPCTiki(int32);

    void BUpdate(xVec3* pos);
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
    int32 IsHealthy();
    virtual int32 IsAlive();
    virtual void Damage(en_NPC_DAMAGE_TYPE damtype, xBase* who, xVec3* vec_hit);
    virtual int32 Respawn(xVec3* pos, zMovePoint* mvptFirst, zMovePoint* mvptSpawnRef);
    virtual void DuploOwner(zNPCCommon* duper);
    virtual void DuploNotice();
};

void ZNPC_Tiki_Startup();
void ZNPC_Tiki_Shutdown();
void zNPCTiki_InitStacking(zScene* zsc);
void zNPCTiki_InitFX(zScene*);
void zNPCTiki_ExplodeFX(zNPCTiki* tiki);
xFactoryInst* ZNPC_Create_Tiki(int32 who, RyzMemGrow* grow, void*);
void ZNPC_Destroy_Tiki(xFactoryInst* inst);

#endif