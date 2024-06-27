#include "xSurface.h"
#include "xMemMgr.h"

#include <types.h>

xSurface* surfs;
uint16 nsurfs;

void xSurfaceInit(uint16 num_surfs)
{
    nsurfs = num_surfs;
    if (num_surfs != 0)
    {
        surfs = (xSurface*)xMemAllocSize(num_surfs * sizeof(xSurface));
        for (uint16 i = 0; i < nsurfs; i++)
        {
            surfs[i].idx = i;
        }
    }
    else
    {
        surfs = NULL;
    }
}

extern "C" {
extern void __copy(void* dst, const void* src, uint32 n);
}

xSurface& xSurface::operator=(const xSurface& ent)
{
    xBase::operator=(ent);
    this->idx = ent.idx;
    this->type = ent.type;
    this->ent = ent.ent;
    this->friction = ent.friction;
    this->state = ent.state;
    // FIXME: Is this auto-inserted by the compiler?
    __copy(&pad, &ent.pad, 3);
    this->moprops = ent.moprops;
    return *this;
}

void xSurfaceExit()
{
}

void xSurfaceSave(xSurface* ent, xSerial* s)
{
    xBaseSave((xBase*)ent, s);
}

void xSurfaceLoad(xSurface* ent, xSerial* s)
{
    xBaseLoad((xBase*)ent, s);
}

void xSurfaceReset(xSurface* ent)
{
}

uint16 xSurfaceGetNumSurfaces()
{
    return nsurfs;
}

xSurface* xSurfaceGetByIdx(uint16 n)
{
    return surfs != NULL ? &surfs[n] : NULL;
}
