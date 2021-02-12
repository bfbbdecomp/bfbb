#ifndef ZNPCTYPEAMBIENT_H
#define ZNPCTYPEAMBIENT_H

#include "zNPCTypeCommon.h"

struct zNPCAmbient : zNPCCommon
{
    zNPCAmbient(int32 myType);
};

struct zNPCJelly : zNPCAmbient
{
    int32 cnt_angerLevel;
    int32 hitpoints;
    float32 tmr_pulseAlpha;
    zNPCCommon* npc_daddyJelly;

    zNPCJelly(int32 myType);
};

struct zNPCNeptune : zNPCAmbient
{
    zNPCNeptune(int32 myType);
};

struct zNPCMimeFish : zNPCAmbient
{
    zNPCMimeFish(int32 myType);
};

void ZNPC_Ambient_Startup();
void ZNPC_Ambient_Shutdown();
xFactoryInst* ZNPC_Create_Ambient(int32 who, RyzMemGrow* grow, void*);
void ZNPC_Destroy_Ambient(xFactoryInst* inst);

#endif