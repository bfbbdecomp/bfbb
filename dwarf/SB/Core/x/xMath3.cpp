/*
    Compile unit: C:\SB\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
class xVec3 g_O3; // size: 0xC, address: 0x4F8D70
class xVec3 g_X3; // size: 0xC, address: 0x4F8D80
class xVec3 g_Y3; // size: 0xC, address: 0x4F8D90
class xVec3 g_Z3; // size: 0xC, address: 0x4F8DA0
class xVec3 g_NX3; // size: 0xC, address: 0x4F8DB0
class xVec3 g_NY3; // size: 0xC, address: 0x4F8DC0
class xVec3 g_NZ3; // size: 0xC, address: 0x4F8DD0
class xVec3 g_Onez; // size: 0xC, address: 0x4F8DE0
class xMat4x3 g_I3; // size: 0x40, address: 0x5688C0
class xQuat g_IQ; // size: 0x10, address: 0x4F8DF0
static float gs_fTolerance; // size: 0x4, address: 0x0
class xMat3x3 {
    // total size: 0x30
public:
    class xVec3 right; // offset 0x0, size 0xC
    signed int flags; // offset 0xC, size 0x4
    class xVec3 up; // offset 0x10, size 0xC
    unsigned int pad1; // offset 0x1C, size 0x4
    class xVec3 at; // offset 0x20, size 0xC
    unsigned int pad2; // offset 0x2C, size 0x4
};
class xVec3 {
    // total size: 0xC
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
class xMat4x3 : public xMat3x3 {
    // total size: 0x40
public:
    class xVec3 pos; // offset 0x30, size 0xC
    unsigned int pad3; // offset 0x3C, size 0x4
};
class xCapsule {
    // total size: 0x1C
public:
    class xVec3 start; // offset 0x0, size 0xC
    class xVec3 end; // offset 0xC, size 0xC
    float r; // offset 0x18, size 0x4
};
class xQuat {
    // total size: 0x10
public:
    class xVec3 v; // offset 0x0, size 0xC
    float s; // offset 0xC, size 0x4
};
class xConic {
    // total size: 0xA0
public:
    class xMat4x3 basis; // offset 0x0, size 0x40
    class xMat4x3 invbasis; // offset 0x40, size 0x40
    float coef[5]; // offset 0x80, size 0x14
    class xVec3 coneBasisCenter; // offset 0x94, size 0xC
};
class xIsect {
    // total size: 0x2C
public:
    unsigned int flags; // offset 0x0, size 0x4
    float penned; // offset 0x4, size 0x4
    float contained; // offset 0x8, size 0x4
    float lapped; // offset 0xC, size 0x4
    class xVec3 point; // offset 0x10, size 0xC
    class xVec3 norm; // offset 0x1C, size 0xC
    float dist; // offset 0x28, size 0x4
};
class xSphere {
    // total size: 0x10
public:
    class xVec3 center; // offset 0x0, size 0xC
    float r; // offset 0xC, size 0x4
};
class xBox {
    // total size: 0x18
public:
    class xVec3 upper; // offset 0x0, size 0xC
    class xVec3 lower; // offset 0xC, size 0xC
};

/*
    Compile unit: C:\SB\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001EE070 -> 0x001EE110
*/
// Range: 0x1EE070 -> 0x1EE110
void xQuatDiff(class xQuat * o /* r16 */, class xQuat * a /* r2 */, class xQuat * b /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1EE070 -> 0x1EE110
    }
}

/*
    Compile unit: C:\SB\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001EE110 -> 0x001EE198
*/
// Range: 0x1EE110 -> 0x1EE198
void xQuatMul(class xQuat * o /* r2 */, class xQuat * a /* r2 */, class xQuat * b /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1EE110 -> 0x1EE198
    }
}

