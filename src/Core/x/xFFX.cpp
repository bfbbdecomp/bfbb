#include "xFFX.h"
#include "xEnt.h"
#include "xMemMgr.h"

#include <types.h>

extern xFFX* alist;
extern xFFXShakeState* shake_alist;
extern uint32 rot_match_psize;
extern xFFXRotMatchState* rot_match_pool;
extern xFFXRotMatchState* rot_match_alist;

// func_8001F8BC
#pragma GLOBAL_ASM("asm/Core/x/xFFX.s", "xFFXPoolInit__FUi")

// Structure same as the bottom function, get that one, you get this one.
//void xFFXPoolInit(uint32 num_ffx);

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

int16 xFFXAddEffect(xEnt* ent, xFFX* f)
{
    uint8 numFFX;
    f->next = (xFFX*)ent->ffx;
    f->flags = f->flags | 1;
    *(xFFX**)&ent->ffx = f;
    numFFX = ent->num_ffx;
    ent->num_ffx = numFFX + 1;
    return numFFX;
}

int16 xFFXAddEffect(xEnt* ent, void (*dof)(xEnt*, xScene*, float32, void*), void* fd)
{
    xFFX* f = (xFFX*)xFFXAlloc();
    int16 effectID;
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

#if 1

// func_8001FA28
#pragma GLOBAL_ASM("asm/Core/x/xFFX.s", "xFFXRemoveEffectByFData__FP4xEntPv")

#else

// WIP.
uint32 xFFXRemoveEffectByFData(xEnt* ent, void* fdata)
{
    xFFX* ffx;
    xFFX** found;

    found = (xFFX**)&ent->ffx;
    while (true)
    {
        ffx = *found;
        if (ffx == NULL)
        {
            return 0;
        }
        if (fdata == ffx->fdata)
            break;
        found = &ffx->next;
    }
    ffx = ffx->next;
    ent->num_ffx--;
    xFFXFree(*found);
    *found = ffx;
    return 1;
}

#endif

void xFFXApplyOne(xFFX* ffx, xEnt* ent, xScene* sc, float32 dt)
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

void xFFXApply(xEnt* ent, xScene* sc, float32 dt)
{
    if ((xFFX*)ent->ffx != NULL)
    {
        xFFXApplyOne((xFFX*)ent->ffx, ent, sc, dt);
    }
}

// func_8001FB5C
#pragma GLOBAL_ASM("asm/Core/x/xFFX.s", "xFFXShakeUpdateEnt__FP4xEntP6xScenefPv")

// func_8001FC54
#pragma GLOBAL_ASM("asm/Core/x/xFFX.s", "xFFXShakePoolInit__FUi")

// The structure of this is identical to the pool init below. Figure out that one, you get this one as well.
//void xFFXShakePoolInit(uint32 num);

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

#if 1

// func_8001FD10
#pragma GLOBAL_ASM("asm/Core/x/xFFX.s", "xFFXRotMatchPoolInit__FUi")

#else

// Some instructions are in the wrong order.
void xFFXRotMatchPoolInit(uint32 num)
{
    rot_match_psize = num;
    rot_match_pool = (xFFXRotMatchState*)xMemAlloc(num * sizeof(xFFXRotMatchState));
    uint32 i = 1;
    rot_match_pool->next = NULL;
    int32 ind = sizeof(xFFXRotMatchState);
    while (i < rot_match_psize)
    {
        int32 nextAddr = ind - 1;
        i++;
        *(xFFXRotMatchState**)((int32)&rot_match_pool->next + ind) = rot_match_pool + nextAddr;
        ind += sizeof(xFFXRotMatchState);
    }
    rot_match_alist = rot_match_pool + (rot_match_psize - 1);
}

#endif

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