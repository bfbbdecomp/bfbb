/*
    Compile unit: C:\SB\Core\x\xFog.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
signed int xFogEventCB(class xBase *, class xBase *, unsigned int, float *, class xBase *); // size: 0x0, address: 0x29EE10
class xSerial {
    // total size: 0x0
};
class RwRGBA {
    // total size: 0x4
public:
    unsigned char red; // offset 0x0, size 0x1
    unsigned char green; // offset 0x1, size 0x1
    unsigned char blue; // offset 0x2, size 0x1
    unsigned char alpha; // offset 0x3, size 0x1
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
class xFogAsset : public xBaseAsset {
    // total size: 0x24
public:
    unsigned char bkgndColor[4]; // offset 0x8, size 0x4
    unsigned char fogColor[4]; // offset 0xC, size 0x4
    float fogDensity; // offset 0x10, size 0x4
    float fogStart; // offset 0x14, size 0x4
    float fogStop; // offset 0x18, size 0x4
    float transitionTime; // offset 0x1C, size 0x4
    unsigned char fogType; // offset 0x20, size 0x1
    unsigned char padFog[3]; // offset 0x21, size 0x3
};
class _xFog : public xBase {
    // total size: 0x14
public:
    class xFogAsset * tasset; // offset 0x10, size 0x4
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
class xBaseAsset {
    // total size: 0x8
public:
    unsigned int id; // offset 0x0, size 0x4
    unsigned char baseType; // offset 0x4, size 0x1
    unsigned char linkCount; // offset 0x5, size 0x1
    unsigned short baseFlags; // offset 0x6, size 0x2
};
class iFogParams {
    // total size: 0x1C
public:
    enum RwFogType type; // offset 0x0, size 0x4
    float start; // offset 0x4, size 0x4
    float stop; // offset 0x8, size 0x4
    float density; // offset 0xC, size 0x4
    class RwRGBA fogcolor; // offset 0x10, size 0x4
    class RwRGBA bgcolor; // offset 0x14, size 0x4
    unsigned char * table; // offset 0x18, size 0x4
};
enum RwFogType {
    rwFOGTYPENAFOGTYPE = 0,
    rwFOGTYPELINEAR = 1,
    rwFOGTYPEEXPONENTIAL = 2,
    rwFOGTYPEEXPONENTIAL2 = 3,
    rwFOGTYPEFORCEENUMSIZEINT = 2147483647,
};

/*
    Compile unit: C:\SB\Core\x\xFog.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0029EE00 -> 0x0029EE08
*/
// Range: 0x29EE00 -> 0x29EE08
void xFogUpdate() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x29EE00 -> 0x29EE08
    }
}

/*
    Compile unit: C:\SB\Core\x\xFog.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0029EE10 -> 0x0029EF20
*/
// Range: 0x29EE10 -> 0x29EF20
signed int xFogEventCB(class xBase * to /* r2 */, unsigned int toEvent /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x29EE10 -> 0x29EF20
        class _xFog * t; // r2
        class iFogParams fog; // r29+0x10
    }
}

/*
    Compile unit: C:\SB\Core\x\xFog.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0029EF20 -> 0x0029EF28
*/
// Range: 0x29EF20 -> 0x29EF28
void xFogLoad(class _xFog * ent /* r2 */, class xSerial * s /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x29EF20 -> 0x29EF28
    }
}

/*
    Compile unit: C:\SB\Core\x\xFog.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0029EF30 -> 0x0029EF38
*/
// Range: 0x29EF30 -> 0x29EF38
void xFogSave(class _xFog * ent /* r2 */, class xSerial * s /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x29EF30 -> 0x29EF38
    }
}

/*
    Compile unit: C:\SB\Core\x\xFog.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0029EF40 -> 0x0029EFA4
*/
// Range: 0x29EF40 -> 0x29EFA4
void xFogInit(void * b /* r17 */, void * tasset /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x29EF40 -> 0x29EFA4
    }
}

/*
    Compile unit: C:\SB\Core\x\xFog.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0029EFB0 -> 0x0029EFC0
*/
// Range: 0x29EFB0 -> 0x29EFC0
void xFogClearFog() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x29EFB0 -> 0x29EFC0
    }
}

