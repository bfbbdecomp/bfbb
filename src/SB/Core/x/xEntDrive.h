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

        tri_data& operator=(const tri_data& rhs)
        {
            xCollis::tri_data::operator=(rhs);
            *(S32*)(&loc.x) = *(S32*)(&rhs.loc.x);
            *(S32*)(&loc.y) = *(S32*)(&rhs.loc.y);
            *(S32*)(&loc.z) = *(S32*)(&rhs.loc.z);
            yaw = rhs.yaw;
            coll = rhs.coll;
            return *this;
        }
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

    xEntDrive& operator=(const xEntDrive& rhs)
    {
        flags = rhs.flags;
        otm = rhs.otm;
        otmr = rhs.otmr;
        os = rhs.os;
        tm = rhs.tm;
        tmr = rhs.tmr;
        s = rhs.s;
        odriver = rhs.odriver;
        driver = rhs.driver;
        driven = rhs.driven;
        *(S32*)(&op.x) = *(S32*)(&rhs.op.x);
        *(S32*)(&op.y) = *(S32*)(&rhs.op.y);
        *(S32*)(&op.z) = *(S32*)(&rhs.op.z);
        *(S32*)(&p.x) = *(S32*)(&rhs.p.x);
        *(S32*)(&p.y) = *(S32*)(&rhs.p.y);
        *(S32*)(&p.z) = *(S32*)(&rhs.p.z);
        *(S32*)(&q.x) = *(S32*)(&rhs.q.x);
        *(S32*)(&q.y) = *(S32*)(&rhs.q.y);
        *(S32*)(&q.z) = *(S32*)(&rhs.q.z);
        yaw = rhs.yaw;
        *(S32*)(&dloc.x) = *(S32*)(&rhs.dloc.x);
        *(S32*)(&dloc.y) = *(S32*)(&rhs.dloc.y);
        *(S32*)(&dloc.z) = *(S32*)(&rhs.dloc.z);
        tri = rhs.tri;
        return *this;
    }
};

void xEntDriveInit(xEntDrive* drv, xEnt* driven);
void xEntDriveMount(xEntDrive* drv, xEnt* driver, F32 mt, const xCollis* coll);
void xEntDriveDismount(xEntDrive* drv, F32 dmt);
void xEntDriveUpdate(xEntDrive* drv, xScene* s, F32 dt, const xCollis* coll);

#endif
