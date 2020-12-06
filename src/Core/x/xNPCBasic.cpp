#include "xNPCBasic.h"

#include <types.h>
#include <string.h>

#include "xMath.h"
#include "xModel.h"
#include "xEntMotion.h"

#include "../p2/iColor.h"

extern float xNPCBasic_float_0;
extern float xNPCBasic_float_onehalf;
extern float xNPCBasic_float_onequarter;
extern float xNPCBasic_float_15;
extern float xNCPBasic_float_0p10000000;

extern iColor_tag g_BLUE;
extern xEntCollis g_colrec;

void NPC_alwaysUseSphere(xEnt* ent, xVec3* vec);

// func_8010F82C
#pragma GLOBAL_ASM("asm/Core/x/xNPCBasic.s", "Init__9xNPCBasicFP9xEntAsset")

// func_8010FA28
#if 1
#pragma GLOBAL_ASM("asm/Core/x/xNPCBasic.s", "Reset__9xNPCBasicFv")
#else
// Register assignment in the floating point instructions is slightly wrong.
void xNPCBasic::Reset()
{
    xEntReset(this);
    DBG_PStatClear();
    if (!(uint32(flags1.flg_basenpc) & 0x2))
    {
        xVec3Copy(&frame->drot.axis, &g_Y3);
        frame->drot.angle = xNPCBasic_float_0;
        xVec3Copy(&frame->rot.axis, &g_Y3);
        frame->rot.angle = asset->ang.x;
    }

    flags1.flg_basenpc |= 4;
    colFreq = -1;

    float32 f1 = xurand();
    float32 f0 = xNPCBasic_float_onehalf;
    float32 f2 = xNPCBasic_float_onequarter;
    f1 -= f0;
    f0 = xNPCBasic_float_15;
    f1 = f2 * f1;
    f0 = f0 * f1 + f0;
    colFreqReset = (int32)f0;
    RestoreColFlags();
    return;
}
#endif

// func_8010FAF4
#pragma GLOBAL_ASM("asm/Core/x/xNPCBasic.s", "NPC_alwaysUseSphere__FP4xEntP5xVec3")

// func_8010FBE0
#pragma GLOBAL_ASM("asm/Core/x/xNPCBasic.s", "NPC_spdBasedColFreq__FP9xNPCBasicf")

// func_8010FC98
void xNPCBasic::Process(xScene* xscn, float32 dt)
{
    xEnt* thisEnt = this;
    void (*bak_bupdate)(xEnt*, xVec3*);
    int32 hasgrav = 0;

    if (flags2.flg_colCheck || flags2.flg_penCheck)
    {
        colFreq -= 1;
    } 
    else
    {
        colFreq = 1;
    }

    if (pflags & 0x4)
    {
        hasgrav = 1;
    }

    if (colFreq >= 0)
    {
        pflags &= 0xfb;
    }

    if (pflags & 0x2)
    {
        xEntApplyPhysics(thisEnt, xscn, dt);
    }

    if (pflags & 0x1)
    {
        xEntMove(thisEnt, xscn, dt);
    }

    if (ffx != NULL)
    {
        xFFXApply(this, xscn, dt);
    }

    if (frame != NULL && (flags1.flg_upward & 0x2))
    {
        frame->dpos.y = MAX(xNPCBasic_float_0, frame->dpos.y);
        frame->dvel.y = MAX(xNPCBasic_float_0, frame->dvel.y);
        frame->vel.y = MAX(xNPCBasic_float_0, frame->vel.y);
        frame->oldvel.y = MAX(xNPCBasic_float_0, frame->oldvel.y);
        model->Mat->pos.y = MAX(model->Mat->pos.y, frame->oldmat.pos.y);
    }

    if (colFreq < 0)
    {
        colFreq = colFreqReset;

        DBG_PStatCont(eNPCPerfEnable);
        DBG_PStatOn(eNPCPerfDisable);

        if (collis == NULL)
        {
            memset(&g_colrec, 0, sizeof(g_colrec));
            collis = &g_colrec;
        }

        collis->chk = flags2.flg_colCheck;
        collis->pen = flags2.flg_penCheck;

        bak_bupdate = bupdate;
        bupdate = &NPC_alwaysUseSphere;
        xEntCollide(thisEnt, xscn, dt);
        bupdate = bak_bupdate;

        CollideReview();

        if ((flags1.flg_basenpc & 0x1) == 0)
        {
            collis = NULL;
        }

        DBG_PStatCont(eNPCPerfDisable);
        DBG_PStatOn(eNPCPerfEnable);
    }
    
    if ((pflags & (0x2 | 0x1)) != 0 && xVec3Length2(&frame->vel) > xNCPBasic_float_0p10000000)
    {
        NPC_spdBasedColFreq(this, dt);
    }

    if (hasgrav)
    {
        pflags |= 0x4;
    }

    if (DBG_IsNormLog(eNPCDCAT_Seven, 2))
    {
        xDrawSetColor(g_BLUE);
        xBoundDraw(&bound);
    }
}

// func_8010FF9C
#pragma GLOBAL_ASM("asm/Core/x/xNPCBasic.s", "CollideReview__9xNPCBasicFv")

// func_8010FFF0
#pragma GLOBAL_ASM("asm/Core/x/xNPCBasic.s", "NewTime__9xNPCBasicFP6xScenef")

// func_80110000
#pragma GLOBAL_ASM("asm/Core/x/xNPCBasic.s", "NPC_entwrap_setup__FP4xEnt")

// func_80110048
#pragma GLOBAL_ASM("asm/Core/x/xNPCBasic.s", "NPC_entwrap_reset__FP4xEnt")

// func_80110090
#pragma GLOBAL_ASM("asm/Core/x/xNPCBasic.s", "NPC_entwrap_update__FP4xEntP6xScenef")

// func_801101B4
#pragma GLOBAL_ASM("asm/Core/x/xNPCBasic.s", "NPC_entwrap_bupdate__FP4xEntP5xVec3")

// func_801101E0
#pragma GLOBAL_ASM("asm/Core/x/xNPCBasic.s", "NPC_entwrap_move__FP4xEntP6xScenefP9xEntFrame")

// func_8011020C
#pragma GLOBAL_ASM("asm/Core/x/xNPCBasic.s", "NPC_entwrap_event__FP5xBaseP5xBaseUiPCfP5xBase")

// func_80110264
#pragma GLOBAL_ASM("asm/Core/x/xNPCBasic.s", "NPC_entwrap_render__FP4xEnt")

// func_80110290
#pragma GLOBAL_ASM("asm/Core/x/xNPCBasic.s", "DBG_PStatClear__9xNPCBasicFv")

// func_80110294
#pragma GLOBAL_ASM("asm/Core/x/xNPCBasic.s", "DBG_HaltOnMe__9xNPCBasicFUiPc")

// func_80110298
#pragma GLOBAL_ASM("asm/Core/x/xNPCBasic.s", "BUpdate__9xNPCBasicFP5xVec3")
