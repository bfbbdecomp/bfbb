#ifndef XGRID_H
#define XGRID_H

#include <types.h>

#include "xMath3.h"

#include "xBound.h"

struct xEnt;
struct xQCData;

typedef S32 (*xGridCheckPositionCallback)(xEnt*, void*);

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
void xGridInit(xGrid* grid, const xBox* bounds, U16 nx, U16 nz, U8 ingrid_id);
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

struct grid_index
{
    U16 x;
    U16 z;
};

inline grid_index get_grid_index(const xGrid& grid, F32 x, F32 z)

//NONMATCH("https://decomp.me/scratch/pMa66")
{
    grid_index index = { range_limit<U16>((U16)((x - grid.minx) * grid.inv_csizex), 0, grid.nx - 1),
                         range_limit<U16>((U16)((z - grid.minz) * grid.inv_csizez), 0,
                                          grid.nz - 1) };
    return index;
}

template <class T>
inline void xGridCheckBound(xGrid& grid, const xBound& bound, const xQCData& qcd, T cb)
{
    xGridIterator it;

    xBox box;
    xBoundGetBox(box, bound);

    F32 ex = 0.25f * grid.csizex;
    F32 ez = 0.25f * grid.csizez;
    box.lower.x -= ex;
    box.lower.z -= ez;
    box.upper.x += ex;
    box.upper.z += ez;

    grid_index var_4C, var_50;
    var_50 = get_grid_index(grid, box.lower.x, box.lower.z);
    var_4C = get_grid_index(grid, box.upper.x, box.upper.z);

    xGridBound* cell = xGridIterFirstCell(&grid.other, it);
    while (cell)
    {
        if (xQuickCullIsects(&qcd, &((xBound*)(cell + 1))->qcd))
        {
            if (!cb(*(xEnt*)cell->data, *cell))
            {
                xGridIterClose(it);
                return;
            }
        }
        cell = xGridIterNextCell(it);
    }

    for (U16 gx = var_50.x; gx <= var_4C.x; gx++)
    {
        for (U16 gz = var_50.z; gz <= var_4C.z; gz++)
        {
            xGridBound* cell = xGridIterFirstCell(&grid, gx, gz, it);
            while (cell)
            {
                if (xQuickCullIsects(&qcd, &((xBound*)(cell + 1))->qcd))
                {
                    if (!cb(*(xEnt*)cell->data, *cell))
                    {
                        xGridIterClose(it);
                        return;
                    }
                }
                cell = xGridIterNextCell(it);
            }
        }
    }
}

#endif
