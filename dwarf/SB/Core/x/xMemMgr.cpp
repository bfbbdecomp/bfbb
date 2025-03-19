/*
    Compile unit: C:\SB\Core\x\xMemMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
class xMemInfo_tag gMemInfo; // size: 0x30, address: 0x568900
unsigned int gActiveHeap; // size: 0x4, address: 0x50FA44
class xMemHeap_tag gxHeap[3]; // size: 0x294, address: 0x568930
void (* sMemBaseNotifyFunc)(); // size: 0x4, address: 0x50FA48
signed int gMemReporting; // size: 0x4, address: 0x0
unsigned int gMemReportingThreshold; // size: 0x4, address: 0x0
signed int gDumpTempLeaks; // size: 0x4, address: 0x0
unsigned int ourGlobals[4096]; // size: 0x4000, address: 0x5BB928
class _tagxPad * gDebugPad; // size: 0x4, address: 0x50FA68
char _stack_size; // size: 0x1, address: 0x10000
char _end; // size: 0x1, address: 0x61DE80
class xMemHeap_tag {
    // total size: 0xDC
public:
    unsigned int flags; // offset 0x0, size 0x4
    unsigned int hard_base; // offset 0x4, size 0x4
    unsigned int size; // offset 0x8, size 0x4
    signed short opp_heap[2]; // offset 0xC, size 0x4
    class xHeapState_tag state[12]; // offset 0x10, size 0xC0
    unsigned short state_idx; // offset 0xD0, size 0x2
    unsigned short max_blks; // offset 0xD2, size 0x2
    class xMemBlock_tag * blk; // offset 0xD4, size 0x4
    class xMemBlock_tag * lastblk; // offset 0xD8, size 0x4
};
class _tagxPad {
    // total size: 0x148
public:
    unsigned char value[22]; // offset 0x0, size 0x16
    unsigned char last_value[22]; // offset 0x16, size 0x16
    unsigned int on; // offset 0x2C, size 0x4
    unsigned int pressed; // offset 0x30, size 0x4
    unsigned int released; // offset 0x34, size 0x4
    class _tagPadAnalog analog1; // offset 0x38, size 0x2
    class _tagPadAnalog analog2; // offset 0x3A, size 0x2
    enum _tagPadState state; // offset 0x3C, size 0x4
    unsigned int flags; // offset 0x40, size 0x4
    class _tagxRumble rumble_head; // offset 0x44, size 0x10
    signed short port; // offset 0x54, size 0x2
    signed short slot; // offset 0x56, size 0x2
    class _tagiPad context; // offset 0x58, size 0x4
    float al2d_timer; // offset 0x5C, size 0x4
    float ar2d_timer; // offset 0x60, size 0x4
    float d_timer; // offset 0x64, size 0x4
    float up_tmr[22]; // offset 0x68, size 0x58
    float down_tmr[22]; // offset 0xC0, size 0x58
    class analog_data analog[2]; // offset 0x118, size 0x30
};
class xMemBlkInfo_tag {
    // total size: 0x1C
public:
    class xMemBlock_tag * header; // offset 0x0, size 0x4
    unsigned int pre; // offset 0x4, size 0x4
    unsigned int block; // offset 0x8, size 0x4
    unsigned int post; // offset 0xC, size 0x4
    unsigned int curr; // offset 0x10, size 0x4
    unsigned int waste; // offset 0x14, size 0x4
    unsigned int total; // offset 0x18, size 0x4
};
class xMemPool {
    // total size: 0x1C
public:
    void * FreeList; // offset 0x0, size 0x4
    unsigned short NextOffset; // offset 0x4, size 0x2
    unsigned short Flags; // offset 0x6, size 0x2
    void * UsedList; // offset 0x8, size 0x4
    void (* InitCB)(class xMemPool *, void *); // offset 0xC, size 0x4
    void * Buffer; // offset 0x10, size 0x4
    unsigned short Size; // offset 0x14, size 0x2
    unsigned short NumRealloc; // offset 0x16, size 0x2
    unsigned int Total; // offset 0x18, size 0x4
};
enum _tagRumbleType {
    eRumble_Off = 0,
    eRumble_Hi = 1,
    eRumble_VeryLightHi = 2,
    eRumble_VeryLight = 3,
    eRumble_LightHi = 4,
    eRumble_Light = 5,
    eRumble_MediumHi = 6,
    eRumble_Medium = 7,
    eRumble_HeavyHi = 8,
    eRumble_Heavy = 9,
    eRumble_VeryHeavyHi = 10,
    eRumble_VeryHeavy = 11,
    eRumble_Total = 12,
    eRumbleForceU32 = 2147483647,
};
class analog_data {
    // total size: 0x18
public:
    class xVec2 offset; // offset 0x0, size 0x8
    class xVec2 dir; // offset 0x8, size 0x8
    float mag; // offset 0x10, size 0x4
    float ang; // offset 0x14, size 0x4
};
class _tagiPad {
    // total size: 0x4
public:
    signed int port; // offset 0x0, size 0x4
};
class xVec2 {
    // total size: 0x8
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
};
class xMemBlock_tag {
    // total size: 0xC
public:
    unsigned int addr; // offset 0x0, size 0x4
    unsigned int size; // offset 0x4, size 0x4
    signed int align; // offset 0x8, size 0x4
};
class xHeapState_tag {
    // total size: 0x10
public:
    unsigned int curr; // offset 0x0, size 0x4
    unsigned short blk_ct; // offset 0x4, size 0x2
    unsigned short pad; // offset 0x6, size 0x2
    unsigned int used; // offset 0x8, size 0x4
    unsigned int wasted; // offset 0xC, size 0x4
};
class _tagxRumble {
    // total size: 0x10
public:
    enum _tagRumbleType type; // offset 0x0, size 0x4
    float seconds; // offset 0x4, size 0x4
    class _tagxRumble * next; // offset 0x8, size 0x4
    signed short active; // offset 0xC, size 0x2
    unsigned short fxflags; // offset 0xE, size 0x2
};
class xMemArea_tag {
    // total size: 0xC
public:
    unsigned int addr; // offset 0x0, size 0x4
    unsigned int size; // offset 0x4, size 0x4
    unsigned int flags; // offset 0x8, size 0x4
};
enum _tagPadState {
    ePad_Disabled = 0,
    ePad_DisabledError = 1,
    ePad_Enabled = 2,
    ePad_Missing = 3,
    ePad_Total = 4,
};
class xMemInfo_tag {
    // total size: 0x30
public:
    class xMemArea_tag system; // offset 0x0, size 0xC
    class xMemArea_tag stack; // offset 0xC, size 0xC
    class xMemArea_tag DRAM; // offset 0x18, size 0xC
    class xMemArea_tag SRAM; // offset 0x24, size 0xC
};
class _tagPadAnalog {
    // total size: 0x2
public:
    signed char x; // offset 0x0, size 0x1
    signed char y; // offset 0x1, size 0x1
};

/*
    Compile unit: C:\SB\Core\x\xMemMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F0300 -> 0x001F0370
*/
// Range: 0x1F0300 -> 0x1F0370
void xMemPoolFree(class xMemPool * pool /* r2 */, void * data /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F0300 -> 0x1F0370
        void * freeList; // r9
        unsigned int next; // r8
        void * * prev; // r7
        void * curr; // r6
    }
}

