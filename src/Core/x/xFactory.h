#ifndef XFACTORY_H
#define XFACTORY_H

#include "xRMemData.h"
#include <types.h>

struct xFactoryInst : RyzMemData
{
    int32 itemType;
    xFactoryInst* nextprod;
    xFactoryInst* prevprod;

    xFactoryInst();
    ~xFactoryInst();
};

#endif