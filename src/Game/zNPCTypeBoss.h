#ifndef ZNPCTYPEBOSS_H
#define ZNPCTYPEBOSS_H

#include "zNPCTypeCommon.h"
#include "zNPCSupport.h"

#define NPC_TYPE_ID_BOSSSANDY NPC_TYPE_ID('B', 0)
#define NPC_TYPE_ID_BOSSPATRICK NPC_TYPE_ID('B', 1)
#define NPC_TYPE_ID_BOSSSB1 NPC_TYPE_ID('B', 2)
#define NPC_TYPE_ID_BOSSSB2 NPC_TYPE_ID('B', 3)
#define NPC_TYPE_ID_BOSSPLANKTON NPC_TYPE_ID('B', 4)

struct zNPCBoss : zNPCCommon
{
    NPCTarget tgt_cur;

    zNPCBoss(int32 myType);

    virtual void Setup();
    virtual uint8 ColChkFlags() const;
    virtual uint8 ColPenFlags() const;
    virtual uint8 ColChkByFlags() const;
    virtual uint8 ColPenByFlags() const;
    virtual uint8 PhysicsFlags() const;
    virtual float32 AttackTimeLeft();
    virtual void HoldUpDude();
    virtual void ThanksImDone();

protected:
    // This prevents implicit destructors from being generated in subclasses of zNPCBoss
    ~zNPCBoss();
};

void ZNPC_Boss_Startup();
void ZNPC_Boss_Shutdown();
xFactoryInst* ZNPC_Create_Boss(int32 who, RyzMemGrow* grow, void*);
void ZNPC_Destroy_Boss(xFactoryInst* inst);

#endif