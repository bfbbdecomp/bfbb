#include "xSurface.h"
#include "xMemMgr.h"

#include <types.h>

extern xSurface* surfs;
extern uint16 nsurfs;

#if 0
// The for loop is off.
void xSurfaceInit(uint16 num_surfs)
{
    nsurfs = num_surfs;
    if (num_surfs != 0)
    {
        surfs = (xSurface*)xMemAllocSize(num_surfs * sizeof(xSurface));
        for (int32 i = 0; i < nsurfs; i++)
        {
            surfs[i].idx = i;
        }
    }
    else
    {
        surfs = NULL;
    }
}

#endif

#if 0
// Close to being finished.
void xSurface::operator=(const xSurface& ent)
{
    xBase::operator=(ent);
    this->idx = ent.idx;
    this->type = ent.type;
    this->ent = ent.ent;
    this->friction = ent.friction;
    this->state = ent.state;
    this->pad = ent.pad; // Make this call __copy();
    this->moprops = ent.moprops;
}

#endif

void xSurface::operator=(const xBase& ent)
{
    this->id = ent.id;
    this->baseType = ent.baseType;
    this->linkCount = ent.linkCount;
    this->baseFlags = ent.baseFlags;
    this->link = ent.link;
    this->eventFunc = ent.eventFunc;
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

void xSurfaceReset()
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
