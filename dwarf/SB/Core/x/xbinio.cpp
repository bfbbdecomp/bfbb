/*
    Compile unit: C:\SB\Core\x\xbinio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
static unsigned int g_loadlock; // size: 0x4, address: 0x50E818
static class st_FILELOADINFO g_loadinst[8]; // size: 0x340, address: 0x53FCA0
static class tag_xFile g_xfload[8]; // size: 0x5A0, address: 0x53FFE0
static class st_BINIO_XTRADATA g_xtraload[8]; // size: 0x1E0, address: 0x540580
static class st_BINIO_XTRADATA * g_async_context; // size: 0x4, address: 0x50F910
void BFD_cb_GCP2_readasync(class tag_xFile *); // size: 0x0, address: 0x1BF990
void DiscardBuffer(class st_FILELOADINFO *); // size: 0x0, address: 0x1C0040
void SetBuffer(class st_FILELOADINFO *, char *, signed int); // size: 0x0, address: 0x1C0070
signed int ReadSeek(class st_FILELOADINFO *, signed int); // size: 0x0, address: 0x1C00A0
signed int SkipBytes(class st_FILELOADINFO *, signed int); // size: 0x0, address: 0x1C0150
enum en_BIO_ASYNC_ERRCODES AsyncReadStatus(class st_FILELOADINFO *); // size: 0x0, address: 0x1BFD70
signed int AsyncMRead(class st_FILELOADINFO *, signed int, char *, signed int, signed int); // size: 0x0, address: 0x1BFD90
signed int AsyncIRead(class st_FILELOADINFO *, signed int, char *, signed int, signed int); // size: 0x0, address: 0x1BFD80
signed int ReadIDoubles(class st_FILELOADINFO *, double *, signed int); // size: 0x0, address: 0x1BFDA0
signed int ReadIFloats(class st_FILELOADINFO *, float *, signed int); // size: 0x0, address: 0x1BFDB0
signed int ReadILongs(class st_FILELOADINFO *, signed int *, signed int); // size: 0x0, address: 0x1BFDC0
signed int ReadIShorts(class st_FILELOADINFO *, signed short *, signed int); // size: 0x0, address: 0x1BFDD0
signed int ReadMDoubles(class st_FILELOADINFO *, double *, signed int); // size: 0x0, address: 0x1BFDE0
signed int ReadMFloats(class st_FILELOADINFO *, float *, signed int); // size: 0x0, address: 0x1BFE20
signed int ReadMLongs(class st_FILELOADINFO *, signed int *, signed int); // size: 0x0, address: 0x1BFE90
signed int ReadMShorts(class st_FILELOADINFO *, signed short *, signed int); // size: 0x0, address: 0x1BFF00
signed int ReadBytes(class st_FILELOADINFO *, char *, signed int); // size: 0x0, address: 0x1BFF60
void LoadDestroy(class st_FILELOADINFO *); // size: 0x0, address: 0x1C0240
class tag_xFile {
    // total size: 0xB4
public:
    char relname[32]; // offset 0x0, size 0x20
    class tag_iFile ps; // offset 0x20, size 0x90
    void * user_data; // offset 0xB0, size 0x4
};
class st_FILELOADINFO {
    // total size: 0x68
public:
    void (* destroy)(class st_FILELOADINFO *); // offset 0x0, size 0x4
    signed int (* readBytes)(class st_FILELOADINFO *, char *, signed int); // offset 0x4, size 0x4
    signed int (* readMShorts)(class st_FILELOADINFO *, signed short *, signed int); // offset 0x8, size 0x4
    signed int (* readMLongs)(class st_FILELOADINFO *, signed int *, signed int); // offset 0xC, size 0x4
    signed int (* readMFloats)(class st_FILELOADINFO *, float *, signed int); // offset 0x10, size 0x4
    signed int (* readMDoubles)(class st_FILELOADINFO *, double *, signed int); // offset 0x14, size 0x4
    signed int (* readIShorts)(class st_FILELOADINFO *, signed short *, signed int); // offset 0x18, size 0x4
    signed int (* readILongs)(class st_FILELOADINFO *, signed int *, signed int); // offset 0x1C, size 0x4
    signed int (* readIFloats)(class st_FILELOADINFO *, float *, signed int); // offset 0x20, size 0x4
    signed int (* readIDoubles)(class st_FILELOADINFO *, double *, signed int); // offset 0x24, size 0x4
    signed int (* skipBytes)(class st_FILELOADINFO *, signed int); // offset 0x28, size 0x4
    signed int (* seekSpot)(class st_FILELOADINFO *, signed int); // offset 0x2C, size 0x4
    void (* setDoubleBuf)(class st_FILELOADINFO *, char *, signed int); // offset 0x30, size 0x4
    void (* discardDblBuf)(class st_FILELOADINFO *); // offset 0x34, size 0x4
    signed int (* asyncIRead)(class st_FILELOADINFO *, signed int, char *, signed int, signed int); // offset 0x38, size 0x4
    signed int (* asyncMRead)(class st_FILELOADINFO *, signed int, char *, signed int, signed int); // offset 0x3C, size 0x4
    enum en_BIO_ASYNC_ERRCODES (* asyncReadStatus)(class st_FILELOADINFO *); // offset 0x40, size 0x4
    unsigned int lockid; // offset 0x44, size 0x4
    enum en_FIOERRCODES error; // offset 0x48, size 0x4
    unsigned int basesector; // offset 0x4C, size 0x4
    void * privdata; // offset 0x50, size 0x4
    void * xtradata; // offset 0x54, size 0x4
    void * asyndata; // offset 0x58, size 0x4
    signed int filesize; // offset 0x5C, size 0x4
    signed int remain; // offset 0x60, size 0x4
    signed int position; // offset 0x64, size 0x4
};
class st_BINIO_XTRADATA {
    // total size: 0x3C
public:
    char * dbl_buf; // offset 0x0, size 0x4
    signed int dblbuf_size; // offset 0x4, size 0x4
    signed int dbl_beg; // offset 0x8, size 0x4
    signed int dbl_end; // offset 0xC, size 0x4
    signed int dbl_amt; // offset 0x10, size 0x4
    unsigned int fpos; // offset 0x14, size 0x4
    char * asyn_data; // offset 0x18, size 0x4
    signed int asyn_amt; // offset 0x1C, size 0x4
    signed int asyn_elesize; // offset 0x20, size 0x4
    signed int asyn_ismot; // offset 0x24, size 0x4
    enum en_BIO_ASYNC_ERRCODES asyn_status; // offset 0x28, size 0x4
    unsigned int pad[3]; // offset 0x2C, size 0xC
    signed int gcaskey; // offset 0x38, size 0x4
};
enum en_FIOERRCODES {
    FIOERR_NONE = 0,
    FIOERR_READFAIL = 1,
    FIOERR_WRITEFAIL = 2,
    FIOERR_SEEKFAIL = 3,
    FIOERR_USERABORT = 4,
};
enum en_BIO_ASYNC_ERRCODES {
    BINIO_ASYNC_FAIL = -1,
    BINIO_ASYNC_NOOP = 0,
    BINIO_ASYNC_INPROG = 1,
    BINIO_ASYNC_DONE = 2,
    BINIO_ASYNC_FORCEENUMSIZEINT = 2147483647,
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
enum XFILE_READSECTOR_STATUS {
    XFILE_RDSTAT_NOOP = 0,
    XFILE_RDSTAT_INPROG = 1,
    XFILE_RDSTAT_DONE = 2,
    XFILE_RDSTAT_FAIL = 3,
    XFILE_RDSTAT_QUEUED = 4,
    XFILE_RDSTAT_EXPIRED = 5,
};

/*
    Compile unit: C:\SB\Core\x\xbinio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BF7C0 -> 0x001BF890
*/
// Range: 0x1BF7C0 -> 0x1BF890
static enum en_BIO_ASYNC_ERRCODES BFD_AsyncReadStatus(class st_FILELOADINFO * fli /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1BF7C0 -> 0x1BF890
        enum en_BIO_ASYNC_ERRCODES status; // r2
        class st_BINIO_XTRADATA * xtra; // r16
        enum XFILE_READSECTOR_STATUS xrdstat; // r2
        signed int amtsofar; // r29+0x2C
    }
}

