#ifndef XPAR_H
#define XPAR_H

#include "xMath3.h"

struct xParEmitterAsset;

struct xPar
{
    xPar* m_next;
    xPar* m_prev;
    float32 m_lifetime;
    uint8 m_c[4];
    xVec3 m_pos;
    float32 m_size;
    xVec3 m_vel;
    float32 m_sizeVel;
    uint8 m_flag;
    uint8 m_mode;
    uint8 m_texIdx[2];
    uint8 m_rotdeg[3];
    uint8 pad8;
    float32 totalLifespan;
    xParEmitterAsset* m_asset;
    float32 m_cvel[4];
    float32 m_cfl[4];
};

void xParMemInit();
xPar* xParAlloc();
void xParFree(xPar* par);
void xParInit(xPar* p);

#endif