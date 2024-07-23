#ifndef XLISTITEM_H
#define XLISTITEM_H

#include <types.h>

template <class T> struct xListItem
{
    S32 flg_travFilter;
    T* next;
    T* prev;

    xListItem() {
        flg_travFilter = 0;
        prev = NULL;
        next = NULL;
    }

    T* Next();
    void Insert(T* list);
    T* RemHead(T** listhead);
    T* Head();
    void Remove();
};

#endif
