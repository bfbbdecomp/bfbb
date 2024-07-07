#ifndef ZCONDITIONAL_H
#define ZCONDITIONAL_H

#include "xBase.h"

#define CONDITION_EQ 0
#define CONDITION_GT 1
#define CONDITION_LT 2
#define CONDITION_GE 3
#define CONDITION_LE 4
#define CONDITION_NE 5

struct zCondAsset : xBaseAsset
{
    uint32 constNum;
    uint32 expr1;
    uint32 op;
    uint32 value_asset;
};

struct _zConditional : xBase
{
    zCondAsset* asset;
};

void zConditionalInit(xBase* base, zCondAsset* asset);
void zConditionalInit(void* b, void* asset);
void zConditionalLoad(_zConditional* ent, xSerial* s);
void zConditionalSave(_zConditional* ent, xSerial* s);
uint32 zConditional_Evaluate(_zConditional* c);

#endif
