#ifndef XQUICKCULL_H
#define XQUICKCULL_H

#include "xVec3.h"

// Size: 0x20
struct xQCData
{
    int8 xmin;
    int8 ymin;
    int8 zmin;
    int8 zmin_dup;
    int8 xmax;
    int8 ymax;
    int8 zmax;
    int8 zmax_dup;
    xVec3 min;
    xVec3 max;
};

struct xQCControl
{
    float32 world_xmin;
    float32 world_ymin;
    float32 world_zmin;
    float32 world_xmax;
    float32 world_ymax;
    float32 world_zmax;
    float32 world_xsz;
    float32 world_ysz;
    float32 world_zsz;
    float32 scale_x;
    float32 scale_y;
    float32 scale_z;
    float32 center_x;
    float32 center_y;
    float32 center_z;
};

extern xQCControl xqc_def_ctrl;

struct xBound;

void xQuickCullForEverything(xQCData* q);
int32 xQuickCullIsects(const xQCData* a, const xQCData* b);
void xQuickCullForBound(xQCData* q, const xBound* b);
void xQuickCullForBound(xQCControl* ctrl, xQCData* q, const xBound* b);

#endif