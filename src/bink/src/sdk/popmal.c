#include "popmal.h"

u32 pushtot = NULL;
u32 pushcur = NULL;
u32 pushptr = NULL;
u32 pushamt = NULL;
u32 cursize = 32;

// TODO:
// figure out what arg 1 should be. pretty confident arg 2 is correct
void pushmalloc(BINKIO* io, HBINK bnk)
{
}

u32 popmalloctotal()
{
    return pushtot;
}

u32 popmalloc(HBINK bnk)
{
}
