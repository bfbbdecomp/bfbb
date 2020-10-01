typedef struct RwRect;
typedef struct RwBBox;
typedef struct RwRGBA;
typedef struct RwSky2DVertex;
typedef struct RwV3d;
typedef struct DistortionParticle;
typedef struct RwCamera;
typedef struct xVec4;
typedef struct xVec3;
typedef struct RwMatrixTag;
typedef struct RwRaster;
typedef struct xMat4x3;
typedef enum RwCameraProjection;
typedef union RxColorUnion;
typedef struct _iMotionBlurData;
typedef struct RxObjSpace3DVertex;
typedef struct xMat3x3;
typedef struct RwObject;
typedef struct RwLLLink;
typedef struct RwSky2DVertexFields;
typedef struct RwFrustumPlane;
typedef struct RwPlane;
typedef struct RwRGBAReal;
typedef struct RwObjectHasFrame;
typedef union RwSky2DVertexAlignmentOverlay;
typedef struct RwV2d;
typedef struct tagiRenderInput;

typedef RwCamera*(*type_6)(RwCamera*);
typedef RwCamera*(*type_7)(RwCamera*);
typedef RwObjectHasFrame*(*type_8)(RwObjectHasFrame*);

typedef RwFrustumPlane type_0[6];
typedef RwV3d type_1[8];
typedef RwSky2DVertex type_2[4];
typedef u16 type_3[4];
typedef RwSky2DVertex type_4[4];
typedef u16 type_5[6];
typedef <unknown type (0xa510)> type_9[4];
typedef DistortionParticle type_10[100];

struct RwRect
{
	s32 x;
	s32 y;
	s32 w;
	s32 h;
};

struct RwBBox
{
	RwV3d sup;
	RwV3d inf;
};

struct RwRGBA
{
	u8 red;
	u8 green;
	u8 blue;
	u8 alpha;
};

struct RwSky2DVertex
{
	RwSky2DVertexAlignmentOverlay u;
};

struct RwV3d
{
	f32 x;
	f32 y;
	f32 z;
};

struct DistortionParticle
{
	xVec3 pos;
	u32 flags;
	xVec3 dir;
	f32 life;
	xVec3 vel;
	f32 death;
};

struct RwCamera
{
	RwObjectHasFrame object;
	RwCameraProjection projectionType;
	type_6 beginUpdate;
	type_7 endUpdate;
	RwMatrixTag viewMatrix;
	RwRaster* frameBuffer;
	RwRaster* zBuffer;
	RwV2d viewWindow;
	RwV2d recipViewWindow;
	RwV2d viewOffset;
	f32 nearPlane;
	f32 farPlane;
	f32 fogPlane;
	f32 zScale;
	f32 zShift;
	type_0 frustumPlanes;
	RwBBox frustumBoundBox;
	type_1 frustumCorners;
};

struct xVec4
{
	f32 x;
	f32 y;
	f32 z;
	f32 w;
};

struct xVec3
{
	f32 x;
	f32 y;
	f32 z;
};

struct RwMatrixTag
{
	RwV3d right;
	u32 flags;
	RwV3d up;
	u32 pad1;
	RwV3d at;
	u32 pad2;
	RwV3d pos;
	u32 pad3;
};

struct RwRaster
{
	RwRaster* parent;
	u8* cpPixels;
	u8* palette;
	s32 width;
	s32 height;
	s32 depth;
	s32 stride;
	s16 nOffsetX;
	s16 nOffsetY;
	u8 cType;
	u8 cFlags;
	u8 privateFlags;
	u8 cFormat;
	u8* originalPixels;
	s32 originalWidth;
	s32 originalHeight;
	s32 originalStride;
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	u32 pad3;
};

enum RwCameraProjection
{
	rwNACAMERAPROJECTION,
	rwPERSPECTIVE,
	rwPARALLEL,
	rwCAMERAPROJECTIONFORCEENUMSIZEINT = 0x7fffffff
};

union RxColorUnion
{
	RwRGBA preLitColor;
	RwRGBA color;
};

struct _iMotionBlurData
{
	s32 motionBlurAlpha;
	RwRaster* motionBlurFrontBuffer;
	type_4 vertex;
	type_5 index;
	u32 w;
	u32 h;
};

struct RxObjSpace3DVertex
{
	RwV3d objVertex;
	RxColorUnion c;
	RwV3d objNormal;
	f32 u;
	f32 v;
};

struct xMat3x3
{
	xVec3 right;
	s32 flags;
	xVec3 up;
	u32 pad1;
	xVec3 at;
	u32 pad2;
};

struct RwObject
{
	u8 type;
	u8 subType;
	u8 flags;
	u8 privateFlags;
	void* parent;
};

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
};

struct RwSky2DVertexFields
{
	RwV3d scrVertex;
	f32 camVertex_z;
	f32 u;
	f32 v;
	f32 recipZ;
	f32 pad1;
	RwRGBAReal color;
	RwV3d objNormal;
	f32 pad2;
};

struct RwFrustumPlane
{
	RwPlane plane;
	u8 closestX;
	u8 closestY;
	u8 closestZ;
	u8 pad;
};

struct RwPlane
{
	RwV3d normal;
	f32 distance;
};

