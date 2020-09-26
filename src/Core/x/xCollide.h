#ifndef XCOLLIDE_H
#define XCOLLIDE_H

#include "xModel.h"

struct xCollis
{
    struct tri_data
    {
        unsigned int index;
        float r;
        float d;
    };

    unsigned int flags;
    unsigned int oid;
    void* optr;
    xModelInstance* mptr;
    float dist;
    xVec3 norm;
    xVec3 tohit;
    xVec3 depen;
    xVec3 hdng;
    union
    {
        struct
        {
            float t;
            float u;
            float v;
        } tuv;
        tri_data tri;
    };
};

#endif