#ifndef CONTAINERS_H
#define CONTAINERS_H

#include <types.h>

struct tier_queue_allocator
{
    struct block_data
    {
        uint8 prev;
        uint8 next;
        uint16 flags;
        void* data;
    };

    block_data* blocks;
    uint32 _unit_size;
    uint32 _block_size;
    uint32 _block_size_shift;
    uint32 _max_blocks;
    uint32 _max_blocks_shift;
    uint8 head;
};

template <class T> struct tier_queue
{
    uint32 first;
    uint32 _size;
    uint32 wrap_mask;
    tier_queue_allocator* alloc;
    uint8 blocks[256];
};

template <class T> struct static_queue
{
    uint32 _first;
    uint32 _size;
    uint32 _max_size;
    uint32 _max_size_mask;
    T* _buffer;
};

template <class T, uint32 N> struct fixed_queue
{
    uint32 _first;
    uint32 _last;
    T _buffer[N + 1];

    void reset();
    void push_front(const T& element);
    bool full() const;
    void pop_back();
};

#endif