#ifndef XENTDRIVE_H
#define XENTDRIVE_H

#include "xEnt.h"
#include "xCollide.h"

struct xEntDrive
{
    struct tri_data : xCollis::tri_data
    {
        xVec3 loc;
        F32 yaw;
        const xCollis* coll;
    };

    U32 flags;
    F32 otm;
    F32 otmr;
    F32 os;
    F32 tm;
    F32 tmr;
    F32 s;
    xEnt* odriver;
    xEnt* driver;
    xEnt* driven;
    xVec3 op;
    xVec3 p;
    xVec3 q;
    F32 yaw;
    xVec3 dloc;

    // 0x5c
    tri_data tri;
};

void xEntDriveInit(xEntDrive* drv, xEnt* driven);
void xEntDriveMount(xEntDrive* drv, xEnt* driver, F32 mt, const xCollis* coll);
void xEntDriveDismount(xEntDrive* drv, F32 dmt);
void xEntDriveUpdate(xEntDrive* drv, xScene* s, F32 dt, const xCollis* coll);

#endif
