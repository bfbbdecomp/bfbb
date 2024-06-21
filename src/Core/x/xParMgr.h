#ifndef XPARMGR_H
#define XPARMGR_H

#include <types.h>

void xParMgrInit();
void xParMgrKillAllParticles();
void xParMgrUpdate(float32 elapsedTime);
void xParMgrRender();

#endif