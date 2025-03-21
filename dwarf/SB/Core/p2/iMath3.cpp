/*
    Compile unit: C:\SB\Core\p2\iMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
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
class xBox {
    // total size: 0x18
public:
    class xVec3 upper; // offset 0x0, size 0xC
    class xVec3 lower; // offset 0xC, size 0xC
};
class xVec3 {
    // total size: 0xC
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
class xTri3 {
    // total size: 0x24
public:
    class xVec3 p1; // offset 0x0, size 0xC
    class xVec3 p2; // offset 0xC, size 0xC
    class xVec3 p3; // offset 0x18, size 0xC
};
class xSphere {
    // total size: 0x10
public:
    class xVec3 center; // offset 0x0, size 0xC
    float r; // offset 0xC, size 0x4
};
class xCylinder {
    // total size: 0x14
public:
    class xVec3 center; // offset 0x0, size 0xC
    float r; // offset 0xC, size 0x4
    float h; // offset 0x10, size 0x4
};
class xRay3 {
    // total size: 0x24
public:
    class xVec3 origin; // offset 0x0, size 0xC
    class xVec3 dir; // offset 0xC, size 0xC
    float min_t; // offset 0x18, size 0x4
    float max_t; // offset 0x1C, size 0x4
    signed int flags; // offset 0x20, size 0x4
};
class xPlane {
    // total size: 0x10
public:
    class xVec3 norm; // offset 0x0, size 0xC
    float d; // offset 0xC, size 0x4
};
class xMat4x3 : public xMat3x3 {
    // total size: 0x40
public:
    class xVec3 pos; // offset 0x30, size 0xC
    unsigned int pad3; // offset 0x3C, size 0x4
};
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

/*
    Compile unit: C:\SB\Core\p2\iMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AB2C0 -> 0x001AB39C
*/
// Range: 0x1AB2C0 -> 0x1AB39C
void iBoxBoundVec(class xBox * o /* r2 */, class xBox * b /* r2 */, class xVec3 * v /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1AB2C0 -> 0x1AB39C
    }
}

/*
    Compile unit: C:\SB\Core\p2\iMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AB3A0 -> 0x001AB3D4
*/
// Range: 0x1AB3A0 -> 0x1AB3D4
void iBoxInitBoundVec(class xBox * b /* r2 */, class xVec3 * v /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1AB3A0 -> 0x1AB3D4
    }
}

/*
    Compile unit: C:\SB\Core\p2\iMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AB3E0 -> 0x001AB754
*/
// Range: 0x1AB3E0 -> 0x1AB754
void iBoxIsectSphere(class xBox * box /* r2 */, class xSphere * p /* r17 */, class xIsect * isx /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1AB3E0 -> 0x1AB754
        unsigned int xcode; // r8
        unsigned int ycode; // r7
        unsigned int zcode; // r6
    }
}

/*
    Compile unit: C:\SB\Core\p2\iMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AB760 -> 0x001AB9EC
*/
// Range: 0x1AB760 -> 0x1AB9EC
void iBoxIsectRay(class xBox * b /* r2 */, class xRay3 * r /* r17 */, class xIsect * isx /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1AB760 -> 0x1AB9EC
        float t_in; // r29+0x5C
        float t_out; // r29+0x58
    }
}

/*
    Compile unit: C:\SB\Core\p2\iMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AB9F0 -> 0x001ABAC8
*/
// Range: 0x1AB9F0 -> 0x1ABAC8
static unsigned int ClipPlane(float denom /* r29 */, float numer /* r29 */, float * t_in /* r2 */, float * t_out /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1AB9F0 -> 0x1ABAC8
    }
}

/*
    Compile unit: C:\SB\Core\p2\iMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001ABAD0 -> 0x001ABB58
*/
// Range: 0x1ABAD0 -> 0x1ABB58
void iBoxIsectVec(class xBox * b /* r2 */, class xVec3 * v /* r2 */, class xIsect * isx /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1ABAD0 -> 0x1ABB58
    }
}

/*
    Compile unit: C:\SB\Core\p2\iMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001ABB60 -> 0x001AC568
*/
// Range: 0x1ABB60 -> 0x1AC568
void iBoxVecDist(class xBox * box /* r2 */, class xVec3 * v /* r2 */, class xIsect * isx /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1ABB60 -> 0x1AC568
    }
}

/*
    Compile unit: C:\SB\Core\p2\iMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AC570 -> 0x001AC5F0
*/
// Range: 0x1AC570 -> 0x1AC5F0
void iCylinderIsectVec(class xCylinder * c /* r2 */, class xVec3 * v /* r2 */, class xIsect * isx /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1AC570 -> 0x1AC5F0
        float b; // r3
    }
}

/*
    Compile unit: C:\SB\Core\p2\iMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AC5F0 -> 0x001AC72C
*/
// Range: 0x1AC5F0 -> 0x1AC72C
void iSphereBoundVec(class xSphere * o /* r2 */, class xSphere * s /* r2 */, class xVec3 * v /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1AC5F0 -> 0x1AC72C
        float scale; // r2
        class xSphere temp; // r29+0x10
        class xSphere * tp; // r6
        unsigned int usetemp; // r7
    }
}

/*
    Compile unit: C:\SB\Core\p2\iMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AC730 -> 0x001AC758
*/
// Range: 0x1AC730 -> 0x1AC758
void iSphereInitBoundVec(class xSphere * s /* r2 */, class xVec3 * v /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1AC730 -> 0x1AC758
    }
}

/*
    Compile unit: C:\SB\Core\p2\iMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AC760 -> 0x001AC7DC
*/
// Range: 0x1AC760 -> 0x1AC7DC
void iSphereIsectSphere(class xSphere * s /* r2 */, class xSphere * p /* r2 */, class xIsect * isx /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1AC760 -> 0x1AC7DC
    }
}

/*
    Compile unit: C:\SB\Core\p2\iMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AC7E0 -> 0x001AC9CC
*/
// Range: 0x1AC7E0 -> 0x1AC9CC
void iSphereIsectRay(class xSphere * s /* r2 */, class xRay3 * r /* r17 */, class xIsect * isx /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1AC7E0 -> 0x1AC9CC
        float t_in; // r29+0x3C
        float t_out; // r29+0x38
        unsigned int num; // r2
    }
}

/*
    Compile unit: C:\SB\Core\p2\iMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AC9D0 -> 0x001ACA34
*/
// Range: 0x1AC9D0 -> 0x1ACA34
void iSphereIsectVec(class xSphere * s /* r2 */, class xVec3 * v /* r2 */, class xIsect * isx /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1AC9D0 -> 0x1ACA34
    }
}

/*
    Compile unit: C:\SB\Core\p2\iMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001ACA40 -> 0x001ACA48
*/
// Range: 0x1ACA40 -> 0x1ACA48
void iMath3Exit() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1ACA40 -> 0x1ACA48
    }
}

/*
    Compile unit: C:\SB\Core\p2\iMath3.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001ACA50 -> 0x001ACA58
*/
// Range: 0x1ACA50 -> 0x1ACA58
void iMath3Init() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1ACA50 -> 0x1ACA58
    }
}

