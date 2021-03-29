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

    void VFXSmokeStack(float32 dt);
    void VFXOverheat(float32 dt, float32);
    void VFXCycleLights(float32 dt, int32 fastpace);
};

extern uint32 g_hash_dupoanim[5];

void ZNPC_Duplotron_Startup();
void ZNPC_Duplotron_Shutdown();
xFactoryInst* ZNPC_Create_Duplotron(int32 who, RyzMemGrow* grow, void*);
void ZNPC_Destroy_Duplotron(xFactoryInst* inst);
void DUPO_KillEffects();
void DUPO_InitEffects();

#endif