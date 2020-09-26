#ifndef ZENT_H
#define ZENT_H

#include "../Core/x/xEnt.h"
#include "../Core/x/xAnim.h"

struct zEnt : xEnt
{
    xAnimTable* atbl;
};

#endif