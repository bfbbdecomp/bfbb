#ifndef ZPICKUPTABLE_H
#define ZPICKUPTABLE_H

#include <types.h>

struct zAssetPickupTable
{
    U32 Magic;
    U32 Count;
};

struct zAssetPickup
{
    U32 pickupHash;
    U8 pickupType;
    U8 pickupIndex;
    U16 pickupFlags;
    U32 quantity;
    U32 modelID;
    U32 animID;
};

#endif
