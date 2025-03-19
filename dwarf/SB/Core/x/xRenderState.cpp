/*
    Compile unit: C:\SB\Core\x\xRenderState.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
char buffer[16]; // size: 0x10, address: 0x0
char buffer[16]; // size: 0x10, address: 0x0
static signed int sBlendTable[11]; // size: 0x2C, address: 0x4DFA00
class RwTexture {
    // total size: 0x58
public:
    class RwRaster * raster; // offset 0x0, size 0x4
    class RwTexDictionary * dict; // offset 0x4, size 0x4
    class RwLLLink lInDictionary; // offset 0x8, size 0x8
    char name[32]; // offset 0x10, size 0x20
    char mask[32]; // offset 0x30, size 0x20
    unsigned int filterAddressing; // offset 0x50, size 0x4
    signed int refCount; // offset 0x54, size 0x4
};
class RwLinkList {
    // total size: 0x8
public:
    class RwLLLink link; // offset 0x0, size 0x8
};
class RwRaster {
    // total size: 0x34
public:
    class RwRaster * parent; // offset 0x0, size 0x4
    unsigned char * cpPixels; // offset 0x4, size 0x4
    unsigned char * palette; // offset 0x8, size 0x4
    signed int width; // offset 0xC, size 0x4
    signed int height; // offset 0x10, size 0x4
    signed int depth; // offset 0x14, size 0x4
    signed int stride; // offset 0x18, size 0x4
    signed short nOffsetX; // offset 0x1C, size 0x2
    signed short nOffsetY; // offset 0x1E, size 0x2
    unsigned char cType; // offset 0x20, size 0x1
    unsigned char cFlags; // offset 0x21, size 0x1
    unsigned char privateFlags; // offset 0x22, size 0x1
    unsigned char cFormat; // offset 0x23, size 0x1
    unsigned char * originalPixels; // offset 0x24, size 0x4
    signed int originalWidth; // offset 0x28, size 0x4
    signed int originalHeight; // offset 0x2C, size 0x4
    signed int originalStride; // offset 0x30, size 0x4
};
class RwTexDictionary {
    // total size: 0x18
public:
    class RwObject object; // offset 0x0, size 0x8
    class RwLinkList texturesInDict; // offset 0x8, size 0x8
    class RwLLLink lInInstance; // offset 0x10, size 0x8
};
class RwObject {
    // total size: 0x8
public:
    unsigned char type; // offset 0x0, size 0x1
    unsigned char subType; // offset 0x1, size 0x1
    unsigned char flags; // offset 0x2, size 0x1
    unsigned char privateFlags; // offset 0x3, size 0x1
    void * parent; // offset 0x4, size 0x4
};
class RwLLLink {
    // total size: 0x8
public:
    class RwLLLink * next; // offset 0x0, size 0x4
    class RwLLLink * prev; // offset 0x4, size 0x4
};

/*
    Compile unit: C:\SB\Core\x\xRenderState.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00301890 -> 0x003018AC
*/
// Range: 0x301890 -> 0x3018AC
void xRenderStateSetDstBlendMode(signed int xmode /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x301890 -> 0x3018AC
    }
}

/*
    Compile unit: C:\SB\Core\x\xRenderState.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003018B0 -> 0x003018CC
*/
// Range: 0x3018B0 -> 0x3018CC
void xRenderStateSetSrcBlendMode(signed int xmode /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3018B0 -> 0x3018CC
    }
}

/*
    Compile unit: C:\SB\Core\x\xRenderState.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003018D0 -> 0x00301914
*/
// Range: 0x3018D0 -> 0x301914
void xRenderStateSetTexture(class RwTexture * texture /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3018D0 -> 0x301914
        class RwRaster * raster; // r2
    }
}

