#include "xPar.h"

#include <types.h>

#define PAR_POOL_SIZE 2000

xPar gParPool[PAR_POOL_SIZE];
xPar* gParDead;

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
    p->m_pos.x = 0.0f;
    p->m_pos.y = 0.0f;
    p->m_pos.z = 0.0f;
    p->m_vel.x = 0.0f;
    p->m_vel.y = 0.0f;
    p->m_vel.z = 0.0f;
    p->m_size = 0.0f;
    p->m_sizeVel = 0.0f;
    p->m_lifetime = 0.0f;
    p->m_cvel[0] = 0.0f;
    p->m_cvel[1] = 0.0f;
    p->m_cvel[2] = 0.0f;
    p->m_cvel[3] = 0.0f;
    p->m_cfl[0] = 255.0f;
    p->m_cfl[1] = 255.0f;
    p->m_cfl[2] = 255.0f;
    p->m_cfl[3] = 255.0f;
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