/*
    Compile unit: C:\SB\Core\x\xbinio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BF890 -> 0x001BF98C
*/
// Range: 0x1BF890 -> 0x1BF98C
static signed int BFD_AsyncRead(class st_FILELOADINFO * fli /* r21 */, signed int pos /* r2 */, void * data /* r20 */, signed int size /* r19 */, signed int n /* r18 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1BF890 -> 0x1BF98C
        class tag_xFile * file; // r17
        class st_BINIO_XTRADATA * xtra; // r16
        signed int result; // r2
        signed int rc; // r2
    }
}

/*
    Compile unit: C:\SB\Core\x\xbinio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BF990 -> 0x001BF998
*/
// Range: 0x1BF990 -> 0x1BF998
static void BFD_cb_GCP2_readasync() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1BF990 -> 0x1BF998
    }
}

/*
    Compile unit: C:\SB\Core\x\xbinio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BF9A0 -> 0x001BFBF0
*/
// Range: 0x1BF9A0 -> 0x1BFBF0
static signed int BFD_read(void * data /* r2 */, signed int elesize /* r30 */, signed int elecnt /* r2 */, class tag_xFile * bffp /* r21 */, void * xtradata /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1BF9A0 -> 0x1BFBF0
        class st_BINIO_XTRADATA * xtra; // r20
        char * dest; // r29+0xAC
        signed int readbeg; // r3
        signed int refill; // r22
        signed int remain; // r19
        signed int actual; // r18
        unsigned int holdpos; // r16
        unsigned int safety; // r17
        unsigned int numBytes; // r23
    }
}

