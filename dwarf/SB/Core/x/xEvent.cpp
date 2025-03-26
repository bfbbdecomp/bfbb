/*
    Compile unit: C:\SB\Core\x\xEvent.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
char buffer[16]; // size: 0x10, address: 0x0
char buffer[16]; // size: 0x10, address: 0x0
char zEventLogBuf[20][256]; // size: 0x1400, address: 0x5C47B0
signed int zEventLogBufInit; // size: 0x4, address: 0x0
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
    Compile unit: C:\SB\Core\x\xEvent.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002832C0 -> 0x0028345C
*/
// Range: 0x2832C0 -> 0x28345C
void zEntEvent(class xBase * from /* r20 */, class xBase * to /* r19 */, unsigned int toEvent /* r18 */, float * toParam /* r2 */, class xBase * toParamWidget /* r2 */, signed int forceEvent /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2832C0 -> 0x28345C
        class xLinkAsset * idx; // r17
        signed int i; // r16
        class xBase * sendTo; // r21
        class xBase * b; // r2
    }
}

/*
    Compile unit: C:\SB\Core\x\xEvent.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00283460 -> 0x00283480
*/
// Range: 0x283460 -> 0x283480
void zEntEvent(class xBase * from /* r2 */, class xBase * to /* r5 */, unsigned int toEvent /* r2 */, float * toParam /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x283460 -> 0x283480
    }
}

/*
    Compile unit: C:\SB\Core\x\xEvent.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00283480 -> 0x002834A0
*/
// Range: 0x283480 -> 0x2834A0
void zEntEvent(class xBase * from /* r2 */, class xBase * to /* r2 */, unsigned int toEvent /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x283480 -> 0x2834A0
    }
}

/*
    Compile unit: C:\SB\Core\x\xEvent.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002834A0 -> 0x002834C0
*/
// Range: 0x2834A0 -> 0x2834C0
void zEntEvent(class xBase * to /* r4 */, unsigned int toEvent /* r5 */, float * toParam /* r2 */, class xBase * toParamWidget /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2834A0 -> 0x2834C0
    }
}

/*
    Compile unit: C:\SB\Core\x\xEvent.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002834C0 -> 0x002834E0
*/
// Range: 0x2834C0 -> 0x2834E0
void zEntEvent(class xBase * to /* r4 */, unsigned int toEvent /* r2 */, float * toParam /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2834C0 -> 0x2834E0
    }
}

/*
    Compile unit: C:\SB\Core\x\xEvent.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002834E0 -> 0x00283524
*/
// Range: 0x2834E0 -> 0x283524
void zEntEvent(class xBase * to /* r2 */, unsigned int toEvent /* r2 */, float toParam0 /* r29+0x20 */, float toParam1 /* r29+0x20 */, float toParam2 /* r29+0x20 */, float toParam3 /* r29+0x20 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2834E0 -> 0x283524
        float toParam[4]; // r29+0x10
    }
}

/*
    Compile unit: C:\SB\Core\x\xEvent.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00283530 -> 0x00283550
*/
// Range: 0x283530 -> 0x283550
void zEntEvent(class xBase * to /* r2 */, unsigned int toEvent /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x283530 -> 0x283550
    }
}

/*
    Compile unit: C:\SB\Core\x\xEvent.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00283550 -> 0x002835A8
*/
// Range: 0x283550 -> 0x2835A8
void zEntEvent(unsigned int toID /* r2 */, unsigned int toEvent /* r16 */, float toParam0 /* r29+0x30 */, float toParam1 /* r29+0x30 */, float toParam2 /* r29+0x30 */, float toParam3 /* r29+0x30 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x283550 -> 0x2835A8
        class xBase * sendTo; // r2
        float toParam[4]; // r29+0x20
    }
}

/*
    Compile unit: C:\SB\Core\x\xEvent.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002835B0 -> 0x002835F8
*/
// Range: 0x2835B0 -> 0x2835F8
void zEntEvent(unsigned int toID /* r2 */, unsigned int toEvent /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2835B0 -> 0x2835F8
        class xBase * sendTo; // r2
    }
}

/*
    Compile unit: C:\SB\Core\x\xEvent.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00283600 -> 0x00283650
*/
// Range: 0x283600 -> 0x283650
void zEntEvent(char * to /* r2 */, unsigned int toEvent /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x283600 -> 0x283650
        unsigned int id; // r2
        class xBase * sendTo; // r2
    }
}

