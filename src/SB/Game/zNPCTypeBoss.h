#ifndef ZNPCTYPEBOSS_H
#define ZNPCTYPEBOSS_H

#include "zNPCTypeCommon.h"
#include "zNPCSupport.h"

struct zNPCBoss : zNPCCommon
{
    NPCTarget tgt_cur; // 0x2A0

    zNPCBoss(S32 myType);

    virtual void Setup();
    virtual U8 ColChkFlags() const;
    virtual U8 ColPenFlags() const;
    virtual U8 ColChkByFlags() const;
    virtual U8 ColPenByFlags() const;
    virtual U8 PhysicsFlags() const;
    virtual F32 AttackTimeLeft();
    virtual void HoldUpDude();
    virtual void ThanksImDone();

protected:
    // This prevents implicit destructors from being generated in subclasses of zNPCBoss
    ~zNPCBoss();
};

void zNPCBoss_ScenePrepare();
void ZNPC_Boss_Startup();
void ZNPC_Boss_Shutdown();
xFactoryInst* ZNPC_Create_Boss(S32 who, RyzMemGrow* grow, void*);
void ZNPC_Destroy_Boss(xFactoryInst* inst);

#define ANIM_COUNT 78
extern U32 g_hash_bossanim[ANIM_COUNT];
extern char* g_strz_bossanim[ANIM_COUNT];

#endif
