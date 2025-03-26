/*
    Compile unit: C:\SB\Core\p2\iFile.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
static class AsyncRequest requests[32]; // size: 0x300, address: 0x532830
static signed int num_open_files; // size: 0x4, address: 0x50F7E8
char gHostPath[256]; // size: 0x100, address: 0x532B30
signed int DVD; // size: 0x4, address: 0x50F878
unsigned int ourGlobals[4096]; // size: 0x4000, address: 0x5BB928
void iFileDebugMode(); // size: 0x0, address: 0x1AA1E0
class tag_xFile {
    // total size: 0xB4
public:
    char relname[32]; // offset 0x0, size 0x20
    class tag_iFile ps; // offset 0x20, size 0x90
    void * user_data; // offset 0xB0, size 0x4
};
class tag_iFile {
    // total size: 0x90
public:
    unsigned int flags; // offset 0x0, size 0x4
    char path[128]; // offset 0x4, size 0x80
    signed int fd; // offset 0x84, size 0x4
    signed int offset; // offset 0x88, size 0x4
    signed int length; // offset 0x8C, size 0x4
};
enum IFILE_READSECTOR_STATUS {
    IFILE_RDSTAT_NOOP = 0,
    IFILE_RDSTAT_INPROG = 1,
    IFILE_RDSTAT_DONE = 2,
    IFILE_RDSTAT_FAIL = 3,
    IFILE_RDSTAT_QUEUED = 4,
    IFILE_RDSTAT_EXPIRED = 5,
};
enum HISMemoryType {
    HIS_MEMORY_EE = 0,
    HIS_MEMORY_IOP = 1,
    HIS_MEMORY_SPU = 2,
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
class HISFileIndexDebug {
    // total size: 0x3C
public:
    signed int logicalSectorNumber; // offset 0x0, size 0x4
    signed int size; // offset 0x4, size 0x4
    signed int sizeInSectors; // offset 0x8, size 0x4
    char name[48]; // offset 0xC, size 0x30
};
enum xFileDriveType {
    XFILE_DRIVE_CDVD = 0,
    XFILE_DRIVE_CONSOLE_HD = 1,
};
enum xFileDriveStatus {
    XFILE_TRAY_OPEN = 0,
    XFILE_STOPPED = 1,
    XFILE_SPINNING = 2,
    XFILE_READING = 3,
    XFILE_PAUSED = 4,
    XFILE_SEEKING = 5,
    XFILE_ERROR = 6,
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
class /* @class */ {
    // total size: 0x4
public:
    signed int nextRequest : 8; // offset 0x0, size 0x4
    enum HISStatus status : 8; // offset 0x0, size 0x4
    enum HISMemoryType destinationType : 8; // offset 0x0, size 0x4
};
class AsyncRequest {
    // total size: 0x18
public:
    unsigned char inUse; // offset 0x0, size 0x1
    signed int id; // offset 0x4, size 0x4
    enum IFILE_READSECTOR_STATUS status; // offset 0x8, size 0x4
    void (* callback)(class tag_xFile *); // offset 0xC, size 0x4
    class tag_xFile * file; // offset 0x10, size 0x4
    signed int framesLeft; // offset 0x14, size 0x4
};

/*
    Compile unit: C:\SB\Core\p2\iFile.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A9520 -> 0x001A9644
*/
// Range: 0x1A9520 -> 0x1A9644
void iFileAsyncService() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1A9520 -> 0x1A9644
        signed int i; // r17
        enum HISStatus status; // r2
    }
}

/*
    Compile unit: C:\SB\Core\p2\iFile.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A9650 -> 0x001A96A8
*/
// Range: 0x1A9650 -> 0x1A96A8
enum IFILE_READSECTOR_STATUS iFileReadAsyncStatus(signed int key /* r2 */, signed int * amtToFar /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1A9650 -> 0x1A96A8
    }
}

/*
    Compile unit: C:\SB\Core\p2\iFile.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A96B0 -> 0x001A973C
*/
// Range: 0x1A96B0 -> 0x1A973C
void iFileReadStop() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1A96B0 -> 0x1A973C
        signed int i; // r17
    }
}

/*
    Compile unit: C:\SB\Core\p2\iFile.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A9740 -> 0x001A9940
*/
// Range: 0x1A9740 -> 0x1A9940
signed int iFileReadAsync(class tag_xFile * file /* r20 */, void * buf /* r4 */, unsigned int aSize /* r19 */, void (* callback)(class tag_xFile *) /* r18 */, signed int priority /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1A9740 -> 0x1A9940
        class tag_iFile * ps; // r17
        signed int i; // r16
        signed int id; // r2
    }
}

