#ifndef ZNPCTYPETIKI_H
#define ZNPCTYPETIKI_H

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
    float32 landHt;          // 0x328
    xEnt *nonTikiParent;     // 0x32c
    xVec3 nonTikiParentDisp; // 0x330
    uint8 numParents;        // 0x33c
    zNPCTiki *parents[4];    // 0x340
    uint8 numChildren;
    zNPCTiki *children[4];
    zNPCTiki *nextOrphan; // 0x364
    uint32 updatedParents;
    int32 contactParent;
    void *tikiAnim;
    float32 tikiAnimTime;

    zNPCTiki(int32);

    void RemoveFromFamily();
    void FindParents(zScene *zsc);

    void Init(xEntAsset *entass);
    void Reset();
    void Setup();
    void Process(xScene *xscn, float32 dt);
    void BUpdate(xVec3 *pos);
    virtual void Move(xScene *xscn, float32 dt, xEntFrame *);
    int32 SysEvent(xBase *from, xBase *to, uint32 toEvent, float32 *toParam, xBase *toParamWidget,
                   int32 *handled);
    void ParseINI();
    void SelfSetup();
    int32 IsHealthy();
    virtual int32 IsAlive();
    virtual void Damage(en_NPC_DAMAGE_TYPE damtype, xBase *who, const xVec3 *vec_hit);
    virtual int32 Respawn(xVec3 *pos, zMovePoint *mvptFirst, zMovePoint *mvptSpawnRef);
    virtual void DuploOwner(zNPCCommon *duper);
    virtual void DuploNotice();
    virtual int32 CanRope();
    int32 SetCarryState(en_NPC_CARRY_STATE cs);
    virtual void AnimPick();
};

void ZNPC_Tiki_Startup();
void ZNPC_Tiki_Shutdown();
void zNPCTiki_InitStacking(zScene *zsc);
void zNPCTiki_InitFX(zScene *);
void zNPCTiki_ExplodeFX(zNPCTiki *tiki);
xFactoryInst *ZNPC_Create_Tiki(int32 who, RyzMemGrow *grow, void *);
void ZNPC_Destroy_Tiki(xFactoryInst *inst);

#endif
