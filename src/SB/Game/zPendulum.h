#ifndef ZPENDULUM_H
#define ZPENDULUM_H

#include "xEntMotion.h"

#include "zEnt.h"

#include <types.h>

struct _zPendulum : zEnt
{
    xEntMotion motion;
    F32 lt;
    F32 q1t;
    F32 q3t;
};

void zPendulum_Init(void* pend, void* asset);
void zPendulum_Init(_zPendulum* pend, xEntAsset* asset);
void zPendulum_Save(_zPendulum* pend, xSerial* s);
void zPendulum_Load(_zPendulum* pend, xSerial* s);
void zPendulum_Setup(_zPendulum* pend, xScene* sc);
void zPendulum_Reset(_zPendulum* pend, xScene* sc);
void zPendulum_Update(_zPendulum* pend, xScene* sc, F32 dt);
void zPendulum_Move(_zPendulum* pend, xScene* sc, F32 dt, xEntFrame* frame);
void zPendulumTranslate(xEnt* xent, xVec3* dpos, xMat4x3* dmat);
S32 zPendulumEventCB(xBase* from, xBase* to, U32 event, const F32* toParam,
                       xBase* toParamWidget);

#endif
