#ifndef ZNPCTYPEAMBIENT_H
#define ZNPCTYPEAMBIENT_H

#include "zNPCTypeCommon.h"

struct zNPCAmbient : zNPCCommon
{
    zNPCAmbient(int32 myType);

    int32 AmbiHandleMail(NPCMsg msg);

    void Init(xEntAsset* asset);
    void Reset();
    void Process(xScene* xscn, float32 dt);
    int32 NPCMessage(NPCMsg* mail);
    void SelfSetup();

    virtual uint8 ColChkFlags() const;
    virtual uint8 ColPenFlags() const;
    virtual uint8 ColChkByFlags() const;
    virtual uint8 ColPenByFlags() const;
    virtual uint8 PhysicsFlags();
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
    int32 IsAlive();
};

struct zNPCNeptune : zNPCAmbient
{
    zNPCNeptune(int32 myType);

    void SelfSetup();

    uint8 ColChkFlags() const;
    uint8 ColPenFlags() const;
    uint8 ColChkByFlags() const;
    uint8 ColPenByFlags() const;
};

struct zNPCMimeFish : zNPCAmbient
{
    zNPCMimeFish(int32 myType);

    void Reset();
    void SelfSetup();
};

void ZNPC_Ambient_Startup();
void ZNPC_Ambient_Shutdown();
xFactoryInst* ZNPC_Create_Ambient(int32 who, RyzMemGrow* grow, void*);
void ZNPC_Destroy_Ambient(xFactoryInst* inst);
int32 JELY_grul_getAngry(xGoal* rawgoal, void* p1, en_trantype* trantype, float32 f, void* p2);

#endif