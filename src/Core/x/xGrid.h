#ifndef XGRID_H
#define XGRID_H

#include <types.h>

#include "xMath3.h"

struct xEnt;

struct xGridBound
{
    void* data;
    uint16 gx;
    uint16 gz;

    // Offset: 0x8
    uint8 ingrid;
    uint8 oversize;
    uint8 deleted;
    uint8 gpad;

    // Offset: 0xC
    xGridBound** head;
    xGridBound* next;
};

struct xGrid
{
    uint8 ingrid_id;
    uint8 pad[3];
    uint16 nx;
    uint16 nz;

    // Offset: 0x8
    float32 minx;
    float32 minz;
    float32 maxx;
    float32 maxz;

    // Offset: 0x18
    float32 csizex;
    float32 csizez;
    float32 inv_csizex;
    float32 inv_csizez;

    // Offset: 0x28
    float32 maxr;
    xGridBound** cells;
    xGridBound* other;
};

struct xGridIterator
{
    xGridBound** listhead;
    xGridBound* curcell;
    uint32 delfound;
};

extern volatile int32 gGridIterActive;

void xGridBoundInit(xGridBound* gridb, void* data);
void xGridEmpty(xGrid* grid);
int32 xGridRemove(xGridBound* gridb);
xGridBound** xGridGetCell(xGrid* grid, const xEnt* ent, int32& grx, int32& grz);
void xGridGetCell(xGrid* grid, float32 posx, float32 posy, float32 posz, int32& grx, int32& grz);
xGridBound* xGridIterFirstCell(xGrid* grid, int32 grx, int32 grz, xGridIterator& iter);
xGridBound* xGridIterFirstCell(xGrid* grid, float32 posx, float32, float32 posz, int32& grx,
                               int32& grz, xGridIterator& it);
xGridBound* xGridIterFirstCell(xGridBound** head, xGridIterator& it);
xGridBound* xGridIterNextCell(xGridIterator& it);
void xGridIterClose(xGridIterator& it);

#endif