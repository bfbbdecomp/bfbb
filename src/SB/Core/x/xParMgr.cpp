#include "iParMgr.h"

#include "xPar.h"
#include "xParMgr.h"

#include <types.h>

uint32 sFrameCount;
int32 sParMgrInit;

void xParMgrInit()
{
    if (sParMgrInit == 0)
    {
        xParMemInit();
        iParMgrInit();
        sParMgrInit = 1;
    }
    else
    {
        xParMgrKillAllParticles();
        iParMgrInit();
    }
}

void xParMgrKillAllParticles()
{
}

#if 0
// If statement and statement above are wrong.
void xParMgrUpdate(float32 elapsedTime)
{
    iParMgrUpdate(elapsedTime);
    sFrameCount = (int32)sFrameCount;
    if (++sFrameCount > 10)
    {
        sFrameCount = 1;
    }
    while (sFrameCount >= 1)
    {
        sFrameCount--;
    }
}
#endif

void xParMgrRender()
{
    iParMgrRender();
}
