/*
    Compile unit: C:\SB\Core\x\xQuickCull.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
class xQCControl xqc_def_ctrl; // size: 0x3C, address: 0x5A1710
class xQCData {
    // total size: 0x20
public:
    signed char xmin; // offset 0x0, size 0x1
    signed char ymin; // offset 0x1, size 0x1
    signed char zmin; // offset 0x2, size 0x1
    signed char zmin_dup; // offset 0x3, size 0x1
    signed char xmax; // offset 0x4, size 0x1
    signed char ymax; // offset 0x5, size 0x1
    signed char zmax; // offset 0x6, size 0x1
    signed char zmax_dup; // offset 0x7, size 0x1
    class xVec3 min; // offset 0x8, size 0xC
    class xVec3 max; // offset 0x14, size 0xC
};
class xQCControl {
    // total size: 0x3C
public:
    float world_xmin; // offset 0x0, size 0x4
    float world_ymin; // offset 0x4, size 0x4
    float world_zmin; // offset 0x8, size 0x4
    float world_xmax; // offset 0xC, size 0x4
    float world_ymax; // offset 0x10, size 0x4
    float world_zmax; // offset 0x14, size 0x4
    float world_xsz; // offset 0x18, size 0x4
    float world_ysz; // offset 0x1C, size 0x4
    float world_zsz; // offset 0x20, size 0x4
    float scale_x; // offset 0x24, size 0x4
    float scale_y; // offset 0x28, size 0x4
    float scale_z; // offset 0x2C, size 0x4
    float center_x; // offset 0x30, size 0x4
    float center_y; // offset 0x34, size 0x4
    float center_z; // offset 0x38, size 0x4
};
class xVec3 {
    // total size: 0xC
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
class xBox {
    // total size: 0x18
public:
    class xVec3 upper; // offset 0x0, size 0xC
    class xVec3 lower; // offset 0xC, size 0xC
};
class xBBox {
    // total size: 0x24
public:
    class xVec3 center; // offset 0x0, size 0xC
    class xBox box; // offset 0xC, size 0x18
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
class xMat4x3 : public xMat3x3 {
    // total size: 0x40
public:
    class xVec3 pos; // offset 0x30, size 0xC
    unsigned int pad3; // offset 0x3C, size 0x4
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
class xLine3 {
    // total size: 0x18
public:
    class xVec3 p1; // offset 0x0, size 0xC
    class xVec3 p2; // offset 0xC, size 0xC
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
class xBound {
    // total size: 0x4C
public:
    class xQCData qcd; // offset 0x0, size 0x20
    unsigned char type; // offset 0x20, size 0x1
    unsigned char pad[3]; // offset 0x21, size 0x3
    union { // inferred
        class xSphere sph; // offset 0x24, size 0x10
        class xBBox box; // offset 0x24, size 0x24
        class xCylinder cyl; // offset 0x24, size 0x14
    };
    class xMat4x3 * mat; // offset 0x48, size 0x4
};

/*
    Compile unit: C:\SB\Core\x\xQuickCull.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FA330 -> 0x001FA35C
*/
// Range: 0x1FA330 -> 0x1FA35C
void xQuickCullForEverything(class xQCData * q /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1FA330 -> 0x1FA35C
    }
}

/*
    Compile unit: C:\SB\Core\x\xQuickCull.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FA360 -> 0x001FA3AC
*/
// Range: 0x1FA360 -> 0x1FA3AC
void xQuickCullForOBB(class xQCControl * ctrl /* r17 */, class xQCData * q /* r16 */, class xBox * b /* r2 */, class xMat4x3 * m /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1FA360 -> 0x1FA3AC
        class xBox worldbox; // r29+0x30
    }
}

/*
    Compile unit: C:\SB\Core\x\xQuickCull.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FA3B0 -> 0x001FA494
*/
// Range: 0x1FA3B0 -> 0x1FA494
void xQuickCullForBox(class xQCControl * ctrl /* r18 */, class xQCData * q /* r16 */, class xBox * box /* r17 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1FA3B0 -> 0x1FA494
        class xQCData a; // r29+0x60
        class xQCData b; // r29+0x40
    }
}

/*
    Compile unit: C:\SB\Core\x\xQuickCull.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FA4A0 -> 0x001FA618
*/
// Range: 0x1FA4A0 -> 0x1FA618
void xQuickCullForSphere(class xQCControl * ctrl /* r17 */, class xQCData * q /* r16 */, class xSphere * s /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1FA4A0 -> 0x1FA618
        class xVec3 v1; // r29+0x80
        class xVec3 v2; // r29+0x70
        float radius_adjusted; // r1
        class xQCData a; // r29+0x50
        class xQCData b; // r29+0x30
    }
}

/*
    Compile unit: C:\SB\Core\x\xQuickCull.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FA620 -> 0x001FA834
*/
// Range: 0x1FA620 -> 0x1FA834
void xQuickCullForRay(class xQCControl * ctrl /* r17 */, class xQCData * q /* r16 */, class xRay3 * r /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1FA620 -> 0x1FA834
        class xLine3 ln; // r29+0x70
        float len; // r1
        class xQCData a; // r29+0x50
        class xQCData b; // r29+0x30
    }
}

/*
    Compile unit: C:\SB\Core\x\xQuickCull.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FA840 -> 0x001FA920
*/
// Range: 0x1FA840 -> 0x1FA920
void xQuickCullForLine(class xQCControl * ctrl /* r18 */, class xQCData * q /* r16 */, class xLine3 * ln /* r17 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1FA840 -> 0x1FA920
        class xQCData a; // r29+0x60
        class xQCData b; // r29+0x40
    }
}

/*
    Compile unit: C:\SB\Core\x\xQuickCull.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FA920 -> 0x001FAA60
*/
// Range: 0x1FA920 -> 0x1FAA60
static void xQuickCullCellForVec(class xQCControl * ctrl /* r2 */, class xQCData * c /* r2 */, class xVec3 * v /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1FA920 -> 0x1FAA60
    }
}

/*
    Compile unit: C:\SB\Core\x\xQuickCull.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FAA60 -> 0x001FAAD4
*/
// Range: 0x1FAA60 -> 0x1FAAD4
void xQuickCullForBound(class xQCControl * ctrl /* r2 */, class xQCData * q /* r2 */, class xBound * b /* r7 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1FAA60 -> 0x1FAAD4
    }
}

/*
    Compile unit: C:\SB\Core\x\xQuickCull.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FAAE0 -> 0x001FAB08
*/
// Range: 0x1FAAE0 -> 0x1FAB08
signed int xQuickCullIsects(class xQCData * a /* r2 */, class xQCData * b /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1FAAE0 -> 0x1FAB08
        signed int result; // r2
    }
}

/*
    Compile unit: C:\SB\Core\x\xQuickCull.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FAB10 -> 0x001FAB2C
*/
// Range: 0x1FAB10 -> 0x1FAB2C
void xQuickCullInit(class xQCControl * ctrl /* r2 */, class xBox * box /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1FAB10 -> 0x1FAB2C
    }
}

/*
    Compile unit: C:\SB\Core\x\xQuickCull.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FAB30 -> 0x001FAC2C
*/
// Range: 0x1FAB30 -> 0x1FAC2C
void xQuickCullInit(class xQCControl * ctrl /* r2 */, float xmin /* r29 */, float ymin /* r29 */, float zmin /* r29 */, float xmax /* r29 */, float ymax /* r29 */, float zmax /* r29 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1FAB30 -> 0x1FAC2C
    }
}

