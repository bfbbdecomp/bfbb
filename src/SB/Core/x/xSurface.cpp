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

// xSurface::operator= and xBase::operator= are placed here at link time, however nothing in
//   xSurface.cpp calls them in the final executable. This likely means there was an
//   unused/stripped function in xSurface.cpp that called xSurface::operator= (which calls
//   xBase::operator=).
// Indeed, it turns out that Ratatouille's ratsgc_d.MAP file lists an unused function directly
//   after xSurfaceInit__FUs: xSurfaceInit__FUsPC8xSurface, followed by __as__8xSurfaceFRC8xSurface
//   and __as__5xBaseFRC5xBase. So it's safe to assume that this was the function that called
//   xSurface::operator=, and it was likely also present in BfBB (sadly we don't have a .map file
//   to 100% confirm).
// There's no way to know what code xSurfaceInit__FUsPC8xSurface may have contained other than the
//   call to xSurface::operator=, so the following code is just speculation. It doesn't really
//   matter what the code is for matching purposes since this function will get stripped out by the
//   linker - the purpose is to force the compiler to generate xSurface::operator= here.
void xSurfaceInit(uint16 n, const xSurface* ent)
{
    surfs[n] = *ent;
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
