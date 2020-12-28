#ifndef XRMEMDATA_H
#define XRMEMDATA_H

#include "xBase.h"

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

    void Done();
    RyzMemGrow* Resume();
    RyzMemGrow* Init(xBase* growuser);
};

#endif