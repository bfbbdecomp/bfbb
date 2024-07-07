#include "xPar.h"

#include <types.h>

#define PAR_POOL_SIZE 2000

extern xPar gParPool[PAR_POOL_SIZE];
extern xPar* gParDead;
extern F32 lbl_803CCF10; // 0.0f
extern F32 lbl_803CCF14; // 255f

#if 0
// For some reason, it does not recompare gParDead and assumes the first comparison is valid for all.
void xParMemInit()
{
    for (S32 i = 0; i < PAR_POOL_SIZE; i++)
    {
        xPar* curr = &gParPool[i];
        curr->m_next = NULL;
        curr->m_prev = NULL;
        if (gParDead != NULL)
        {
            gParDead->m_prev = curr;
            curr->m_next = gParDead;
        }
        gParDead = curr;
    }
}

#endif

xPar* xParAlloc()
{
    xPar* dead = gParDead;
    if (gParDead == NULL)
    {
        return NULL;
    }
    if (gParDead->m_next != NULL)
    {
        gParDead->m_next->m_prev = NULL;
    }
    xPar** next = &dead->m_next;
    gParDead = *next;
    *next = NULL;
    dead->m_prev = NULL;
    return dead;
}

void xParFree(xPar* par)
{
    if (par->m_next != NULL)
    {
        par->m_next->m_prev = par->m_prev;
    }
    if (par->m_prev != NULL)
    {
        par->m_prev->m_next = par->m_next;
    }
    if (gParDead != NULL)
    {
        gParDead->m_prev = par;
    }
    par->m_next = gParDead;
    par->m_prev = NULL;
    gParDead = par;
}

void xParInit(xPar* p)
{
    p->m_pos.x = lbl_803CCF10;
    p->m_pos.y = lbl_803CCF10;
    p->m_pos.z = lbl_803CCF10;
    p->m_vel.x = lbl_803CCF10;
    p->m_vel.y = lbl_803CCF10;
    p->m_vel.z = lbl_803CCF10;
    p->m_size = lbl_803CCF10;
    p->m_sizeVel = lbl_803CCF10;
    p->m_lifetime = lbl_803CCF10;
    p->m_cvel[0] = lbl_803CCF10;
    p->m_cvel[1] = lbl_803CCF10;
    p->m_cvel[2] = lbl_803CCF10;
    p->m_cvel[3] = lbl_803CCF10;
    p->m_cfl[0] = lbl_803CCF14;
    p->m_cfl[1] = lbl_803CCF14;
    p->m_cfl[2] = lbl_803CCF14;
    p->m_cfl[3] = lbl_803CCF14;
    p->m_c[0] = 0xff;
    p->m_c[1] = 0xff;
    p->m_c[2] = 0xff;
    p->m_c[3] = 0xff;
    p->m_flag = 0;
    p->m_rotdeg[0] = 0;
    p->m_rotdeg[1] = 0;
    p->m_rotdeg[2] = 0;
    p->m_next = NULL;
    p->m_prev = NULL;
    p->m_texIdx[0] = 0;
    p->m_texIdx[1] = 0;
}
