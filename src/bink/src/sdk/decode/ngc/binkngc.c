#include "binkngc.h"

u32 usermalloc = NULL;
u32 userfree = NULL;
u32 userarammalloc = NULL;
u32 useraramfree = NULL;

void RADSetMemory(u32 alloc, u32 free)
{
    usermalloc = alloc;
    userfree = free;
}

void radfree(void* ptr)
{
    u8* ptrU8 = (u8*)ptr;
    u32* ptrU32 = (u32*)ptr;

    void (*customFree)(void*);
    if (ptr)
    {
        if ((ptrU8[-2]) == 3)
        {
            customFree = (u32)(ptrU32[-2]);
            customFree(ptrU8 - ptrU8[-1]);
        }
        else
        {
            OSFreeToHeap((void*)__OSCurrHeap, ptrU8 - ptrU8[-1]);
        }
    }
}

void radaudiofree()
{
    if (useraramfree != NULL)
    {
    }
}

// undefined4 *
void ReadTimeBase(u32* ptr)
{
}
