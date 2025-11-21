#include "popmal.h"

static u32 pushtot = 0;
static u32 pushcur = 0;

u32 popmalloctotal()
{
    return pushtot;
}
