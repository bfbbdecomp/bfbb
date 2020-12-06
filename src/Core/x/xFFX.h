#ifndef XFFX_H
#define XFFX_H

#include <types.h>

struct xScene;
struct xEnt;

struct xFFX
{
};

void xFFXApply(xEnt* ent, xScene* scene, float32 dt);

#endif