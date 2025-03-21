/*
    Compile unit: C:\SB\Core\p2\ps2_mpeg\videodec.c
    Producer: MW MIPS C Compiler
    Language: C++
*/
class VideoDec videoDec; // size: 0xB8, address: 0x53F930
class VoBuf voBuf; // size: 0x14, address: 0x53FA50
signed int mpegTS(class sceMpeg *, class sceMpegCbDataTimeStamp *, void *); // size: 0x0, address: 0x1BEC60
signed int mpegRestartDMA(class sceMpeg *, class sceMpegCbData *, void *); // size: 0x0, address: 0x1BECB0
signed int mpegStopDMA(class sceMpeg *, class sceMpegCbData *, void *); // size: 0x0, address: 0x1BECE0
signed int mpegNodata(class sceMpeg *, class sceMpegCbData *, void *); // size: 0x0, address: 0x1BED10
signed int mpegError(class sceMpeg *, class sceMpegCbDataError *, void *); // size: 0x0, address: 0x1BED40
class sceMpeg {
    // total size: 0x48
public:
    signed int width; // offset 0x0, size 0x4
    signed int height; // offset 0x4, size 0x4
    signed int frameCount; // offset 0x8, size 0x4
    signed long pts; // offset 0x10, size 0x4
    signed long dts; // offset 0x18, size 0x4
    unsigned long flags; // offset 0x20, size 0x4
    signed long pts2nd; // offset 0x28, size 0x4
    signed long dts2nd; // offset 0x30, size 0x4
    unsigned long flags2nd; // offset 0x38, size 0x4
    void * sys; // offset 0x40, size 0x4
};
class VideoDec {
    // total size: 0xB8
public:
    class sceMpeg mpeg; // offset 0x0, size 0x48
    class ViBuf vibuf; // offset 0x48, size 0x60
    unsigned int state; // offset 0xA8, size 0x4
    signed int sema; // offset 0xAC, size 0x4
    signed int hid_endimage; // offset 0xB0, size 0x4
    signed int hid_vblank; // offset 0xB4, size 0x4
};
class sceMpegCbData {
    // total size: 0x20
public:
    union { // inferred
        enum sceMpegCbType type; // offset 0x0, size 0x4
        class sceMpegCbDataError error; // offset 0x0, size 0x8
        class sceMpegCbDataTimeStamp ts; // offset 0x0, size 0x18
        class sceMpegCbDataStr str; // offset 0x0, size 0x20
    };
};
class TimeStamp {
    // total size: 0x18
public:
    signed long pts; // offset 0x0, size 0x4
    signed long dts; // offset 0x8, size 0x4
    signed int pos; // offset 0x10, size 0x4
    signed int len; // offset 0x14, size 0x4
};
class VoData {
    // total size: 0x12C000
public:
    unsigned char v[1228800]; // offset 0x0, size 0x12C000
};
class sceMpegCbDataTimeStamp {
    // total size: 0x18
public:
    enum sceMpegCbType type; // offset 0x0, size 0x4
    signed long pts; // offset 0x8, size 0x4
    signed long dts; // offset 0x10, size 0x4
};
class VoTag {
    // total size: 0x39240
public:
    signed int status; // offset 0x0, size 0x4
    signed int dummy[15]; // offset 0x4, size 0x3C
    unsigned int v[2][29248]; // offset 0x40, size 0x39200
};
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
enum sceMpegCbType {
    sceMpegCbError = 0,
    sceMpegCbNodata = 1,
    sceMpegCbStopDMA = 2,
    sceMpegCbRestartDMA = 3,
    sceMpegCbBackground = 4,
    sceMpegCbTimeStamp = 5,
    sceMpegCbStr = 6,
};
class VoBuf {
    // total size: 0x14
public:
    class VoData * data; // offset 0x0, size 0x4
    class VoTag * tag; // offset 0x4, size 0x4
    signed int write; // offset 0x8, size 0x4
    signed int count; // offset 0xC, size 0x4
    signed int size; // offset 0x10, size 0x4
};
class sceMpegCbDataError {
    // total size: 0x8
public:
    enum sceMpegCbType type; // offset 0x0, size 0x4
    char * errMessage; // offset 0x4, size 0x4
};
class sceMpegCbDataStr {
    // total size: 0x20
public:
    enum sceMpegCbType type; // offset 0x0, size 0x4
    unsigned char * header; // offset 0x4, size 0x4
    unsigned char * data; // offset 0x8, size 0x4
    unsigned int len; // offset 0xC, size 0x4
    signed long pts; // offset 0x10, size 0x4
    signed long dts; // offset 0x18, size 0x4
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

/*
    Compile unit: C:\SB\Core\p2\ps2_mpeg\videodec.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BEC60 -> 0x001BECA4
*/
// Range: 0x1BEC60 -> 0x1BECA4
signed int mpegTS(class sceMpegCbDataTimeStamp * cbts /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1BEC60 -> 0x1BECA4
        class TimeStamp ts; // r29+0x20
    }
}

/*
    Compile unit: C:\SB\Core\p2\ps2_mpeg\videodec.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BECB0 -> 0x001BECD4
*/
// Range: 0x1BECB0 -> 0x1BECD4
signed int mpegRestartDMA() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1BECB0 -> 0x1BECD4
    }
}

/*
    Compile unit: C:\SB\Core\p2\ps2_mpeg\videodec.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BECE0 -> 0x001BED04
*/
// Range: 0x1BECE0 -> 0x1BED04
signed int mpegStopDMA() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1BECE0 -> 0x1BED04
    }
}

