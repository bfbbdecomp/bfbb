#ifndef XENTDRIVE_H
#define XENTDRIVE_H

#include "xEnt.h"
#include "xCollide.h"

struct xEntDrive
{
    struct tri_data : xCollis::tri_data
    {
        xVec3 loc;
        float32 yaw;
        xCollis* coll;

        ASSIGNMENT_OPERATOR(tri_data)
    };

    uint32 flags;
    float32 otm;
    float32 otmr;
    float32 os;
    float32 tm;
    float32 tmr;
    float32 s;
    xEnt* odriver;
    xEnt* driver;
    xEnt* driven;
    xVec3 op;
    xVec3 p;
    xVec3 q;
    float32 yaw;
    xVec3 dloc;
    tri_data tri;

    ASSIGNMENT_OPERATOR(xEntDrive)
};

#endif