#ifndef ZENT_H
#define ZENT_H

#include "../Core/x/xEnt.h"
#include "../Core/x/xAnim.h"

struct zEnt : xEnt
{
    xAnimTable* atbl;
};

int32 zParamGetFloatList(xModelAssetParam* param, uint32 size, const int8* tok, int32 count, float32* def, float32* result);

#endif