/*
    Compile unit: C:\SB\Core\p2\ps2_mpeg\videodec.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BED10 -> 0x001BED3C
*/
// Range: 0x1BED10 -> 0x1BED3C
signed int mpegNodata() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1BED10 -> 0x1BED3C
    }
}

/*
    Compile unit: C:\SB\Core\p2\ps2_mpeg\videodec.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BED40 -> 0x001BED68
*/
// Range: 0x1BED40 -> 0x1BED68
signed int mpegError(class sceMpegCbDataError * cberror /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1BED40 -> 0x1BED68
    }
}

/*
    Compile unit: C:\SB\Core\p2\ps2_mpeg\videodec.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BED70 -> 0x001BEF3C
*/
// Range: 0x1BED70 -> 0x1BEF3C
signed int decBs0(class VideoDec * vd /* r22 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1BED70 -> 0x1BEF3C
        class VoData * voData; // r2
        signed int ret; // r2
        signed int status; // r21
        signed int i; // r20
        signed int image_w; // r19
        signed int image_h; // r18
    }
}

/*
    Compile unit: C:\SB\Core\p2\ps2_mpeg\videodec.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BEF40 -> 0x001BEFA0
*/
// Range: 0x1BEF40 -> 0x1BEFA0
void videoDecMain(class VideoDec * vd /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1BEF40 -> 0x1BEFA0
    }
}

/*
    Compile unit: C:\SB\Core\p2\ps2_mpeg\videodec.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BEFA0 -> 0x001BEFF8
*/
// Range: 0x1BEFA0 -> 0x1BEFF8
signed int videoDecIsFlushed(class VideoDec * vd /* r17 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1BEFA0 -> 0x1BEFF8
    }
}

/*
    Compile unit: C:\SB\Core\p2\ps2_mpeg\videodec.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BF000 -> 0x001BF1AC
*/
// Range: 0x1BF000 -> 0x1BF1AC
signed int videoDecFlush(class VideoDec * vd /* r19 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1BF000 -> 0x1BF1AC
        unsigned char * pd0; // r29+0x6C
        unsigned char * pd1; // r29+0x68
        unsigned char * pd0Unc; // r18
        unsigned char * pd1Unc; // r17
        unsigned char seq_end_code[4]; // r29+0x64
        signed int d0; // r29+0x60
        signed int d1; // r29+0x5C
    }
}

/*
    Compile unit: C:\SB\Core\p2\ps2_mpeg\videodec.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BF1B0 -> 0x001BF1EC
*/
// Range: 0x1BF1B0 -> 0x1BF1EC
signed int videoDecPutTs(class VideoDec * vd /* r2 */, signed long pts_val /* r2 */, signed long dts_val /* r2 */, unsigned char * start /* r2 */, signed int len /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1BF1B0 -> 0x1BF1EC
        class TimeStamp ts; // r29+0x10
    }
}

/*
    Compile unit: C:\SB\Core\p2\ps2_mpeg\videodec.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BF1F0 -> 0x001BF1F8
*/
// Range: 0x1BF1F0 -> 0x1BF1F8
unsigned int videoDecGetState(class VideoDec * vd /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1BF1F0 -> 0x1BF1F8
    }
}

/*
    Compile unit: C:\SB\Core\p2\ps2_mpeg\videodec.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BF200 -> 0x001BF20C
*/
// Range: 0x1BF200 -> 0x1BF20C
void videoDecAbort(class VideoDec * vd /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1BF200 -> 0x1BF20C
    }
}

/*
    Compile unit: C:\SB\Core\p2\ps2_mpeg\videodec.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BF210 -> 0x001BF244
*/
// Range: 0x1BF210 -> 0x1BF244
signed int videoDecDelete(class VideoDec * vd /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1BF210 -> 0x1BF244
    }
}

/*
    Compile unit: C:\SB\Core\p2\ps2_mpeg\videodec.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BF250 -> 0x001BF258
*/
// Range: 0x1BF250 -> 0x1BF258
void videoDecEndPut(class VideoDec * vd /* r2 */, signed int size /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1BF250 -> 0x1BF258
    }
}

/*
    Compile unit: C:\SB\Core\p2\ps2_mpeg\videodec.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BF260 -> 0x001BF268
*/
// Range: 0x1BF260 -> 0x1BF268
void videoDecBeginPut(class VideoDec * vd /* r2 */, unsigned char * * ptr0 /* r2 */, signed int * len0 /* r2 */, unsigned char * * ptr1 /* r2 */, signed int * len1 /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1BF260 -> 0x1BF268
    }
}

/*
    Compile unit: C:\SB\Core\p2\ps2_mpeg\videodec.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BF270 -> 0x001BF290
*/
// Range: 0x1BF270 -> 0x1BF290
signed int videoDecSetStream(class VideoDec * vd /* r2 */, signed int strType /* r2 */, signed int ch /* r2 */, signed int (* cb)(class sceMpeg *, class sceMpegCbData *, void *) /* r2 */, void * data /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1BF270 -> 0x1BF290
    }
}

/*
    Compile unit: C:\SB\Core\p2\ps2_mpeg\videodec.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BF290 -> 0x001BF38C
*/
// Range: 0x1BF290 -> 0x1BF38C
signed int videoDecCreate(class VideoDec * vd /* r21 */, unsigned char * mpegWork /* r2 */, signed int mpegWorkSize /* r2 */, __int128 * data /* r20 */, __int128 * tag /* r19 */, signed int tagSize /* r18 */, class TimeStamp * pts /* r17 */, signed int n_pts /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1BF290 -> 0x1BF38C
    }
}

