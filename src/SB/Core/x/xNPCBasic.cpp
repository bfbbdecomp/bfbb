#include "xNPCBasic.h"

#include <types.h>
#include <string.h>

// Weird... why does x depend on z here?
#include "zEnt.h"
#include "zGrid.h"

#include "xMath.h"
#include "xModel.h"
#include "xEntMotion.h"
#include "xCamera.h"
#include "xDraw.h"

#include "iColor.h"
#include "iCollide.h"

extern float xNPCBasic_float_0;
extern float xNPCBasic_float_1;
extern float xNPCBasic_float_onehalf;
extern float xNPCBasic_float_onequarter;
extern float xNPCBasic_float_15;
extern float xNCPBasic_float_0p10000000;
extern float xNPCBasic_float_0p75;
extern float xNPCBasic_float_1eminus5;
extern float xNPCBasic_float_0p2;
extern float xNPCBasic_float_thirty;
extern float xNPCBasic_float_0p04;
extern float xNPCBasic_float_0p025;

extern iColor_tag g_BLUE;
extern iColor_tag g_LAVENDER;
extern iColor_tag g_PIMP_GOLD;

extern xEntCollis g_colrec;
extern xVec3 lbl_8026A3F8;

void NPC_alwaysUseSphere(xEnt*, xVec3*);
void NPC_entwrap_setup(xEnt*);
void NPC_entwrap_reset(xEnt*);
int32 NPC_entwrap_event(xBase*, xBase*, uint32, const float32*, xBase*);
void NPC_entwrap_update(xEnt*, xScene*, float32);
void NPC_entwrap_bupdate(xEnt*, xVec3*);
void NPC_entwrap_move(xEnt*, xScene*, float32, xEntFrame*);
void NPC_entwrap_render(xEnt*);


#ifdef NON_MATCHING
// The order of the function pointer assignment instructions at the end of the

void xNPCBasic::Init(xEntAsset* asset)
{
    if (xNPCBasic_float_0 == asset->scale.x)
    {
        asset->scale.x = xNPCBasic_float_1;
    }
    if (xNPCBasic_float_0 == asset->scale.y)
    {
        asset->scale.y = xNPCBasic_float_1;
    }
    if (xNPCBasic_float_0 == asset->scale.z)
    {
        asset->scale.z = xNPCBasic_float_1;
    }

    xEnt* thisEnt = this;
    xEntInit(thisEnt, asset);
    collType = 8;
    collLev = 4;
    bound.type = XBOUND_TYPE_SPHERE; // [int8] 0x84
    moreFlags |= 0x10;
    zEntParseModelInfo(thisEnt, asset->modelInfoID);
    xEntInitForType(thisEnt);
    xEntInitShadow(*thisEnt, entShadow_embedded);
    simpShadow = &simpShadow_embedded;
    xShadowSimple_CacheInit(simpShadow, thisEnt, 0x50);
    if (bound.type == XBOUND_TYPE_BOX)
    {
        iBoxForModel(&bound.box.box, collModel ? collModel : model);
    }
    else if (bound.type == XBOUND_TYPE_OBB)
    {
        iBoxForModelLocal(&bound.box.box, collModel ? collModel : model);
    }

    if (flags1.flg_basenpc & 0x1)
    {
        collis = (xEntCollis*)xMemAllocSize(sizeof(xEntCollis));
        memset(collis, 0, sizeof(xEntCollis));
    }

    if ((flags1.flg_basenpc & 0x2) == 0)
    {
        frame = (xEntFrame*)xMemAllocSize(sizeof(xEntFrame));
        memset(frame, 0, sizeof(xEntFrame));
    }

    RestoreColFlags();

    f_setup = &NPC_entwrap_setup;
    f_reset = &NPC_entwrap_reset;
    eventFunc = &NPC_entwrap_event;
    update = &NPC_entwrap_update;
    bupdate = &NPC_entwrap_bupdate;
    move = &NPC_entwrap_move;
    render = &NPC_entwrap_render;

    baseFlags &= 0xffef;
}
#endif


#ifndef NOT_MATCHING

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