/*
    Compile unit: C:\SB\Core\x\xbinio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BFBF0 -> 0x001BFCF4
*/
// Range: 0x1BFBF0 -> 0x1BFCF4
static class tag_xFile * BFD_open(char * filename /* r18 */, char * mode /* r20 */, unsigned int lockid /* r19 */, void * xtradata /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1BFBF0 -> 0x1BFCF4
        class tag_xFile * bffp; // r19
        unsigned int orc; // r2
        class st_BINIO_XTRADATA * xtra; // r17
        signed int xfflg; // r16
    }
}

/*
    Compile unit: C:\SB\Core\x\xbinio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BFD00 -> 0x001BFD68
*/
// Range: 0x1BFD00 -> 0x1BFD68
static void Swap8(char * d /* r2 */, signed int n /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1BFD00 -> 0x1BFD68
        char t; // r2
    }
}

/*
    Compile unit: C:\SB\Core\x\xbinio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BFD70 -> 0x001BFD78
*/
// Range: 0x1BFD70 -> 0x1BFD78
static enum en_BIO_ASYNC_ERRCODES AsyncReadStatus(class st_FILELOADINFO * fli /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1BFD70 -> 0x1BFD78
    }
}

/*
    Compile unit: C:\SB\Core\x\xbinio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BFD80 -> 0x001BFD88
*/
// Range: 0x1BFD80 -> 0x1BFD88
static signed int AsyncIRead(class st_FILELOADINFO * fli /* r2 */, signed int offset /* r2 */, char * data /* r2 */, signed int size /* r2 */, signed int n /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1BFD80 -> 0x1BFD88
    }
}

/*
    Compile unit: C:\SB\Core\x\xbinio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BFD90 -> 0x001BFD98
*/
// Range: 0x1BFD90 -> 0x1BFD98
static signed int AsyncMRead(class st_FILELOADINFO * fli /* r2 */, signed int offset /* r2 */, char * data /* r2 */, signed int size /* r2 */, signed int n /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1BFD90 -> 0x1BFD98
    }
}

/*
    Compile unit: C:\SB\Core\x\xbinio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BFDA0 -> 0x001BFDAC
*/
// Range: 0x1BFDA0 -> 0x1BFDAC
static signed int ReadIDoubles(class st_FILELOADINFO * fli /* r2 */, double * data /* r2 */, signed int count /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1BFDA0 -> 0x1BFDAC
        signed int act; // r2
    }
}

/*
    Compile unit: C:\SB\Core\x\xbinio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BFDB0 -> 0x001BFDBC
*/
// Range: 0x1BFDB0 -> 0x1BFDBC
static signed int ReadIFloats(class st_FILELOADINFO * fli /* r2 */, float * data /* r2 */, signed int count /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1BFDB0 -> 0x1BFDBC
        signed int act; // r2
    }
}

/*
    Compile unit: C:\SB\Core\x\xbinio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BFDC0 -> 0x001BFDCC
*/
// Range: 0x1BFDC0 -> 0x1BFDCC
static signed int ReadILongs(class st_FILELOADINFO * fli /* r2 */, signed int * data /* r2 */, signed int count /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1BFDC0 -> 0x1BFDCC
        signed int act; // r2
    }
}

/*
    Compile unit: C:\SB\Core\x\xbinio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BFDD0 -> 0x001BFDDC
*/
// Range: 0x1BFDD0 -> 0x1BFDDC
static signed int ReadIShorts(class st_FILELOADINFO * fli /* r2 */, signed short * data /* r2 */, signed int count /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1BFDD0 -> 0x1BFDDC
        signed int act; // r2
    }
}

