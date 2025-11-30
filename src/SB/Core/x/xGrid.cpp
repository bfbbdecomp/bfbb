#include "xGrid.h"

#include "string.h"

#include "xMath.h"
#include "xMemMgr.h"
#include "xEnt.h"

volatile S32 gGridIterActive = 0;

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

// FIXME: Usual floating point problems, floating point loads get pulled to the start.
// Also, there's something funny going on with the malloc + memset at the end,
// I think they may not have used the obvious pattern for it, since changing
// the multiplication order for the second one generates closer machine code
// than the same for both lines.
void xGridInit(xGrid* grid, const xBox* bounds, U16 nx, U16 nz, U8 ingrid_id)
{
    grid->ingrid_id = ingrid_id;
    grid->nx = nx;
    grid->nz = nz;
    grid->minx = bounds->upper.x;
    grid->minz = bounds->upper.z;
    grid->maxx = bounds->lower.x;
    grid->maxz = bounds->lower.z;
    F32 gsizex = grid->maxx - grid->minx;
    F32 gsizez = grid->maxz - grid->minz;
    grid->csizex = gsizex / nx;
    grid->csizez = gsizex / nz;

    if (__fabs(gsizex) <= 0.001f)
    {
        grid->inv_csizex = 1.0f;
    }
    else
    {
        grid->inv_csizex = nx / gsizex;
    }

    if (__fabs(gsizez) <= 0.001f)
    {
        grid->inv_csizez = 1.0f;
    }
    else
    {
        grid->inv_csizez = nz / gsizez;
    }

    grid->maxr = 0.25f * MAX(grid->csizex, grid->csizez);
    grid->cells = (xGridBound**)xMemAllocSize(nx * nz * sizeof(xGridBound*));
    memset(grid->cells, 0, sizeof(xGridBound*) * (nz * nx));
}

void xGridKill(xGrid* grid)
{
    xGridEmpty(grid);
    grid->cells = NULL;
}

