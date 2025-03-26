/*
    Compile unit: C:\SB\Core\p2\his\HisStubs.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
static class _sif_client_data clientData; // size: 0x28, address: 0x5E33A0
static unsigned char asyncFire; // size: 0x1, address: 0x51017C
class _sif_serve_data {
    // total size: 0x44
public:
    unsigned int command; // offset 0x0, size 0x4
    void * (* func)(unsigned int, void *, signed int); // offset 0x4, size 0x4
    void * buff; // offset 0x8, size 0x4
    signed int size; // offset 0xC, size 0x4
    void * (* cfunc)(unsigned int, void *, signed int); // offset 0x10, size 0x4
    void * cbuff; // offset 0x14, size 0x4
    signed int csize; // offset 0x18, size 0x4
    class _sif_client_data * client; // offset 0x1C, size 0x4
    void * paddr; // offset 0x20, size 0x4
    unsigned int fno; // offset 0x24, size 0x4
    void * receive; // offset 0x28, size 0x4
    signed int rsize; // offset 0x2C, size 0x4
    signed int rmode; // offset 0x30, size 0x4
    unsigned int rid; // offset 0x34, size 0x4
    class _sif_serve_data * link; // offset 0x38, size 0x4
    class _sif_serve_data * next; // offset 0x3C, size 0x4
    class _sif_queue_data * base; // offset 0x40, size 0x4
};
class HISRemoteVoiceTransStatusParameter {
    // total size: 0x4
public:
    signed short channel; // offset 0x0, size 0x2
    signed short flag; // offset 0x2, size 0x2
};
class HISGetRequestDebugParameter {
    // total size: 0x4
public:
    signed int requestID; // offset 0x0, size 0x4
};
class HISGetRequestStatusParameter {
    // total size: 0x4
public:
    signed int requestID; // offset 0x0, size 0x4
};
class _sif_queue_data {
    // total size: 0x18
public:
    signed int key; // offset 0x0, size 0x4
    signed int active; // offset 0x4, size 0x4
    class _sif_serve_data * link; // offset 0x8, size 0x4
    class _sif_serve_data * start; // offset 0xC, size 0x4
    class _sif_serve_data * end; // offset 0x10, size 0x4
    class _sif_queue_data * next; // offset 0x14, size 0x4
};
class HISGetRequestDebugReturn {
    // total size: 0x1C
public:
    class HISRequestDebug requestDebug; // offset 0x0, size 0x1C
};
class HISLoadBlockAsyncReturn {
    // total size: 0x4
public:
    signed int requestID; // offset 0x0, size 0x4
};
class HISFlushHostIOHandlesReturn {
    // total size: 0x1
};
class HISInitParameter {
    // total size: 0x4
public:
    enum HISMediaType mediaType; // offset 0x0, size 0x4
};
class HISPauseVoiceParameter {
    // total size: 0x2
public:
    unsigned short voice; // offset 0x0, size 0x2
};
class HISGetSoundDebugVoiceReturn {
    // total size: 0x20
public:
    class HISSoundDebugVoice soundDebugVoice; // offset 0x0, size 0x20
};
class HISDelayFrameParameter {
    // total size: 0x1
};
class HISGetRequestStatusReturn {
    // total size: 0x4
public:
    enum HISStatus currentStatus; // offset 0x0, size 0x4
};
class HISRemoteBlockTransStatusParameter {
    // total size: 0x4
public:
    signed short channel; // offset 0x0, size 0x2
    signed short flag; // offset 0x2, size 0x2
};
class HISGetRequestCountParameter {
    // total size: 0x1
};
class HISGetFileSizeParameter {
    // total size: 0x4
public:
    signed int fileIndex; // offset 0x0, size 0x4
};
class HISSetVoicePitchParameter {
    // total size: 0x4
public:
    unsigned short voice; // offset 0x0, size 0x2
    unsigned short pitch; // offset 0x2, size 0x2
};
class HISSetVoiceVolumeParameter {
    // total size: 0x6
public:
    unsigned short voice; // offset 0x0, size 0x2
    unsigned short leftVolume; // offset 0x2, size 0x2
    unsigned short rightVolume; // offset 0x4, size 0x2
};
class HISPlaySoundParameter {
    // total size: 0x14
public:
    unsigned int address; // offset 0x0, size 0x4
    unsigned short voice; // offset 0x4, size 0x2
    unsigned short leftVolume; // offset 0x6, size 0x2
    unsigned short rightVolume; // offset 0x8, size 0x2
    unsigned short pitch; // offset 0xA, size 0x2
    unsigned short attack; // offset 0xC, size 0x2
    unsigned short release; // offset 0xE, size 0x2
    unsigned char paused; // offset 0x10, size 0x1
};
class HISPauseVoiceReturn {
    // total size: 0x1
};
class _sif_rpc_data {
    // total size: 0x10
public:
    void * paddr; // offset 0x0, size 0x4
    unsigned int pid; // offset 0x4, size 0x4
    signed int tid; // offset 0x8, size 0x4
    unsigned int mode; // offset 0xC, size 0x4
};
class HISRemoteVoiceTransStatusReturn {
    // total size: 0x4
public:
    unsigned int ret; // offset 0x0, size 0x4
};
class HISGetSoundDebugVoiceParameter {
    // total size: 0x4
public:
    signed int voice; // offset 0x0, size 0x4
};
class HISDelayFrameReturn {
    // total size: 0x1
};
class HISSoundDebug {
    // total size: 0x4
public:
    unsigned short leftVolume; // offset 0x0, size 0x2
    unsigned short rightVolume; // offset 0x2, size 0x2
};
class HISJoinStereoVoicesParameter {
    // total size: 0x4
public:
    unsigned short voice1; // offset 0x0, size 0x2
    unsigned short voice2; // offset 0x2, size 0x2
};
class HISGetExternalStreamBufferParameter {
    // total size: 0x4
public:
    signed int voice; // offset 0x0, size 0x4
};
class HISInitReturn {
    // total size: 0x1
};
class HISPlayStreamReturn {
    // total size: 0x1
};
class HISSetVoiceVolumeReturn {
    // total size: 0x1
};
class HISPlaySoundReturn {
    // total size: 0x1
};
class HISGetRequestCountReturn {
    // total size: 0x4
public:
    signed int count; // offset 0x0, size 0x4
};
class HISGetFileSizeReturn {
    // total size: 0x4
public:
    signed int size; // offset 0x0, size 0x4
};
class HISResumeVoiceParameter {
    // total size: 0x2
public:
    unsigned short voice; // offset 0x0, size 0x2
};
class HISRemoteBlockTransStatusReturn {
    // total size: 0x4
public:
    unsigned int ret; // offset 0x0, size 0x4
};
class HISSetVoicePitchReturn {
    // total size: 0x1
};
class HISGetFirstValidRequestParameter {
    // total size: 0x1
};
class HISGetVoiceStatusParameter {
    // total size: 0x1
};
class HISGetSoundDebugParameter {
    // total size: 0x1
};
class HISResumeVoiceReturn {
    // total size: 0x1
};
class HISJoinStereoVoicesReturn {
    // total size: 0x1
};
class HISGetExternalStreamBufferReturn {
    // total size: 0x4
public:
    signed int buffer; // offset 0x0, size 0x4
};
enum HISMediaType {
    HIS_MEDIA_CDROM = 0,
    HIS_MEDIA_DVD = 1,
    HIS_MEDIA_HOSTIO = 2,
};
class HISRemoteSetParamParameter {
    // total size: 0x4
public:
    unsigned short reg; // offset 0x0, size 0x2
    unsigned short value; // offset 0x2, size 0x2
};
class HISNullParameter {
    // total size: 0x1
};
class HISGetVersionParameter {
    // total size: 0x1
};
class HISGetFirstValidRequestReturn {
    // total size: 0x4
public:
    signed int request; // offset 0x0, size 0x4
};
class _sif_client_data {
    // total size: 0x28
public:
    class _sif_rpc_data rpcd; // offset 0x0, size 0x10
    unsigned int command; // offset 0x10, size 0x4
    void * buff; // offset 0x14, size 0x4
    void * cbuff; // offset 0x18, size 0x4
    void (* func)(void *); // offset 0x1C, size 0x4
    void * para; // offset 0x20, size 0x4
    class _sif_serve_data * serve; // offset 0x24, size 0x4
};
class HISRemoteSetParamReturn {
    // total size: 0x1
};
class HISSetMasterVolumeParameter {
    // total size: 0x4
public:
    unsigned short leftVolume; // offset 0x0, size 0x2
    unsigned short rightVolume; // offset 0x2, size 0x2
};
class HISGetSoundDebugReturn {
    // total size: 0x4
public:
    class HISSoundDebug soundDebug; // offset 0x0, size 0x4
};
class HISGetFreeRequestCountParameter {
    // total size: 0x1
};
class HISCancelRequestParameter {
    // total size: 0x4
public:
    signed int requestID; // offset 0x0, size 0x4
};
enum HISMemoryType {
    HIS_MEMORY_EE = 0,
    HIS_MEMORY_IOP = 1,
    HIS_MEMORY_SPU = 2,
};
class HISGetVoiceStatusReturn {
    // total size: 0x8
public:
    unsigned int status[2]; // offset 0x0, size 0x8
};
class HISFileIndexDebug {
    // total size: 0x3C
public:
    signed int logicalSectorNumber; // offset 0x0, size 0x4
    signed int size; // offset 0x4, size 0x4
    signed int sizeInSectors; // offset 0x8, size 0x4
    char name[48]; // offset 0xC, size 0x30
};
class HISFlushHostIOHandlesParameter {
    // total size: 0x1
};
class HISPlayStreamParameter {
    // total size: 0x20
public:
    signed int fileIndex; // offset 0x0, size 0x4
    signed int logicalSectorNumber; // offset 0x4, size 0x4
    signed int dataSize; // offset 0x8, size 0x4
    signed int blockSize; // offset 0xC, size 0x4
    unsigned short voice; // offset 0x10, size 0x2
    unsigned short leftVolume; // offset 0x12, size 0x2
    unsigned short rightVolume; // offset 0x14, size 0x2
    unsigned short pitch; // offset 0x16, size 0x2
    unsigned short flags; // offset 0x18, size 0x2
    unsigned short attack; // offset 0x1A, size 0x2
    unsigned short release; // offset 0x1C, size 0x2
    unsigned short interleaveSectors; // offset 0x1E, size 0x2
};
class HISStopVoiceParameter {
    // total size: 0x2
public:
    unsigned short voice; // offset 0x0, size 0x2
};
class HISNullReturn {
    // total size: 0x1
};
class HISRemoteVoiceTransParameter {
    // total size: 0x10
public:
    signed short channel; // offset 0x0, size 0x2
    unsigned short mode; // offset 0x2, size 0x2
    unsigned char * m_addr; // offset 0x4, size 0x4
    unsigned int s_addr; // offset 0x8, size 0x4
    unsigned int size; // offset 0xC, size 0x4
};
class HISSetMasterVolumeReturn {
    // total size: 0x1
};
class HISGetVersionReturn {
    // total size: 0x4
public:
    signed int version; // offset 0x0, size 0x4
};
class HISCancelRequestReturn {
    // total size: 0x1
public:
    unsigned char success; // offset 0x0, size 0x1
};
class HISGetFileIndexParameter {
    // total size: 0x30
public:
    char filename[48]; // offset 0x0, size 0x30
};
class HISPlayExternalStreamParameter {
    // total size: 0x14
public:
    signed int blockSize; // offset 0x0, size 0x4
    unsigned short voice; // offset 0x4, size 0x2
    unsigned short leftVolume; // offset 0x6, size 0x2
    unsigned short rightVolume; // offset 0x8, size 0x2
    unsigned short pitch; // offset 0xA, size 0x2
    unsigned short flags; // offset 0xC, size 0x2
    unsigned short attack; // offset 0xE, size 0x2
    unsigned short release; // offset 0x10, size 0x2
};
enum HISStatus {
    HIS_STATUS_INVALID_ID = 0,
    HIS_STATUS_DONE = 1,
    HIS_STATUS_IN_PROGRESS = 2,
    HIS_STATUS_IN_QUEUE = 3,
    HIS_STATUS_PARTIAL = 4,
    HIS_STATUS_FAILED = 5,
    HIS_STATUS_CANCELLED = 6,
    HIS_STATUS_DMA_WAIT = 7,
};
class HISGetFreeRequestCountReturn {
    // total size: 0x4
public:
    signed int count; // offset 0x0, size 0x4
};
class HISStopVoiceReturn {
    // total size: 0x1
};
class HISGetFileIndexReturn {
    // total size: 0x4
public:
    signed int index; // offset 0x0, size 0x4
};
class HISTestParameter {
    // total size: 0x44
public:
    signed int testValue; // offset 0x0, size 0x4
    char testString[64]; // offset 0x4, size 0x40
};
class HISSoundDebugVoice {
    // total size: 0x20
public:
    unsigned int address; // offset 0x0, size 0x4
    unsigned short leftVolume; // offset 0x4, size 0x2
    unsigned short rightVolume; // offset 0x6, size 0x2
    unsigned short pitch; // offset 0x8, size 0x2
    unsigned short envelope; // offset 0xA, size 0x2
    unsigned char kon; // offset 0xC, size 0x1
    unsigned char koff; // offset 0xD, size 0x1
    unsigned char endx; // offset 0xE, size 0x1
    unsigned char external; // offset 0xF, size 0x1
    unsigned char streaming; // offset 0x10, size 0x1
    unsigned char reading; // offset 0x11, size 0x1
    unsigned char readingBuffer; // offset 0x12, size 0x1
    unsigned char byteMode; // offset 0x13, size 0x1
    union { // inferred
        signed int currentSector; // offset 0x14, size 0x4
        signed int currentOffset; // offset 0x14, size 0x4
    };
    signed int sectorsLeft; // offset 0x18, size 0x4
    signed int dataSize; // offset 0x1C, size 0x4
};
class HISRemoteVoiceTransReturn {
    // total size: 0x4
public:
    signed int ret; // offset 0x0, size 0x4
};
class HISGetFileIndexDebugParameter {
    // total size: 0x4
public:
    signed int fileIndex; // offset 0x0, size 0x4
};
class HISCloseRequestParameter {
    // total size: 0x4
public:
    signed int requestID; // offset 0x0, size 0x4
};
class HISRemoteBlockTransParameter {
    // total size: 0x10
public:
    signed short channel; // offset 0x0, size 0x2
    unsigned short mode; // offset 0x2, size 0x2
    unsigned char * m_addr; // offset 0x4, size 0x4
    unsigned int size; // offset 0x8, size 0x4
    unsigned char * start_addr; // offset 0xC, size 0x4
};
class HISGetFileIndexDebugReturn {
    // total size: 0x3C
public:
    class HISFileIndexDebug fileIndexDebug; // offset 0x0, size 0x3C
};
class HISPlayExternalStreamReturn {
    // total size: 0x1
};
class HISWaitForRequestParameter {
    // total size: 0x1
};
class HISCloseRequestReturn {
    // total size: 0x1
public:
    unsigned char success; // offset 0x0, size 0x1
};
class HISRequestDebug {
    // total size: 0x1C
public:
    class /* @class */ {
        // total size: 0x4
    public:
        signed int nextRequest : 8; // offset 0x0, size 0x4
        enum HISStatus status : 8; // offset 0x0, size 0x4
        enum HISMemoryType destinationType : 8; // offset 0x0, size 0x4
    } small; // offset 0x0, size 0x4
    signed int destination; // offset 0x4, size 0x4
    signed int currentPriority; // offset 0x8, size 0x4
    signed int originalPriority; // offset 0xC, size 0x4
    signed int fileIndex; // offset 0x10, size 0x4
    signed int startSector; // offset 0x14, size 0x4
    signed int sectorsToRead; // offset 0x18, size 0x4
};
class HISRemoteBlockTransReturn {
    // total size: 0x4
public:
    signed int ret; // offset 0x0, size 0x4
};
class /* @class */ {
    // total size: 0x4
public:
    signed int nextRequest : 8; // offset 0x0, size 0x4
    enum HISStatus status : 8; // offset 0x0, size 0x4
    enum HISMemoryType destinationType : 8; // offset 0x0, size 0x4
};
class HISTestReturn {
    // total size: 0x4
public:
    signed int returnValue; // offset 0x0, size 0x4
};
class HISLoadBlockAsyncParameter {
    // total size: 0x1C
public:
    signed int fileIndex; // offset 0x0, size 0x4
    signed int sourceBlock; // offset 0x4, size 0x4
    signed int sourceSize; // offset 0x8, size 0x4
    void * destinationAddress; // offset 0xC, size 0x4
    enum HISMemoryType destinationType; // offset 0x10, size 0x4
    signed int priority; // offset 0x14, size 0x4
    signed int flags; // offset 0x18, size 0x4
};
class HISWaitForRequestReturn {
    // total size: 0x1
};
class HISWaitForAllRequestsParameter {
    // total size: 0x1
};
class HISLoadExternalStreamParameter {
    // total size: 0x8
public:
    unsigned short voice; // offset 0x0, size 0x2
    unsigned short buffer; // offset 0x2, size 0x2
    void * address; // offset 0x4, size 0x4
};
class HISWaitForAllRequestsReturn {
    // total size: 0x1
};
class HISLoadExternalStreamReturn {
    // total size: 0x1
};

