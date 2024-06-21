#include "zPendulum.h"

#include "xEnt.h"

#include <types.h>

void zPendulum_Init(void* pend, void* asset)
{
    zPendulum_Init((_zPendulum*)pend, (xEntAsset*)asset);
}

#if 0
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







void zPendulum_Move(_zPendulum* pend, xScene* sc, float32 dt, xEntFrame* frame)
{
    xEntMotionMove(&pend->motion, sc, dt, frame);
}

void zPendulumTranslate(xEnt* xent, xVec3* dpos, xMat4x3* dmat)
{
    xEntDefaultTranslate(xent, dpos, dmat);
    xEntMotionTranslate(&((_zPendulum*)xent)->motion, dpos, dmat);
}
