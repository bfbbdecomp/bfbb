/*
    Compile unit: C:\SB\Core\x\xParGroup.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
static signed int sParGroupRegTableInit; // size: 0x4, address: 0x50FA74
static signed int sParGroupRegTableCount; // size: 0x4, address: 0x50FA78
class xParGroup * sParGroupRegTable[255]; // size: 0x3FC, address: 0x598340
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
class xParGroup {
    // total size: 0x24
public:
    class xPar * m_root; // offset 0x0, size 0x4
    class xPar * m_dead; // offset 0x4, size 0x4
    signed int m_num_of_particles; // offset 0x8, size 0x4
    unsigned char m_alive; // offset 0xC, size 0x1
    unsigned char m_killWhenDead; // offset 0xD, size 0x1
    unsigned char m_active; // offset 0xE, size 0x1
    unsigned char m_visible; // offset 0xF, size 0x1
    unsigned char m_culled; // offset 0x10, size 0x1
    unsigned char m_priority; // offset 0x11, size 0x1
    unsigned char m_flags; // offset 0x12, size 0x1
    unsigned char m_regidx; // offset 0x13, size 0x1
    class xParGroup * m_next; // offset 0x14, size 0x4
    class xParGroup * m_prev; // offset 0x18, size 0x4
    void (* draw)(void *, class xParGroup *); // offset 0x1C, size 0x4
    class xParCmdTex * m_cmdTex; // offset 0x20, size 0x4
};
class xParCmdTex {
    // total size: 0x0
};
class xVec3 {
    // total size: 0xC
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
class xParEmitterAsset : public xBaseAsset {
    // total size: 0x54
public:
    unsigned char emit_flags; // offset 0x8, size 0x1
    unsigned char emit_type; // offset 0x9, size 0x1
    unsigned short pad; // offset 0xA, size 0x2
    unsigned int propID; // offset 0xC, size 0x4
    union { // inferred
        class xPECircle e_circle; // offset 0x10, size 0x14
        class _tagEmitSphere e_sphere; // offset 0x10, size 0x4
        class _tagEmitRect e_rect; // offset 0x10, size 0x8
        class _tagEmitLine e_line; // offset 0x10, size 0x1C
        class _tagEmitVolume e_volume; // offset 0x10, size 0x4
        class _tagEmitOffsetPoint e_offsetp; // offset 0x10, size 0xC
        class xPEVCyl e_vcyl; // offset 0x10, size 0xC
        class xPEEntBone e_entbone; // offset 0x10, size 0x18
        class xPEEntBound e_entbound; // offset 0x10, size 0xC
    };
    unsigned int attachToID; // offset 0x2C, size 0x4
    class xVec3 pos; // offset 0x30, size 0xC
    class xVec3 vel; // offset 0x3C, size 0xC
    float vel_angle_variation; // offset 0x48, size 0x4
    unsigned int cull_mode; // offset 0x4C, size 0x4
    float cull_dist_sqr; // offset 0x50, size 0x4
};
class _tagEmitRect {
    // total size: 0x8
public:
    float x_len; // offset 0x0, size 0x4
    float z_len; // offset 0x4, size 0x4
};
class xPEEntBound {
    // total size: 0xC
public:
    unsigned char flags; // offset 0x0, size 0x1
    unsigned char type; // offset 0x1, size 0x1
    unsigned char pad1; // offset 0x2, size 0x1
    unsigned char pad2; // offset 0x3, size 0x1
    float expand; // offset 0x4, size 0x4
    float deflection; // offset 0x8, size 0x4
};
class _tagEmitLine {
    // total size: 0x1C
public:
    class xVec3 pos1; // offset 0x0, size 0xC
    class xVec3 pos2; // offset 0xC, size 0xC
    float radius; // offset 0x18, size 0x4
};
class _tagEmitVolume {
    // total size: 0x4
public:
    unsigned int emit_volumeID; // offset 0x0, size 0x4
};
class _tagEmitOffsetPoint {
    // total size: 0xC
public:
    class xVec3 offset; // offset 0x0, size 0xC
};
class xPEVCyl {
    // total size: 0xC
public:
    float height; // offset 0x0, size 0x4
    float radius; // offset 0x4, size 0x4
    float deflection; // offset 0x8, size 0x4
};
class xPEEntBone {
    // total size: 0x18
public:
    unsigned char flags; // offset 0x0, size 0x1
    unsigned char type; // offset 0x1, size 0x1
    unsigned char bone; // offset 0x2, size 0x1
    unsigned char pad1; // offset 0x3, size 0x1
    class xVec3 offset; // offset 0x4, size 0xC
    float radius; // offset 0x10, size 0x4
    float deflection; // offset 0x14, size 0x4
};
class xPECircle {
    // total size: 0x14
public:
    float radius; // offset 0x0, size 0x4
    float deflection; // offset 0x4, size 0x4
    class xVec3 dir; // offset 0x8, size 0xC
};
class xBaseAsset {
    // total size: 0x8
public:
    unsigned int id; // offset 0x0, size 0x4
    unsigned char baseType; // offset 0x4, size 0x1
    unsigned char linkCount; // offset 0x5, size 0x1
    unsigned short baseFlags; // offset 0x6, size 0x2
};
class _tagEmitSphere {
    // total size: 0x4
public:
    float radius; // offset 0x0, size 0x4
};

/*
    Compile unit: C:\SB\Core\x\xParGroup.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F6180 -> 0x001F6254
*/
// Range: 0x1F6180 -> 0x1F6254
void xParGroupKillPar(class xParGroup * ps /* r2 */, class xPar * p /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F6180 -> 0x1F6254
    }
}

