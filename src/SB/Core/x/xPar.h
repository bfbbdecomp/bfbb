#ifndef XPAR_H
#define XPAR_H

#include "xMath3.h"

struct xParEmitterAsset;
struct xParEmitter;

struct xPar
{
    xPar* m_next; // 0x0
    xPar* m_prev; // 0x4
    F32 m_lifetime; // 0x8
    U8 m_c[4]; // 0xC
    xVec3 m_pos; // 0x10
    F32 m_size; // 0x1C
    xVec3 m_vel; // 0x20
    F32 m_sizeVel; // 0x2C
    U8 m_flag; // 0x30
    U8 m_mode; // 0x31
    U8 m_texIdx[2]; // 0x32
    U8 m_rotdeg[3]; // 0x34
    U8 pad8; // 0x37
    F32 totalLifespan; //0x38
    xParEmitterAsset* m_asset; // 0x3C
    F32 m_cvel[4]; // 0x40
    F32 m_cfl[4]; // 0x50
};

void xParMemInit();
xPar* xParAlloc();
void xParFree(xPar* par);
void xParInit(xPar* p);

#endif
