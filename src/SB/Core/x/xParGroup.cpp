#include "xParGroup.h"

#include "xMath.h"

#define REG_TABLE_SIZE 255

static S32 sParGroupRegTableInit = FALSE;
static S32 sParGroupRegTableCount = 0;
xParGroup* sParGroupRegTable[REG_TABLE_SIZE];

void xParGroupInit(xParGroup* ps)
{
    ps->m_root = NULL;
    ps->m_dead = NULL;
    ps->m_alive = 0;
    ps->m_num_of_particles = 0;
    ps->m_killWhenDead = 0;
    ps->m_flags = 0;
    ps->m_active = 1;
    ps->m_culled = 0;
    ps->m_visible = 1;
    ps->m_cmdTex = NULL;
    ps->m_priority = 0;
    ps->m_next = NULL;
    ps->m_prev = NULL;

    ps->m_flags |= XPARGROUP_ALLOCPARS;
    ps->m_flags |= XPARGROUP_UNK1;
}

static void xParGroupRegisterInit()
{
    for (S32 i = 0; i < REG_TABLE_SIZE; i++)
    {
        sParGroupRegTable[i] = NULL;
    }

    sParGroupRegTableInit = TRUE;
    sParGroupRegTableCount = 0;
}

void xParGroupSetAging(xParGroup* ps, S32 age)
{
    if (age)
    {
        if (ps->m_flags & XPARGROUP_NOAGING)
        {
            ps->m_flags ^= XPARGROUP_NOAGING;
        }
    }
    else
    {
        ps->m_flags |= XPARGROUP_NOAGING;
    }
}

void xParGroupSetBack2Life(xParGroup* ps, S32 b2l)
{
    if (b2l)
    {
        if (ps->m_flags & XPARGROUP_NOBACK2LIFE)
        {
            ps->m_flags ^= XPARGROUP_NOBACK2LIFE;
        }
    }
    else
    {
        ps->m_flags |= XPARGROUP_NOBACK2LIFE;
    }
}

void xParGroupSetVisibility(xParGroup* ps, S32 vis)
{
    ps->m_visible = vis;
}

void xParGroupSetPriority(xParGroup* ps, U8 val)
{
    ps->m_priority = val;
}

void xParGroupRegister(xParGroup* ps)
{
    if (!sParGroupRegTableInit)
    {
        xParGroupRegisterInit();
    }

    for (U8 i = 0; i < REG_TABLE_SIZE; i++)
    {
        if (!sParGroupRegTable[i])
        {
            sParGroupRegTable[i] = ps;
            ps->m_regidx = i;
            break;
        }
    }
}

void xParGroupUnregister(xParGroup* ps)
{
    for (U8 i = 0; i < REG_TABLE_SIZE; i++)
    {
        if (sParGroupRegTable[i] == ps)
        {
            sParGroupRegTable[i] = NULL;
            ps->m_regidx = 0;
            break;
        }
    }
}

void xParGroupSetActive(xParGroup* ps, U32 isActive)
{
    ps->m_active = isActive;
}

void xParGroupKillAllParticles(xParGroup* ps)
{
    xPar* i = ps->m_root;

    while (i)
    {
        xPar* tmp = i;

        i = i->m_next;

        xParGroupKillPar(ps, tmp);
    }
}

#define clamp(x, a, b) (((x) < (a)) ? (a) : (((x) > (b)) ? (b) : (x)))

void xParGroupAnimate(xParGroup* ps, F32 dt)
{
    xPar* i = ps->m_root;
    xPar* tmp;
    F32 age = dt;

    if (ps->m_flags & XPARGROUP_NOAGING)
    {
        age = 0.0f;
    }

    if (!ps->m_root)
    {
        ps->m_alive = 0;
    }

    while (i)
    {
        if (i->m_lifetime < 0.0f)
        {
            tmp = i;

            i = i->m_next;

            xParGroupKillPar(ps, tmp);
        }
        else
        {
            i->m_c[0] = i->m_cfl[0] = clamp(i->m_cvel[0] * dt + i->m_cfl[0], 0.0f, 255.0f);
            i->m_c[1] = i->m_cfl[1] = clamp(i->m_cvel[1] * dt + i->m_cfl[1], 0.0f, 255.0f);
            i->m_c[2] = i->m_cfl[2] = clamp(i->m_cvel[2] * dt + i->m_cfl[2], 0.0f, 255.0f);
            i->m_c[3] = i->m_cfl[3] = clamp(i->m_cvel[3] * dt + i->m_cfl[3], 0.0f, 255.0f);
            i->m_size += i->m_sizeVel * dt;
            i->m_lifetime -= age;

            i = i->m_next;
        }
    }
}

void xParGroupAddParP(xParGroup* ps, xPar* p)
{
    ps->m_alive = 1;
    ps->m_num_of_particles++;

    p->m_prev = NULL;
    p->m_next = NULL;

    if (ps->m_root)
    {
        p->m_next = ps->m_root;
        ps->m_root->m_prev = p;
        ps->m_root = p;
    }
    else
    {
        ps->m_root = p;
    }
}

xPar* xParGroupAddPar(xParGroup* ps)
{
    xPar* p;

    if (ps->m_flags & XPARGROUP_ALLOCPARS)
    {
        p = xParAlloc();

        if (!p)
        {
            S32 myPriority = ps->m_priority;

            for (U8 i = 0; i < REG_TABLE_SIZE; i++)
            {
                if (sParGroupRegTable[i] && sParGroupRegTable[i] != ps &&
                    (sParGroupRegTable[i]->m_flags & XPARGROUP_ALLOCPARS) &&
                    !(sParGroupRegTable[i]->m_flags & XPARGROUP_UNK10) &&
                    sParGroupRegTable[i]->m_priority < myPriority && sParGroupRegTable[i]->m_root)
                {
                    xParGroupKillPar(sParGroupRegTable[i], sParGroupRegTable[i]->m_root);

                    p = xParAlloc();

                    break;
                }
            }
        }
    }
    else if (ps->m_dead)
    {
        p = ps->m_dead;
        ps->m_dead = p->m_next;

        if (ps->m_dead)
        {
            ps->m_dead->m_prev = NULL;
        }
    }
    else
    {
        p = NULL;
    }

    if (p)
    {
        xParInit(p);
        xParGroupAddParP(ps, p);
    }

    return p;
}

void xParGroupKillPar(xParGroup* ps, xPar* p)
{
    if (p == ps->m_root)
    {
        ps->m_root = p->m_next;

        if (ps->m_root)
        {
            ps->m_root->m_prev = NULL;
        }

        p->m_next = NULL;
        p->m_prev = NULL;
    }
    else
    {
        if (p->m_next)
        {
            p->m_next->m_prev = p->m_prev;
        }

        if (p->m_prev)
        {
            p->m_prev->m_next = p->m_next;
        }

        p->m_prev = NULL;
        p->m_next = NULL;
    }

    ps->m_num_of_particles--;

    if (ps->m_flags & XPARGROUP_ALLOCPARS)
    {
        xParFree(p);
    }
    else
    {
        xParGroupAddParToDeadList(ps, p);
    }
}

void xParGroupAddParToDeadList(xParGroup* ps, xPar* p)
{
    if (ps->m_dead)
    {
        ps->m_dead->m_prev = p;
    }

    p->m_next = ps->m_dead;
    p->m_prev = NULL;

    ps->m_dead = p;
}
