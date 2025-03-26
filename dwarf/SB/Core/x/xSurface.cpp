/*
    Compile unit: C:\SB\Core\x\xSurface.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
static class xSurface * surfs; // size: 0x4, address: 0x50FB74
static unsigned short nsurfs; // size: 0x2, address: 0x50FB78
unsigned int gActiveHeap; // size: 0x4, address: 0x50FA44
class xSurface : public xBase {
    // total size: 0x28
public:
    unsigned int idx; // offset 0x10, size 0x4
    unsigned int type; // offset 0x14, size 0x4
    union { // inferred
        unsigned int mat_idx; // offset 0x18, size 0x4
        class xEnt * ent; // offset 0x18, size 0x4
        void * obj; // offset 0x18, size 0x4
    };
    float friction; // offset 0x1C, size 0x4
    unsigned char state; // offset 0x20, size 0x1
    unsigned char pad[3]; // offset 0x21, size 0x3
    void * moprops; // offset 0x24, size 0x4
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
class xEnt {
    // total size: 0x0
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

/*
    Compile unit: C:\SB\Core\x\xSurface.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020ED40 -> 0x0020ED68
*/
// Range: 0x20ED40 -> 0x20ED68
class xSurface * xSurfaceGetByIdx(unsigned short n /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x20ED40 -> 0x20ED68
    }
}

/*
    Compile unit: C:\SB\Core\x\xSurface.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020ED70 -> 0x0020ED78
*/
// Range: 0x20ED70 -> 0x20ED78
unsigned short xSurfaceGetNumSurfaces() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x20ED70 -> 0x20ED78
    }
}

/*
    Compile unit: C:\SB\Core\x\xSurface.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020ED80 -> 0x0020ED88
*/
// Range: 0x20ED80 -> 0x20ED88
void xSurfaceReset() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x20ED80 -> 0x20ED88
    }
}

/*
    Compile unit: C:\SB\Core\x\xSurface.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020ED90 -> 0x0020ED98
*/
// Range: 0x20ED90 -> 0x20ED98
void xSurfaceLoad(class xSurface * ent /* r2 */, class xSerial * s /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x20ED90 -> 0x20ED98
    }
}

/*
    Compile unit: C:\SB\Core\x\xSurface.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020EDA0 -> 0x0020EDA8
*/
// Range: 0x20EDA0 -> 0x20EDA8
void xSurfaceSave(class xSurface * ent /* r2 */, class xSerial * s /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x20EDA0 -> 0x20EDA8
    }
}

/*
    Compile unit: C:\SB\Core\x\xSurface.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020EDB0 -> 0x0020EDB8
*/
// Range: 0x20EDB0 -> 0x20EDB8
void xSurfaceExit() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x20EDB0 -> 0x20EDB8
    }
}

/*
    Compile unit: C:\SB\Core\x\xSurface.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020EDC0 -> 0x0020EF24
*/
// Range: 0x20EDC0 -> 0x20EF24
void xSurfaceInit(unsigned short num_surfs /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x20EDC0 -> 0x20EF24
        unsigned short i; // r6
    }
}

