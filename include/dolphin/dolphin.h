#ifndef __DOLPHIN_H__
#define __DOLPHIN_H__

typedef signed char s8;
typedef signed short s16;
typedef signed long s32;
typedef signed long long s64;
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned long u32;
typedef unsigned long long u64;

typedef volatile u8 vu8;
typedef volatile u16 vu16;
typedef volatile u32 vu32;
typedef volatile u64 vu64;
typedef volatile s8 vs8;
typedef volatile s16 vs16;
typedef volatile s32 vs32;
typedef volatile s64 vs64;

typedef float f32;
typedef double f64;
typedef volatile f32 vf32;
typedef volatile f64 vf64;

typedef char* Ptr;

#ifndef BOOL
typedef int BOOL;
#endif

#ifndef TRUE
#define TRUE 1
#endif

#ifndef FALSE
#define FALSE 0
#endif

#ifndef NULL
#define NULL 0
#endif

#ifdef __cplusplus
extern "C" {
#endif

typedef u8 GXBool;

#define GX_TRUE ((GXBool)1)
#define GX_FALSE ((GXBool)0)
#define GX_ENABLE ((GXBool)1)
#define GX_DISABLE ((GXBool)0)

typedef struct DVDDiskID DVDDiskID;

struct DVDDiskID
{
    char gameName[4];
    char company[2];
    u8 diskNumber;
    u8 gameVersion;
    u8 streaming;
    u8 streamingBufSize;
    u8 padding[22];
};

typedef struct DVDCommandBlock DVDCommandBlock;

typedef void (*DVDCBCallback)(s32 result, DVDCommandBlock* block);

struct DVDCommandBlock
{
    DVDCommandBlock* next;
    DVDCommandBlock* prev;
    u32 command;
    s32 state;
    u32 offset;
    u32 length;
    void* addr;
    u32 currTransferSize;
    u32 transferredSize;
    DVDDiskID* id;
    DVDCBCallback callback;
    void* userData;
};

typedef struct DVDFileInfo DVDFileInfo;

typedef void (*DVDCallback)(s32 result, DVDFileInfo* fileInfo);

struct DVDFileInfo
{
    DVDCommandBlock cb;
    u32 startAddr;
    u32 length;
    DVDCallback callback;
};

// idk what this is
struct _AXVPB
{
    s32 i;
};

#define DVD_STATE_FATAL_ERROR -1
#define DVD_STATE_END 0
#define DVD_STATE_BUSY 1
#define DVD_STATE_WAITING 2
#define DVD_STATE_COVER_CLOSED 3
#define DVD_STATE_NO_DISK 4
#define DVD_STATE_COVER_OPEN 5
#define DVD_STATE_WRONG_DISK 6
#define DVD_STATE_MOTOR_STOPPED 7
#define DVD_STATE_PAUSING 8
#define DVD_STATE_IGNORED 9
#define DVD_STATE_CANCELED 10
#define DVD_STATE_RETRY 11

#define DVD_RESULT_GOOD 0
#define DVD_RESULT_FATAL_ERROR -1
#define DVD_RESULT_IGNORED -2
#define DVD_RESULT_CANCELED -3

#define DVDReadAsync(fileInfo, addr, length, offset, callback)                                     \
    DVDReadAsyncPrio((fileInfo), (addr), (length), (offset), (callback), 2)

typedef int OSHeapHandle;

#define OSRoundUp32B(x) (((u32)(x) + 32 - 1) & ~(32 - 1))
#define OSRoundDown32B(x) (((u32)(x)) & ~(32 - 1))

typedef s64 OSTime;
typedef u32 OSTick;

typedef struct OSCalendarTime
{
    int sec; // seconds after the minute [0, 61]
    int min; // minutes after the hour [0, 59]
    int hour; // hours since midnight [0, 23]
    int mday; // day of the month [1, 31]
    int mon; // month since January [0, 11]
    int year; // years since 0000
    int wday; // days since Sunday [0, 6]
    int yday; // days since January 1 [0, 365]
    int msec; // milliseconds after the second [0,999]
    int usec; // microseconds after the millisecond [0,999]
} OSCalendarTime;

typedef struct OSContext
{
    u32 gpr[32];
    u32 cr;
    u32 lr;
    u32 ctr;
    u32 xer;
    f64 fpr[32];
    u32 fpscr_pad;
    u32 fpscr;
    u32 srr0;
    u32 srr1;
    u16 mode;
    u16 state;
    u32 gqr[8];
    u32 psf_pad;
    f64 psf[32];
} OSContext;

#define PAD_MAX_CONTROLLERS 4

#define PAD_BUTTON_LEFT 0x0001
#define PAD_BUTTON_RIGHT 0x0002
#define PAD_BUTTON_DOWN 0x0004
#define PAD_BUTTON_UP 0x0008
#define PAD_TRIGGER_Z 0x0010
#define PAD_TRIGGER_R 0x0020
#define PAD_TRIGGER_L 0x0040
#define PAD_BUTTON_A 0x0100
#define PAD_BUTTON_B 0x0200
#define PAD_BUTTON_X 0x0400
#define PAD_BUTTON_Y 0x0800
#define PAD_BUTTON_START 0x1000

#define PAD_ERR_NONE 0
#define PAD_ERR_NO_CONTROLLER -1
#define PAD_ERR_NOT_READY -2
#define PAD_ERR_TRANSFER -3

typedef struct PADStatus
{
    u16 button;
    s8 stickX;
    s8 stickY;
    s8 substickX;
    s8 substickY;
    u8 triggerLeft;
    u8 triggerRight;
    u8 analogA;
    u8 analogB;
    s8 err;
} PADStatus;

extern volatile OSHeapHandle __OSCurrHeap;

#define OSAlloc(size) OSAllocFromHeap(__OSCurrHeap, (size))
#define OSFree(ptr) OSFreeToHeap(__OSCurrHeap, (ptr))

void ARAlloc(u32 size);
void ARFree(void* mem);
BOOL DVDFastOpen(s32 entrynum, DVDFileInfo* fileInfo);
BOOL DVDReadAsyncPrio(DVDFileInfo* fileInfo, void* addr, s32 length, s32 offset,
                      DVDCallback callback, s32 prio);
BOOL DVDClose(DVDFileInfo* fileInfo);
s32 DVDGetCommandBlockStatus(const DVDCommandBlock* block);
s32 DVDConvertPathToEntrynum(const char* pathPtr);
BOOL DVDCancelAllAsync(DVDCBCallback callback);
void GXSetColorUpdate(GXBool update_enable);
void GXSetAlphaUpdate(GXBool update_enable);
void OSPanic(const char* file, int line, const char* msg, ...);
void* OSAllocFromHeap(OSHeapHandle heap, u32 size);
void OSFreeToHeap(OSHeapHandle heap, void* ptr);
OSHeapHandle OSCreateHeap(void* start, void* end);
OSHeapHandle OSSetCurrentHeap(OSHeapHandle heap);
void* OSInitAlloc(void* arenaStart, void* arenaEnd, int maxHeaps);
void* OSGetArenaHi();
void* OSGetArenaLo();
OSTime OSGetTime();
void OSTicksToCalendarTime(OSTime ticks, OSCalendarTime* td);
BOOL PADInit();
void PADControlMotor(int chan, u32 command);
void PADRead(PADStatus* status);
void PADClamp(PADStatus* status);
void PADReset(u32 mask);
void AXQuit();
void AXFreeVoice(_AXVPB*);
void OSSetSoundMode(u32 mode);
void VIWaitForRetrace();

#define CARD_FILENAME_MAX 32
#define CARD_MAX_FILE 127
#define CARD_ICON_MAX 8

typedef void (*CARDCallback)(s32 chan, s32 result);

typedef struct CARDFileInfo
{
    /*0x00*/ s32 chan;
    /*0x04*/ s32 fileNo;
    /*0x08*/ s32 offset;
    /*0x0C*/ s32 length;
    /*0x10*/ u16 iBlock;
} CARDFileInfo;

#define CARD_ATTR_PUBLIC 0x04u
#define CARD_ATTR_NO_COPY 0x08u
#define CARD_ATTR_NO_MOVE 0x10u
#define CARD_ATTR_GLOBAL 0x20u
#define CARD_ATTR_COMPANY 0x40u

#define CARD_STAT_SPEED_END 0
#define CARD_STAT_SPEED_FAST 1
#define CARD_STAT_SPEED_MIDDLE 2
#define CARD_STAT_SPEED_SLOW 3
#define CARD_STAT_SPEED_MASK 3

#define CARD_RESULT_UNLOCKED 1
#define CARD_RESULT_READY 0
#define CARD_RESULT_BUSY -1
#define CARD_RESULT_WRONGDEVICE -2
#define CARD_RESULT_NOCARD -3
#define CARD_RESULT_NOFILE -4
#define CARD_RESULT_IOERROR -5
#define CARD_RESULT_BROKEN -6
#define CARD_RESULT_EXIST -7
#define CARD_RESULT_NOENT -8
#define CARD_RESULT_INSSPACE -9
#define CARD_RESULT_NOPERM -10
#define CARD_RESULT_LIMIT -11
#define CARD_RESULT_NAMETOOLONG -12
#define CARD_RESULT_ENCODING -13
#define CARD_RESULT_CANCELED -14
#define CARD_RESULT_FATAL_ERROR -128

#define CARD_ICON_WIDTH 32
#define CARD_ICON_HEIGHT 32

#define CARD_BANNER_WIDTH 96
#define CARD_BANNER_HEIGHT 32

#define CARD_STAT_ICON_NONE 0
#define CARD_STAT_ICON_C8 1
#define CARD_STAT_ICON_RGB5A3 2
#define CARD_STAT_ICON_MASK 3

#define CARD_STAT_BANNER_NONE 0
#define CARD_STAT_BANNER_C8 1
#define CARD_STAT_BANNER_RGB5A3 2
#define CARD_STAT_BANNER_MASK 3

#define CARD_ENCODE_ANSI 0
#define CARD_ENCODE_SJIS 1

#define CARD_STAT_ANIM_LOOP 0x00
#define CARD_STAT_ANIM_BOUNCE 0x04
#define CARD_STAT_ANIM_MASK 0x04

#define CARDGetDirCheck(dir) ((CARDDirCheck*)&(dir)[CARD_MAX_FILE])
#define CARDGetBannerFormat(stat) (((stat)->bannerFormat) & CARD_STAT_BANNER_MASK)
#define CARDGetIconAnim(stat) (((stat)->bannerFormat) & CARD_STAT_ANIM_MASK)
#define CARDGetIconFormat(stat, n) (((stat)->iconFormat >> (2 * (n))) & CARD_STAT_ICON_MASK)
#define CARDGetIconSpeed(stat, n) (((stat)->iconSpeed >> (2 * (n))) & CARD_STAT_SPEED_MASK)
#define CARDSetBannerFormat(stat, f)                                                               \
    ((stat)->bannerFormat = (u8)(((stat)->bannerFormat & ~CARD_STAT_BANNER_MASK) | (f)))
#define CARDSetIconAnim(stat, f)                                                                   \
    ((stat)->bannerFormat = (u8)(((stat)->bannerFormat & ~CARD_STAT_ANIM_MASK) | (f)))
#define CARDSetIconFormat(stat, n, f)                                                              \
    ((stat)->iconFormat =                                                                          \
         (u16)(((stat)->iconFormat & ~(CARD_STAT_ICON_MASK << (2 * (n)))) | ((f) << (2 * (n)))))
#define CARDSetIconSpeed(stat, n, f)                                                               \
    ((stat)->iconSpeed =                                                                           \
         (u16)(((stat)->iconSpeed & ~(CARD_STAT_SPEED_MASK << (2 * (n)))) | ((f) << (2 * (n)))))
#define CARDSetIconAddress(stat, addr) ((stat)->iconAddr = (u32)(addr))
#define CARDSetCommentAddress(stat, addr) ((stat)->commentAddr = (u32)(addr))
#define CARDGetFileNo(fileInfo) ((fileInfo)->fileNo)

// CARDBios.h
void CARDInit(void);
s32 CARDFreeBlocks(s32 chan, s32* byteNotUsed, s32* filesNotUsed);
s32 CARDGetEncoding(s32 chan, u16* encode);
s32 CARDGetSectorSize(s32 chan, u32* size);
// CARDMount.h
s32 CARDProbeEx(s32 chan, s32* memSize, s32* sectorSize);
s32 CARDMount(s32 chan, void* workArea, CARDCallback detachCallback);
s32 CARDUnmount(s32 chan);
// CARDCheck.h
s32 CARDCheckEx(s32 chan, s32* xferBytes);
// CARDStat.h
typedef struct CARDStat
{
    /*0x00*/ char fileName[CARD_FILENAME_MAX];
    /*0x20*/ u32 length;
    /*0x24*/ u32 time;
    /*0x28*/ u8 gameName[4];
    /*0x2C*/ u8 company[2];
    /*0x2E*/ u8 bannerFormat;
    /*0x30*/ u32 iconAddr;
    /*0x34*/ u16 iconFormat;
    /*0x36*/ u16 iconSpeed;
    /*0x38*/ u32 commentAddr;
    /*0x3C*/ u32 offsetBanner;
    /*0x40*/ u32 offsetBannerTlut;
    /*0x44*/ u32 offsetIcon[CARD_ICON_MAX];
    /*0x64*/ u32 offsetIconTlut;
    /*0x68*/ u32 offsetData;
} CARDStat;
s32 CARDSetStatus(s32 chan, s32 fileNo, struct CARDStat* stat);
// CARDRead.h
s32 CARDRead(struct CARDFileInfo* fileInfo, void* buf, s32 length, s32 offset);
// CARDOpen.h
s32 CARDFastOpen(s32 chan, s32 fileNo, CARDFileInfo* fileInfo);
s32 CARDOpen(s32 chan, char* fileName, CARDFileInfo* fileInfo);
s32 CARDClose(CARDFileInfo* fileInfo);
// CARDNet
s32 CARDSetAttributes(s32 chan, s32 fileNo, u8 attr);
// CARDFormat
s32 CARDFormat(s32 chan);

#ifdef __cplusplus
}
#endif

#endif
