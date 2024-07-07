#include "xDecal.h"

#include <types.h>

//Doesn't OK if you use it from header, so assuming it's global.
extern U32 active_emitters_size;

void xDecalInit()
{
    active_emitters_size = 0;
}
