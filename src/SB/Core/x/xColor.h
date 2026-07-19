#ifndef XCOLOR_H
#define XCOLOR_H

#include "iColor.h"

extern const iColor_tag g_RED;
extern const iColor_tag g_GREEN;
extern const iColor_tag g_BLUE;
extern const iColor_tag g_CYAN;
extern const iColor_tag g_YELLOW;
extern const iColor_tag g_WHITE;
extern const iColor_tag g_GRAY50;
extern const iColor_tag g_NEON_RED;
extern const iColor_tag g_NEON_GREEN;
extern const iColor_tag g_NEON_BLUE;
extern const iColor_tag g_PIMP_GOLD;
extern const iColor_tag g_ORANGE;
extern const iColor_tag g_LAVENDER;
extern const iColor_tag g_PINK;

iColor_tag xColorFromRGBA(U8 r, U8 g, U8 b, U8 a);

inline void xColorInit(iColor_tag* ret, U8 r, U8 g, U8 b, U8 a)
{
    ret->r = r;
    ret->g = g;
    ret->b = b;
    ret->a = a;
}

#endif
