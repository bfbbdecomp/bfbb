#include "types.h"

static u32 next = 1;

int rand(void)
{
    return ((next = next * 1103515245 + 12345) >> 16) & 0x7fff;
}
