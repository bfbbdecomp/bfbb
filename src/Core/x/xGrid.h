#ifndef XGRID_H
#define XGRID_H

#include <types.h>

struct xGridBound
{
    void* data;
    uint16 gx;
    uint16 gz;
    uint8 ingrid;
    uint8 oversize;
    uint8 deleted;
    uint8 gpad;
    xGridBound** head;
    xGridBound* next;
};

#endif