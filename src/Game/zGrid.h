#ifndef ZGRID_H
#define ZGRID_H

#include <types.h>

struct zScene;
struct xEnt;

void zGridUpdateEnt(xEnt* ent);
void zGridExit();
void zGridInit(zScene* s);
void zGridReset(zScene* s);

#endif