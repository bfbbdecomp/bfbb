/*
    Compile unit: C:\SB\Core\x\xutil.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
static signed int g_xutilinit; // size: 0x4, address: 0x50FB98
static signed int g_crc_needinit; // size: 0x4, address: 0x50E8C0
static unsigned int g_crc32_table[256]; // size: 0x400, address: 0x5BAA80
static unsigned short ascii_table[3][2]; // size: 0xC, address: 0x418DA0
static unsigned short ascii_k_table[33]; // size: 0x42, address: 0x418DB0
static unsigned short ascii_special_table[33]; // size: 0x42, address: 0x0
char _ctype_[]; // size: 0x0, address: 0x4EBA38
class DoubleChar {
    // total size: 0x2
public:
    unsigned char byte1; // offset 0x0, size 0x1
    unsigned char byte2; // offset 0x1, size 0x1
};
class SJIS_STRUCT {
    // total size: 0x2
public:
    union { // inferred
        unsigned short sjisChar; // offset 0x0, size 0x2
        class DoubleChar doubleChar; // offset 0x0, size 0x2
    };
};

/*
    Compile unit: C:\SB\Core\x\xutil.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020FC00 -> 0x0020FD18
*/
// Range: 0x20FC00 -> 0x20FD18
void xUtil_wtadjust(float * wts /* r2 */, signed int cnt /* r2 */, float arbref /* r29 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x20FC00 -> 0x20FD18
        signed int i; // r7
        float sum; // r2
        float fac; // r1
    }
}

/*
    Compile unit: C:\SB\Core\x\xutil.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020FD20 -> 0x0020FD98
*/
// Range: 0x20FD20 -> 0x20FD98
signed int xUtil_yesno(float wt_yes /* r20 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x20FD20 -> 0x20FD98
    }
}

/*
    Compile unit: C:\SB\Core\x\xutil.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020FDA0 -> 0x0020FE00
*/
// Range: 0x20FDA0 -> 0x20FE00
unsigned char itoBCD(unsigned short dec /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x20FDA0 -> 0x20FE00
        signed int ones; // r5
    }
}

/*
    Compile unit: C:\SB\Core\x\xutil.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020FE00 -> 0x0020FE60
*/
// Range: 0x20FE00 -> 0x20FE60
unsigned char itoBCD(unsigned char dec /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x20FE00 -> 0x20FE60
        signed int ones; // r5
    }
}

/*
    Compile unit: C:\SB\Core\x\xutil.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020FE60 -> 0x0020FE94
*/
// Range: 0x20FE60 -> 0x20FE94
unsigned char BCDtoi(unsigned char hex /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x20FE60 -> 0x20FE94
        char c[16]; // r29+0x10
    }
}

/*
    Compile unit: C:\SB\Core\x\xutil.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020FEA0 -> 0x002100C8
*/
// Range: 0x20FEA0 -> 0x2100C8
void strtosjis(unsigned char * string /* r20 */, unsigned char * dest /* r19 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x20FEA0 -> 0x2100C8
        signed int i; // r5
        signed int sjis_code; // r4
        signed int ascii_code; // r18
        unsigned char stmp; // r17
        unsigned char stmp2; // r16
        unsigned char * dest2; // r4
    }
}

/*
    Compile unit: C:\SB\Core\x\xutil.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002100D0 -> 0x002102B4
*/
// Range: 0x2100D0 -> 0x2102B4
unsigned int xUtil_crc_update(unsigned int crc_accum /* r18 */, char * data /* r17 */, signed int datasize /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2100D0 -> 0x2102B4
        signed int i; // r13
        signed int j; // r4
    }
}

/*
    Compile unit: C:\SB\Core\x\xutil.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002102C0 -> 0x00210348
*/
// Range: 0x2102C0 -> 0x210348
unsigned int xUtil_crc_init() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2102C0 -> 0x210348
        signed int i; // r8
        signed int j; // r7
        unsigned int crc_accum; // r6
    }
}

/*
    Compile unit: C:\SB\Core\x\xutil.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00210350 -> 0x00210660
*/
// Range: 0x210350 -> 0x210660
char * xUtil_idtag2string(unsigned int srctag /* r2 */, signed int bufidx /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x210350 -> 0x210660
        unsigned int tag; // r29+0xC
        char * strptr; // r2
        char * uc; // r3
        signed int l; // r29+0x8
        char t; // r2
        char buf[6][10]; // @ 0x005BAE80
    }
}

/*
    Compile unit: C:\SB\Core\x\xutil.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00210660 -> 0x00210674
*/
// Range: 0x210660 -> 0x210674
signed int xUtilShutdown() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x210660 -> 0x210674
    }
}

/*
    Compile unit: C:\SB\Core\x\xutil.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00210680 -> 0x002106B0
*/
// Range: 0x210680 -> 0x2106B0
signed int xUtilStartup() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x210680 -> 0x2106B0
    }
}

