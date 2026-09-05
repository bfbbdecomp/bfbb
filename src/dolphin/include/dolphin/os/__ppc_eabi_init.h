#ifndef _DOLPHIN_OS___PPC_EABI_INIT_H
#define _DOLPHIN_OS___PPC_EABI_INIT_H

#ifdef __cplusplus
extern "C" {
#endif

__declspec(section ".init") extern void __init_hardware(void);
__declspec(section ".init") extern void __flush_cache(register void* address, register unsigned int size);

#ifdef __cplusplus
}
#endif

#endif
