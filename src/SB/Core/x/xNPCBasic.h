#ifndef XNPCBASIC_H
#define XNPCBASIC_H

#include "xEnt.h"
#include "xFactory.h"
#include "xShadowSimple.h"

enum en_npcperf
{
    eNPCPerfZero,

    // These two are only guesses! Need more info to be sure.
    eNPCPerfEnable,
    eNPCPerfDisable,
};

// Values names in this enum not known at all, it is not present in the dwarf
// debug info.
enum en_npcdcat
{
    eNPCDCAT_Zero,
    eNPCDCAT_Seven = 7,
    eNPCDCAT_Eight = 8,
    eNPCDCAT_Eleven = 11,
};

struct xNPCBasic : xEnt, xFactoryInst
{
    // Offset: 0xDC
    void (*f_setup)(xEnt*);
    void (*f_reset)(xEnt*);

    // Offset: 0xE4
    struct
    {
        S32 flg_basenpc : 16;
        S32 inUpdate : 8;
        U32 flg_upward : 8;
    } flags1;

    // Offset: 0xE8
    S32 colFreq;
    S32 colFreqReset;

    // Offset: 0xF0
    struct
    {
        U32 flg_colCheck : 8;
        U32 flg_penCheck : 8;
        U32 flg_unused : 16;
    } flags2;

    // Offset: 0xF4
    S32 myNPCType;

    // Offset: 0xF8
    xEntShadow entShadow_embedded;

    // Offset: 0x138
    xShadowSimpleCache simpShadow_embedded;

    xNPCBasic(S32);

    S32 SelfType() const;
    void RestoreColFlags()
    {
        flags2.flg_colCheck = ColChkFlags();
        flags2.flg_penCheck = ColPenFlags();
        chkby = ColChkByFlags();
        penby = ColPenByFlags();
        pflags = PhysicsFlags();
        colFreq = -1;
    }

    void DBG_PStatClear();
    void DBG_PStatCont(en_npcperf stat);
    void DBG_PStatOn(en_npcperf stat);
    S32 DBG_IsNormLog(en_npcdcat input, S32 input2);
    void DBG_HaltOnMe(U32, char*);

    // DO NOT CHANGE THE ORDER OF THESE, the order determines the
    // vtable layout which needs to remain fixed.
    virtual void Init(xEntAsset* asset);
    virtual void PostInit();
    virtual void Setup();
    virtual void PostSetup();
    virtual void Reset();
    virtual void Process(xScene* xscn, F32 dt);
    virtual void BUpdate(xVec3*);
    virtual void NewTime(xScene* xscn, F32 dt);
    virtual void Move(xScene* xscn, F32 dt, xEntFrame* frm);
    virtual S32 SysEvent(xBase* from, xBase* to, U32 toEvent, const F32* toParam,
                         xBase* toParamWidget, S32* handled);
    virtual void Render();
    virtual void Save(xSerial*) const;
    virtual void Load(xSerial*);
    virtual void CollideReview();

    /* These most likely return a combination of XENT_COLLTYPE_* values */
    virtual U8 ColChkFlags() const
    {
        return 0;
    }

    virtual U8 ColPenFlags() const
    {
        return 0;
    }

    virtual U8 ColChkByFlags() const
    {
        return 0;
    }

    virtual U8 ColPenByFlags() const
    {
        return 0;
    }

    virtual U8 PhysicsFlags() const
    {
        return 0;
    }

    virtual void Destroy();
};

void NPC_spdBasedColFreq(xNPCBasic* npc, F32 dt);

#endif
