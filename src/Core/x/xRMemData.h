#ifndef XRMEMDATA_H
#define XRMEMDATA_H

#include "xBase.h"

#include <new>

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
    RyzMemGrow* Resume(xBase*);
    void Done();
    int32 IsEnabled();
};

struct RyzMemData
{
    void* operator new(size_t amt, int32, RyzMemGrow* growCtxt);
    void operator delete(void*);
};

#endif