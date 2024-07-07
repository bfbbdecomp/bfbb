#ifndef XPARMGR_H
#define XPARMGR_H

#include <types.h>

void xParMgrInit();
void xParMgrKillAllParticles();
void xParMgrUpdate(F32 elapsedTime);
void xParMgrRender();

#endif