/*
    Compile unit: C:\SB\Core\x\xbinio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BFDE0 -> 0x001BFE18
*/
// Range: 0x1BFDE0 -> 0x1BFE18
static signed int ReadMDoubles(class st_FILELOADINFO * fli /* r2 */, double * data /* r16 */, signed int count /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1BFDE0 -> 0x1BFE18
        signed int act; // r2
    }
}

/*
    Compile unit: C:\SB\Core\x\xbinio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BFE20 -> 0x001BFE90
*/
// Range: 0x1BFE20 -> 0x1BFE90
static signed int ReadMFloats(class st_FILELOADINFO * fli /* r2 */, float * data /* r16 */, signed int count /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1BFE20 -> 0x1BFE90
        signed int act; // r2
    }
}

/*
    Compile unit: C:\SB\Core\x\xbinio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BFE90 -> 0x001BFF00
*/
// Range: 0x1BFE90 -> 0x1BFF00
static signed int ReadMLongs(class st_FILELOADINFO * fli /* r2 */, signed int * data /* r16 */, signed int count /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1BFE90 -> 0x1BFF00
        signed int act; // r2
    }
}

/*
    Compile unit: C:\SB\Core\x\xbinio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BFF00 -> 0x001BFF60
*/
// Range: 0x1BFF00 -> 0x1BFF60
static signed int ReadMShorts(class st_FILELOADINFO * fli /* r2 */, signed short * data /* r16 */, signed int count /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1BFF00 -> 0x1BFF60
        signed int act; // r2
    }
}

/*
    Compile unit: C:\SB\Core\x\xbinio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BFF60 -> 0x001BFF6C
*/
// Range: 0x1BFF60 -> 0x1BFF6C
static signed int ReadBytes(class st_FILELOADINFO * fli /* r2 */, char * data /* r2 */, signed int count /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1BFF60 -> 0x1BFF6C
        signed int act; // r2
    }
}

/*
    Compile unit: C:\SB\Core\x\xbinio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BFF70 -> 0x001C0038
*/
// Range: 0x1BFF70 -> 0x1C0038
static signed int ReadRaw(class st_FILELOADINFO * fli /* r18 */, void * data /* r2 */, signed int size /* r17 */, signed int count /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1BFF70 -> 0x1C0038
        class tag_xFile * file; // r6
        signed int amt; // r16
        signed int n; // r2
    }
}

/*
    Compile unit: C:\SB\Core\x\xbinio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001C0040 -> 0x001C0068
*/
// Range: 0x1C0040 -> 0x1C0068
static void DiscardBuffer(class st_FILELOADINFO * fli /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1C0040 -> 0x1C0068
    }
}

/*
    Compile unit: C:\SB\Core\x\xbinio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001C0070 -> 0x001C0098
*/
// Range: 0x1C0070 -> 0x1C0098
static void SetBuffer(class st_FILELOADINFO * fli /* r2 */, char * dblbuffer /* r2 */, signed int bufsize /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1C0070 -> 0x1C0098
        class st_BINIO_XTRADATA * xtra; // r3
    }
}

/*
    Compile unit: C:\SB\Core\x\xbinio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001C00A0 -> 0x001C0150
*/
// Range: 0x1C00A0 -> 0x1C0150
static signed int ReadSeek(class st_FILELOADINFO * fli /* r16 */, signed int pos /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1C00A0 -> 0x1C0150
        class tag_xFile * file; // r2
    }
}

/*
    Compile unit: C:\SB\Core\x\xbinio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001C0150 -> 0x001C0234
*/
// Range: 0x1C0150 -> 0x1C0234
static signed int SkipBytes(class st_FILELOADINFO * fli /* r17 */, signed int fwd /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1C0150 -> 0x1C0234
        class tag_xFile * file; // r2
    }
}

/*
    Compile unit: C:\SB\Core\x\xbinio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001C0240 -> 0x001C02C0
*/
// Range: 0x1C0240 -> 0x1C02C0
static void LoadDestroy(class st_FILELOADINFO * fli /* r17 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1C0240 -> 0x1C02C0
        class tag_xFile * fp; // r2
        unsigned int lockid; // r16
    }
}

/*
    Compile unit: C:\SB\Core\x\xbinio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001C02C0 -> 0x001C0524
*/
// Range: 0x1C02C0 -> 0x1C0524
class st_FILELOADINFO * xBinioLoadCreate(char * filename /* r18 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1C02C0 -> 0x1C0524
        class st_FILELOADINFO * fli; // r17
        class tag_xFile * tmp_fp; // r2
        signed int i; // r6
        signed int uselock; // r16
    }
}

