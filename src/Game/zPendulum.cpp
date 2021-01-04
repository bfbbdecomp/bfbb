#include "zPendulum.h"

#include "../Core/x/xEnt.h"

#include <types.h>

void zPendulum_Init(void* pend, void* asset)
{
    zPendulum_Init((_zPendulum*)pend, (xEntAsset*)asset);
}

#if 1

// func_800A8888
#pragma GLOBAL_ASM("asm/Game/zPendulum.s", "zPendulum_Init__FP10_zPendulumP9xEntAsset")

#else

//WIP.
void zPendulum_Init(_zPendulum* pend, xEntAsset* asset)
{
    if (pend->linkCount != 0)
    {
        //TODO!!!
    }
    else
    {
        pend->link = NULL;
    }
    pend->update = zPendulum_Update;
    pend->move = zPendulum_Move;
    pend->eventFunc = zPendulumEventCB;
    pend->transl = zPendulumTranslate;
    zEntReset((zEnt*)pend);
    //zEntMotionInit(&pend->motion, (xEnt*)pend, (xEntMotionAsset*)asset->) TODO!!!
}

#endif

void zPendulum_Save(_zPendulum* pend, xSerial* s)
{
    zEntSave((zEnt*)pend, s);
}

void zPendulum_Load(_zPendulum* pend, xSerial* s)
{
    zEntLoad((zEnt*)pend, s);
}

void zPendulum_Setup(_zPendulum* pend, xScene* sc)
{
    zEntSetup((zEnt*)pend);
}

// func_800A8994
#pragma GLOBAL_ASM("asm/Game/zPendulum.s", "zPendulum_Reset__FP10_zPendulumP6xScene")

// func_800A8AB8
#pragma GLOBAL_ASM("asm/Game/zPendulum.s", "zPendulum_Update__FP10_zPendulumP6xScenef")

void zPendulum_Move(_zPendulum* pend, xScene* sc, float32 dt, xEntFrame* frame)
{
    xEntMotionMove(&pend->motion, sc, dt, frame);
}

void zPendulumTranslate(xEnt* xent, xVec3* dpos, xMat4x3* dmat)
{
    xEntDefaultTranslate(xent, dpos, dmat);
    xEntMotionTranslate(&((_zPendulum*)xent)->motion, dpos, dmat);
}

// func_800A8BCC
#pragma GLOBAL_ASM("asm/Game/zPendulum.s", "zPendulumEventCB__FP5xBaseP5xBaseUiPCfP5xBase")
