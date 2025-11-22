#ifndef CONTAINERS_H
#define CONTAINERS_H

#include <types.h>
#include "xMemMgr.h"

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

    struct iterator {
        U32 _it;
        static_queue<T>* _owner;

        T& operator*() const
        {
            return _owner->_buffer[_it];
        }

        bool operator!=(const iterator& other) const
        {
            return _it != other._it;
        }

        iterator* operator+=(S32 value)
        {
            _it = _owner->mod_max_size(_it + value);
            return this;
        }

        iterator* operator++()
        {
            *this += 1;
            return this;
        }
    };
    
    bool empty() const
    {
        return size() == 0;
    }
    
    U32 size() const
    {
        return _size;
    }

    void init(u32 size)
    {
        U32 unk_r3 = 0;
        while (size > 1)
        {
            size /= 2;
            unk_r3++;
        }

        _max_size = unk_r3;
        _max_size_mask = 1 << _max_size;
        _buffer = (T*)xMemAlloc(gActiveHeap, sizeof(T) * (size), 0);
        clear();
    }
    
    void clear()
    {
        _size = 0;
        _first = 0;
    }

    T& front()
    {
        iterator it = begin();
        return *it;
    }

    iterator begin() const
    {
        return create_iterator(_first);
    }

    iterator create_iterator(u32 initial_size) const
    {
        iterator it;
        it._it = initial_size;
        it._owner = const_cast<static_queue<T>*>(this);
        return it;
    }

    T& push_front()
    {
        _size += 1;
        _first = mod_max_size(_first - 1);
        return front();
    }

    U32 mod_max_size(u32 new_max_size) const
    {
        return new_max_size & _max_size_mask;
    }

    void pop_back()
    {
        _size -= 1;
    }

    bool full() const
    {
        return size() == max_size();
    }
    
    U32 max_size() const
    {
        return _max_size - 1;
    }

    void erase(const iterator& it, const iterator& other)
    {
        if (it._it == _first)
        {
            U32 orig_size = _size;
            U32 orig_first = _first;
            _first = other._it;
            _size = mod_max_size((orig_first + orig_size) - _first);
        }
        else
        {
            _size -= mod_max_size(other._it - it._it);
        }
    }
    
    iterator end() const
    {
        iterator it;
        return create_iterator(mod_max_size(_first + _size));
    }
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
    U32 size() const;
};

#endif
