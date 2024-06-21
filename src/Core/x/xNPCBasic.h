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
};

struct xNPCBasic : xEnt, xFactoryInst
{
    // Offset: 0xDC
    void (*f_setup)(xEnt*);
    void (*f_reset)(xEnt*);

    // Offset: 0xE4
    struct
    {
        int32 flg_basenpc : 16;
        int32 inUpdate : 8;
        uint32 flg_upward : 8;
    } flags1;

    // Offset: 0xE8
    int32 colFreq;
    int32 colFreqReset;

    // Offset: 0xF0
    struct
    {
        uint32 flg_colCheck : 8;
        uint32 flg_penCheck : 8;
        uint32 flg_unused : 16;
    } flags2;

    // Offset: 0xF4
    int32 myNPCType;

    // Offset: 0xF8
    xEntShadow entShadow_embedded;

    // Offset: 0x138
    xShadowSimpleCache simpShadow_embedded;

    xNPCBasic(int32);

    int32 SelfType() const;
    void RestoreColFlags();

    void DBG_PStatClear();
    void DBG_PStatCont(en_npcperf stat);
    void DBG_PStatOn(en_npcperf stat);
    int32 DBG_IsNormLog(en_npcdcat input, int32 input2);
    void DBG_HaltOnMe(uint32, int8*);

    // DO NOT CHANGE THE ORDER OF THESE, the order determines the
    // vtable layout which needs to remain fixed.
    virtual void Init(xEntAsset* asset);
    virtual void PostInit();
    virtual void Setup();
    virtual void PostSetup();
    virtual void Reset();
    virtual void Process(xScene* xscn, float32 dt);
    virtual void BUpdate(xVec3*);
    virtual void NewTime(xScene* xscn, float32 dt);
    virtual void Move(xScene* xscn, float32 dt, xEntFrame* frm);
    virtual int32 SysEvent(xBase* from, xBase* to, uint32 toEvent, const float32* toParam,
                           xBase* toParamWidget, int32* handled);
    virtual void Render();
    virtual void Save(xSerial*) const;
    virtual void Load(xSerial*);
    virtual void CollideReview();

    /* These most likely return a combination of XENT_COLLTYPE_* values */
    virtual uint8 ColChkFlags() const;
    virtual uint8 ColPenFlags() const;
    virtual uint8 ColChkByFlags() const;
    virtual uint8 ColPenByFlags() const;

    virtual uint8 PhysicsFlags() const;
    virtual void Destroy();
};

void NPC_spdBasedColFreq(xNPCBasic* npc, float32 dt);

#endif