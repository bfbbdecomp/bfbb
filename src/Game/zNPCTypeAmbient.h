#ifndef ZNPCTYPEAMBIENT_H
#define ZNPCTYPEAMBIENT_H

#include "zNPCTypeCommon.h"

#define NPC_TYPE_ID_AMBIENT NPC_TYPE_ID('S', 0)
#define NPC_TYPE_ID_JELLY1 NPC_TYPE_ID('A', 0)
#define NPC_TYPE_ID_JELLY2 NPC_TYPE_ID('A', 1)
#define NPC_TYPE_ID_NEPTUNE NPC_TYPE_ID('A', 2)
#define NPC_TYPE_ID_MIMEFISH1 NPC_TYPE_ID('A', 3)
#define NPC_TYPE_ID_MIMEFISH2 NPC_TYPE_ID('A', 4)

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