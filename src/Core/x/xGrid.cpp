#include "xGrid.h"

#include "string.h"

#include "xMath.h"
#include "xMemMgr.h"
#include "xEnt.h"

extern float xGrid_float_0p001;
extern float xGrid_float_one;
extern float xGrid_float_one_quarter;


void xGridBoundInit(xGridBound* bound, void* data)
{
    bound->data = data;
    bound->gx = -1;
    bound->gz = -1;
    bound->ingrid = 0;
    bound->oversize = 0;
    bound->head = 0;
    bound->next = 0;
    bound->gpad = 0xea;
}


#ifdef NON_MATCHING
// Usual floating point problems, floating point loads get pulled to the start.
// Also, there's something funny going on with the malloc + memset at the end,
// I think they may not have used the obvious pattern for it, since changing
// the multiplication order for the second one generates closer machine code
// than the same for both lines.
void xGridInit(xGrid* grid, xBox* bounds, uint16 nx, uint16 nz, uint8 ingrid_id)
{
    grid->ingrid_id = ingrid_id;
    grid->nx = nx;
    grid->nz = nz;
    grid->minx = bounds->upper.x;
    grid->minz = bounds->upper.z;
    grid->maxx = bounds->lower.x;
    grid->maxz = bounds->lower.z;
    float32 gsizex = grid->maxx - grid->minx;
    float32 gsizez = grid->maxz - grid->minz;
    grid->csizex = gsizex / nx;
    grid->csizez = gsizex / nz;

    if (__fabs(gsizex) <= xGrid_float_0p001)
    {
        grid->inv_csizex = xGrid_float_one;
    }
    else
    {
        grid->inv_csizex = nx / gsizex;
    }

    if (__fabs(gsizez) <= xGrid_float_0p001)
    {
        grid->inv_csizez = xGrid_float_one;
    }
    else
    {
        grid->inv_csizez = nz / gsizez;
    }

    grid->maxr = xGrid_float_one_quarter * MAX(grid->csizex, grid->csizez);
    grid->cells = (xGridBound**)xMemAllocSize(nx * nz * sizeof(xGridBound*));
    memset(grid->cells, 0, sizeof(xGridBound*) * (nz * nx));
}
#endif


void xGridKill(xGrid* grid)
{
    xGridEmpty(grid);
    grid->cells = NULL;
}


void xGridEmpty(xGrid* grid)
{
    for (int32 x = 0; x < grid->nx; ++x)
    {
        for (int32 z = 0; z < grid->nz; ++z)
        {
            xGridBound** head = &grid->cells[z * grid->nx];
            xGridBound* curr = head[x];
            while (curr)
            {
                xGridBound* currnext = curr->next;
                xGridBoundInit(curr, curr->data);
                curr = currnext;
            }
            head[x] = NULL;
        }
    }

    xGridBound* curr = grid->other;
    while (curr)
    {
        xGridBound* nextnext = curr->next;
        xGridBoundInit(curr, curr->data);
        curr = nextnext;
    }
    grid->other = NULL;
}


bool xGridAddToCell(xGridBound** boundList, xGridBound* bound)
{
    if (bound->head)
    {
        if (gGridIterActive == 0)
        {
            if (!xGridRemove(bound))
            {
                return false;
            }
        }
        else
        {
            return false;
        }
    }

    bound->head = boundList;
    bound->next = boundList[0];
    boundList[0] = bound;
    return true;
}


void xGridAdd(xGrid* grid, xGridBound* bound, int32 x, int32 z)
{
    xGridAddToCell(&grid->cells[z * grid->nx] + x, bound);
}





int32 xGridRemove(xGridBound* bound)
{
    if (bound->head)
    {
        if (gGridIterActive)
        {
            bound->deleted = 1;
            return 0;
        }
        else
        {
            xGridBound* curr = bound->head[0];
            xGridBound** prev = bound->head;
            while (curr && curr != bound)
            {
                prev = &curr->next;
                curr = curr->next;
            }

            *prev = curr->next;
            curr->next = NULL;
            curr->head = NULL;
            curr->ingrid = 0;
            curr->deleted = 0;
            curr->gx = -1;
            curr->gz = -1;
        }
    }
    return 1;
}


void xGridUpdate(xGrid* grid, xEnt* ent)
{
    int32 dx;
    int32 dz;
    xGridGetCell(grid, ent, dx, dz);

    if (dx != ent->gridb.gx || dz != ent->gridb.gz)
    {
        if (xGridRemove(&ent->gridb))
        {
            xGridAdd(grid, &ent->gridb, dx, dz);
        }
    }
}


xGridBound** xGridGetCell(xGrid* grid, const xEnt* ent, int32& grx, int32& grz)
{
    const xBound* bound = &ent->bound;
    const xVec3* center;
    if (bound->type == XBOUND_TYPE_SPHERE)
    {
        center = &bound->sph.center;
    }
    else if (bound->type == XBOUND_TYPE_OBB)
    {
        center = &bound->box.center;
    }
    else if (bound->type == XBOUND_TYPE_BOX)
    {
        center = &bound->box.center;
    }
    else
    {
        return 0;
    }

    xGridGetCell(grid, center->x, center->y, center->z, grx, grz);
    return &grid->cells[grz * grid->nx] + grx;
}


#ifdef NON_MATCHING
void xGridGetCell(xGrid* grid, float32 x, float32 y, float32 z, int32& grx, int32& grz)
{
    float32 pgridx = (x - grid->minx) * grid->inv_csizex;
    float32 pgridz = (z - grid->minz) * grid->inv_csizez;

    grx = MIN(float32((grid->nx - 1) ^ 0x8000), MAX(0, pgridx));
    grz = MIN(float32((grid->nz - 1) ^ 0x8000), MAX(0, pgridx));
}
#endif


xGridBound* xGridIterFirstCell(xGrid* grid, float32 posx, float32 posy, float32 posz, int32& grx,
                               int32& grz, xGridIterator& iter)
{
    xGridGetCell(grid, posx, posy, posz, grx, grz);
    return xGridIterFirstCell(grid, grx, grz, iter);
}
