#ifndef ZNPCTYPEDUPLOTRON_H
#define ZNPCTYPEDUPLOTRON_H

#include "zNPCTypeCommon.h"

struct zNPCDuplotron : zNPCCommon
{
    float32 tmr_smokeCycle;
    zNPCSpawner* spawner;
    float32 tmr_blink;
    int32 idx_blink;

    zNPCDuplotron(int32 myType);

    void SelfSetup();

    void VFXSmokeStack(float32 dt);
    void VFXOverheat(float32 dt, float32);
    void VFXCycleLights(float32 dt, int32 fastpace);

    // zNPCTypeCommon overrides
    void Move(xScene*, float32 dt, xEntFrame*);

    // xNPCBasic overrides
    uint8 ColChkFlags() const;
    uint8 ColPenFlags() const;
    uint8 ColChkByFlags() const;
    uint8 ColPenByFlags() const;
    uint8 PhysicsFlags() const;
};

extern uint32 g_hash_dupoanim[5];

void ZNPC_Duplotron_Startup();
void ZNPC_Duplotron_Shutdown();
xFactoryInst* ZNPC_Create_Duplotron(int32 who, RyzMemGrow* grow, void*);
void ZNPC_Destroy_Duplotron(xFactoryInst* inst);
void DUPO_KillEffects();
void DUPO_InitEffects();

#endif