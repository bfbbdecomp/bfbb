#ifndef XFFX_H
#define XFFX_H

#include "xMath3.h"

struct xScene;
struct xEnt;

struct xFFX
{
    uint32 flags;
    void (*doEffect)(xEnt*, xScene*, float32, void*);
    void* fdata;
    xFFX* next;
};

struct xFFXShakeState
{
    xVec3 disp;
    float32 dur;
    float32 freq;
    float32 tmr;
    float32 alpha;
    float32 lval;
    xFFXShakeState* next;
};

struct xFFXRotMatchState
{
    int32 lgrounded;
    xVec3 lfup;
    xVec3 lfat;
    xVec3 plfat;
    float32 tmr;
    float32 mrate;
    float32 tmatch;
    float32 rrate;
    float32 trelax;
    float32 max_decl;
    xFFXRotMatchState* next;
};

void xFFXPoolInit(uint32 num_ffx);
xFFX* xFFXAlloc();
void xFFXFree(xFFX* ffx);
void xFFXTurnOn(xFFX* f);
void xFFXTurnOff(xFFX* f);
int16 xFFXAddEffect(xEnt* ent, void (*dof)(xEnt*, xScene*, float32, void*), void* fd);
uint32 xFFXRemoveEffectByFData(xEnt* ent, void* fdata);
void xFFXApplyOne(xFFX* ffx, xEnt* ent, xScene* sc, float32 dt);
void xFFXApply(xEnt* ent, xScene* sc, float32 dt);
void xFFXShakeUpdateEnt(xEnt* ent, xScene* sc, float32 dt, void* fdata);
void xFFXShakePoolInit(uint32 num);
xFFXShakeState* xFFXShakeAlloc();
void xFFXShakeFree(xFFXShakeState* s);
void xFFXRotMatchPoolInit(uint32 num);
xFFXRotMatchState* xFFXRotMatchAlloc();

#endif