#ifndef _RUNTIME_MWCPLUSLIB_H
#define _RUNTIME_MWCPLUSLIB_H

#include "types.h"

#ifdef __cplusplus
extern "C"
{
#endif

#define CTORARG_TYPE int
#define CTORARG_PARTIAL (0)
#define CTORARG_COMPLETE (1)

#define CTORCALL_COMPLETE(ctor, objptr) (((void (*)(void *, CTORARG_TYPE))ctor)(objptr, CTORARG_COMPLETE))

#define DTORARG_TYPE int

#define DTORCALL_COMPLETE(dtor, objptr) (((void (*)(void *, DTORARG_TYPE))dtor)(objptr, -1))
#define DTORCALL_PARTIAL(dtor, objptr) (((void (*)(void *, DTORARG_TYPE))dtor)(objptr, 0))

typedef void *ConstructorDestructor;

typedef struct PTMF
{
    long this_delta; // self-explanatory
    long v_offset;   // vtable offset
    union
    {
        void *f_addr;   // function address
        long ve_offset; // virtual function entry offset (of vtable)
    } f_data;
} PTMF;

extern void __construct_array(void *ptr, ConstructorDestructor ctor, ConstructorDestructor dtor, size_t size, size_t n);
extern void __destroy_arr(void *block, ConstructorDestructor *dtor, size_t size, size_t n);
extern void *__construct_new_array(void *block, ConstructorDestructor ctor, ConstructorDestructor dtor_arg, size_t size, size_t n);
extern void __destroy_new_array(void *block, ConstructorDestructor dtor);
extern void __destroy_new_array2();
extern void __destroy_new_array3();

#ifdef __cplusplus
}
#endif

#endif