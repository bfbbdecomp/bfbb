#include "xQuickCull.h"

#include <types.h>

#if 0
// WIP.
void xQuickCullInit(xQCControl* ctrl, F32 xmin, F32 ymin, F32 zmin, F32 xmax,
                    F32 ymax, F32 zmax)
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
    fVar1 = @527;
    if (((ctrl->world_xsz <= @526) || (ctrl->world_ysz <= @526)) || (ctrl->world_zsz <= @526))
    {
        ctrl->world_zsz = @527;
        ctrl->world_ysz = fVar1;
        ctrl->world_xsz = fVar1;
    }
    ctrl->scale_x = @528 / ctrl->world_xsz;
    ctrl->scale_y = @528 / ctrl->world_ysz;
    ctrl->scale_z = @528 / ctrl->world_zsz;
    ctrl->center_x = @529 * (xmax + xmin) + @529 / ctrl->scale_x;
    ctrl->center_y = @529 * (ymax + ymin) + @529 / ctrl->scale_y;
    ctrl->center_z = @529 * (zmax + zmin) + @529 / ctrl->scale_z;
}

#endif

void xQuickCullInit(xQCControl* ctrl, const xBox* box)
{
    xQuickCullInit(ctrl, box->lower.x, box->lower.y, box->lower.z, box->upper.x, box->upper.y,
                   box->upper.z);
}

#if 0
// WIP.
S32 xQuickCullIsects(const xQCData* a, const xQCData* b)
{
    return a->xmin <= b->xmax && a->ymin <= b->ymax && a->zmin <= b->zmax && b->xmin <= a->xmax &&
           b->ymin <= a->ymax && b->zmin <= a->zmax;
}

#endif
