#include "binkngc.h"
#include "dolphin/os/OSAlloc.h"

u32 usermalloc = NULL;
void* userfree = NULL;

void radfree(void* ptr)
{
    U8* ptrU8 = (U8*)ptr;
    U32* ptrU32 = (U32*)ptr;

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
