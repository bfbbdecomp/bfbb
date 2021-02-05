#include "xQuickCull.h"

#include <types.h>

#if 1

// func_8003C498
#pragma GLOBAL_ASM("asm/Core/x/xQuickCull.s", "xQuickCullInit__FP10xQCControlffffff")

#else

// WIP.
void xQuickCullInit(xQCControl* ctrl, float32 xmin, float32 ymin, float32 zmin, float32 xmax,
                    float32 ymax, float32 zmax)
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

#if 1

// func_8003C5C0
#pragma GLOBAL_ASM("asm/Core/x/xQuickCull.s", "xQuickCullIsects__FPC7xQCDataPC7xQCData")

#else

// WIP.
int32 xQuickCullIsects(const xQCData* a, const xQCData* b)
{
    return a->xmin <= b->xmax && a->ymin <= b->ymax && a->zmin <= b->zmax && b->xmin <= a->xmax &&
           b->ymin <= a->ymax && b->zmin <= a->zmax;
}

#endif

// func_8003C660
#pragma GLOBAL_ASM("asm/Core/x/xQuickCull.s",                                                      \
                   "xQuickCullForBound__FP10xQCControlP7xQCDataPC6xBound")

// func_8003C6BC
#pragma GLOBAL_ASM("asm/Core/x/xQuickCull.s",                                                      \
                   "xQuickCullCellForVec__FP10xQCControlP7xQCDataPC5xVec3")

// func_8003C7EC
#pragma GLOBAL_ASM("asm/Core/x/xQuickCull.s", "xQuickCullCellMerge__FP7xQCDataPC7xQCDataPC7xQCData")

// func_8003C8C0
#pragma GLOBAL_ASM("asm/Core/x/xQuickCull.s", "xQuickCullForLine__FP10xQCControlP7xQCDataPC6xLine3")

// func_8003C928
#pragma GLOBAL_ASM("asm/Core/x/xQuickCull.s", "xQuickCullForRay__FP10xQCControlP7xQCDataPC5xRay3")

// func_8003CA98
#pragma GLOBAL_ASM("asm/Core/x/xQuickCull.s",                                                      \
                   "xQuickCullForSphere__FP10xQCControlP7xQCDataPC7xSphere")

// func_8003CB60
#pragma GLOBAL_ASM("asm/Core/x/xQuickCull.s", "xQuickCullForBox__FP10xQCControlP7xQCDataPC4xBox")

// func_8003CBCC
#pragma GLOBAL_ASM("asm/Core/x/xQuickCull.s",                                                      \
                   "xQuickCullForOBB__FP10xQCControlP7xQCDataPC4xBoxPC7xMat4x3")

// func_8003CC20
#pragma GLOBAL_ASM("asm/Core/x/xQuickCull.s", "xQuickCullForEverything__FP7xQCData")