/*
    Compile unit: C:\SB\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001EE1A0 -> 0x001EE344
*/
// Range: 0x1EE1A0 -> 0x1EE344
void xQuatSlerp(class xQuat * o /* r18 */, class xQuat * a /* r17 */, class xQuat * b /* r16 */, float t /* r21 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1EE1A0 -> 0x1EE344
        float asph; // r20
        float bsph; // r29+0x60
        float one_sintheta; // r22
        float abdot; // r29+0x60
        class xQuat b2; // r29+0x50
    }
}

/*
    Compile unit: C:\SB\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001EE350 -> 0x001EE458
*/
// Range: 0x1EE350 -> 0x1EE458
float xQuatNormalize(class xQuat * o /* r2 */, class xQuat * q /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1EE350 -> 0x1EE458
        float one_len; // r2
    }
}

/*
    Compile unit: C:\SB\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001EE460 -> 0x001EE4BC
*/
// Range: 0x1EE460 -> 0x1EE4BC
void xQuatToAxisAngle(class xQuat * q /* r18 */, class xVec3 * a /* r17 */, float * t /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1EE460 -> 0x1EE4BC
    }
}

/*
    Compile unit: C:\SB\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001EE4C0 -> 0x001EE56C
*/
// Range: 0x1EE4C0 -> 0x1EE56C
void xQuatToMat(class xQuat * q /* r2 */, class xMat3x3 * m /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1EE4C0 -> 0x1EE56C
        float tx; // r6
        float ty; // r12
        float tz; // r29
        float tsx; // r11
        float tsy; // r10
        float tsz; // r9
        float txx; // r8
        float txy; // r7
        float txz; // r6
        float tyy; // r4
        float tyz; // r5
        float tzz; // r1
    }
}

/*
    Compile unit: C:\SB\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001EE570 -> 0x001EE638
*/
// Range: 0x1EE570 -> 0x1EE638
void xQuatFromAxisAngle(class xQuat * q /* r17 */, class xVec3 * a /* r16 */, float t /* r29+0x40 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1EE570 -> 0x1EE638
        float t_2; // r20
    }
}

/*
    Compile unit: C:\SB\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001EE640 -> 0x001EE8C0
*/
// Range: 0x1EE640 -> 0x1EE8C0
void xQuatFromMat(class xQuat * q /* r2 */, class xMat3x3 * m /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1EE640 -> 0x1EE8C0
        float * mp; // r2
        float * qvp; // r2
        float tr; // r2
        float root; // r3
        signed int i; // r11
        signed int j; // r3
        signed int k; // r10
        signed int nxt[3]; // @ 0x00418BC8
    }
}

/*
    Compile unit: C:\SB\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001EE8C0 -> 0x001EE980
*/
// Range: 0x1EE8C0 -> 0x1EE980
void xMat4x3Mul(class xMat4x3 * o /* r16 */, class xMat4x3 * a /* r2 */, class xMat4x3 * b /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1EE8C0 -> 0x1EE980
    }
}

/*
    Compile unit: C:\SB\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001EE980 -> 0x001EEABC
*/
// Range: 0x1EE980 -> 0x1EEABC
void xMat4x3Rot(class xMat4x3 * m /* r17 */, class xVec3 * a /* r2 */, float t /* r29+0x80 */, class xVec3 * p /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1EE980 -> 0x1EEABC
        class xMat4x3 temp; // r29+0x40
    }
}

/*
    Compile unit: C:\SB\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001EEAC0 -> 0x001EEB8C
*/
// Range: 0x1EEAC0 -> 0x1EEB8C
void xMat3x3Tolocal(class xVec3 * o /* r2 */, class xMat3x3 * m /* r2 */, class xVec3 * v /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1EEAC0 -> 0x1EEB8C
    }
}

/*
    Compile unit: C:\SB\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001EEB90 -> 0x001EEC00
*/
// Range: 0x1EEB90 -> 0x1EEC00
void xMat3x3LMulVec(class xVec3 * o /* r2 */, class xMat3x3 * m /* r2 */, class xVec3 * v /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1EEB90 -> 0x1EEC00
        float y; // r6
        float z; // r3
    }
}

