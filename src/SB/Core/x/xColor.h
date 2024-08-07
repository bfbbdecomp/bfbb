#ifndef XCOLOR_H
#define XCOLOR_H

#include "iColor.h"

extern iColor_tag g_RED;
extern iColor_tag g_GREEN;
extern iColor_tag g_BLUE;
extern iColor_tag g_CYAN;
extern iColor_tag g_YELLOW;
extern iColor_tag g_WHITE;
extern iColor_tag g_GRAY50;
extern iColor_tag g_NEON_RED;
extern iColor_tag g_NEON_GREEN;
extern iColor_tag g_NEON_BLUE;
extern iColor_tag g_PIMP_GOLD;
extern iColor_tag g_ORANGE;
extern iColor_tag g_LAVENDER;
extern iColor_tag g_PINK;

iColor_tag xColorFromRGBA(U8 r, U8 g, U8 b, U8 a);

#endif
