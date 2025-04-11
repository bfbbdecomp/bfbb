#ifndef ZNPCTYPEAMBIENT_H
#define ZNPCTYPEAMBIENT_H

#include "zNPCTypeCommon.h"

struct zNPCAmbient : zNPCCommon
{
    zNPCAmbient(S32 myType);

    S32 AmbiHandleMail(NPCMsg msg);

    void Init(xEntAsset* asset);
    void Reset();
    void Process(xScene* xscn, F32 dt);
    S32 NPCMessage(NPCMsg* mail);
    void SelfSetup();

    virtual U8 ColChkFlags() const;
    virtual U8 ColPenFlags() const;
    virtual U8 ColChkByFlags() const;
    virtual U8 ColPenByFlags() const;
    virtual U8 PhysicsFlags();
    S32 AmbiHandleMail(NPCMsg*);
};

struct zNPCJelly : zNPCAmbient
{
    S32 cnt_angerLevel; // 0x2A0
    S32 hitpoints; // 0x2A4
    F32 tmr_pulseAlpha;
    zNPCCommon* npc_daddyJelly;

    zNPCJelly(S32 myType);

    void JellySpawn(const xVec3* pos_spawn, F32 tym_fall);
    void JellyKill();

    void Init(xEntAsset* asset);
    void Process(xScene* xscn, F32 dt);
    S32 AmbiHandleMail(NPCMsg* msg);
    void Reset();
    void BUpdate(xVec3* unk);
    void ParseINI();
    void SelfSetup();
    S32 IsAlive();

    void PlayWithAlpha(F32 unk);
    void PlayWithAnimSpd();
    void PumpFaster();
    xVec3* JellyBoneWorldPos(xVec3* pos, S32 idx_request) const;
    void PlayWithLightnin();
    void SetAlpha(F32 alpha);

    U32 AnimPick(S32 animID, en_NPC_GOAL_SPOT gspot, xGoal* goal);
    void ActLikeOctopus();
};

struct zNPCNeptune : zNPCAmbient
{
    zNPCNeptune(S32 myType);

    void ParseINI();
    void SelfSetup();
    void Reset();

    U8 ColChkFlags() const;
    U8 ColPenFlags() const;
    U8 ColChkByFlags() const;
    U8 ColPenByFlags() const;
};

struct zNPCMimeFish : zNPCAmbient
{
    zNPCMimeFish(S32 myType);

    void Reset();
    void SelfSetup();
    void Process(xScene* xscn, F32 dt);
};

void ZNPC_Ambient_Startup();
void ZNPC_Ambient_Shutdown();
xFactoryInst* ZNPC_Create_Ambient(S32 who, RyzMemGrow* grow, void*);
void ZNPC_Destroy_Ambient(xFactoryInst* inst);
S32 JELY_grul_getAngry(xGoal* rawgoal, void* p1, en_trantype* trantype, F32 f, void* p2);

xAnimTable* ZNPC_AnimTable_Ambient();
xAnimTable* ZNPC_AnimTable_Jelly();
xAnimTable* ZNPC_AnimTable_Neptune();

#endif
