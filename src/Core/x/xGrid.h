#ifndef XGRID_H
#define XGRID_H

struct xGridBound
{
    void* data;
    unsigned short gx;
    unsigned short gz;
    unsigned char ingrid;
    unsigned char oversize;
    unsigned char deleted;
    unsigned char gpad;
    xGridBound** head;
    xGridBound* next;
};

#endif