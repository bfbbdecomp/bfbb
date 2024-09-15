#ifndef ICOLOR_H
#define ICOLOR_H

#include <types.h>

struct iColor_tag
{
    U8 r;
    U8 g;
    U8 b;
    U8 a;

    iColor_tag& operator=(const iColor_tag& rhs)
    {
        this->r = rhs.r;
        this->g = rhs.g;
        this->b = rhs.b;
        this->a = rhs.a;
        return *this;
    };
};

#endif
