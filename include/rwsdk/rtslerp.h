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

#define RtQuatSlerpMacro(qpResult, qpFrom, qpTo, rT, sCache)                                       \
    MACRO_START                                                                                    \
    {                                                                                              \
        if ((rT) <= ((RwReal)0))                                                                   \
        {                                                                                          \
            /* t is before start */                                                                \
            *(qpResult) = *(qpFrom);                                                               \
        }                                                                                          \
        else if (((RwReal)1) <= (rT))                                                              \
        {                                                                                          \
            /* t is after end */                                                                   \
            *(qpResult) = *(qpTo);                                                                 \
        }                                                                                          \
        else                                                                                       \
        {                                                                                          \
            /* ... so t must be in the interior then */                                            \
            /* Calc coefficients rSclFrom, rSclTo */                                               \
            RwReal rSclFrom = ((RwReal)1) - (rT);                                                  \
            RwReal rSclTo = (rT);                                                                  \
                                                                                                   \
            if (!((sCache)->nearlyZeroOm))                                                         \
            {                                                                                      \
                /* Standard case: slerp */                                                         \
                /* SLERPMESSAGE(("Neither nearly ZERO nor nearly PI")); */                         \
                                                                                                   \
                rSclFrom *= (sCache)->omega;                                                       \
                RwSinMinusPiToPiMacro(rSclFrom, rSclFrom);                                         \
                rSclTo *= (sCache)->omega;                                                         \
                RwSinMinusPiToPiMacro(rSclTo, rSclTo);                                             \
            }                                                                                      \
                                                                                                   \
            /* Calc final values */                                                                \
            RwV3dScaleMacro(&(qpResult)->imag, &(sCache)->raFrom.imag, rSclFrom);                  \
            RwV3dIncrementScaledMacro(&(qpResult)->imag, &(sCache)->raTo.imag, rSclTo);            \
            (qpResult)->real =                                                                     \
                ((sCache)->raFrom.real * rSclFrom) + ((sCache)->raTo.real * rSclTo);               \
        }                                                                                          \
    }                                                                                              \
    MACRO_STOP

#define RtQuatSlerp(qpResult, qpFrom, qpTo, rT, sCache)                                            \
    RtQuatSlerpMacro(qpResult, qpFrom, qpTo, rT, sCache)

#ifdef __cplusplus
extern "C" {
#endif

extern void RtQuatSetupSlerpCache(RtQuat* qpFrom, RtQuat* qpTo, RtQuatSlerpCache* sCache);

#ifdef __cplusplus
}
#endif

#endif