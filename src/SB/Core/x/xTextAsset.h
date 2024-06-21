#ifndef XTEXTASSET_H
#define XTESTASSET_H

#include <types.h>

struct xTextAsset
{
    uint32 len;
};

#define xTextAssetGetText(t) ((char*)((xTextAsset*)(t) + 1))

#endif