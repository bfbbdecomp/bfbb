/*
    Compile unit: C:\SB\Core\x\xPar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
class xPar gParPool[2000]; // size: 0x2EE00, address: 0x569390
class xPar * gParDead; // size: 0x4, address: 0x50FA70
class xPar {
    // total size: 0x60
public:
    class xPar * m_next; // offset 0x0, size 0x4
    class xPar * m_prev; // offset 0x4, size 0x4
    float m_lifetime; // offset 0x8, size 0x4
    unsigned char m_c[4]; // offset 0xC, size 0x4
    class xVec3 m_pos; // offset 0x10, size 0xC
    float m_size; // offset 0x1C, size 0x4
    class xVec3 m_vel; // offset 0x20, size 0xC
    float m_sizeVel; // offset 0x2C, size 0x4
    unsigned char m_flag; // offset 0x30, size 0x1
    unsigned char m_mode; // offset 0x31, size 0x1
    unsigned char m_texIdx[2]; // offset 0x32, size 0x2
    unsigned char m_rotdeg[3]; // offset 0x34, size 0x3
    unsigned char pad8; // offset 0x37, size 0x1
    float totalLifespan; // offset 0x38, size 0x4
    class xParEmitterAsset * m_asset; // offset 0x3C, size 0x4
    float m_cvel[4]; // offset 0x40, size 0x10
    float m_cfl[4]; // offset 0x50, size 0x10
};
class xVec3 {
    // total size: 0xC
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
class xParEmitterAsset {
    // total size: 0x0
};

/*
    Compile unit: C:\SB\Core\x\xPar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F4200 -> 0x001F4280
*/
// Range: 0x1F4200 -> 0x1F4280
void xParInit(class xPar * p /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F4200 -> 0x1F4280
    }
}

/*
    Compile unit: C:\SB\Core\x\xPar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F4280 -> 0x001F42D4
*/
// Range: 0x1F4280 -> 0x1F42D4
void xParFree(class xPar * par /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F4280 -> 0x1F42D4
    }
}

/*
    Compile unit: C:\SB\Core\x\xPar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F42E0 -> 0x001F4320
*/
// Range: 0x1F42E0 -> 0x1F4320
class xPar * xParAlloc() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F42E0 -> 0x1F4320
    }
}

/*
    Compile unit: C:\SB\Core\x\xPar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F4320 -> 0x001F436C
*/
// Range: 0x1F4320 -> 0x1F436C
void xParMemInit() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F4320 -> 0x1F436C
        signed int i; // r5
    }
}