/*
    Compile unit: C:\SB\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001EEC00 -> 0x001EEDDC
*/
// Range: 0x1EEC00 -> 0x1EEDDC
void xMat3x3Mul(class xMat3x3 * o /* r2 */, class xMat3x3 * a /* r2 */, class xMat3x3 * b /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1EEC00 -> 0x1EEDDC
        class xMat3x3 temp; // r29+0x10
        class xMat3x3 * tp; // r7
        unsigned int usetemp; // r3
    }
}

/*
    Compile unit: C:\SB\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001EEDE0 -> 0x001EEE78
*/
// Range: 0x1EEDE0 -> 0x1EEE78
void xMat3x3Transpose(class xMat3x3 * o /* r2 */, class xMat3x3 * m /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1EEDE0 -> 0x1EEE78
        float temp; // r1
        float temp; // r1
        float temp; // r1
    }
}

/*
    Compile unit: C:\SB\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001EEE80 -> 0x001EEFD0
*/
// Range: 0x1EEE80 -> 0x1EEFD0
void xMat3x3RMulRotY(class xMat3x3 * o /* r17 */, class xMat3x3 * m /* r16 */, float t /* r20 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1EEE80 -> 0x1EEFD0
        float temp; // r3
    }
}

/*
    Compile unit: C:\SB\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001EEFD0 -> 0x001EEFFC
*/
// Range: 0x1EEFD0 -> 0x1EEFFC
void xMat3x3ScaleC(class xMat3x3 * m /* r2 */, float x /* r29 */, float y /* r29 */, float z /* r29 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1EEFD0 -> 0x1EEFFC
    }
}

/*
    Compile unit: C:\SB\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001EF000 -> 0x001EF080
*/
// Range: 0x1EF000 -> 0x1EF080
void xMat3x3RotZ(class xMat3x3 * m /* r16 */, float t /* r20 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1EF000 -> 0x1EF080
    }
}

/*
    Compile unit: C:\SB\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001EF080 -> 0x001EF100
*/
// Range: 0x1EF080 -> 0x1EF100
void xMat3x3RotY(class xMat3x3 * m /* r16 */, float t /* r20 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1EF080 -> 0x1EF100
    }
}

/*
    Compile unit: C:\SB\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001EF100 -> 0x001EF180
*/
// Range: 0x1EF100 -> 0x1EF180
void xMat3x3RotX(class xMat3x3 * m /* r16 */, float t /* r20 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1EF100 -> 0x1EF180
    }
}

/*
    Compile unit: C:\SB\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001EF180 -> 0x001EF2A8
*/
// Range: 0x1EF180 -> 0x1EF2A8
void xMat3x3RotC(class xMat3x3 * m /* r16 */, float _x /* r23 */, float _y /* r22 */, float _z /* r21 */, float t /* r20 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1EF180 -> 0x1EF2A8
        float c; // r5
    }
}

/*
    Compile unit: C:\SB\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001EF2B0 -> 0x001EF3B0
*/
// Range: 0x1EF2B0 -> 0x1EF3B0
void xMat3x3Euler(class xMat3x3 * m /* r16 */, float yaw /* r22 */, float pitch /* r21 */, float roll /* r20 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1EF2B0 -> 0x1EF3B0
    }
}

/*
    Compile unit: C:\SB\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001EF3B0 -> 0x001EF3C0
*/
// Range: 0x1EF3B0 -> 0x1EF3C0
void xMat3x3Euler(class xMat3x3 * m /* r2 */, class xVec3 * ypr /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1EF3B0 -> 0x1EF3C0
    }
}

/*
    Compile unit: C:\SB\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001EF3C0 -> 0x001EF628
*/
// Range: 0x1EF3C0 -> 0x1EF628
float xMat3x3LookVec(class xMat3x3 * m /* r17 */, class xVec3 * at /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1EF3C0 -> 0x1EF628
        float vec_len; // r20
    }
}

/*
    Compile unit: C:\SB\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001EF630 -> 0x001EF670
*/
// Range: 0x1EF630 -> 0x1EF670
void xMat4x3MoveLocalAt(class xMat4x3 * m /* r2 */, float mag /* r29 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1EF630 -> 0x1EF670
    }
}

/*
    Compile unit: C:\SB\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001EF670 -> 0x001EF6B0
*/
// Range: 0x1EF670 -> 0x1EF6B0
void xMat4x3MoveLocalUp(class xMat4x3 * m /* r2 */, float mag /* r29 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1EF670 -> 0x1EF6B0
    }
}

/*
    Compile unit: C:\SB\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001EF6B0 -> 0x001EF6F0
*/
// Range: 0x1EF6B0 -> 0x1EF6F0
void xMat4x3MoveLocalRight(class xMat4x3 * m /* r2 */, float mag /* r29 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1EF6B0 -> 0x1EF6F0
    }
}

/*
    Compile unit: C:\SB\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001EF6F0 -> 0x001EF7F8
*/
// Range: 0x1EF6F0 -> 0x1EF7F8
void xMat3x3GetEuler(class xMat3x3 * m /* r17 */, class xVec3 * a /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1EF6F0 -> 0x1EF7F8
        float pitch; // r21
        float yaw; // r20
        float roll; // r29+0x40
    }
}

/*
    Compile unit: C:\SB\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001EF800 -> 0x001EF848
*/
// Range: 0x1EF800 -> 0x1EF848
void xMat3x3Normalize(class xMat3x3 * o /* r17 */, class xMat3x3 * m /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1EF800 -> 0x1EF848
    }
}

/*
    Compile unit: C:\SB\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001EF8C0 -> 0x001EFC38
*/
// Range: 0x1EF8C0 -> 0x1EFC38
void xBoxFromCone(class xBox & box /* r18 */, class xVec3 & center /* r17 */, class xVec3 & dir /* r16 */, float dist /* r22 */, float r1 /* r21 */, float r2 /* r20 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1EF8C0 -> 0x1EFC38
        class xBox temp; // r29+0x50
    }
}

/*
    Compile unit: C:\SB\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001EFC40 -> 0x001EFD50
*/
// Range: 0x1EFC40 -> 0x1EFD50
void xBoxInitBoundCapsule(class xBox * b /* r2 */, class xCapsule * c /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1EFC40 -> 0x1EFD50
    }
}

/*
    Compile unit: C:\SB\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001EFD50 -> 0x001F0018
*/
// Range: 0x1EFD50 -> 0x1F0018
void xBoxInitBoundOBB(class xBox * o /* r2 */, class xBox * b /* r2 */, class xMat4x3 * m /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1EFD50 -> 0x1F0018
        class xVec3 boxcent; // r29+0x40
        float xmax; // r4
        float ymax; // r3
        float zmax; // r2
    }
}

/*
    Compile unit: C:\SB\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F0020 -> 0x001F00D8
*/
// Range: 0x1F0020 -> 0x1F00D8
signed int xPointInBox(class xBox * b /* r2 */, class xVec3 * p /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F0020 -> 0x1F00D8
    }
}

/*
    Compile unit: C:\SB\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F00E0 -> 0x001F0210
*/
// Range: 0x1F00E0 -> 0x1F0210
void xLine3VecDist2(class xVec3 * p1 /* r2 */, class xVec3 * p2 /* r2 */, class xVec3 * v /* r2 */, class xIsect * isx /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F00E0 -> 0x1F0210
    }
}

/*
    Compile unit: C:\SB\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F0210 -> 0x001F0218
*/
// Range: 0x1F0210 -> 0x1F0218
void xMath3Exit() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F0210 -> 0x1F0218
    }
}

/*
    Compile unit: C:\SB\Core\x\xMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F0220 -> 0x001F02FC
*/
// Range: 0x1F0220 -> 0x1F02FC
void xMath3Init() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F0220 -> 0x1F02FC
    }
}

