#ifndef XPARGROUP_H
#define XPARGROUP_H

#include "xPar.h"
#include "xParCmd.h"

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

#endif