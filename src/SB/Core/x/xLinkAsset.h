#ifndef XLINKASSET_H
#define XLINKASSET_H

#include <types.h>

struct xLinkAsset
{
    U16 srcEvent;
    U16 dstEvent;
    U32 dstAssetID;
    F32 param[4];
    U32 paramWidgetAssetID;
    U32 chkAssetID;
};

#endif
