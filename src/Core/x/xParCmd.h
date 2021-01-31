#ifndef XPARCMD_H
#define XPARCMD_H

#include <types.h>

struct xParCmdAsset
{
    uint32 type;
    uint8 enabled;
    uint8 mode;
    uint8 pad[2];
};

struct xParCmdTex : xParCmdAsset
{
    float32 x1;
    float32 y1;
    float32 x2;
    float32 y2;
    uint8 birthMode;
    uint8 rows;
    uint8 cols;
    uint8 unit_count;
    float32 unit_width;
    float32 unit_height;
};

struct xParCmd
{
    uint32 flag;
    xParCmdAsset* tasset;
};

#endif