struct RwRGBAReal
{
	f32 red;
	f32 green;
	f32 blue;
	f32 alpha;
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	type_8 sync;
};

union RwSky2DVertexAlignmentOverlay
{
	RwSky2DVertexFields els;
	type_9 qWords;
};

struct RwV2d
{
	f32 x;
	f32 y;
};

struct tagiRenderInput
{
	u16* m_index;
	RxObjSpace3DVertex* m_vertex;
	f32* m_vertexTZ;
	u32 m_mode;
	s32 m_vertexType;
	s32 m_vertexTypeSize;
	s32 m_indexCount;
	s32 m_vertexCount;
	xMat4x3 m_camViewMatrix;
	xVec4 m_camViewR;
	xVec4 m_camViewU;
};

u32 sMotionBlurEnabled;
_iMotionBlurData sMBD;
RxObjSpace3DVertex* Im3DBuffer;
u32 Im3DBufferPos;
u32 dplines;
s32 gNumDistortionParticles;
tagiRenderInput gRenderBuffer;
type_10 gDistortionParticles;
<unknown type (0xa510)>* _rwDMAPktPtr;
s32 skyAlpha_1;
s32 skyClamp_1;

void iScrFxDistortionRender(RwCamera* camera);
s32 iScrFxCameraDestroyed();
s32 iScrFxMotionBlurOpen(RwCamera* camera);
void iCameraOverlayRender(RwRaster* ras, RwRGBA col);
void iScrFxMotionBlurCreateImmediateModeData(RwCamera* camera, RwRect* rect);
void iScrFxCameraEndScene(RwCamera* pCamera);
void iScrFxCameraCreated(RwCamera* pCamera);
void iCameraSetBlurriness(f32 amount);
void iCameraMotionBlurActivate(u32 activate);
void iScrFxDrawBox(f32 x1, f32 y1, f32 x2, f32 y2, u8 red, u8 green, u8 blue, u8 alpha);
void iScrFxEnd();
void iScrFxBegin();
void iScrFxInit();

// iScrFxDistortionRender__FP8RwCamera
// Start address: 0x1b69c0
void iScrFxDistortionRender(RwCamera* camera)
{
	xVec3 at;
	DistortionParticle* dp;
	RwMatrixTag* mat;
	RwMatrixTag ptmat;
	RwMatrixTag tmp;
	RwMatrixTag invMtx;
	RwMatrixTag* matrix;
	s32 i;
	RxObjSpace3DVertex* Im3DBuffer;
	RxObjSpace3DVertex* imv;
	xVec3 a;
	xVec3 b;
	xVec3 c;
	xVec3 d;
	xVec3 sa;
	xVec3 sb;
	xVec3 sc;
	xVec3 sd;
	xVec3 mmsa;
	xVec3 mmsb;
	xVec3 mmsc;
	xVec3 mmsd;
}

// iScrFxCameraDestroyed__FP8RwCamera
// Start address: 0x1b7320
s32 iScrFxCameraDestroyed()
{
}

// iScrFxMotionBlurOpen__FP8RwCamera
// Start address: 0x1b7370
s32 iScrFxMotionBlurOpen(RwCamera* camera)
{
	RwRect rect;
}

// iCameraOverlayRender__FP8RwCameraP8RwRaster6RwRGBA
// Start address: 0x1b7480
void iCameraOverlayRender(RwRaster* ras, RwRGBA col)
{
	RwRect rect;
}

// iScrFxMotionBlurCreateImmediateModeData__FP8RwCameraP6RwRect
// Start address: 0x1b7900
void iScrFxMotionBlurCreateImmediateModeData(RwCamera* camera, RwRect* rect)
{
	f32 w;
	f32 h;
	f32 xSize;
	f32 U;
	f32 V;
	f32 u;
	RwSky2DVertex* ver;
	f32 nearz;
	f32 oocameraNearClipPlane;
	f32 wstep;
	f32 hstep;
	f32 ustep;
	f32 vstep;
}

// iScrFxCameraEndScene__FP8RwCamera
// Start address: 0x1b7ad0
void iScrFxCameraEndScene(RwCamera* pCamera)
{
}

// iScrFxCameraCreated__FP8RwCamera
// Start address: 0x1b7b30
void iScrFxCameraCreated(RwCamera* pCamera)
{
}

// iCameraSetBlurriness__Ff
// Start address: 0x1b7b90
void iCameraSetBlurriness(f32 amount)
{
}

// iCameraMotionBlurActivate__FUi
// Start address: 0x1b7c10
void iCameraMotionBlurActivate(u32 activate)
{
}

// iScrFxDrawBox__FffffUcUcUcUc
// Start address: 0x1b7c20
void iScrFxDrawBox(f32 x1, f32 y1, f32 x2, f32 y2, u8 red, u8 green, u8 blue, u8 alpha)
{
	type_3 indices;
	type_2 v;
}

// iScrFxEnd__Fv
// Start address: 0x1b7fc0
void iScrFxEnd()
{
}

// iScrFxBegin__Fv
// Start address: 0x1b8030
void iScrFxBegin()
{
}

// iScrFxInit__Fv
// Start address: 0x1b80b0
void iScrFxInit()
{
}

