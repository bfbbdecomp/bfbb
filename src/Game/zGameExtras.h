#ifndef ZGAMEEXTRAS_H
#define ZGAMEEXTRAS_H

#include <types.h>

struct EGGItem;

struct EGGMisc
{
    int32 other;
};

struct EGGData
{
    union
    {
        int32 placeholder;
        EGGMisc misc;
    };
};

struct EGGItemFuncs
{
    void (*fun_update)(float32, EGGItem*);
    void (*fun_init)(EGGItem*);
    void (*fun_reset)(EGGItem*);
    void (*fun_done)(EGGItem*);
};

struct EGGItem
{
    int32 (*fun_check)(EGGItem*);
    EGGItemFuncs* funcs;
    int32 enabled;
    EGGData eggdata;
};

int32 zGameExtras_CheatFlags();
void GEC_dfltSound();
void GEC_villSound();
void zGameExtras_NewGameReset();

#endif