#ifndef ZNPCTYPETEST_H
#define ZNPCTYPETEST_H

#include "zNPCTypeCommon.h"

struct zNPCTest : zNPCCommon
{
    S32 numAnimations;
    S32 currentState;
    F32 transitionTimer;

    zNPCTest(S32 myType);

    virtual void Reset();
    virtual void Process(xScene* xscn, F32 dt);
    virtual void SelfSetup();
    virtual U32 AnimPick(S32, en_NPC_GOAL_SPOT, xGoal*);
};

void zNPCTiki_InitFX(zScene* scene);
void ZNPC_Test_Startup();
void ZNPC_Test_Shutdown();
xFactoryInst* ZNPC_Create_Test(S32 who, RyzMemGrow* grow, void*);
void ZNPC_Destroy_Test(xFactoryInst* inst);
xAnimTable* ZNPC_AnimTable_Test();

#endif
