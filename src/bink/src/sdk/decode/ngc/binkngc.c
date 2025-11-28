#include "binkngc.h"
#include "dolphin/os/OSAlloc.h"

u32 usermalloc = NULL;
void* userfree = NULL;

void radfree(void* ptr)
{
    u8* ptrU8 = (u8*)ptr;
    u32* ptrU32 = (u32*)ptr;

    void (*customFree)(void*);
    if (ptr)
    {
        if ((ptrU8[-2]) == 3)
        {
            customFree = (void*)(ptrU32[-2]);
            customFree(ptrU8 - ptrU8[-1]);
        }
        else
        {
            OSFreeToHeap((void*)__OSCurrHeap, ptrU8 - ptrU8[-1]);
        }
    }
}
