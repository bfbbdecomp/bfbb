#include "xQuickCull.h"

#include <types.h>

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
