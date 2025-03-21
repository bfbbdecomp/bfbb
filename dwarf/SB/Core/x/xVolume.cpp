/*
    Compile unit: C:\SB\Core\x\xVolume.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
class xVolumeAsset : public xBaseAsset {
    // total size: 0x64
public:
    unsigned int flags; // offset 0x8, size 0x4
    class xBound bound; // offset 0xC, size 0x4C
    float rot; // offset 0x58, size 0x4
    float xpivot; // offset 0x5C, size 0x4
    float zpivot; // offset 0x60, size 0x4
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
class xBBox {
    // total size: 0x24
public:
    class xVec3 center; // offset 0x0, size 0xC
    class xBox box; // offset 0xC, size 0x18
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
class xVolume : public xBase {
    // total size: 0x14
public:
    class xVolumeAsset * asset; // offset 0x10, size 0x4
};
class xVec3 {
    // total size: 0xC
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
class xBaseAsset {
    // total size: 0x8
public:
    unsigned int id; // offset 0x0, size 0x4
    unsigned char baseType; // offset 0x4, size 0x1
    unsigned char linkCount; // offset 0x5, size 0x1
    unsigned short baseFlags; // offset 0x6, size 0x2
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
class xBox {
    // total size: 0x18
public:
    class xVec3 upper; // offset 0x0, size 0xC
    class xVec3 lower; // offset 0xC, size 0xC
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
    Compile unit: C:\SB\Core\x\xVolume.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002FE2F0 -> 0x002FE2FC
*/
// Range: 0x2FE2F0 -> 0x2FE2FC
class xBound * GetBound(class xVolume * this /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2FE2F0 -> 0x2FE2FC
    }
}

/*
    Compile unit: C:\SB\Core\x\xVolume.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002FE300 -> 0x002FE308
*/
// Range: 0x2FE300 -> 0x2FE308
void Load(class xVolume * this /* r2 */, class xSerial * s /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2FE300 -> 0x2FE308
    }
}

/*
    Compile unit: C:\SB\Core\x\xVolume.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002FE310 -> 0x002FE318
*/
// Range: 0x2FE310 -> 0x2FE318
void Save(class xVolume * this /* r2 */, class xSerial * s /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2FE310 -> 0x2FE318
    }
}

/*
    Compile unit: C:\SB\Core\x\xVolume.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002FE320 -> 0x002FE328
*/
// Range: 0x2FE320 -> 0x2FE328
void Reset(class xVolume * this /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2FE320 -> 0x2FE328
    }
}

/*
    Compile unit: C:\SB\Core\x\xVolume.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002FE330 -> 0x002FE38C
*/
// Range: 0x2FE330 -> 0x2FE38C
void Init(class xVolume * this /* r17 */, class xVolumeAsset * asset /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2FE330 -> 0x2FE38C
    }
}

