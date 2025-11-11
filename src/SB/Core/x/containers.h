#ifndef CONTAINERS_H
#define CONTAINERS_H

#include <types.h>

struct tier_queue_allocator
{
    struct block_data
    {
        U8 prev;
        U8 next;
        U16 flags;
        void* data;
    };

    block_data* blocks;
    U32 _unit_size;
    U32 _block_size;
    U32 _block_size_shift;
    U32 _max_blocks;
    U32 _max_blocks_shift;
    U8 head;
};

template <class T> struct tier_queue
{
    U32 first;
    U32 _size;
    U32 wrap_mask;
    tier_queue_allocator* alloc;
    U8 blocks[256];

    void clear();
};

template <class T> struct static_queue
{
    U32 _first;
    U32 _size;
    U32 _max_size;
    U32 _max_size_mask;
    T* _buffer;
    void clear();
    void init(unsigned long);

    bool empty() const
    {
        return size();
    }

    bool size() const
    {
        return _size;
    }

    bool full() const;
    void pop_back();
    void push_front();
    T& front();
};

template <class T, U32 N> struct fixed_queue
{
    U32 _first;
    U32 _last;
    T _buffer[N + 1];

    void reset();
    void front();
    void pop_front();
    void push_front(const T& element);
    void push_back();
    bool full() const;
    void back();
    void pop_back();
    bool empty() const;
};

template <class T> struct iterator {
    U32 _it;
    static_queue<T>* _owner;
};

#endif
