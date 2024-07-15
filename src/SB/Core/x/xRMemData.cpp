#include "xRMemData.h"
#include "xMemMgr.h"

#include <types.h>
#include <string.h>

void* RyzMemData::operator new(size_t size, S32 amt, RyzMemGrow* growCtxt)
{
    S32 dogrow = true;
    if (growCtxt == NULL)
    {
        dogrow = false;
    }
    else if (growCtxt->IsEnabled() == 0)
    {
        dogrow = false;
    }

    void* mem;
    if (dogrow)
    {
        mem = xMemGrowAllocSize(size);
    }
    else
    {
        mem = xMemAllocSize(size);
    }
    memset(mem, 0, 4);
    return mem;
}

void RyzMemData::operator delete(void* p)
{
}

RyzMemGrow* RyzMemGrow::Init(xBase* growuser)
{
    char* dat;
    if (this->ptr != NULL)
    {
        return this;
    }
    this->amt_last = 0;
    this->ptr_last = NULL;
    this->user_last = NULL;
    this->amt = 0x20;
    dat = (char*)xMemAllocSize(this->amt);
    this->ptr = dat;
    this->user = growuser;
    this->flg_grow = 1;
    return this;
}

RyzMemGrow* RyzMemGrow::Resume(xBase*)
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
