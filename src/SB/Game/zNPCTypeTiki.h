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

    void RemoveFromFamily();

    void Init(xEntAsset* entass);
    void Reset();
    void Setup();
    void Process(xScene* xscn, F32 dt);
    S32 SysEvent(xBase* from, xBase* to, U32 toEvent, const F32* toParam, xBase* toParamWidget,
                 S32* handled);
    void AddChild(zNPCTiki* child);
    void RemoveChild(zNPCTiki* child);
    void RemoveParent(zNPCTiki* parent);
    void FindParents(zScene* zsc);
    void ParentUpdated(zNPCTiki* parent);
    void ParseINI();
    void SelfSetup();
    S32 IsHealthy();
    virtual void Damage(en_NPC_DAMAGE_TYPE damtype, xBase* who, const xVec3* vec_hit);
    S32 SetCarryState(en_NPC_CARRY_STATE cs);

    zNPCTiki(S32 myType) : zNPCCommon(myType)
    {
    }

    virtual S32 CanRope()
    {
        return 1;
    }

    virtual U32 AnimPick(int, en_NPC_GOAL_SPOT, xGoal*)
    {
        return xStrHash("Idle");
    }

    virtual void Move(xScene* xscn, F32 dt, xEntFrame*)
    {
    }

    virtual void BUpdate(xVec3* pos)
    {
        xEntDefaultBoundUpdate(this, pos);
    }

    virtual S32 IsAlive()
    {
        return (0x200 - (tikiFlag & 0x300) | (tikiFlag & 0x300) - 0x200) >> 0x1f;
    }

    virtual U8 ColChkFlags() const
    {
        return 0;
    }

    virtual U8 ColPenFlags() const
    {
        return 0;
    }

    virtual U8 ColChkByFlags() const
    {
        return 0x18;
    }

    virtual U8 ColPenByFlags() const
    {
        return 0x18;
    }

    virtual U8 PhysicsFlags() const
    {
        return 0;
    }
};

void ZNPC_Tiki_Startup();
void ZNPC_Tiki_Shutdown();
void zNPCTiki_InitStacking(zScene* zsc);
void zNPCTiki_InitFX(zScene*);
void zNPCTiki_ExplodeFX(zNPCTiki* tiki);
static void zNPCTiki_PickTikisToAnimate();
void zNPCTiki_Timestep(xScene* xscn, F32 dt);
void zNPCTiki_ReparentOrphans();
xFactoryInst* ZNPC_Create_Tiki(S32 who, RyzMemGrow* grow, void*);
void ZNPC_Destroy_Tiki(xFactoryInst* inst);

xAnimTable* ZNPC_AnimTable_Tiki();

#endif
