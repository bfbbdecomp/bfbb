#ifndef XCOLLIDE_H
#define XCOLLIDE_H

#include <types.h>
#include "xModel.h"

struct xCollis
{
    struct tri_data
    {
        uint32 index;
        float32 r;
        float32 d;
    };

    uint32 flags;
    uint32 oid;
    void* optr;
    xModelInstance* mptr;
    float32 dist;
    xVec3 norm;
    xVec3 tohit;
    xVec3 depen;
    xVec3 hdng;
    union
    {
        struct
        {
            float32 t;
            float32 u;
            float32 v;
        } tuv;
        tri_data tri;
    };
};

#endif