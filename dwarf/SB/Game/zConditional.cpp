/*
    Compile unit: C:\SB\Game\zConditional.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
class zVarEntry zVarEntryTable[]; // size: 0x0, address: 0x416B70
signed int zConditionalEventCB(class xBase *, class xBase *, unsigned int, float *, class xBase *); // size: 0x0, address: 0x12F910
class xBaseAsset {
    // total size: 0x8
public:
    unsigned int id; // offset 0x0, size 0x4
    unsigned char baseType; // offset 0x4, size 0x1
    unsigned char linkCount; // offset 0x5, size 0x1
    unsigned short baseFlags; // offset 0x6, size 0x2
};
class _zConditional : public xBase {
    // total size: 0x14
public:
    class zCondAsset * asset; // offset 0x10, size 0x4
};
class zVarEntry {
    // total size: 0x10
public:
    unsigned int entry; // offset 0x0, size 0x4
    unsigned int varNameID; // offset 0x4, size 0x4
    char * varName; // offset 0x8, size 0x4
    unsigned int (* varCB)(void *); // offset 0xC, size 0x4
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
class zCondAsset : public xBaseAsset {
    // total size: 0x18
public:
    unsigned int constNum; // offset 0x8, size 0x4
    unsigned int expr1; // offset 0xC, size 0x4
    unsigned int op; // offset 0x10, size 0x4
    unsigned int value_asset; // offset 0x14, size 0x4
};

/*
    Compile unit: C:\SB\Game\zConditional.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0012F910 -> 0x0012F9B4
*/
// Range: 0x12F910 -> 0x12F9B4
signed int zConditionalEventCB(class xBase * to /* r2 */, unsigned int toEvent /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x12F910 -> 0x12F9B4
        class _zConditional * t; // r16
    }
}

/*
    Compile unit: C:\SB\Game\zConditional.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0012F9C0 -> 0x0012FB14
*/
// Range: 0x12F9C0 -> 0x12FB14
unsigned int zConditional_Evaluate(class _zConditional * c /* r19 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x12F9C0 -> 0x12FB14
        unsigned int temp; // r2
        class zVarEntry * v; // r18
        void * context; // r2
        signed int i; // r17
        unsigned int id; // r2
    }
}

/*
    Compile unit: C:\SB\Game\zConditional.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0012FB20 -> 0x0012FB28
*/
// Range: 0x12FB20 -> 0x12FB28
void zConditionalLoad(class _zConditional * ent /* r2 */, class xSerial * s /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x12FB20 -> 0x12FB28
    }
}

/*
    Compile unit: C:\SB\Game\zConditional.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0012FB30 -> 0x0012FB38
*/
// Range: 0x12FB30 -> 0x12FB38
void zConditionalSave(class _zConditional * ent /* r2 */, class xSerial * s /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x12FB30 -> 0x12FB38
    }
}

/*
    Compile unit: C:\SB\Game\zConditional.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0012FB40 -> 0x0012FBB0
*/
// Range: 0x12FB40 -> 0x12FBB0
void zConditionalInit(void * b /* r2 */, void * asset /* r17 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x12FB40 -> 0x12FBB0
    }
}

