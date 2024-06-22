#ifndef _NEW_H
#define _NEW_H

#include <size_t.h>
#include <exception.h>

namespace std
{
    class bad_alloc : public exception
    {
    public:
        bad_alloc() throw();
        bad_alloc(const bad_alloc&) throw();
        bad_alloc& operator=(const bad_alloc&) throw();
        virtual ~bad_alloc() throw();
        virtual const char* what() const throw();
    };

    struct nothrow_t
    {
    };
} // namespace std

void* operator new(size_t size) throw(std::bad_alloc);
void* operator new(size_t size, const std::nothrow_t&) throw();
void* operator new(size_t, void* ptr) throw();

void operator delete(void* ptr) throw();
void operator delete(void* ptr, const std::nothrow_t&) throw();
void operator delete(void*, void*) throw();

void* operator new[](size_t size) throw(std::bad_alloc);
void* operator new[](size_t size, const std::nothrow_t&) throw();
void* operator new[](size_t, void* ptr) throw();

void operator delete[](void* ptr) throw();
void operator delete[](void* ptr, const std::nothrow_t&) throw();
void operator delete[](void*, void*) throw();

#endif