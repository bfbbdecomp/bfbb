#include "xRMemData.h"
#include "xMemMgr.h"

#include <types.h>
#include <string.h>

#if 1

// func_8010F150
#pragma GLOBAL_ASM("asm/Core/x/xRMemData.s", "__nw__10RyzMemDataFUliP10RyzMemGrow")

#else

// So close to matching. There seems to be extra ors and I do not know why they show up.
void* RyzMemGrow::operator new(size_t size, uint32 amt, RyzMemGrow* growCtxt)
{
    int32 dogrow = true;
    if (growCtxt == NULL)
    {
        dogrow = false;
    }
    else if (growCtxt->IsEnabled() == 0)
    {
        dogrow = false;
    }
    if (dogrow)
    {
        xMemGrowAllocSize(size);
    }
    else
    {
        xMemAllocSize(size);
    }
    void* mem;
    memset(mem, 0, 4);
    return mem;
}

#endif

void RyzMemData::operator delete(void* p)
{
}

RyzMemGrow* RyzMemGrow::Init(xBase* growuser)
{
    int8* dat;
    if (this->ptr != NULL)
    {
        return this;
    }
    this->amt_last = 0;
    this->ptr_last = NULL;
    this->user_last = NULL;
    this->amt = 0x20;
    dat = (int8*)xMemAllocSize(this->amt);
    this->ptr = dat;
    this->user = growuser;
    this->flg_grow = 1;
    return this;
}

RyzMemGrow* RyzMemGrow::Resume()
{
    this->amt = this->amt_last;
    this->ptr = this->ptr_last;
    this->user = this->user_last;
    this->flg_grow = 0b11;
    return this;
}

void RyzMemGrow::Done()
{
    this->amt_last = this->amt;
    this->ptr_last = this->ptr;
    this->user_last = this->user;
    this->amt = 0;
    this->ptr = NULL;
    this->user = NULL;
    this->flg_grow = 0;
}

int32 RyzMemGrow::IsEnabled()
{
    return this->flg_grow & 1;
}