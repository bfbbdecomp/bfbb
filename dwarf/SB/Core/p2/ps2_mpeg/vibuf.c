/*
    Compile unit: C:\SB\Core\p2\ps2_mpeg\vibuf.c
    Producer: MW MIPS C Compiler
    Language: C++
*/
class sceIpuDmaEnv {
    // total size: 0x24
public:
    unsigned int d4madr; // offset 0x0, size 0x4
    unsigned int d4tadr; // offset 0x4, size 0x4
    unsigned int d4qwc; // offset 0x8, size 0x4
    unsigned int d4chcr; // offset 0xC, size 0x4
    unsigned int d3madr; // offset 0x10, size 0x4
    unsigned int d3qwc; // offset 0x14, size 0x4
    unsigned int d3chcr; // offset 0x18, size 0x4
    unsigned int ipubp; // offset 0x1C, size 0x4
    unsigned int ipuctrl; // offset 0x20, size 0x4
};
class ViBuf {
    // total size: 0x60
public:
    __int128 * data; // offset 0x0, size 0x4
    __int128 * tag; // offset 0x4, size 0x4
    signed int n; // offset 0x8, size 0x4
    signed int dmaStart; // offset 0xC, size 0x4
    signed int dmaN; // offset 0x10, size 0x4
    signed int readBytes; // offset 0x14, size 0x4
    signed int buffSize; // offset 0x18, size 0x4
    class sceIpuDmaEnv env; // offset 0x1C, size 0x24
    signed int sema; // offset 0x40, size 0x4
    signed int isActive; // offset 0x44, size 0x4
    signed long totalBytes; // offset 0x48, size 0x4
    class TimeStamp * ts; // offset 0x50, size 0x4
    signed int n_ts; // offset 0x54, size 0x4
    signed int count_ts; // offset 0x58, size 0x4
    signed int wt_ts; // offset 0x5C, size 0x4
};
class TimeStamp {
    // total size: 0x18
public:
    signed long pts; // offset 0x0, size 0x4
    signed long dts; // offset 0x8, size 0x4
    signed int pos; // offset 0x10, size 0x4
    signed int len; // offset 0x14, size 0x4
};
class SemaParam {
    // total size: 0x18
public:
    signed int currentCount; // offset 0x0, size 0x4
    signed int maxCount; // offset 0x4, size 0x4
    signed int initCount; // offset 0x8, size 0x4
    signed int numWaitThreads; // offset 0xC, size 0x4
    unsigned int attr; // offset 0x10, size 0x4
    unsigned int option; // offset 0x14, size 0x4
};
class QWORD {
    // total size: 0x10
public:
    union { // inferred
        __int128 q; // offset 0x0, size 0x10
        unsigned long l[2]; // offset 0x0, size 0x8
        unsigned int i[4]; // offset 0x0, size 0x10
        unsigned short s[8]; // offset 0x0, size 0x10
        unsigned char c[16]; // offset 0x0, size 0x10
    };
};

/*
    Compile unit: C:\SB\Core\p2\ps2_mpeg\vibuf.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BDB70 -> 0x001BDD24
*/
// Range: 0x1BDB70 -> 0x1BDD24
signed int viBufGetTs(class ViBuf * f /* r18 */, class TimeStamp * ts /* r17 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1BDB70 -> 0x1BDD24
        unsigned int d4madr; // r20
        unsigned int ipubp; // r19
        signed int bp; // r3
        signed int datasize; // r7
        signed int isEnd; // r16
        signed int tscount; // r6
        signed int i; // r5
        signed int rd; // r10
    }
}

/*
    Compile unit: C:\SB\Core\p2\ps2_mpeg\vibuf.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BDD30 -> 0x001BDE64
*/
// Range: 0x1BDD30 -> 0x1BDE64
signed int viBufPutTs(class ViBuf * f /* r17 */, class TimeStamp * ts /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1BDD30 -> 0x1BDE64
        signed int ret; // r18
    }
}

/*
    Compile unit: C:\SB\Core\p2\ps2_mpeg\vibuf.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BDE70 -> 0x001BDFC0
*/
// Range: 0x1BDE70 -> 0x1BDFC0
signed int viBufModifyPts(class ViBuf * f /* r2 */, class TimeStamp * new_ts /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1BDE70 -> 0x1BDFC0
        class TimeStamp * ts; // r13
        signed int rd; // r6
        signed int datasize; // r3
        signed int loop; // r2
    }
}

