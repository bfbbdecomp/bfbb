#ifndef XSURFACE_H
#define XSURFACE_H

#include "xBase.h"

struct xEnt;

struct xSurface : xBase
{
    uint32 idx;
    uint32 type;
    union
    {
        uint32 mat_idx;
        xEnt* ent;
        void* obj;
    };
    float32 friction;
    uint8 state;
    uint8 pad[3];
    void* moprops;
};

#define XSURFACE_TYPE_1 1

#endif