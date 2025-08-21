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
void xGridInit(xGrid* grid /* r18 */, const xBox* bounds /* r2 */, U16 nx /* r17 */,
               U16 nz /* r16 */, U8 ingrid_id /* r2 */);
void xGridKill(xGrid* grid);
void xGridEmpty(xGrid* grid);
S32 xGridRemove(xGridBound* gridb);
void xGridUpdate(xGrid* grid, xEnt* ent);
xGridBound** xGridGetCell(xGrid* grid, const xEnt* ent, S32& grx, S32& grz);
void xGridGetCell(xGrid* grid, F32 posx, F32 posy, F32 posz, S32& grx, S32& grz);
xGridBound* xGridIterFirstCell(xGrid* grid, S32 grx, S32 grz, xGridIterator& iter);
xGridBound* xGridIterFirstCell(xGrid* grid, F32 posx, F32, F32 posz, S32& grx, S32& grz,
                               xGridIterator& it);
xGridBound* xGridIterFirstCell(xGridBound** head, xGridIterator& it);
xGridBound* xGridIterNextCell(xGridIterator& it);
void xGridIterClose(xGridIterator& it);
void xGridCheckPosition(xGrid* grid, xVec3* pos, xQCData* qcd, GridEntCallback hitCB, void* cbdata);
S32 xGridEntIsTooBig(xGrid* grid, const xEnt* ent);
S32 xGridAdd(xGrid* grid, xEnt* ent);

inline xGridBound* xGridIterFirstCell(xGridBound** head, xGridIterator& it)
{
    xGridBound* cell = *head;

    if (!cell)
    {
        return NULL;
    }

    it.delfound = 0;
    it.listhead = head;
    it.curcell = cell;

    gGridIterActive++;

    return cell;
}

inline xGridBound* xGridIterFirstCell(xGrid* grid, S32 grx, S32 grz, xGridIterator& iter)
{
    if (grx < 0 || grx >= grid->nx)
    {
        return NULL;
    }

    if (grz < 0 || grz >= grid->nz)
    {
        return NULL;
    }

    return xGridIterFirstCell(grid->cells + grz * grid->nx + grx, iter);
}

inline xGridBound* xGridIterNextCell(xGridIterator& it)
{
    if (it.curcell)
    {
        it.curcell = it.curcell->next;
    }

    while (it.curcell)
    {
        if (!it.curcell->deleted)
        {
            return it.curcell;
        }

        it.delfound = 1;
        it.curcell = it.curcell->next;
    }

    xGridIterClose(it);
    return NULL;
}

inline void xGridIterClose(xGridIterator& it)
{
    if (it.listhead)
    {
        gGridIterActive--;

        if (it.delfound && !gGridIterActive)
        {
            xGridBound* cell = *it.listhead;
            xGridBound** head = it.listhead;

            while (cell)
            {
                if (cell->deleted)
                {
                    *head = cell->next;

                    cell->next = NULL;
                    cell->head = NULL;
                    cell->ingrid = 0;
                    cell->deleted = 0;
                    cell->gx = 0xFFFF;
                    cell->gz = 0xFFFF;

                    cell = *head;
                }
                else
                {
                    head = &cell->next;
                    cell = cell->next;
                }
            }
        }

        it.listhead = NULL;
        it.curcell = NULL;
        it.delfound = 0;
    }
}

#endif
