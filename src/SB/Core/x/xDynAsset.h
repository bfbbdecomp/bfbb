#ifndef XDYNASSET_H
#define XDYNASSET_H

#include "xBase.h"

struct xDynAsset : xBaseAsset
{
    uint32 type;
    uint16 version;
    uint16 handle;
};

#endif