/*
    Compile unit: C:\SB\Core\x\xParGroup.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F6260 -> 0x001F63E0
*/
// Range: 0x1F6260 -> 0x1F63E0
class xPar * xParGroupAddPar(class xParGroup * ps /* r17 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F6260 -> 0x1F63E0
        class xPar * p; // r16
        signed int myPriority; // r7
        unsigned char i; // r6
    }
}

/*
    Compile unit: C:\SB\Core\x\xParGroup.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F63E0 -> 0x001F64F4
*/
// Range: 0x1F63E0 -> 0x1F64F4
void xParGroupAnimate(class xParGroup * ps /* r17 */, float dt /* r21 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F63E0 -> 0x1F64F4
        class xPar * i; // r16
        class xPar * tmp; // r2
        float age; // r20
    }
}

/*
    Compile unit: C:\SB\Core\x\xParGroup.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F6500 -> 0x001F654C
*/
// Range: 0x1F6500 -> 0x1F654C
void xParGroupKillAllParticles(class xParGroup * ps /* r17 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F6500 -> 0x1F654C
        class xPar * i; // r16
        class xPar * tmp; // r2
    }
}

/*
    Compile unit: C:\SB\Core\x\xParGroup.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F6550 -> 0x001F6558
*/
// Range: 0x1F6550 -> 0x1F6558
void xParGroupSetActive(class xParGroup * ps /* r2 */, unsigned int isActive /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F6550 -> 0x1F6558
    }
}

/*
    Compile unit: C:\SB\Core\x\xParGroup.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F6560 -> 0x001F65C0
*/
// Range: 0x1F6560 -> 0x1F65C0
void xParGroupUnregister(class xParGroup * ps /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F6560 -> 0x1F65C0
        unsigned char i; // r6
    }
}

/*
    Compile unit: C:\SB\Core\x\xParGroup.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F65C0 -> 0x001F66A0
*/
// Range: 0x1F65C0 -> 0x1F66A0
void xParGroupRegister(class xParGroup * ps /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F65C0 -> 0x1F66A0
        unsigned char i; // r6
    }
}

/*
    Compile unit: C:\SB\Core\x\xParGroup.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F66A0 -> 0x001F66A8
*/
// Range: 0x1F66A0 -> 0x1F66A8
void xParGroupSetPriority(class xParGroup * ps /* r2 */, unsigned char val /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F66A0 -> 0x1F66A8
    }
}

/*
    Compile unit: C:\SB\Core\x\xParGroup.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F66B0 -> 0x001F66B8
*/
// Range: 0x1F66B0 -> 0x1F66B8
void xParGroupSetVisibility(class xParGroup * ps /* r2 */, signed int vis /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F66B0 -> 0x1F66B8
    }
}

/*
    Compile unit: C:\SB\Core\x\xParGroup.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F66C0 -> 0x001F66F8
*/
// Range: 0x1F66C0 -> 0x1F66F8
void xParGroupSetBack2Life(class xParGroup * ps /* r2 */, signed int b2l /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F66C0 -> 0x1F66F8
    }
}

/*
    Compile unit: C:\SB\Core\x\xParGroup.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F6700 -> 0x001F6738
*/
// Range: 0x1F6700 -> 0x1F6738
void xParGroupSetAging(class xParGroup * ps /* r2 */, signed int age /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F6700 -> 0x1F6738
    }
}

/*
    Compile unit: C:\SB\Core\x\xParGroup.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F6740 -> 0x001F6794
*/
// Range: 0x1F6740 -> 0x1F6794
void xParGroupInit(class xParGroup * ps /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F6740 -> 0x1F6794
    }
}

