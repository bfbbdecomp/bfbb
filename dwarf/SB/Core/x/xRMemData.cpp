/*
    Compile unit: C:\SB\Core\x\xRMemData.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
static unsigned int g_total_alloc; // size: 0x4, address: 0x0
unsigned int gActiveHeap; // size: 0x4, address: 0x50FA44
class RyzMemGrow {
    // total size: 0x1C
public:
    signed int flg_grow; // offset 0x0, size 0x4
    signed int amt; // offset 0x4, size 0x4
    char * ptr; // offset 0x8, size 0x4
    class xBase * user; // offset 0xC, size 0x4
    signed int amt_last; // offset 0x10, size 0x4
    char * ptr_last; // offset 0x14, size 0x4
    class xBase * user_last; // offset 0x18, size 0x4
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
    Compile unit: C:\SB\Core\x\xRMemData.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002F2E30 -> 0x002F2E5C
*/
// Range: 0x2F2E30 -> 0x2F2E5C
void Done(class RyzMemGrow * this /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2F2E30 -> 0x2F2E5C
    }
}

/*
    Compile unit: C:\SB\Core\x\xRMemData.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002F2E60 -> 0x002F2E88
*/
// Range: 0x2F2E60 -> 0x2F2E88
class RyzMemGrow * Resume(class RyzMemGrow * this /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2F2E60 -> 0x2F2E88
    }
}

/*
    Compile unit: C:\SB\Core\x\xRMemData.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002F2E90 -> 0x002F2F04
*/
// Range: 0x2F2E90 -> 0x2F2F04
class RyzMemGrow * Init(class RyzMemGrow * this /* r17 */, class xBase * growuser /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2F2E90 -> 0x2F2F04
    }
}

/*
    Compile unit: C:\SB\Core\x\xRMemData.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002F2F10 -> 0x002F2F18
*/
// Range: 0x2F2F10 -> 0x2F2F18
void __dl() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2F2F10 -> 0x2F2F18
    }
}

/*
    Compile unit: C:\SB\Core\x\xRMemData.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002F2F20 -> 0x002F2FA4
*/
// Range: 0x2F2F20 -> 0x2F2FA4
void * __nw(unsigned int amt /* r2 */, class RyzMemGrow * growCtxt /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2F2F20 -> 0x2F2FA4
        void * mem; // r16
        signed int dogrow; // r3
    }
}

