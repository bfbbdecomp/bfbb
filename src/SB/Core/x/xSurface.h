#ifndef XSURFACE_H
#define XSURFACE_H

#include "xBase.h"

struct xEnt;

struct xSurface : xBase
{
    U32 idx;
    U32 type;
    union
    {
        U32 mat_idx;
        xEnt* ent;
        void* obj;
    };
    F32 friction;
    U8 state;
    U8 pad[3];
    void* moprops;
};

#define XSURFACE_TYPE_1 1
#define XSURFACE_TYPE_3 3

void xSurfaceInit(U16 num_surfs);
void xSurfaceExit();
void xSurfaceSave(xSurface* ent, xSerial* s);
void xSurfaceLoad(xSurface* ent, xSerial* s);
void xSurfaceReset(xSurface* ent);
U16 xSurfaceGetNumSurfaces();
xSurface* xSurfaceGetByIdx(U16 n);

#endif