/*
    Compile unit: C:\SB\Core\x\xMemMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F0370 -> 0x001F0404
*/
// Range: 0x1F0370 -> 0x1F0404
void * xMemPoolAlloc(class xMemPool * pool /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F0370 -> 0x1F0404
        void * retval; // r2
        unsigned int next; // r19
        unsigned int flags; // r18
    }
}

/*
    Compile unit: C:\SB\Core\x\xMemMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F0410 -> 0x001F043C
*/
// Range: 0x1F0410 -> 0x1F043C
void xMemPoolSetup(class xMemPool * pool /* r2 */, void * buffer /* r2 */, unsigned int nextOffset /* r2 */, unsigned int flags /* r2 */, void (* initCB)(class xMemPool *, void *) /* r2 */, unsigned int size /* r2 */, unsigned int count /* r2 */, unsigned int numRealloc /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F0410 -> 0x1F043C
    }
}

/*
    Compile unit: C:\SB\Core\x\xMemMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F0440 -> 0x001F0518
*/
// Range: 0x1F0440 -> 0x1F0518
static void xMemPoolAddElements(class xMemPool * pool /* r22 */, void * buffer /* r23 */, unsigned int count /* r21 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F0440 -> 0x1F0518
        signed int i; // r20
        void * curr; // r2
        void (* initCB)(class xMemPool *, void *); // r19
        unsigned int next; // r18
        unsigned int size; // r30
    }
}

/*
    Compile unit: C:\SB\Core\x\xMemMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F0520 -> 0x001F054C
*/
// Range: 0x1F0520 -> 0x1F054C
signed int xMemGetBase() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F0520 -> 0x1F054C
    }
}

