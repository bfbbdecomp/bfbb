#include <dolphin/os.h>
#include <dolphin/base.h>

#ifdef __cplusplus
extern "C" {
#endif

void __OSPSInit();
void __OSFPRInit();
void __OSCacheInit();

typedef void (*voidfunctionptr)(void); // pointer to function returning void
__declspec(section ".ctors") extern voidfunctionptr _ctors[];
__declspec(section ".dtors") extern voidfunctionptr _dtors[];

static void __init_cpp(void);

// clang-format off
__declspec(section ".init") asm void __init_hardware(void)
{ // clang-format off
    nofralloc
    mfmsr r0
    ori  r0,r0,MSR_FP
    mtmsr r0
    mflr    r31
    bl      __OSPSInit
    bl      __OSFPRInit
    bl      __OSCacheInit
    mtlr    r31
    blr
}

__declspec(section ".init") asm void __flush_cache(void *address, unsigned int size)
{ // clang-format off
    nofralloc
    lis     r5, 0xffff
    ori     r5, r5, 0xfff1
    and     r5, r5, r3
    subf    r3, r5, r3
    add     r4, r4, r3
rept:
    dcbst   0,r5
    sync
    icbi    0,r5
    addic   r5,r5,0x8
    subic.  r4,r4,0x8
    bge     rept
    isync
    blr
}
// clang-format on

void __init_user(void)
{
    __init_cpp();
}

static void __init_cpp(void)
{
    voidfunctionptr* constructor;
    /*
	 *	call static initializers
	 */
    for (constructor = _ctors; *constructor; constructor++)
    {
        (*constructor)();
    }
}

void _ExitProcess(void)
{
    PPCHalt();
}
#ifdef __cplusplus
}
#endif
