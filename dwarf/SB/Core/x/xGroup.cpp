/*
    Compile unit: C:\SB\Core\x\xGroup.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
unsigned int gActiveHeap; // size: 0x4, address: 0x50FA44
signed int xGroupEventCB(class xBase *, class xBase *, unsigned int, float *, class xBase *); // size: 0x0, address: 0x29FC30
class xBaseAsset {
    // total size: 0x8
public:
    unsigned int id; // offset 0x0, size 0x4
    unsigned char baseType; // offset 0x4, size 0x1
    unsigned char linkCount; // offset 0x5, size 0x1
    unsigned short baseFlags; // offset 0x6, size 0x2
};
class xGroup : public xBase {
    // total size: 0x20
public:
    class xGroupAsset * asset; // offset 0x10, size 0x4
    class xBase * * item; // offset 0x14, size 0x4
    unsigned int last_index; // offset 0x18, size 0x4
    signed int flg_group; // offset 0x1C, size 0x4
};
class xGroupAsset : public xBaseAsset {
    // total size: 0xC
public:
    unsigned short itemCount; // offset 0x8, size 0x2
    unsigned short groupFlags; // offset 0xA, size 0x2
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
    Compile unit: C:\SB\Core\x\xGroup.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0029FAF0 -> 0x0029FB30
*/
// Range: 0x29FAF0 -> 0x29FB30
unsigned int get_any(class xGroup * this /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x29FAF0 -> 0x29FB30
        unsigned int id; // r2
    }
}

/*
    Compile unit: C:\SB\Core\x\xGroup.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0029FB30 -> 0x0029FB44
*/
// Range: 0x29FB30 -> 0x29FB44
unsigned int xGroupGetItem(class xGroup * g /* r2 */, unsigned int index /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x29FB30 -> 0x29FB44
    }
}

/*
    Compile unit: C:\SB\Core\x\xGroup.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0029FB50 -> 0x0029FC18
*/
// Range: 0x29FB50 -> 0x29FC18
class xBase * xGroupGetItemPtr(class xGroup * g /* r20 */, unsigned int index /* r19 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x29FB50 -> 0x29FC18
    }
}

/*
    Compile unit: C:\SB\Core\x\xGroup.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0029FC20 -> 0x0029FC2C
*/
// Range: 0x29FC20 -> 0x29FC2C
unsigned int xGroupGetCount(class xGroup * g /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x29FC20 -> 0x29FC2C
    }
}

/*
    Compile unit: C:\SB\Core\x\xGroup.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0029FC30 -> 0x0029FEF8
*/
// Range: 0x29FC30 -> 0x29FEF8
signed int xGroupEventCB(class xBase * to /* r2 */, unsigned int toEvent /* r20 */, float * toParam /* r19 */, class xBase * toParamWidget /* r18 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x29FC30 -> 0x29FEF8
        class xGroup * g; // r17
        signed int rand; // r16
        signed int i; // r22
        class xBase * b; // r2
        signed int i; // r22
        class xBase * b; // r2
        signed int i; // r22
        class xBase * b; // r2
    }
}

/*
    Compile unit: C:\SB\Core\x\xGroup.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0029FF00 -> 0x0029FF08
*/
// Range: 0x29FF00 -> 0x29FF08
void xGroupLoad(class xGroup * ent /* r2 */, class xSerial * s /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x29FF00 -> 0x29FF08
    }
}

/*
    Compile unit: C:\SB\Core\x\xGroup.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0029FF10 -> 0x0029FF18
*/
// Range: 0x29FF10 -> 0x29FF18
void xGroupSave(class xGroup * ent /* r2 */, class xSerial * s /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x29FF10 -> 0x29FF18
    }
}

/*
    Compile unit: C:\SB\Core\x\xGroup.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0029FF20 -> 0x0029FFBC
*/
// Range: 0x29FF20 -> 0x29FFBC
void xGroupSetup(class xGroup * g /* r19 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x29FF20 -> 0x29FFBC
        unsigned int count; // r18
        unsigned int i; // r17
    }
}

/*
    Compile unit: C:\SB\Core\x\xGroup.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0029FFC0 -> 0x002A006C
*/
// Range: 0x29FFC0 -> 0x2A006C
void xGroupInit(void * b /* r2 */, void * asset /* r17 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x29FFC0 -> 0x2A006C
    }
}