void NPC_alwaysUseSphere(xEnt* ent, xVec3* value)
{
    xNPCBasic* npc = (xNPCBasic*)ent;
    xVec3 bndcent = lbl_8026A3F8;

    xVec3Copy(&bndcent, xEntGetPos(npc));
    bndcent.y += xNPCBasic_float_0p75;

    npc->bound.type = XBOUND_TYPE_SPHERE;
    xVec3Copy(&npc->bound.sph.center, &bndcent);
    npc->bound.sph.r = xNPCBasic_float_0p75;
    if (npc->bound.type != XBOUND_TYPE_NA)
    {
        xQuickCullForBound(&npc->bound.qcd, &npc->bound);
    }

    zGridUpdateEnt(npc);
    if (npc->DBG_IsNormLog(eNPCDCAT_Eight, 2) || npc->DBG_IsNormLog(eNPCDCAT_Seven, 2))
    {
        xDrawSetColor(g_PIMP_GOLD);
        xBoundDraw(&npc->bound);
    }
}


void NPC_spdBasedColFreq(xNPCBasic* npc, float32 dt)
{
    if (dt < xNPCBasic_float_1eminus5)
    {
        return;
    }
    float32 d = xVec3Length(&npc->frame->vel);
    if (d < xNPCBasic_float_0p2)
    {
        return;
    }

    float32 radius;
    if (npc->bound.type == XBOUND_TYPE_SPHERE)
    {
        radius = npc->bound.sph.r;
    }
    else
    {
        radius = MAX(npc->bound.box.box.upper.x - npc->bound.box.box.lower.x,
                     npc->bound.box.box.upper.z - npc->bound.box.box.lower.z);
    }

    int32 nf = xNPCBasic_float_thirty * (radius / d);
    npc->colFreq = MIN(npc->colFreq, nf);
}


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


void xNPCBasic::CollideReview()
{
    if (DBG_IsNormLog(eNPCDCAT_Eight, 2))
    {
        xDrawSetColor(g_LAVENDER);
        xBoundDraw(&bound);
    }
}


void xNPCBasic::NewTime(xScene*, float32)
{
    flags1.flg_basenpc &= ~0x4;
}


void NPC_entwrap_setup(xEnt* ent)
{
    xNPCBasic* npc = (xNPCBasic*)ent;
    npc->DBG_HaltOnMe(0, NULL);
    npc->Setup();
}


void NPC_entwrap_reset(xEnt* ent)
{
    xNPCBasic* npc = (xNPCBasic*)ent;
    npc->DBG_HaltOnMe(0, NULL);
    npc->Reset();
}


void NPC_entwrap_update(xEnt* ent, xScene* scn, float32 dt_caller)
{
    float32 dt = dt_caller;
    if (dt > xNPCBasic_float_0p04)
    {
        dt = xNPCBasic_float_0p025;
    }

    xNPCBasic* npc = (xNPCBasic*)ent;
    xEntBeginUpdate(npc, scn, dt);
    npc->flags1.inUpdate = 1;
    npc->DBG_HaltOnMe(0, NULL);
    npc->DBG_PStatOn(eNPCPerfEnable);

    if (npc->isCulled)
    {
        npc->model->Flags &= 0xfffd;
    }
    else if ((npc->flags1.flg_upward & 0x1) == 0)
    {
        npc->model->Flags |= 0x2;
    }

    npc->Process(scn, dt);

    npc->DBG_PStatCont(eNPCPerfEnable);
    npc->flags1.inUpdate = 0;
    xEntEndUpdate(npc, scn, dt);

    npc->NewTime(scn, dt);
}


void NPC_entwrap_bupdate(xEnt* ent, xVec3* pos)
{
    ((xNPCBasic*)ent)->BUpdate(pos);
}


void NPC_entwrap_move(xEnt* ent, xScene* scn, float32 dt, xEntFrame* frame)
{
    ((xNPCBasic*)ent)->Move(scn, dt, frame);
}


int32 NPC_entwrap_event(xBase* from, xBase* to, uint32 toEvent, const float32* toParam,
                        xBase* toParamWidget)
{
    int32 handled = 0;
    return ((xNPCBasic*)to)->SysEvent(from, to, toEvent, toParam, toParamWidget, &handled);
}


void NPC_entwrap_render(xEnt* ent)
{
    ((xNPCBasic*)ent)->Render();
}


void xNPCBasic::DBG_PStatClear()
{
}


void xNPCBasic::DBG_HaltOnMe(uint32, int8*)
{
}


void xNPCBasic::BUpdate(xVec3* v)
{
    xEntDefaultBoundUpdate(this, v);
}
