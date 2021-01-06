#ifndef XRMEMDATA_H
#define XRMEMDATA_H

#include "xBase.h"
#include <size_t.h>

struct RyzMemData
{
};

struct RyzMemGrow
{
    int32 flg_grow;
    int32 amt;
    int8* ptr;
    xBase* user;
    int32 amt_last;
    int8* ptr_last;
    xBase* user_last;

    RyzMemGrow* Init(xBase* growuser);
    RyzMemGrow* Resume();
    void Done();
    int32 IsEnabled();
    void* operator new(size_t size, uint32 amt, RyzMemGrow* growCtxt);
    void operator delete(void*);
};

#endif