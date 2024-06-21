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
    int32 i;
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
void AXQuit();
void AXFreeVoice(_AXVPB*);
void OSSetSoundMode(u32 mode);
int32 CARDProbeEx(int32, int32*, int32*);
void VIWaitForRetrace();

#ifdef __cplusplus
}
#endif

#endif