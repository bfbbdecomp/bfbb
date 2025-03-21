/*
    Compile unit: C:\SB\Core\p2\iScrFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
static unsigned int sMotionBlurEnabled; // size: 0x4, address: 0x50F854
static class _iMotionBlurData sMBD; // size: 0x130, address: 0x5393A0
static class RxObjSpace3DVertex * Im3DBuffer; // size: 0x4, address: 0x50F858
static unsigned int Im3DBufferPos; // size: 0x4, address: 0x50F85C
unsigned int dplines; // size: 0x4, address: 0x0
signed int gNumDistortionParticles; // size: 0x4, address: 0x50FAE8
class tagiRenderInput gRenderBuffer; // size: 0x80, address: 0x538BD0
class DistortionParticle gDistortionParticles[100]; // size: 0x12C0, address: 0x5A3A40
__int128 * _rwDMAPktPtr; // size: 0x4, address: 0x50FC90
signed long skyAlpha_1; // size: 0x4, address: 0x50EB80
signed long skyClamp_1; // size: 0x4, address: 0x50EB70
class RwRect {
    // total size: 0x10
public:
    signed int x; // offset 0x0, size 0x4
    signed int y; // offset 0x4, size 0x4
    signed int w; // offset 0x8, size 0x4
    signed int h; // offset 0xC, size 0x4
};
class RwBBox {
    // total size: 0x18
public:
    class RwV3d sup; // offset 0x0, size 0xC
    class RwV3d inf; // offset 0xC, size 0xC
};
class RwRGBA {
    // total size: 0x4
public:
    unsigned char red; // offset 0x0, size 0x1
    unsigned char green; // offset 0x1, size 0x1
    unsigned char blue; // offset 0x2, size 0x1
    unsigned char alpha; // offset 0x3, size 0x1
};
class RwSky2DVertex {
    // total size: 0x40
public:
    class RwSky2DVertexAlignmentOverlay u; // offset 0x0, size 0x40
};
class RwV3d {
    // total size: 0xC
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
class DistortionParticle {
    // total size: 0x30
public:
    class xVec3 pos; // offset 0x0, size 0xC
    unsigned int flags; // offset 0xC, size 0x4
    class xVec3 dir; // offset 0x10, size 0xC
    float life; // offset 0x1C, size 0x4
    class xVec3 vel; // offset 0x20, size 0xC
    float death; // offset 0x2C, size 0x4
};
class RwCamera {
    // total size: 0x190
public:
    class RwObjectHasFrame object; // offset 0x0, size 0x14
    enum RwCameraProjection projectionType; // offset 0x14, size 0x4
    class RwCamera * (* beginUpdate)(class RwCamera *); // offset 0x18, size 0x4
    class RwCamera * (* endUpdate)(class RwCamera *); // offset 0x1C, size 0x4
    class RwMatrixTag viewMatrix; // offset 0x20, size 0x40
    class RwRaster * frameBuffer; // offset 0x60, size 0x4
    class RwRaster * zBuffer; // offset 0x64, size 0x4
    class RwV2d viewWindow; // offset 0x68, size 0x8
    class RwV2d recipViewWindow; // offset 0x70, size 0x8
    class RwV2d viewOffset; // offset 0x78, size 0x8
    float nearPlane; // offset 0x80, size 0x4
    float farPlane; // offset 0x84, size 0x4
    float fogPlane; // offset 0x88, size 0x4
    float zScale; // offset 0x8C, size 0x4
    float zShift; // offset 0x90, size 0x4
    class RwFrustumPlane frustumPlanes[6]; // offset 0x94, size 0x78
    class RwBBox frustumBoundBox; // offset 0x10C, size 0x18
    class RwV3d frustumCorners[8]; // offset 0x124, size 0x60
};
class xVec4 {
    // total size: 0x10
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
    float w; // offset 0xC, size 0x4
};
class xVec3 {
    // total size: 0xC
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
class RwMatrixTag {
    // total size: 0x40
public:
    class RwV3d right; // offset 0x0, size 0xC
    unsigned int flags; // offset 0xC, size 0x4
    class RwV3d up; // offset 0x10, size 0xC
    unsigned int pad1; // offset 0x1C, size 0x4
    class RwV3d at; // offset 0x20, size 0xC
    unsigned int pad2; // offset 0x2C, size 0x4
    class RwV3d pos; // offset 0x30, size 0xC
    unsigned int pad3; // offset 0x3C, size 0x4
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
class xMat4x3 : public xMat3x3 {
    // total size: 0x40
public:
    class xVec3 pos; // offset 0x30, size 0xC
    unsigned int pad3; // offset 0x3C, size 0x4
};
enum RwCameraProjection {
    rwNACAMERAPROJECTION = 0,
    rwPERSPECTIVE = 1,
    rwPARALLEL = 2,
    rwCAMERAPROJECTIONFORCEENUMSIZEINT = 2147483647,
};
class RxColorUnion {
    // total size: 0x4
public:
    union { // inferred
        class RwRGBA preLitColor; // offset 0x0, size 0x4
        class RwRGBA color; // offset 0x0, size 0x4
    };
};
class _iMotionBlurData {
    // total size: 0x130
public:
    signed int motionBlurAlpha; // offset 0x0, size 0x4
    class RwRaster * motionBlurFrontBuffer; // offset 0x4, size 0x4
    class RwSky2DVertex vertex[4]; // offset 0x10, size 0x100
    unsigned short index[6]; // offset 0x110, size 0xC
    unsigned int w; // offset 0x11C, size 0x4
    unsigned int h; // offset 0x120, size 0x4
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
class RwSky2DVertexFields {
    // total size: 0x40
public:
    class RwV3d scrVertex; // offset 0x0, size 0xC
    float camVertex_z; // offset 0xC, size 0x4
    float u; // offset 0x10, size 0x4
    float v; // offset 0x14, size 0x4
    float recipZ; // offset 0x18, size 0x4
    float pad1; // offset 0x1C, size 0x4
    class RwRGBAReal color; // offset 0x20, size 0x10
    class RwV3d objNormal; // offset 0x30, size 0xC
    float pad2; // offset 0x3C, size 0x4
};
class RwFrustumPlane {
    // total size: 0x14
public:
    class RwPlane plane; // offset 0x0, size 0x10
    unsigned char closestX; // offset 0x10, size 0x1
    unsigned char closestY; // offset 0x11, size 0x1
    unsigned char closestZ; // offset 0x12, size 0x1
    unsigned char pad; // offset 0x13, size 0x1
};
class RwPlane {
    // total size: 0x10
public:
    class RwV3d normal; // offset 0x0, size 0xC
    float distance; // offset 0xC, size 0x4
};
class RwRGBAReal {
    // total size: 0x10
public:
    float red; // offset 0x0, size 0x4
    float green; // offset 0x4, size 0x4
    float blue; // offset 0x8, size 0x4
    float alpha; // offset 0xC, size 0x4
};
class RwObjectHasFrame {
    // total size: 0x14
public:
    class RwObject object; // offset 0x0, size 0x8
    class RwLLLink lFrame; // offset 0x8, size 0x8
    class RwObjectHasFrame * (* sync)(class RwObjectHasFrame *); // offset 0x10, size 0x4
};
class RwSky2DVertexAlignmentOverlay {
    // total size: 0x40
public:
    union { // inferred
        class RwSky2DVertexFields els; // offset 0x0, size 0x40
        __int128 qWords[4]; // offset 0x0, size 0x40
    };
};
class RwV2d {
    // total size: 0x8
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
};
class tagiRenderInput {
    // total size: 0x80
public:
    unsigned short * m_index; // offset 0x0, size 0x4
    class RxObjSpace3DVertex * m_vertex; // offset 0x4, size 0x4
    float * m_vertexTZ; // offset 0x8, size 0x4
    unsigned int m_mode; // offset 0xC, size 0x4
    signed int m_vertexType; // offset 0x10, size 0x4
    signed int m_vertexTypeSize; // offset 0x14, size 0x4
    signed int m_indexCount; // offset 0x18, size 0x4
    signed int m_vertexCount; // offset 0x1C, size 0x4
    class xMat4x3 m_camViewMatrix; // offset 0x20, size 0x40
    class xVec4 m_camViewR; // offset 0x60, size 0x10
    class xVec4 m_camViewU; // offset 0x70, size 0x10
};

/*
    Compile unit: C:\SB\Core\p2\iScrFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001B69C0 -> 0x001B731C
*/
// Range: 0x1B69C0 -> 0x1B731C
void iScrFxDistortionRender(class RwCamera * camera /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1B69C0 -> 0x1B731C
        class xVec3 at; // r29+0x280
        class DistortionParticle * dp; // r20
        class RwMatrixTag * mat; // r29+0xF0
        class RwMatrixTag ptmat; // r29+0x180
        class RwMatrixTag tmp; // r29+0x140
        class RwMatrixTag invMtx; // r29+0x100
        class RwMatrixTag * matrix; // r2
        signed int i; // r19
        class RxObjSpace3DVertex * Im3DBuffer; // r18
        class RxObjSpace3DVertex * imv; // r18
        class xVec3 a; // r29+0x270
        class xVec3 b; // r29+0x260
        class xVec3 c; // r29+0x250
        class xVec3 d; // r29+0x240
        class xVec3 sa; // r29+0x230
        class xVec3 sb; // r29+0x220
        class xVec3 sc; // r29+0x210
        class xVec3 sd; // r29+0x200
        class xVec3 mmsa; // r29+0x1F0
        class xVec3 mmsb; // r29+0x1E0
        class xVec3 mmsc; // r29+0x1D0
        class xVec3 mmsd; // r29+0x1C0
    }
}

