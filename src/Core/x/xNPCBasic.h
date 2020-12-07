#ifndef XNPCBASIC_H
#define XNPCBASIC_H

#include "xEnt.h"
#include "xFactory.h"
#include "xShadowSimple.h"

struct xNPCBasic : xEnt, xFactoryInst
{
    void (*f_setup)(xEnt*);
    void (*f_reset)(xEnt*);
    struct
    {
        int32 flg_basenpc : 16;
        int32 inUpdate : 8;
        int32 flg_upward : 8;
    };
    int32 colFreq;
    int32 colFreqReset;
    struct
    {
        uint32 flg_colCheck : 8;
        uint32 flg_penCheck : 8;
        uint32 flg_unused : 16;
    };
    int32 myNPCType;
    xEntShadow entShadow_embedded;
    xShadowSimpleCache simpShadow_embedded;
};

#endif