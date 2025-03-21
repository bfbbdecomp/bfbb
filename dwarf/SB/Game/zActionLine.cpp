/*
    Compile unit: C:\SB\Game\zActionLine.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
char buffer[16]; // size: 0x10, address: 0x0
char buffer[16]; // size: 0x10, address: 0x0
static class _tagActionLine * sActionLine[8]; // size: 0x20, address: 0x532730
static class RwRaster * sActionLineRaster; // size: 0x4, address: 0x50F790
unsigned int gActiveHeap; // size: 0x4, address: 0x50FA44
class RwRGBA {
    // total size: 0x4
public:
    unsigned char red; // offset 0x0, size 0x1
    unsigned char green; // offset 0x1, size 0x1
    unsigned char blue; // offset 0x2, size 0x1
    unsigned char alpha; // offset 0x3, size 0x1
};
class RwV3d {
    // total size: 0xC
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
class _tagActionLine {
    // total size: 0x38
public:
    unsigned int flags; // offset 0x0, size 0x4
    class xVec3 pos[4]; // offset 0x4, size 0x30
    float time_left; // offset 0x34, size 0x4
};
class xVec3 {
    // total size: 0xC
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
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
class RxColorUnion {
    // total size: 0x4
public:
    union { // inferred
        class RwRGBA preLitColor; // offset 0x0, size 0x4
        class RwRGBA color; // offset 0x0, size 0x4
    };
};
class RxObjSpace3DVertex {
    // total size: 0x24
public:
    class RwV3d objVertex; // offset 0x0, size 0xC
    class RxColorUnion c; // offset 0xC, size 0x4
    class RwV3d objNormal; // offset 0x10, size 0xC
    float u; // offset 0x1C, size 0x4
    float v; // offset 0x20, size 0x4
};
class RwTexDictionary {
    // total size: 0x18
public:
    class RwObject object; // offset 0x0, size 0x8
    class RwLinkList texturesInDict; // offset 0x8, size 0x8
    class RwLLLink lInInstance; // offset 0x10, size 0x8
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
class RwLinkList {
    // total size: 0x8
public:
    class RwLLLink link; // offset 0x0, size 0x8
};

/*
    Compile unit: C:\SB\Game\zActionLine.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A41D0 -> 0x001A4244
*/
// Range: 0x1A41D0 -> 0x1A4244
void zActionLineRender() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1A41D0 -> 0x1A4244
        signed int i; // r17
    }
}

/*
    Compile unit: C:\SB\Game\zActionLine.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A4250 -> 0x001A430C
*/
// Range: 0x1A4250 -> 0x1A430C
static void RenderActionLine(class _tagActionLine * l /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1A4250 -> 0x1A430C
        class RxObjSpace3DVertex * vert; // r7
        signed int i; // r6
        class RwRGBA * _col; // r2
        class RxObjSpace3DVertex sStripVert[4]; // @ 0x00532750
    }
}

/*
    Compile unit: C:\SB\Game\zActionLine.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A4310 -> 0x001A4380
*/
// Range: 0x1A4310 -> 0x1A4380
void zActionLineUpdate(float seconds /* r29 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1A4310 -> 0x1A4380
        signed int i; // r7
        class _tagActionLine * l; // r6
    }
}

/*
    Compile unit: C:\SB\Game\zActionLine.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A4380 -> 0x001A4404
*/
// Range: 0x1A4380 -> 0x1A4404
void zActionLineInit() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1A4380 -> 0x1A4404
        class RwTexture * tex; // r2
    }
}