/*
    Compile unit: C:\SB\Core\p2\iScrFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001B7320 -> 0x001B7364
*/
// Range: 0x1B7320 -> 0x1B7364
signed int iScrFxCameraDestroyed() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1B7320 -> 0x1B7364
    }
}

/*
    Compile unit: C:\SB\Core\p2\iScrFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001B7370 -> 0x001B7480
*/
// Range: 0x1B7370 -> 0x1B7480
signed int iScrFxMotionBlurOpen(class RwCamera * camera /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1B7370 -> 0x1B7480
        class RwRect rect; // r29+0x20
    }
}

/*
    Compile unit: C:\SB\Core\p2\iScrFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001B7480 -> 0x001B78F8
*/
// Range: 0x1B7480 -> 0x1B78F8
static void iCameraOverlayRender(class RwRaster * ras /* r16 */, class RwRGBA col /* r29+0x2C */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1B7480 -> 0x1B78F8
        class RwRect rect; // r29+0x30
    }
}

/*
    Compile unit: C:\SB\Core\p2\iScrFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001B7900 -> 0x001B7AC4
*/
// Range: 0x1B7900 -> 0x1B7AC4
static void iScrFxMotionBlurCreateImmediateModeData(class RwCamera * camera /* r17 */, class RwRect * rect /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1B7900 -> 0x1B7AC4
        float w; // r22
        float h; // r21
        float xSize; // r3
        float U; // r24
        float V; // r23
        float u; // r20
        class RwSky2DVertex * ver; // r16
        float nearz; // r29+0x50
        float oocameraNearClipPlane; // r7
        float wstep; // r29+0x50
        float hstep; // r29+0x50
        float ustep; // r2
        float vstep; // r10
    }
}

