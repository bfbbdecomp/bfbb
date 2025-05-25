#include "dolphin/dvd.h"
#include "dolphin/os.h"
#include "dolphin/os/OSBootInfo.h"
#include "dolphin/ai.h"

// Struct for Apploader header (size 0x20).
typedef struct _ApploaderHeader {
    char date[16];  // _00
    u32 entry;      // _10
    u32 size;       // _14
    u32 rebootSize; // _18
    u32 reserved2;  // _1C
} ApploaderHeader;

static ApploaderHeader Header ALIGN(32);

extern void* __OSSavedRegionStart;
extern void* __OSSavedRegionEnd;

static void* SaveStart = NULL;
static void* SaveEnd = NULL;

extern u32 UNK_817FFFF8 AT_ADDRESS(0x817FFFF8);
extern u32 UNK_817FFFFC AT_ADDRESS(0x817FFFFC);
extern u32 BOOT_REGION_START AT_ADDRESS(0x812FDFF0);
extern u32 BOOT_REGION_END AT_ADDRESS(0x812FDFEC);
extern u32 OS_RESET_CODE AT_ADDRESS(0x800030F0);
extern u8 OS_REBOOT_BOOL AT_ADDRESS(0x800030E2); // unknown function, set to true by __OSReboot

static BOOL Prepared = FALSE;

void __OSDoHotReset(int);

inline void ReadApploader(OSTime time1) {
    if (DVDCheckDisk() == DVD_RESULT_GOOD || OSGetTime() - time1 > OS_TIMER_CLOCK) {
        __OSDoHotReset(UNK_817FFFFC);
    }
}

ASM void Run() {
#ifdef __MWERKS__ // clang-format off
    nofralloc
    sync
    isync
    mtlr r3
    blr
#endif // clang-format on
}

static void Callback() { Prepared = TRUE; }

inline BOOL IsStreamEnabled(void) {
    if (DVDGetCurrentDiskID()->streaming) {
        return TRUE;
    }
    return FALSE;
}

void __OSReboot(u32 resetCode, u32 bootDol) {
    OSContext exceptionContext;
    OSTime time;
    DVDCommandBlock dvdCmd;
    DVDCommandBlock dvdCmd2;
    DVDCommandBlock dvdCmd3;
    u32 numBytes;
    u32 offset;

    OSDisableInterrupts();
    UNK_817FFFFC = 0;
    UNK_817FFFF8 = 0;
    OS_REBOOT_BOOL = TRUE;
    BOOT_REGION_START = (u32)SaveStart;
    BOOT_REGION_END = (u32)SaveEnd;
    OSClearContext(&exceptionContext);
    OSSetCurrentContext(&exceptionContext);
    DVDInit();
    DVDSetAutoInvalidation(TRUE);
    DVDResume();
    Prepared = FALSE;
    __DVDPrepareResetAsync(Callback);
    __OSMaskInterrupts(~0x1F);
    __OSUnmaskInterrupts(0x400);
    OSEnableInterrupts();

    time = OSGetTime();
    while (Prepared != TRUE) {
        ReadApploader(time);
    }

    if (!__OSIsGcam && IsStreamEnabled()) {
        AISetStreamVolLeft(0);
        AISetStreamVolRight(0);
        DVDCancelStreamAsync(&dvdCmd, NULL);
        time = OSGetTime();
        while (DVDGetCommandBlockStatus(&dvdCmd)) {
            ReadApploader(time);
        }
        AISetStreamPlayState(0);
    }

    DVDReadAbsAsyncPrio(&dvdCmd2, &Header, 32, 0x2440, NULL, 0);
    time = OSGetTime();
    while (DVDGetCommandBlockStatus(&dvdCmd2)) {
        ReadApploader(time);
    }

    offset = Header.size + 0x20;
    numBytes = OSRoundUp32B(Header.rebootSize);
    DVDReadAbsAsyncPrio(&dvdCmd3, (void*)(OS_BOOTROM_ADDR), numBytes, offset + 0x2440, NULL, 0);
    time = OSGetTime();
    while (DVDGetCommandBlockStatus(&dvdCmd3)) {
        ReadApploader(time);
    }

    ICInvalidateRange((void*)(OS_BOOTROM_ADDR), numBytes);
    OSDisableInterrupts();
    ICFlashInvalidate();
    Run((void*)OS_BOOTROM_ADDR);
}