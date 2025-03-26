/*
    Compile unit: C:\SB\Core\p2\his\HISAPI.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
static char asyncRequestBuffers[4096]; // size: 0x1000, address: 0x5E3400
static char * asyncRequestBuffer; // size: 0x4, address: 0x50F0F0
static signed int asyncRequestCurrent; // size: 0x4, address: 0x510180
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

/*
    Compile unit: C:\SB\Core\p2\his\HISAPI.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034B5A0 -> 0x0034B5F4
*/
// Range: 0x34B5A0 -> 0x34B5F4
void HISFlushAsyncRequestsNoWait() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x34B5A0 -> 0x34B5F4
    }
}

/*
    Compile unit: C:\SB\Core\p2\his\HISAPI.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034B600 -> 0x0034B62C
*/
// Range: 0x34B600 -> 0x34B62C
void HISFlushAsyncRequests() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x34B600 -> 0x34B62C
    }
}

/*
    Compile unit: C:\SB\Core\p2\his\HISAPI.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034B630 -> 0x0034B684
*/
// Range: 0x34B630 -> 0x34B684
void HISPlayExternalStreamAsync(signed int voice /* r2 */, signed int leftVolume /* r2 */, signed int rightVolume /* r2 */, signed int pitch /* r2 */, signed int flags /* r2 */, signed int attack /* r2 */, signed int release /* r2 */, signed int blockSize /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x34B630 -> 0x34B684
    }
}

/*
    Compile unit: C:\SB\Core\p2\his\HISAPI.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034B690 -> 0x0034B6CC
*/
// Range: 0x34B690 -> 0x34B6CC
void HISJoinStereoVoicesAsync(signed int voice1 /* r2 */, signed int voice2 /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x34B690 -> 0x34B6CC
    }
}

/*
    Compile unit: C:\SB\Core\p2\his\HISAPI.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034B6D0 -> 0x0034B708
*/
// Range: 0x34B6D0 -> 0x34B708
void HISResumeVoiceAsync(signed int voice /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x34B6D0 -> 0x34B708
    }
}

/*
    Compile unit: C:\SB\Core\p2\his\HISAPI.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034B710 -> 0x0034B748
*/
// Range: 0x34B710 -> 0x34B748
void HISPauseVoiceAsync(signed int voice /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x34B710 -> 0x34B748
    }
}

/*
    Compile unit: C:\SB\Core\p2\his\HISAPI.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034B750 -> 0x0034B788
*/
// Range: 0x34B750 -> 0x34B788
void HISStopVoiceAsync(signed int voice /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x34B750 -> 0x34B788
    }
}

/*
    Compile unit: C:\SB\Core\p2\his\HISAPI.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034B790 -> 0x0034B7CC
*/
// Range: 0x34B790 -> 0x34B7CC
void HISSetVoicePitchAsync(signed int voice /* r2 */, signed int pitch /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x34B790 -> 0x34B7CC
    }
}

/*
    Compile unit: C:\SB\Core\p2\his\HISAPI.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034B7D0 -> 0x0034B810
*/
// Range: 0x34B7D0 -> 0x34B810
void HISSetVoiceVolumeAsync(signed int voice /* r2 */, signed int leftVolume /* r2 */, signed int rightVolume /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x34B7D0 -> 0x34B810
    }
}

/*
    Compile unit: C:\SB\Core\p2\his\HISAPI.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034B810 -> 0x0034B884
*/
// Range: 0x34B810 -> 0x34B884
void HISPlayStreamAsync(signed int voice /* r2 */, signed int leftVolume /* r2 */, signed int rightVolume /* r2 */, signed int pitch /* r2 */, signed int fileIndex /* r2 */, signed int logicalSectorNumber /* r2 */, signed int dataSize /* r2 */, signed int flags /* r2 */, signed int attack /* r29 */, signed int release /* r29+0x8 */, signed int blockSize /* r29+0x10 */, signed int interleaveSectors /* r29+0x18 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x34B810 -> 0x34B884
    }
}

/*
    Compile unit: C:\SB\Core\p2\his\HISAPI.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034B890 -> 0x0034B8E4
*/
// Range: 0x34B890 -> 0x34B8E4
void HISPlaySoundAsync(signed int voice /* r2 */, signed int leftVolume /* r2 */, signed int rightVolume /* r2 */, signed int pitch /* r2 */, unsigned int address /* r2 */, signed int attack /* r2 */, signed int release /* r2 */, unsigned char paused /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x34B890 -> 0x34B8E4
    }
}

/*
    Compile unit: C:\SB\Core\p2\his\HISAPI.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034B8F0 -> 0x0034B994
*/
// Range: 0x34B8F0 -> 0x34B994
enum HISStatus HISLoadBlock(signed int fileIndex /* r2 */, signed int sourceBlock /* r2 */, signed int sourceSize /* r2 */, void * destinationAddress /* r2 */, enum HISMemoryType destinationType /* r2 */, signed int priority /* r2 */, signed int flags /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x34B8F0 -> 0x34B994
        signed int id; // r16
        enum HISStatus status; // r17
    }
}