/*
    Compile unit: C:\SB\Core\x\xMemMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F0550 -> 0x001F0558
*/
// Range: 0x1F0550 -> 0x1F0558
void xMemRegisterBaseNotifyFunc(void (* func)() /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F0550 -> 0x1F0558
    }
}

/*
    Compile unit: C:\SB\Core\x\xMemMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F0560 -> 0x001F05CC
*/
// Range: 0x1F0560 -> 0x1F05CC
signed int xMemPopBase(signed int depth /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F0560 -> 0x1F05CC
    }
}

/*
    Compile unit: C:\SB\Core\x\xMemMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F05D0 -> 0x001F0670
*/
// Range: 0x1F05D0 -> 0x1F0670
signed int xMemPushBase() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F05D0 -> 0x1F0670
    }
}

/*
    Compile unit: C:\SB\Core\x\xMemMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F0670 -> 0x001F0680
*/
// Range: 0x1F0670 -> 0x1F0680
void xMemPopTemp(void * addr /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F0670 -> 0x1F0680
    }
}

/*
    Compile unit: C:\SB\Core\x\xMemMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F0680 -> 0x001F0690
*/
// Range: 0x1F0680 -> 0x1F0690
void * xMemPushTemp(unsigned int size /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F0680 -> 0x1F0690
        void * addr; // r2
    }
}

/*
    Compile unit: C:\SB\Core\x\xMemMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F0690 -> 0x001F07D8
*/
// Range: 0x1F0690 -> 0x1F07D8
void * xMemAlloc(unsigned int heapID /* r2 */, unsigned int size /* r20 */, signed int align /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F0690 -> 0x1F07D8
        class xMemHeap_tag * heap; // r19
        class xMemBlock_tag * hdr; // r18
        class xHeapState_tag * sp; // r17
        class xMemBlkInfo_tag info; // r29+0x60
        unsigned int total; // r2
    }
}

/*
    Compile unit: C:\SB\Core\x\xMemMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F07E0 -> 0x001F08D0
*/
// Range: 0x1F07E0 -> 0x1F08D0
void * xMemGrowAlloc(unsigned int heapID /* r2 */, unsigned int size /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F07E0 -> 0x1F08D0
        class xMemHeap_tag * heap; // r8
        class xMemBlock_tag * hdr; // r2
        class xHeapState_tag * sp; // r7
        void * memptr; // r16
    }
}

/*
    Compile unit: C:\SB\Core\x\xMemMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F08D0 -> 0x001F09F0
*/
// Range: 0x1F08D0 -> 0x1F09F0
static unsigned int xMemGetBlockInfo(class xMemHeap_tag * heap /* r2 */, unsigned int size /* r2 */, signed int align /* r2 */, class xMemBlkInfo_tag * info /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F08D0 -> 0x1F09F0
        signed int total; // r2
        signed int hdr; // r13
        signed int pre; // r12
        signed int block; // r2
        signed int post; // r6
        class xHeapState_tag * sp; // r11
        signed int remainder; // r12
    }
}

/*
    Compile unit: C:\SB\Core\x\xMemMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F09F0 -> 0x001F0AFC
*/
// Range: 0x1F09F0 -> 0x1F0AFC
void xMemInitHeap(class xMemHeap_tag * heap /* r16 */, unsigned int base /* r2 */, unsigned int size /* r2 */, unsigned int flags /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F09F0 -> 0x1F0AFC
        unsigned int old_base; // r9
        signed int align; // r8
        class xHeapState_tag * sp; // r2
    }
}

/*
    Compile unit: C:\SB\Core\x\xMemMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F0B00 -> 0x001F0B08
*/
// Range: 0x1F0B00 -> 0x1F0B08
void xMemExit() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F0B00 -> 0x1F0B08
    }
}

/*
    Compile unit: C:\SB\Core\x\xMemMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F0B10 -> 0x001F0BD0
*/
// Range: 0x1F0B10 -> 0x1F0BD0
void xMemInit() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F0B10 -> 0x1F0BD0
    }
}

/*
    Compile unit: C:\SB\Core\x\xMemMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F0BD0 -> 0x001F0BD8
*/
// Range: 0x1F0BD0 -> 0x1F0BD8
void xMemDebug_SoakLog() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F0BD0 -> 0x1F0BD8
    }
}

