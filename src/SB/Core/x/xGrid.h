#ifndef XGRID_H
#define XGRID_H

#include <types.h>

#include "xMath3.h"

struct xEnt;
struct xQCData;

struct xGridBound
{
    void* data;
    U16 gx;
    U16 gz;

    // Offset: 0x8
    U8 ingrid;
    U8 oversize;
    U8 deleted;
    U8 gpad;

    // Offset: 0xC
    xGridBound** head;
    xGridBound* next;
};

struct xGrid
{
    U8 ingrid_id;
    U8 pad[3];
    U16 nx;
    U16 nz;

    // Offset: 0x8
    F32 minx;
    F32 minz;
    F32 maxx;
    F32 maxz;

    // Offset: 0x18
    F32 csizex;
    F32 csizez;
    F32 inv_csizex;
    F32 inv_csizez;

    // Offset: 0x28
    F32 maxr;
    xGridBound** cells;
    xGridBound* other;
};

struct xGridIterator
{
    xGridBound** listhead;
    xGridBound* curcell;
    U32 delfound;
};

typedef S32 (*GridEntCallback)(xEnt*, void*);

extern volatile S32 gGridIterActive;

void xGridBoundInit(xGridBound* gridb, void* data);
void xGridEmpty(xGrid* grid);
S32 xGridRemove(xGridBound* gridb);
xGridBound** xGridGetCell(xGrid* grid, const xEnt* ent, S32& grx, S32& grz);
void xGridGetCell(xGrid* grid, F32 posx, F32 posy, F32 posz, S32& grx, S32& grz);
xGridBound* xGridIterFirstCell(xGrid* grid, S32 grx, S32 grz, xGridIterator& iter);
xGridBound* xGridIterFirstCell(xGrid* grid, F32 posx, F32, F32 posz, S32& grx,
                               S32& grz, xGridIterator& it);
xGridBound* xGridIterFirstCell(xGridBound** head, xGridIterator& it);
xGridBound* xGridIterNextCell(xGridIterator& it);
void xGridIterClose(xGridIterator& it);
void xGridCheckPosition(xGrid* grid, xVec3* pos, xQCData* qcd, GridEntCallback hitCB, void* cbdata);

#endif
