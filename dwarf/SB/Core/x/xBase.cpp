/*
    Compile unit: C:\SB\Core\x\xBase.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
class xBaseAsset {
    // total size: 0x8
public:
    unsigned int id; // offset 0x0, size 0x4
    unsigned char baseType; // offset 0x4, size 0x1
    unsigned char linkCount; // offset 0x5, size 0x1
    unsigned short baseFlags; // offset 0x6, size 0x2
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
class st_SERIAL_CLIENTINFO {
    // total size: 0x0
};
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

/*
    Compile unit: C:\SB\Core\x\xBase.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BF690 -> 0x001BF6BC
*/
// Range: 0x1BF690 -> 0x1BF6BC
void xBaseReset(class xBase * xb /* r2 */, class xBaseAsset * asset /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1BF690 -> 0x1BF6BC
    }
}

/*
    Compile unit: C:\SB\Core\x\xBase.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BF6C0 -> 0x001BF720
*/
// Range: 0x1BF6C0 -> 0x1BF720
void xBaseLoad(class xBase * ent /* r16 */, class xSerial * s /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1BF6C0 -> 0x1BF720
        signed int b; // r29+0x2C
    }
}

/*
    Compile unit: C:\SB\Core\x\xBase.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BF720 -> 0x001BF76C
*/
// Range: 0x1BF720 -> 0x1BF76C
void xBaseSave(class xBase * ent /* r2 */, class xSerial * s /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1BF720 -> 0x1BF76C
    }
}

/*
    Compile unit: C:\SB\Core\x\xBase.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BF770 -> 0x001BF778
*/
// Range: 0x1BF770 -> 0x1BF778
void xBaseSetup() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1BF770 -> 0x1BF778
    }
}

/*
    Compile unit: C:\SB\Core\x\xBase.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BF780 -> 0x001BF7B4
*/
// Range: 0x1BF780 -> 0x1BF7B4
void xBaseInit(class xBase * xb /* r2 */, class xBaseAsset * asset /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1BF780 -> 0x1BF7B4
    }
}

