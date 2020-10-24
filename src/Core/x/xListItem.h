#ifndef XLISTITEM_H
#define XLISTITEM_H

#include <types.h>

template <class T> struct xListItem
{
    int32 flg_travFilter;
    T* next;
    T* prev;
};

#endif