#ifndef ZNPCTYPETIKI_H
#define ZNPCTYPETIKI_H

#include "zNPCTypeCommon.h"

struct zScene;

struct zNPCTiki : zNPCCommon
{
    U32 tikiFlag;
    xVec3 lastAt;
    xBound origLocalBound;
    xVec3 deltaPos;
    F32 timeToLive;
    F32 t1;
    F32 t2;
    F32 t3;
    xVec3 v1;
    F32 vel;
    F32 landHt; // 0x328
    xEnt* nonTikiParent; // 0x32c
    xVec3 nonTikiParentDisp; // 0x330
    U8 numParents; // 0x33c
    zNPCTiki* parents[4]; // 0x340
    U8 numChildren;
    zNPCTiki* children[4];
    zNPCTiki* nextOrphan; // 0x364
    U32 updatedParents;
    S32 contactParent;
    void* tikiAnim;
    F32 tikiAnimTime;

    zNPCTiki(S32);

    void RemoveFromFamily();
    void FindParents(zScene* zsc);

    void Init(xEntAsset* entass);
    void Reset();
    void Setup();
    void Process(xScene* xscn, F32 dt);
    void BUpdate(xVec3* pos);
    virtual void Move(xScene* xscn, F32 dt, xEntFrame*);
    S32 SysEvent(xBase* from, xBase* to, U32 toEvent, F32* toParam, xBase* toParamWidget,
                 S32* handled);
    void ParseINI();
    void SelfSetup();
    S32 IsHealthy();
    virtual S32 IsAlive();
    U8 PhysicsFlags() const;
    U8 ColChkByFlags() const;
    U8 ColPenFlags() const;
    U8 ColChkFlags() const;
    U8 ColPenByFlags() const;
    virtual void Damage(en_NPC_DAMAGE_TYPE damtype, xBase* who, const xVec3* vec_hit);
    virtual S32 Respawn(xVec3* pos, zMovePoint* mvptFirst, zMovePoint* mvptSpawnRef);
    virtual void DuploOwner(zNPCCommon* duper);
    virtual void DuploNotice();
    virtual S32 CanRope();
    S32 SetCarryState(en_NPC_CARRY_STATE cs);
    virtual void AnimPick();
};

void ZNPC_Tiki_Startup();
void ZNPC_Tiki_Shutdown();
void zNPCTiki_InitStacking(zScene* zsc);
void zNPCTiki_InitFX(zScene*);
void zNPCTiki_ExplodeFX(zNPCTiki* tiki);
xFactoryInst* ZNPC_Create_Tiki(S32 who, RyzMemGrow* grow, void*);
void ZNPC_Destroy_Tiki(xFactoryInst* inst);
void zNPCTiki_Timestep(xScene* xscn, F32 dt);

xAnimTable* ZNPC_AnimTable_Tiki();

#endif
