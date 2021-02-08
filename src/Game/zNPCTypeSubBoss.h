#ifndef ZNPCTYPESUBBOSS_H
#define ZNPCTYPESUBBOSS_H

#include "zNPCTypeCommon.h"
#include "zNPCSupport.h"

#define NPC_TYPE_ID_KINGJELLY NPC_TYPE_ID('H', 0)
#define NPC_TYPE_ID_DUTCHMAN NPC_TYPE_ID('H', 1)
#define NPC_TYPE_ID_PRAWN NPC_TYPE_ID('H', 2)

struct zNPCSubBoss : zNPCCommon
{
    NPCTarget tgt_cur;

    zNPCSubBoss(int32 myType);

    virtual void Setup();
    virtual uint8 ColChkFlags() const;
    virtual uint8 ColPenFlags() const;
    virtual uint8 ColChkByFlags() const;
    virtual uint8 ColPenByFlags() const;
    virtual uint8 PhysicsFlags() const;
};

void ZNPC_SubBoss_Startup();
void ZNPC_SubBoss_Shutdown();
void zNPCSubBoss_ScenePrepare();
void zNPCSubBoss_SceneFinish();
xFactoryInst* ZNPC_Create_SubBoss(int32 who, RyzMemGrow* grow, void*);
void ZNPC_Destroy_SubBoss(xFactoryInst* inst);

#endif