/*
    Compile unit: C:\SB\Core\p2\iScrFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001B7AD0 -> 0x001B7B24
*/
// Range: 0x1B7AD0 -> 0x1B7B24
void iScrFxCameraEndScene(class RwCamera * pCamera /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1B7AD0 -> 0x1B7B24
    }
}

/*
    Compile unit: C:\SB\Core\p2\iScrFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001B7B30 -> 0x001B7B84
*/
// Range: 0x1B7B30 -> 0x1B7B84
void iScrFxCameraCreated(class RwCamera * pCamera /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1B7B30 -> 0x1B7B84
    }
}

/*
    Compile unit: C:\SB\Core\p2\iScrFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001B7B90 -> 0x001B7C10
*/
// Range: 0x1B7B90 -> 0x1B7C10
void iCameraSetBlurriness(float amount /* r29 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1B7B90 -> 0x1B7C10
    }
}

/*
    Compile unit: C:\SB\Core\p2\iScrFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001B7C10 -> 0x001B7C18
*/
// Range: 0x1B7C10 -> 0x1B7C18
void iCameraMotionBlurActivate(unsigned int activate /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1B7C10 -> 0x1B7C18
    }
}

/*
    Compile unit: C:\SB\Core\p2\iScrFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001B7C20 -> 0x001B7FBC
*/
// Range: 0x1B7C20 -> 0x1B7FBC
void iScrFxDrawBox(float x1 /* r29 */, float y1 /* r29 */, float x2 /* r29 */, float y2 /* r29 */, unsigned char red /* r2 */, unsigned char green /* r2 */, unsigned char blue /* r2 */, unsigned char alpha /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1B7C20 -> 0x1B7FBC
        unsigned short indices[4]; // @ 0x0050E7F8
        class RwSky2DVertex v[4]; // @ 0x005392A0
    }
}

/*
    Compile unit: C:\SB\Core\p2\iScrFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001B7FC0 -> 0x001B8028
*/
// Range: 0x1B7FC0 -> 0x1B8028
void iScrFxEnd() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1B7FC0 -> 0x1B8028
    }
}

/*
    Compile unit: C:\SB\Core\p2\iScrFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001B8030 -> 0x001B80A4
*/
// Range: 0x1B8030 -> 0x1B80A4
void iScrFxBegin() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1B8030 -> 0x1B80A4
    }
}

/*
    Compile unit: C:\SB\Core\p2\iScrFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001B80B0 -> 0x001B80B8
*/
// Range: 0x1B80B0 -> 0x1B80B8
void iScrFxInit() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1B80B0 -> 0x1B80B8
    }
}

