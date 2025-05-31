#include "dolphin/base/PPCArch.h"
#include "dolphin/os.h"

// Can't use this due to weird condition register issues
//#include "asm_types.h"
#define HID2 920

#include "dolphin/db.h"

/* clang-format off */
asm void DCEnable() {
  nofralloc
  sync
  mfspr r3, HID0
  ori   r3, r3, 0x4000
  mtspr HID0, r3
  blr
}

asm void DCInvalidateRange(register void* addr, register u32 nBytes) {
  nofralloc
  cmplwi nBytes, 0
  blelr
  clrlwi r5, addr, 27
  add    nBytes, nBytes, r5
  addi   nBytes, nBytes, 31
  srwi   nBytes, nBytes, 5
  mtctr  nBytes

@1
  dcbi r0, addr
  addi addr, addr, 32
  bdnz @1
  blr
}


asm void DCFlushRange(register void* addr, register u32 nBytes) {
  nofralloc
  cmplwi nBytes, 0
  blelr
  clrlwi r5, addr, 27
  add nBytes, nBytes, r5
  addi nBytes, nBytes, 31
  srwi nBytes, nBytes, 5
  mtctr nBytes

@1
  dcbf r0, addr
  addi addr, addr, 32
  bdnz @1
  sc
  blr
}

asm void DCStoreRange(register void* addr, register u32 nBytes) {
  nofralloc
  cmplwi nBytes, 0
  blelr
  clrlwi r5, addr, 27
  add nBytes, nBytes, r5
  addi nBytes, nBytes, 31
  srwi nBytes, nBytes, 5
  mtctr nBytes

@1
  dcbst r0, addr
  addi addr, addr, 32
  bdnz @1
  sc

  blr
}

asm void DCFlushRangeNoSync(register void* addr, register u32 nBytes) {
  nofralloc
  cmplwi nBytes, 0
  blelr
  clrlwi r5, addr, 27
  add nBytes, nBytes, r5
  addi nBytes, nBytes, 31
  srwi nBytes, nBytes, 5
  mtctr nBytes

@1
  dcbf r0, addr
  addi addr, addr, 32
  bdnz @1
  blr
}

asm void ICInvalidateRange(register void* addr, register u32 nBytes) {
  nofralloc
  nofralloc
  cmplwi nBytes, 0
  blelr
  clrlwi r5, addr, 27
  add nBytes, nBytes, r5
  addi nBytes, nBytes, 31
  srwi nBytes, nBytes, 5
  mtctr nBytes

@1
  icbi r0, addr
  addi addr, addr, 32
  bdnz @1
  sync
  isync

  blr
}


asm void ICFlashInvalidate() {
  nofralloc
  mfspr r3, HID0
  ori r3, r3, 0x800
  mtspr HID0, r3
  blr
}

asm void ICEnable() {
  nofralloc
  isync
  mfspr r3, HID0
  ori r3, r3, 0x8000
  mtspr HID0, r3
  blr
}

#define LC_LINES    512
#define CACHE_LINES 1024


asm void LCDisable() {
  nofralloc
  lis     r3, LC_BASE_PREFIX
  li      r4, LC_LINES
  mtctr r4
@1
  dcbi r0, r3
  addi r3, r3, 32
  bdnz @1
  mfspr r4, HID2
  rlwinm r4, r4, 0, 4, 2
  mtspr HID2, r4
  blr
}

/* clang-format on */

/* clang-format off */

/* clang-format on */
inline void L2Disable(void)
{
    __sync();
    PPCMtl2cr(PPCMfl2cr() & ~0x80000000);
    __sync();
}

void L2GlobalInvalidate(void)
{
    L2Disable();
    PPCMtl2cr(PPCMfl2cr() | 0x00200000);
    while (PPCMfl2cr() & 0x00000001u)
        ;
    PPCMtl2cr(PPCMfl2cr() & ~0x00200000);
    while (PPCMfl2cr() & 0x00000001u)
    {
        DBPrintf(">>> L2 INVALIDATE : SHOULD NEVER HAPPEN\n");
    }
}

inline void L2Init(void)
{
    u32 oldMSR;
    oldMSR = PPCMfmsr();
    __sync();
    PPCMtmsr(MSR_IR | MSR_DR);
    __sync();
    L2Disable();
    L2GlobalInvalidate();
    PPCMtmsr(oldMSR);
}

void DMAErrorHandler(OSError error, OSContext* context, ...)
{
    u32 hid2 = PPCMfhid2();

    OSReport("Machine check received\n");
    OSReport("HID2 = 0x%x   SRR1 = 0x%x\n", hid2, context->srr1);
    if (!(hid2 & (HID2_DCHERR | HID2_DNCERR | HID2_DCMERR | HID2_DQOERR)) ||
        !(context->srr1 & SRR1_DMA_BIT))
    {
        OSReport("Machine check was not DMA/locked cache related\n");
        OSDumpContext(context);
        PPCHalt();
    }

    OSReport("DMAErrorHandler(): An error occurred while processing DMA.\n");
    OSReport("The following errors have been detected and cleared :\n");

    if (hid2 & HID2_DCHERR)
    {
        OSReport("\t- Requested a locked cache tag that was already in the cache\n");
    }

    if (hid2 & HID2_DNCERR)
    {
        OSReport("\t- DMA attempted to access normal cache\n");
    }

    if (hid2 & HID2_DCMERR)
    {
        OSReport("\t- DMA missed in data cache\n");
    }

    if (hid2 & HID2_DQOERR)
    {
        OSReport("\t- DMA queue overflowed\n");
    }

    // write hid2 back to clear the error bits
    PPCMthid2(hid2);
}

void __OSCacheInit()
{
    if (!(PPCMfhid0() & HID0_ICE))
    {
        ICEnable();
        DBPrintf("L1 i-caches initialized\n");
    }
    if (!(PPCMfhid0() & HID0_DCE))
    {
        DCEnable();
        DBPrintf("L1 d-caches initialized\n");
    }

    if (!(PPCMfl2cr() & L2CR_L2E))
    {
        L2Init();
        PPCMtl2cr((PPCMfl2cr() | L2CR_L2E) & ~L2CR_L2I);
        DBPrintf("L2 cache initialized\n");
    }

    OSSetErrorHandler(OS_ERROR_MACHINE_CHECK, DMAErrorHandler);
    DBPrintf("Locked cache machine check handler installed\n");
}