/*
    Compile unit: C:\SB\Core\p2\ps2_mpeg\vibuf.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BDFC0 -> 0x001BE010
*/
// Range: 0x1BDFC0 -> 0x1BE010
void viBufFlush(class ViBuf * f /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1BDFC0 -> 0x1BE010
    }
}

/*
    Compile unit: C:\SB\Core\p2\ps2_mpeg\vibuf.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BE010 -> 0x001BE054
*/
// Range: 0x1BE010 -> 0x1BE054
signed int viBufCount(class ViBuf * f /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1BE010 -> 0x1BE054
        signed int ret; // r16
    }
}

/*
    Compile unit: C:\SB\Core\p2\ps2_mpeg\vibuf.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BE060 -> 0x001BE0EC
*/
// Range: 0x1BE060 -> 0x1BE0EC
signed int viBufDelete(class ViBuf * f /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1BE060 -> 0x1BE0EC
    }
}

/*
    Compile unit: C:\SB\Core\p2\ps2_mpeg\vibuf.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BE0F0 -> 0x001BE490
*/
// Range: 0x1BE0F0 -> 0x1BE490
signed int viBufRestartDMA(class ViBuf * f /* r21 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1BE0F0 -> 0x1BE490
        signed int bp; // r20
        unsigned int d4madr_next; // r19
        unsigned int d4qwc_next; // r18
        unsigned int d4tadr_next; // r17
        unsigned int d4chcr_next; // r16
    }
}

/*
    Compile unit: C:\SB\Core\p2\ps2_mpeg\vibuf.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BE490 -> 0x001BE5E0
*/
// Range: 0x1BE490 -> 0x1BE5E0
signed int viBufStopDMA(class ViBuf * f /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1BE490 -> 0x1BE5E0
    }
}

/*
    Compile unit: C:\SB\Core\p2\ps2_mpeg\vibuf.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BE5E0 -> 0x001BE8E0
*/
// Range: 0x1BE5E0 -> 0x1BE8E0
signed int viBufAddDMA(class ViBuf * f /* r18 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1BE5E0 -> 0x1BE8E0
        signed int i; // r10
        signed int index; // r3
        signed int last; // r5
        unsigned int d4chcr; // r17
        signed int isNewData; // r16
        signed int consume; // r5
        signed int read_start; // r2
        signed int read_n; // r2
    }
}

/*
    Compile unit: C:\SB\Core\p2\ps2_mpeg\vibuf.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BE8E0 -> 0x001BE93C
*/
// Range: 0x1BE8E0 -> 0x1BE93C
void viBufEndPut(class ViBuf * f /* r17 */, signed int size /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1BE8E0 -> 0x1BE93C
    }
}

/*
    Compile unit: C:\SB\Core\p2\ps2_mpeg\vibuf.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BE940 -> 0x001BEA38
*/
// Range: 0x1BE940 -> 0x1BEA38
void viBufBeginPut(class ViBuf * f /* r20 */, unsigned char * * ptr0 /* r19 */, signed int * len0 /* r18 */, unsigned char * * ptr1 /* r17 */, signed int * len1 /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1BE940 -> 0x1BEA38
        signed int es; // r5
        signed int en; // r3
    }
}

/*
    Compile unit: C:\SB\Core\p2\ps2_mpeg\vibuf.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BEA40 -> 0x001BEBD4
*/
// Range: 0x1BEA40 -> 0x1BEBD4
signed int viBufReset(class ViBuf * f /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1BEA40 -> 0x1BEBD4
        signed int i; // r6
    }
}

/*
    Compile unit: C:\SB\Core\p2\ps2_mpeg\vibuf.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BEBE0 -> 0x001BEC54
*/
// Range: 0x1BEBE0 -> 0x1BEC54
signed int viBufCreate(class ViBuf * f /* r16 */, __int128 * data /* r2 */, __int128 * tag /* r2 */, signed int size /* r2 */, class TimeStamp * ts /* r2 */, signed int n_ts /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1BEBE0 -> 0x1BEC54
        class SemaParam param; // r29+0x20
    }
}

