#include "xQuickCull.h"
#include "xRay3.h"
#include "xBound.h"

#include <types.h>

xQCControl xqc_def_ctrl;

void xQuickCullInit(xQCControl* ctrl, F32 xmin, F32 ymin, F32 zmin, F32 xmax, F32 ymax, F32 zmax)
{
    ctrl->world_xmin = xmin;
    ctrl->world_ymin = ymin;
    ctrl->world_zmin = zmin;
    ctrl->world_xmax = xmax;
    ctrl->world_ymax = ymax;
    ctrl->world_zmax = zmax;
    ctrl->world_xsz = xmax - xmin;
    ctrl->world_ysz = ymax - ymin;
    ctrl->world_zsz = zmax - zmin;
    if (((ctrl->world_xsz <= 0.0f) || (ctrl->world_ysz <= 0.0f)) || (ctrl->world_zsz <= 0.0f))
    {
        ctrl->world_zsz = 1.0f;
        ctrl->world_ysz = 1.0f;
        ctrl->world_xsz = 1.0f;
    }
    ctrl->scale_x = 127.0f / ctrl->world_xsz;
    ctrl->scale_y = 127.0f / ctrl->world_ysz;
    ctrl->scale_z = 127.0f / ctrl->world_zsz;
    ctrl->center_x = 0.5f * (xmax + xmin) + 0.5f / ctrl->scale_x;
    ctrl->center_y = 0.5f * (ymax + ymin) + 0.5f / ctrl->scale_y;
    ctrl->center_z = 0.5f * (zmax + zmin) + 0.5f / ctrl->scale_z;
}

void xQuickCullInit(xQCControl* ctrl, const xBox* box)
{
    xQuickCullInit(ctrl, box->lower.x, box->lower.y, box->lower.z, box->upper.x, box->upper.y,
                   box->upper.z);
}

// WIP.
S32 xQuickCullIsects(const xQCData* a, const xQCData* b)
{
    return a->xmin <= b->xmax && a->ymin <= b->ymax && a->zmin <= b->zmax && b->xmin <= a->xmax &&
           b->ymin <= a->ymax && b->zmin <= a->zmax;
}

void xQuickCullForBound(xQCControl* ctrl, xQCData* q, const xBound* b)
{
    if (b->type == 1)
    {
        xQuickCullForSphere(ctrl, q, &b->sph);
    }
    else if (b->type == 2)
    {
        xQuickCullForBox(ctrl, q, &b->box.box);
    }
    else if (b->type == 4)
    {
        xQuickCullForOBB(ctrl, q, &b->box.box, b->mat);
    }
}

static void xQuickCullCellForVec(xQCControl* ctrl, xQCData* c, const xVec3* v)
{
    c->xmin = CLAMP((int)((v->x - ctrl->center_x) * ctrl->scale_x), -127, 127);
    c->ymin = CLAMP((int)((v->y - ctrl->center_y) * ctrl->scale_y), -127, 127);
    c->zmin = CLAMP((int)((v->z - ctrl->center_z) * ctrl->scale_z), -127, 127);
    c->zmin_dup = c->zmin;
    c->xmax = c->xmin;
    c->ymax = c->ymin;
    c->zmax = c->zmin;
    c->zmax_dup = c->zmin_dup;
}

static void xQuickCullCellMerge(xQCData* o, const xQCData* a, const xQCData* b)
{
    o->xmin = MIN(a->xmin, b->xmin);
    o->ymin = MIN(a->ymin, b->ymin);
    o->zmin = MIN(a->zmin, b->zmin);
    o->zmin_dup = o->zmin;
    o->xmax = MAX(a->xmax, b->xmax);
    o->ymax = MAX(a->ymax, b->ymax);
    o->zmax = MAX(a->zmax, b->zmax);
    o->zmax_dup = o->zmax;
}

void xQuickCullForLine(xQCControl* ctrl, xQCData* q, const xLine3* ln)
{
    xQCData a;
    xQuickCullCellForVec(ctrl, &a, &ln->p1);

    xQCData b;
    xQuickCullCellForVec(ctrl, &b, &ln->p2);

    xQuickCullCellMerge(q, &a, &b);
}

void xQuickCullForRay(xQCControl* ctrl, xQCData* q, const xRay3* r)
{
    xLine3 ln;

    if (r->flags & 0x400)
    {
        xVec3 delta;
        delta.x = r->dir.x * r->min_t, delta.y = r->dir.y * r->min_t, delta.z = r->dir.z * r->min_t;
        ln.p1.x = r->origin.x + delta.x, ln.p1.y = r->origin.y + delta.y,
        ln.p1.z = r->origin.z + delta.z;
    }
    else
    {
        ln.p1.x = r->origin.x, ln.p1.y = r->origin.y, ln.p1.z = r->origin.z;
    }

    if (r->flags & 0x800)
    {
        F32 len;
        if (r->flags & 0x400)
        {
            len = r->max_t - r->min_t;
        }
        else
        {
            len = r->max_t;
        }
        ln.p2.x = r->dir.x * len, ln.p2.y = r->dir.y * len, ln.p2.z = r->dir.z * len;
    }
    else
    {
        ln.p2.x = r->dir.x, ln.p2.y = r->dir.y, ln.p2.z = r->dir.z;
    }

    ln.p2.x = ln.p1.x + ln.p2.x, ln.p2.y = ln.p1.y + ln.p2.y, ln.p2.z = ln.p1.z + ln.p2.z;

    xQCData a;
    xQuickCullCellForVec(ctrl, &a, &ln.p1);

    xQCData b;
    xQuickCullCellForVec(ctrl, &b, &ln.p2);

    xQuickCullCellMerge(q, &a, &b);
}

void xQuickCullForSphere(xQCControl* ctrl, xQCData* q, const xSphere* s)
{
    xVec3 v1;
    xVec3 v2;
    F32 radius_adjusted = 0.05f + s->r;

    v1.x = -radius_adjusted, v1.y = -radius_adjusted, v1.z = -radius_adjusted;
    v2.x = radius_adjusted, v2.y = radius_adjusted, v2.z = radius_adjusted;

    v1.x += s->center.x, v1.y += s->center.y, v1.z += s->center.z;
    v2.x += s->center.x, v2.y += s->center.y, v2.z += s->center.z;

    xQCData a;
    xQuickCullCellForVec(ctrl, &a, &v1);

    xQCData b;
    xQuickCullCellForVec(ctrl, &b, &v2);

    xQuickCullCellMerge(q, &a, &b);
}

void xQuickCullForBox(xQCControl* ctrl, xQCData* q, const xBox* box)
{
    xQCData a;
    xQuickCullCellForVec(ctrl, &a, &box->lower);

    xQCData b;
    xQuickCullCellForVec(ctrl, &b, &box->upper);

    xQuickCullCellMerge(q, &a, &b);
}

void xQuickCullForOBB(xQCControl* ctrl, xQCData* q, const xBox* b, const xMat4x3* m)
{
    xBox worldbox;
    xBoxInitBoundOBB(&worldbox, b, m);
    xQuickCullForBox(ctrl, q, &worldbox);
}

void xQuickCullForEverything(xQCData* q)
{
    q->xmin = -128;
    q->ymin = -128;
    q->zmin = -128;
    q->zmin_dup = -128;
    q->xmax = 127;
    q->ymax = 127;
    q->zmax = 127;
    q->zmax_dup = 127;
}
