#ifndef XENTMOTION_H
#define XENTMOTION_H

#include <types.h>

#include "../p2/iColor.h"

// This probably belongs in another header file, but the code for the function
// is in xEntMotion.s.
void xDrawSetColor(iColor_tag);

#endif