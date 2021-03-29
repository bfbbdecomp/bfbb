#ifndef XPARGROUP_H
#define XPARGROUP_H

#include "xPar.h"

struct xParCmdTex;

struct xParGroup
{
    xPar* m_root;
    xPar* m_dead;
    int32 m_num_of_particles;
    uint8 m_alive;
    uint8 m_killWhenDead;
    uint8 m_active;
    uint8 m_visible;
    uint8 m_culled;
    uint8 m_priority;
    uint8 m_flags;
    uint8 m_regidx;
    xParGroup* m_next;
    xParGroup* m_prev;
    void (*draw)(void*, xParGroup*);
    xParCmdTex* m_cmdTex;
};

#define XPARGROUP_UNK1 0x1
#define XPARGROUP_ALLOCPARS 0x2
#define XPARGROUP_NOAGING 0x4
#define XPARGROUP_NOBACK2LIFE 0x8
#define XPARGROUP_UNK10 0x10

void xParGroupInit(xParGroup* ps);
void xParGroupSetAging(xParGroup* ps, int32 age);
void xParGroupSetBack2Life(xParGroup* ps, int32 b2l);
void xParGroupSetVisibility(xParGroup* ps, int32 vis);
void xParGroupSetPriority(xParGroup* ps, uint8 val);
void xParGroupRegister(xParGroup* ps);
void xParGroupUnregister(xParGroup* ps);
void xParGroupSetActive(xParGroup* ps, uint32 isActive);
void xParGroupKillAllParticles(xParGroup* ps);
void xParGroupAnimate(xParGroup* ps, float32 dt);
void xParGroupAddParP(xParGroup* ps, xPar* p);
xPar* xParGroupAddPar(xParGroup* ps);
void xParGroupKillPar(xParGroup* ps, xPar* p);
void xParGroupAddParToDeadList(xParGroup* ps, xPar* p);

#endif