void xGridEmpty(xGrid* grid)
{
    for (S32 x = 0; x < grid->nx; ++x)
    {
        for (S32 z = 0; z < grid->nz; ++z)
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

void xGridAdd(xGrid* grid, xGridBound* bound, S32 x, S32 z)
{
    xGridAddToCell(&grid->cells[z * grid->nx] + x, bound);
}

S32 xGridAdd(xGrid* grid, xEnt* ent)
{
    xBound* bound;
    xVec3* center;
    F32 maxr;

    bound = &ent->bound;
    maxr = grid->maxr;

    if (bound->type == XBOUND_TYPE_SPHERE)
    {
        xSphere* sph = &bound->sph;
        center = &sph->center;
        if (bound->sph.r >= maxr)
        {
            S32 r = xGridAddToCell(&grid->other, &ent->gridb);
            if (r)
            {
                ent->gridb.ingrid = grid->ingrid_id;
            }
            return r;
        }
    }
    else if (bound->type == XBOUND_TYPE_OBB)
    {
        xBBox* bbox = &bound->box;
        center = &bbox->center;
        F32 rx = bbox->box.upper.x - bbox->box.lower.x;
        F32 ry = bbox->box.upper.y - bbox->box.lower.y;
        F32 rz = bbox->box.upper.z - bbox->box.lower.z;
        F32 len2 =
            SQR(rx) *
                (SQR(bound->mat->right.x) + SQR(bound->mat->right.y) + SQR(bound->mat->right.z)) +
            SQR(ry) * (SQR(bound->mat->up.x) + SQR(bound->mat->up.y) + SQR(bound->mat->up.z)) +
            SQR(rz) * (SQR(bound->mat->at.x) + SQR(bound->mat->at.y) + SQR(bound->mat->at.z));
        if (len2 >= 4.0f * maxr * maxr)
        {
            S32 r = xGridAddToCell(&grid->other, &ent->gridb);
            if (r)
            {
                ent->gridb.ingrid = grid->ingrid_id;
            }
            return r;
        }
    }
    else if (bound->type == XBOUND_TYPE_BOX)
    {
        xBBox* bbox = &bound->box;
        center = &bbox->center;
        F32 rx = bound->box.box.upper.x - bound->box.box.lower.x;
        F32 rz = bound->box.box.upper.z - bound->box.box.lower.z;
        F32 len2 = SQR(rx) + SQR(rz);
        if (len2 >= 4.0f * maxr * maxr)
        {
            S32 r = xGridAddToCell(&grid->other, &ent->gridb);
            if (r)
            {
                ent->gridb.ingrid = grid->ingrid_id;
            }
            return r;
        }
    }
    else
    {
        return 0;
    }

    F32 cgridx = center->x - grid->minx;
    cgridx *= grid->inv_csizex;

    F32 cgridz = center->z - grid->minz;
    cgridz *= grid->inv_csizez;

    S32 x = (S32)MIN(grid->nx - 1, MAX(0.0f, cgridx));
    S32 z = (S32)MIN(grid->nz - 1, MAX(0.0f, cgridz));

    if (1)
    {
        ent->gridb.gx = x;
        ent->gridb.gz = z;
        ent->gridb.ingrid = grid->ingrid_id;
        return 1;
    }

    return 0;
}

S32 xGridRemove(xGridBound* bound)
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
    S32 dx;
    S32 dz;
    xGridGetCell(grid, ent, dx, dz);

    if (dx != ent->gridb.gx || dz != ent->gridb.gz)
    {
        if (xGridRemove(&ent->gridb))
        {
            xGridAdd(grid, &ent->gridb, dx, dz);
        }
    }
}

xGridBound** xGridGetCell(xGrid* grid, const xEnt* ent, S32& grx, S32& grz)
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

void xGridGetCell(xGrid* grid, F32 x, F32 y, F32 z, S32& grx, S32& grz)
{
    F32 pgridx = (x - grid->minx) * grid->inv_csizex;
    F32 pgridz = (z - grid->minz) * grid->inv_csizez;

    grx = MIN(F32((grid->nx - 1) ^ 0x8000), MAX(0, pgridx));
    grz = MIN(F32((grid->nz - 1) ^ 0x8000), MAX(0, pgridx));
}

xGridBound* xGridIterFirstCell(xGrid* grid, F32 posx, F32 posy, F32 posz, S32& grx, S32& grz,
                               xGridIterator& iter)
{
    xGridGetCell(grid, posx, posy, posz, grx, grz);
    return xGridIterFirstCell(grid, grx, grz, iter);
}

S32 xGridEntIsTooBig(xGrid* grid, const xEnt* ent)
{
    const xBound* bound = &ent->bound;
    F32 maxr = grid->maxr;

    if (bound->type == XBOUND_TYPE_SPHERE)
    {
        const xSphere* sph = &bound->sph;
        if (sph->r >= maxr)
        {
            return 1;
        }
    }
    else if (bound->type == XBOUND_TYPE_OBB)
    {
        const xBBox* bbox = &bound->box;
        F32 rx = bbox->box.upper.x - bbox->box.lower.x;
        F32 ry = bbox->box.upper.y - bbox->box.lower.y;
        F32 rz = bbox->box.upper.z - bbox->box.lower.z;
        F32 len2 =
            SQR(rx) *
                (SQR(bound->mat->right.x) + SQR(bound->mat->right.y) + SQR(bound->mat->right.z)) +
            SQR(ry) * (SQR(bound->mat->up.x) + SQR(bound->mat->up.y) + SQR(bound->mat->up.z)) +
            SQR(rz) * (SQR(bound->mat->at.x) + SQR(bound->mat->at.y) + SQR(bound->mat->at.z));
        if (len2 >= 4.0f * maxr * maxr)
        {
            return 1;
        }
    }
    else if (bound->type == XBOUND_TYPE_BOX)
    {
        const xBBox* bbox = &bound->box;
        F32 rx = bbox->box.upper.x - bbox->box.lower.x;
        F32 rz = bbox->box.upper.z - bbox->box.lower.z;
        F32 len2 = SQR(rx) + SQR(rz);
        if (len2 >= 4.0f * maxr * maxr)
        {
            return 1;
        }
    }

    return 0;
}

void xGridCheckPosition(xGrid* grid, xVec3* pos, xQCData* qcd, xGridCheckPositionCallback hitCB,
                        void* cbdata)
{
    xGridIterator it;
    S32 px, pz;
    xGridBound* cell;

    cell = xGridIterFirstCell(grid, pos->x, pos->y, pos->z, px, pz, it);
    while (cell)
    {
        xBound* cellbound = (xBound*)(cell + 1);
        if (xQuickCullIsects(qcd, &cellbound->qcd) && !hitCB((xEnt*)cell->data, cbdata))
        {
            xGridIterClose(it);
            return;
        }
        cell = xGridIterNextCell(it);
    }

    xBox clbox;
    clbox.lower.x = grid->csizex * px;
    clbox.lower.z = grid->csizez * pz;
    clbox.lower.x += grid->minx;
    clbox.lower.z += grid->minz;

    F32 clcenterx = 0.5f * grid->csizex;
    clcenterx += clbox.lower.x;

    F32 clcenterz = 0.5f * grid->csizez;
    clcenterz += clbox.lower.z;

    static S32 offs[4][3][2] = { -1, 0, -1, -1, 0, -1, 0, -1, 1,  -1, 1,  0,
                                 1,  0, 1,  1,  0, 1,  0, 1,  -1, 1,  -1, 0 };

    static S32 k;

    if (pos->x < clcenterx)
    {
        if (pos->z < clcenterz)
        {
            k = 0;
        }
        else
        {
            k = 1;
        }
    }
    else
    {
        if (pos->z < clcenterz)
        {
            k = 3;
        }
        else
        {
            k = 2;
        }
    }

    for (S32 i = 0; i < 3; i++)
    {
        S32 _x = px + offs[k][i][1];
        if (_x >= 0 && _x < grid->nx)
        {
            S32 _z = pz + offs[k][i][0];
            if (_z >= 0 && _z < grid->nz)
            {
                cell = xGridIterFirstCell(grid, _x, _z, it);
                while (cell)
                {
                    xBound* cellbound = (xBound*)(cell + 1);
                    if (xQuickCullIsects(qcd, &cellbound->qcd) && !hitCB((xEnt*)cell->data, cbdata))
                    {
                        xGridIterClose(it);
                        return;
                    }
                    cell = xGridIterNextCell(it);
                }
            }
        }
    }

    cell = xGridIterFirstCell(&grid->other, it);
    while (cell)
    {
        xBound* cellbound = (xBound*)(cell + 1);
        if (xQuickCullIsects(qcd, &cellbound->qcd) && !hitCB((xEnt*)cell->data, cbdata))
        {
            xGridIterClose(it);
            return;
        }
        cell = xGridIterNextCell(it);
    }
}
