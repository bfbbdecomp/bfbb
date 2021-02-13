#ifndef ZNPCTYPEBOSS_H
#define ZNPCTYPEBOSS_H

#include "zNPCTypeCommon.h"
#include "zNPCSupport.h"

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
    virtual void SpeakStart();
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