/*
    Compile unit: C:\SB\Core\p2\iFile.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A9940 -> 0x001A99DC
*/
// Range: 0x1A9940 -> 0x1A99DC
void iFileSetPath(char * path /* r17 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1A9940 -> 0x1A99DC
        unsigned int len; // r16
    }
}

/*
    Compile unit: C:\SB\Core\p2\iFile.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A99E0 -> 0x001A9A94
*/
// Range: 0x1A99E0 -> 0x1A9A94
void iFileFullPath(char * relname /* r17 */, char * fullname /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1A99E0 -> 0x1A9A94
        char temp[256]; // r29+0x30
    }
}

/*
    Compile unit: C:\SB\Core\p2\iFile.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A9AA0 -> 0x001A9BA0
*/
// Range: 0x1A9AA0 -> 0x1A9BA0
unsigned int iFileGetSize(class tag_xFile * file /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1A9AA0 -> 0x1A9BA0
        signed int size; // r18
        signed int pos; // r17
        class tag_iFile * ps; // r16
        signed int rc; // r2
    }
}

/*
    Compile unit: C:\SB\Core\p2\iFile.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A9BA0 -> 0x001A9CE4
*/
// Range: 0x1A9BA0 -> 0x1A9CE4
unsigned int iFileClose(class tag_xFile * file /* r19 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1A9BA0 -> 0x1A9CE4
        class tag_iFile * ps; // r18
        signed int ret; // r2
        signed int i; // r17
    }
}

/*
    Compile unit: C:\SB\Core\p2\iFile.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A9CF0 -> 0x001A9DC0
*/
// Range: 0x1A9CF0 -> 0x1A9DC0
unsigned int iFileRead(class tag_xFile * file /* r2 */, void * buf /* r18 */, unsigned int size /* r17 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1A9CF0 -> 0x1A9DC0
        class tag_iFile * ps; // r16
        signed int num; // r2
    }
}

/*
    Compile unit: C:\SB\Core\p2\iFile.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A9DC0 -> 0x001A9EAC
*/
// Range: 0x1A9DC0 -> 0x1A9EAC
signed int iFileSeek(class tag_xFile * file /* r2 */, signed int offset /* r2 */, signed int whence /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1A9DC0 -> 0x1A9EAC
        class tag_iFile * ps; // r7
        signed int position; // r2
        signed int new_pos; // r2
    }
}

/*
    Compile unit: C:\SB\Core\p2\iFile.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A9EB0 -> 0x001A9FBC
*/
// Range: 0x1A9EB0 -> 0x1A9FBC
unsigned int iFileOpen(char * name /* r4 */, signed int flags /* r17 */, class tag_xFile * file /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1A9EB0 -> 0x1A9FBC
        class tag_iFile * ps; // r16
    }
}

/*
    Compile unit: C:\SB\Core\p2\iFile.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A9FC0 -> 0x001AA0C8
*/
// Range: 0x1A9FC0 -> 0x1AA0C8
unsigned int * iFileLoad(char * name /* r16 */, unsigned int * buffer /* r20 */, unsigned int * size /* r19 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1A9FC0 -> 0x1AA0C8
        signed int index; // r2
        signed int fileSize; // r18
        signed int alignedSize; // r17
    }
}

/*
    Compile unit: C:\SB\Core\p2\iFile.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AA0D0 -> 0x001AA0D8
*/
// Range: 0x1AA0D0 -> 0x1AA0D8
void iFileExit() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1AA0D0 -> 0x1AA0D8
    }
}

/*
    Compile unit: C:\SB\Core\p2\iFile.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AA0E0 -> 0x001AA1D4
*/
// Range: 0x1AA0E0 -> 0x1AA1D4
void iFileInit() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1AA0E0 -> 0x1AA1D4
        signed int hisVersion; // r2
    }
}

/*
    Compile unit: C:\SB\Core\p2\iFile.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AA1E0 -> 0x001AA328
*/
// Range: 0x1AA1E0 -> 0x1AA328
static void iFileDebugMode() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1AA1E0 -> 0x1AA328
        signed int id; // r21
        class HISRequestDebug requestDebug; // r29+0xE0
        class HISFileIndexDebug fileIndexDebug; // r29+0xA0
        char * TYPES[3]; // @ 0x00416D48
        char * STATUSES[9]; // @ 0x00416D20
    }
}

