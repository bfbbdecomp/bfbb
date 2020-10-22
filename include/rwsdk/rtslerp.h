#ifndef RTSLERP_H
#define RTSLERP_H

#include "rwcore.h"
#include "rtquat.h"

struct RtQuatSlerpCache
{
    RtQuat raFrom;
    RtQuat raTo;
    RwReal omega;
    RwBool nearlyZeroOm;
};

#ifdef __cplusplus
extern "C" {
#endif

extern void RtQuatSetupSlerpCache(RtQuat* qpFrom, RtQuat* qpTo, RtQuatSlerpCache* sCache);

#ifdef __cplusplus
}
#endif

#endif