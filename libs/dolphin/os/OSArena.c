#include <dolphin/os/OSArena.h>

#define ROUND(n, a) (((u32)(n) + (a)-1) & ~((a)-1))
#define TRUNC(n, a) (((u32)(n)) & ~((a)-1))

void* __OSArenaHi;
void* __OSArenaLo = (void*)-1;

void* OSGetArenaHi(void)
{
    return __OSArenaHi;
}

void* OSGetArenaLo(void)
{
    return __OSArenaLo;
}

void OSSetArenaHi(void* addr)
{
    __OSArenaHi = addr;
}

void OSSetArenaLo(void* addr)
{
    __OSArenaLo = addr;
}