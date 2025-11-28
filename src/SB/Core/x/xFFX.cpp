#include "xFFX.h"
#include "xEnt.h"
#include "xMemMgr.h"
#include "xMathInlines.h"

#include <types.h>

static U32 psize;
static xFFX* pool;
static xFFX* alist;
static U32 shake_psize;
static xFFXShakeState* shake_pool;
static xFFXShakeState* shake_alist;
static U32 rot_match_psize;
static xFFXRotMatchState* rot_match_pool;
static xFFXRotMatchState* rot_match_alist;

void xFFXPoolInit(U32 num_ffx)
{
    psize = num_ffx;
    pool = (xFFX*)xMemAlloc(gActiveHeap, num_ffx * sizeof(xFFX), 0);
    pool[0].next = NULL;
    for (U32 i = 1; i < psize; i++)
    {
        pool[i].next = &pool[i - 1];
    }
    alist = &pool[psize - 1];
}

xFFX* xFFXAlloc()
{
    xFFX* alist2;
    alist2 = alist;
    if (alist == NULL)
    {
        return NULL;
    }
    alist = alist->next;
    return alist2;
}

void xFFXFree(xFFX* ffx)
{
    ffx->next = alist;
    alist = ffx;
}

void xFFXTurnOn(xFFX* f)
{
    f->flags |= 1;
}

void xFFXTurnOff(xFFX* f)
{
    f->flags &= 0xfffffffe;
}

S16 xFFXAddEffect(xEnt* ent, xFFX* f)
{
    U8 numFFX;
    f->next = (xFFX*)ent->ffx;
    f->flags = f->flags | 1;
    *(xFFX**)&ent->ffx = f;
    numFFX = ent->num_ffx;
    ent->num_ffx = numFFX + 1;
    return numFFX;
}

S16 xFFXAddEffect(xEnt* ent, void (*dof)(xEnt*, xScene*, F32, void*), void* fd)
{
    xFFX* f = (xFFX*)xFFXAlloc();
    S16 effectID;
    if (f == NULL)
    {
        effectID = -1;
    }
    else
    {
        f->doEffect = dof;
        f->fdata = fd;
        effectID = xFFXAddEffect(ent, f);
    }
    return effectID;
}

U32 xFFXRemoveEffectByFData(xEnt* ent, void* fdata)
{
    xFFX** ffxh = &ent->ffx;

    while (*ffxh != NULL)
    {
        xFFX* next = *ffxh;
        if (fdata == next->fdata)
        {
            next = next->next;
            ent->num_ffx--;
            xFFXFree(*ffxh);
            *ffxh = next;

            return 1;
        }

        ffxh = &(*ffxh)->next;
    }

    return 0;
}

static void xFFXApplyOne(xFFX* ffx, xEnt* ent, xScene* sc, F32 dt)
{
    if (ffx->next != NULL)
    {
        xFFXApplyOne(ffx->next, ent, sc, dt);
    }
    if ((ffx->flags & 1) != 0)
    {
        ffx->doEffect(ent, sc, dt, ffx->fdata);
    }
}

void xFFXApply(xEnt* ent, xScene* sc, F32 dt)
{
    if ((xFFX*)ent->ffx != NULL)
    {
        xFFXApplyOne((xFFX*)ent->ffx, ent, sc, dt);
    }
}

// regswap
void xFFXShakeUpdateEnt(xEnt* ent, xScene* sc, F32 dt, void* fdata)
{
    xFFXShakeState* ss = (xFFXShakeState*)fdata;
    F32 tnext = ss->tmr + dt;
    F32 mag = xexp(ss->alpha * tnext);

    mag *= isin(ss->freq * tnext);

    if (ss->tmr == 0.0f)
    {
        ss->lval = 0.0f;
    }
    else
    {
        if (ss->tmr >= ss->dur)
        {
            if (ss->lval * mag < 0.0f)
            {
                xFFXRemoveEffectByFData(ent, fdata);
                xFFXShakeFree(ss);
                return;
            }
        }
    }

    xVec3 dv;
    xVec3SMul(&dv, (xVec3*)fdata, mag - ss->lval);
    xVec3AddTo((xVec3*)(&ent->frame->mat.pos), &dv);
    ss->lval = mag;
    ss->tmr = tnext;
}

void xFFXShakePoolInit(U32 num)
{
    shake_psize = num;
    shake_pool = (xFFXShakeState*)xMemAlloc(gActiveHeap, num * sizeof(xFFXShakeState), 0);
    shake_pool->next = NULL;
    for (S32 i = 1; i < shake_psize; i++)
    {
        shake_pool[i].next = &shake_pool[i - 1];
    }
    shake_alist = &shake_pool[shake_psize - 1];
}

xFFXShakeState* xFFXShakeAlloc()
{
    xFFXShakeState* alist2;
    alist2 = shake_alist;
    if (shake_alist == NULL)
    {
        return NULL;
    }
    shake_alist = shake_alist->next;
    return alist2;
}

void xFFXShakeFree(xFFXShakeState* s)
{
    s->next = shake_alist;
    shake_alist = s;
}

void xFFXRotMatchPoolInit(U32 num)
{
    rot_match_psize = num;

    rot_match_pool = (xFFXRotMatchState*)xMemAlloc(gActiveHeap, num * sizeof(xFFXRotMatchState), 0);

    rot_match_pool->next = NULL;
    for (U32 i = 1; i < rot_match_psize; ++i)
    {
        rot_match_pool[i].next = &rot_match_pool[i - 1];
    }

    rot_match_alist = &rot_match_pool[rot_match_psize - 1];
}

xFFXRotMatchState* xFFXRotMatchAlloc()
{
    xFFXRotMatchState* alist2;
    alist2 = rot_match_alist;
    if (rot_match_alist == NULL)
    {
        return NULL;
    }
    rot_match_alist = rot_match_alist->next;
    return alist2;
}
