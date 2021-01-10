#ifndef ICOLOR_H
#define ICOLOR_H

#include <types.h>

struct iColor_tag
{
    uint8 r;
    uint8 g;
    uint8 b;
    uint8 a;

    iColor_tag& operator=(const iColor_tag&); // temp
};

#endif