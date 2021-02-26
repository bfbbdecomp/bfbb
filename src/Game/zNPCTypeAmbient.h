#ifndef ZNPCTYPEAMBIENT_H
#define ZNPCTYPEAMBIENT_H

#include "zNPCTypeCommon.h"

struct zNPCAmbient : zNPCCommon
{
    zNPCAmbient(int32 myType);

    void Init(xEntAsset* asset);
    void Reset();
    void Process(xScene* xscn, float32 dt);
    void SelfSetup();
    int32 NPCMessage(NPCMsg* mail);
};

struct zNPCJelly : zNPCAmbient
{
    int32 cnt_angerLevel;
    int32 hitpoints;
    float32 tmr_pulseAlpha;
    zNPCCommon* npc_daddyJelly;

    zNPCJelly(int32 myType);

    void JellySpawn(xVec3* pos_spawn, float32 tym_fall);
    void JellyKill();

    void Init(xEntAsset* asset);
    void Reset();
    void BUpdate();
    void ParseINI();
    void SelfSetup();
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
int32 JELY_grul_getAngry(xGoal* rawgoal, void* p1, en_trantype* trantype, float32 f, void* p2);

#endif