/*
    Compile unit: C:\SB\Core\p2\his\HisStubs.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034A4D0 -> 0x0034A57C
*/
// Range: 0x34A4D0 -> 0x34A57C
void HISRemoteSetParam(unsigned short reg /* r19 */, unsigned short value /* r18 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x34A4D0 -> 0x34A57C
        char inputBuffer[20]; // r29+0x80
        class HISRemoteSetParamParameter * input; // r17
        char outputBuffer[17]; // r29+0x60
        class HISRemoteSetParamReturn * output; // r16
    }
}

/*
    Compile unit: C:\SB\Core\p2\his\HisStubs.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034A580 -> 0x0034A664
*/
// Range: 0x34A580 -> 0x34A664
signed int HISRemoteVoiceTrans(signed short channel /* r20 */, unsigned short mode /* r19 */, unsigned char * m_addr /* r18 */, unsigned int s_addr /* r21 */, unsigned int size /* r22 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x34A580 -> 0x34A664
        char inputBuffer[32]; // r29+0xB0
        class HISRemoteVoiceTransParameter * input; // r17
        char outputBuffer[20]; // r29+0x90
        class HISRemoteVoiceTransReturn * output; // r16
    }
}

/*
    Compile unit: C:\SB\Core\p2\his\HisStubs.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034A670 -> 0x0034A720
*/
// Range: 0x34A670 -> 0x34A720
unsigned int HISRemoteBlockTransStatus(signed short channel /* r19 */, signed short flag /* r18 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x34A670 -> 0x34A720
        char inputBuffer[20]; // r29+0x80
        class HISRemoteBlockTransStatusParameter * input; // r17
        char outputBuffer[20]; // r29+0x60
        class HISRemoteBlockTransStatusReturn * output; // r16
    }
}

/*
    Compile unit: C:\SB\Core\p2\his\HisStubs.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034A720 -> 0x0034A804
*/
// Range: 0x34A720 -> 0x34A804
signed int HISRemoteBlockTrans(signed short channel /* r20 */, unsigned short mode /* r19 */, unsigned char * m_addr /* r18 */, unsigned int size /* r21 */, unsigned char * start_addr /* r22 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x34A720 -> 0x34A804
        char inputBuffer[32]; // r29+0xB0
        class HISRemoteBlockTransParameter * input; // r17
        char outputBuffer[20]; // r29+0x90
        class HISRemoteBlockTransReturn * output; // r16
    }
}

/*
    Compile unit: C:\SB\Core\p2\his\HisStubs.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034A810 -> 0x0034A8B4
*/
// Range: 0x34A810 -> 0x34A8B4
signed int HISGetExternalStreamBuffer(signed int voice /* r18 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x34A810 -> 0x34A8B4
        char inputBuffer[20]; // r29+0x70
        class HISGetExternalStreamBufferParameter * input; // r17
        char outputBuffer[20]; // r29+0x50
        class HISGetExternalStreamBufferReturn * output; // r16
    }
}

/*
    Compile unit: C:\SB\Core\p2\his\HisStubs.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034A8C0 -> 0x0034A980
*/
// Range: 0x34A8C0 -> 0x34A980
void HISLoadExternalStream(signed int voice /* r20 */, signed int buffer /* r19 */, void * address /* r18 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x34A8C0 -> 0x34A980
        char inputBuffer[24]; // r29+0x90
        class HISLoadExternalStreamParameter * input; // r17
        char outputBuffer[17]; // r29+0x70
        class HISLoadExternalStreamReturn * output; // r16
    }
}

/*
    Compile unit: C:\SB\Core\p2\his\HisStubs.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034A980 -> 0x0034AA2C
*/
// Range: 0x34A980 -> 0x34AA2C
void HISSetMasterVolume(signed int leftVolume /* r19 */, signed int rightVolume /* r18 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x34A980 -> 0x34AA2C
        char inputBuffer[20]; // r29+0x80
        class HISSetMasterVolumeParameter * input; // r17
        char outputBuffer[17]; // r29+0x60
        class HISSetMasterVolumeReturn * output; // r16
    }
}

/*
    Compile unit: C:\SB\Core\p2\his\HisStubs.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034AA30 -> 0x0034AAEC
*/
// Range: 0x34AA30 -> 0x34AAEC
void HISGetVoiceStatus(unsigned int * data /* r17 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x34AA30 -> 0x34AAEC
        char inputBuffer[17]; // r29+0x70
        class HISGetVoiceStatusParameter * input; // r18
        char outputBuffer[24]; // r29+0x50
        class HISGetVoiceStatusReturn * output; // r16
        signed int i; // r5
    }
}

/*
    Compile unit: C:\SB\Core\p2\his\HisStubs.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034AAF0 -> 0x0034AB6C
*/
// Range: 0x34AAF0 -> 0x34AB6C
void _HISBatchSoundCommandsNoWait(void * data /* r17 */, signed int size /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x34AAF0 -> 0x34AB6C
    }
}

/*
    Compile unit: C:\SB\Core\p2\his\HisStubs.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034AB70 -> 0x0034ABEC
*/
// Range: 0x34AB70 -> 0x34ABEC
void HISBatchSoundCommands(void * data /* r17 */, signed int size /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x34AB70 -> 0x34ABEC
    }
}

/*
    Compile unit: C:\SB\Core\p2\his\HisStubs.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034ABF0 -> 0x0034ACE4
*/
// Range: 0x34ABF0 -> 0x34ACE4
void HISGetFileIndexDebug(signed int fileIndex /* r19 */, class HISFileIndexDebug * fileIndexDebug /* r17 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x34ABF0 -> 0x34ACE4
        char inputBuffer[20]; // r29+0xB0
        class HISGetFileIndexDebugParameter * input; // r18
        char outputBuffer[76]; // r29+0x60
        class HISGetFileIndexDebugReturn * output; // r16
    }
}

/*
    Compile unit: C:\SB\Core\p2\his\HisStubs.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034ACF0 -> 0x0034AD80
*/
// Range: 0x34ACF0 -> 0x34AD80
signed int HISGetFirstValidRequest() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x34ACF0 -> 0x34AD80
        char inputBuffer[17]; // r29+0x60
        class HISGetFirstValidRequestParameter * input; // r17
        char outputBuffer[20]; // r29+0x40
        class HISGetFirstValidRequestReturn * output; // r16
    }
}

/*
    Compile unit: C:\SB\Core\p2\his\HisStubs.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034AD80 -> 0x0034AE64
*/
// Range: 0x34AD80 -> 0x34AE64
void HISGetRequestDebug(signed int requestID /* r19 */, class HISRequestDebug * requestDebug /* r17 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x34AD80 -> 0x34AE64
        char inputBuffer[20]; // r29+0x90
        class HISGetRequestDebugParameter * input; // r18
        char outputBuffer[44]; // r29+0x60
        class HISGetRequestDebugReturn * output; // r16
    }
}

/*
    Compile unit: C:\SB\Core\p2\his\HisStubs.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034AE70 -> 0x0034AEFC
*/
// Range: 0x34AE70 -> 0x34AEFC
void HISFlushHostIOHandles() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x34AE70 -> 0x34AEFC
        char inputBuffer[17]; // r29+0x60
        class HISFlushHostIOHandlesParameter * input; // r17
        char outputBuffer[17]; // r29+0x40
        class HISFlushHostIOHandlesReturn * output; // r16
    }
}

/*
    Compile unit: C:\SB\Core\p2\his\HisStubs.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034AF00 -> 0x0034AFA4
*/
// Range: 0x34AF00 -> 0x34AFA4
signed int HISGetFileSize(signed int fileIndex /* r18 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x34AF00 -> 0x34AFA4
        char inputBuffer[20]; // r29+0x70
        class HISGetFileSizeParameter * input; // r17
        char outputBuffer[20]; // r29+0x50
        class HISGetFileSizeReturn * output; // r16
    }
}

/*
    Compile unit: C:\SB\Core\p2\his\HisStubs.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034AFB0 -> 0x0034B03C
*/
// Range: 0x34AFB0 -> 0x34B03C
void HISWaitForRequest() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x34AFB0 -> 0x34B03C
        char inputBuffer[17]; // r29+0x60
        class HISWaitForRequestParameter * input; // r17
        char outputBuffer[17]; // r29+0x40
        class HISWaitForRequestReturn * output; // r16
    }
}

/*
    Compile unit: C:\SB\Core\p2\his\HisStubs.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034B040 -> 0x0034B0E4
*/
// Range: 0x34B040 -> 0x34B0E4
unsigned char HISCloseRequest(signed int requestID /* r18 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x34B040 -> 0x34B0E4
        char inputBuffer[20]; // r29+0x70
        class HISCloseRequestParameter * input; // r17
        char outputBuffer[17]; // r29+0x50
        class HISCloseRequestReturn * output; // r16
    }
}

/*
    Compile unit: C:\SB\Core\p2\his\HisStubs.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034B0F0 -> 0x0034B194
*/
// Range: 0x34B0F0 -> 0x34B194
unsigned char HISCancelRequest(signed int requestID /* r18 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x34B0F0 -> 0x34B194
        char inputBuffer[20]; // r29+0x70
        class HISCancelRequestParameter * input; // r17
        char outputBuffer[17]; // r29+0x50
        class HISCancelRequestReturn * output; // r16
    }
}

/*
    Compile unit: C:\SB\Core\p2\his\HisStubs.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034B1A0 -> 0x0034B244
*/
// Range: 0x34B1A0 -> 0x34B244
enum HISStatus HISGetRequestStatus(signed int requestID /* r18 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x34B1A0 -> 0x34B244
        char inputBuffer[20]; // r29+0x70
        class HISGetRequestStatusParameter * input; // r17
        char outputBuffer[20]; // r29+0x50
        class HISGetRequestStatusReturn * output; // r16
    }
}

/*
    Compile unit: C:\SB\Core\p2\his\HisStubs.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034B250 -> 0x0034B364
*/
// Range: 0x34B250 -> 0x34B364
signed int HISLoadBlockAsync(signed int fileIndex /* r21 */, signed int sourceBlock /* r22 */, signed int sourceSize /* r20 */, void * destinationAddress /* r19 */, enum HISMemoryType destinationType /* r18 */, signed int priority /* r23 */, signed int flags /* r30 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x34B250 -> 0x34B364
        char inputBuffer[44]; // r29+0xD0
        class HISLoadBlockAsyncParameter * input; // r17
        char outputBuffer[20]; // r29+0xB0
        class HISLoadBlockAsyncReturn * output; // r16
    }
}

/*
    Compile unit: C:\SB\Core\p2\his\HisStubs.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034B370 -> 0x0034B41C
*/
// Range: 0x34B370 -> 0x34B41C
signed int HISGetFileIndex(char * filename /* r18 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x34B370 -> 0x34B41C
        char inputBuffer[64]; // r29+0x70
        class HISGetFileIndexParameter * input; // r17
        char outputBuffer[20]; // r29+0x50
        class HISGetFileIndexReturn * output; // r16
    }
}

/*
    Compile unit: C:\SB\Core\p2\his\HisStubs.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034B420 -> 0x0034B4B0
*/
// Range: 0x34B420 -> 0x34B4B0
signed int HISGetVersion() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x34B420 -> 0x34B4B0
        char inputBuffer[17]; // r29+0x60
        class HISGetVersionParameter * input; // r17
        char outputBuffer[20]; // r29+0x40
        class HISGetVersionReturn * output; // r16
    }
}

/*
    Compile unit: C:\SB\Core\p2\his\HisStubs.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034B4B0 -> 0x0034B550
*/
// Range: 0x34B4B0 -> 0x34B550
void HISInit(enum HISMediaType mediaType /* r18 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x34B4B0 -> 0x34B550
        char inputBuffer[20]; // r29+0x70
        class HISInitParameter * input; // r17
        char outputBuffer[17]; // r29+0x50
        class HISInitReturn * output; // r16
    }
}

/*
    Compile unit: C:\SB\Core\p2\his\HisStubs.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034B550 -> 0x0034B594
*/
// Range: 0x34B550 -> 0x34B594
void HISInitStubs() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x34B550 -> 0x34B594
    }
}

