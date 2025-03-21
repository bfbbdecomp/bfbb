/*
    Compile unit: C:\SB\Core\x\xCounter.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
char buffer[16]; // size: 0x10, address: 0x0
char buffer[16]; // size: 0x10, address: 0x0
signed int xCounterEventCB(class xBase *, class xBase *, unsigned int, float *, class xBase *); // size: 0x0, address: 0x29E5E0
class xLinkAsset {
    // total size: 0x20
public:
    unsigned short srcEvent; // offset 0x0, size 0x2
    unsigned short dstEvent; // offset 0x2, size 0x2
    unsigned int dstAssetID; // offset 0x4, size 0x4
    float param[4]; // offset 0x8, size 0x10
    unsigned int paramWidgetAssetID; // offset 0x18, size 0x4
    unsigned int chkAssetID; // offset 0x1C, size 0x4
};
class xBase {
    // total size: 0x10
public:
    unsigned int id; // offset 0x0, size 0x4
    unsigned char baseType; // offset 0x4, size 0x1
    unsigned char linkCount; // offset 0x5, size 0x1
    unsigned short baseFlags; // offset 0x6, size 0x2
    class xLinkAsset * link; // offset 0x8, size 0x4
    signed int (* eventFunc)(class xBase *, class xBase *, unsigned int, float *, class xBase *); // offset 0xC, size 0x4
};
class xSerial {
    // total size: 0x1C
public:
    unsigned int idtag; // offset 0x0, size 0x4
    signed int baseoff; // offset 0x4, size 0x4
    class st_SERIAL_CLIENTINFO * ctxtdata; // offset 0x8, size 0x4
    signed int warned; // offset 0xC, size 0x4
    signed int curele; // offset 0x10, size 0x4
    signed int bitidx; // offset 0x14, size 0x4
    signed int bittally; // offset 0x18, size 0x4
};
class _xCounter : public xBase {
    // total size: 0x18
public:
    class xCounterAsset * asset; // offset 0x10, size 0x4
    signed short count; // offset 0x14, size 0x2
    unsigned char state; // offset 0x16, size 0x1
    unsigned char counterFlags; // offset 0x17, size 0x1
};
class xCounterAsset : public xBaseAsset {
    // total size: 0xC
public:
    signed short count; // offset 0x8, size 0x2
};
class xBaseAsset {
    // total size: 0x8
public:
    unsigned int id; // offset 0x0, size 0x4
    unsigned char baseType; // offset 0x4, size 0x1
    unsigned char linkCount; // offset 0x5, size 0x1
    unsigned short baseFlags; // offset 0x6, size 0x2
};
class st_SERIAL_CLIENTINFO {
    // total size: 0x0
};

/*
    Compile unit: C:\SB\Core\x\xCounter.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0029E5E0 -> 0x0029E7A0
*/
// Range: 0x29E5E0 -> 0x29E7A0
signed int xCounterEventCB(class xBase * to /* r2 */, unsigned int toEvent /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x29E5E0 -> 0x29E7A0
        class _xCounter * t; // r2
        signed short newCount; // r4
    }
}

/*
    Compile unit: C:\SB\Core\x\xCounter.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0029E7A0 -> 0x0029E7E8
*/
// Range: 0x29E7A0 -> 0x29E7E8
void xCounterLoad(class _xCounter * ent /* r17 */, class xSerial * s /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x29E7A0 -> 0x29E7E8
    }
}

/*
    Compile unit: C:\SB\Core\x\xCounter.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0029E7F0 -> 0x0029E838
*/
// Range: 0x29E7F0 -> 0x29E838
void xCounterSave(class _xCounter * ent /* r17 */, class xSerial * s /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x29E7F0 -> 0x29E838
    }
}

/*
    Compile unit: C:\SB\Core\x\xCounter.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0029E840 -> 0x0029E8A0
*/
// Range: 0x29E840 -> 0x29E8A0
void xCounterReset(class xBase * b /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x29E840 -> 0x29E8A0
        class _xCounter * t; // r16
    }
}

/*
    Compile unit: C:\SB\Core\x\xCounter.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0029E8A0 -> 0x0029E914
*/
// Range: 0x29E8A0 -> 0x29E914
void xCounterInit(void * b /* r2 */, void * asset /* r17 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x29E8A0 -> 0x29E914
    }
}

/*
    Compile unit: C:\SB\Core\x\xCounter.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0029E920 -> 0x0029E928
*/
// Range: 0x29E920 -> 0x29E928
void xCounterInit() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x29E920 -> 0x29E928
    }
}

