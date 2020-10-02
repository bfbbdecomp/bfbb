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
typedef uint16 type_3[4];
typedef RwSky2DVertex type_4[4];
typedef uint16 type_5[6];
typedef <unknown type (0xa510)> type_9[4];
typedef DistortionParticle type_10[100];

struct RwRect
{
	int32 x;
	int32 y;
	int32 w;
	int32 h;
};

struct RwBBox
{
	RwV3d sup;
	RwV3d inf;
};

struct RwRGBA
{
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
};

struct RwSky2DVertex
{
	RwSky2DVertexAlignmentOverlay u;
};

struct RwV3d
{
	float32 x;
	float32 y;
	float32 z;
};

struct DistortionParticle
{
	xVec3 pos;
	uint32 flags;
	xVec3 dir;
	float32 life;
	xVec3 vel;
	float32 death;
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
	float32 nearPlane;
	float32 farPlane;
	float32 fogPlane;
	float32 zScale;
	float32 zShift;
	type_0 frustumPlanes;
	RwBBox frustumBoundBox;
	type_1 frustumCorners;
};

struct xVec4
{
	float32 x;
	float32 y;
	float32 z;
	float32 w;
};

struct xVec3
{
	float32 x;
	float32 y;
	float32 z;
};

struct RwMatrixTag
{
	RwV3d right;
	uint32 flags;
	RwV3d up;
	uint32 pad1;
	RwV3d at;
	uint32 pad2;
	RwV3d pos;
	uint32 pad3;
};

struct RwRaster
{
	RwRaster* parent;
	uint8* cpPixels;
	uint8* palette;
	int32 width;
	int32 height;
	int32 depth;
	int32 stride;
	int16 nOffsetX;
	int16 nOffsetY;
	uint8 cType;
	uint8 cFlags;
	uint8 privateFlags;
	uint8 cFormat;
	uint8* originalPixels;
	int32 originalWidth;
	int32 originalHeight;
	int32 originalStride;
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	uint32 pad3;
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
	int32 motionBlurAlpha;
	RwRaster* motionBlurFrontBuffer;
	type_4 vertex;
	type_5 index;
	uint32 w;
	uint32 h;
};

struct RxObjSpace3DVertex
{
	RwV3d objVertex;
	RxColorUnion c;
	RwV3d objNormal;
	float32 u;
	float32 v;
};

struct xMat3x3
{
	xVec3 right;
	int32 flags;
	xVec3 up;
	uint32 pad1;
	xVec3 at;
	uint32 pad2;
};

struct RwObject
{
	uint8 type;
	uint8 subType;
	uint8 flags;
	uint8 privateFlags;
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
	float32 camVertex_z;
	float32 u;
	float32 v;
	float32 recipZ;
	float32 pad1;
	RwRGBAReal color;
	RwV3d objNormal;
	float32 pad2;
};

struct RwFrustumPlane
{
	RwPlane plane;
	uint8 closestX;
	uint8 closestY;
	uint8 closestZ;
	uint8 pad;
};

struct RwPlane
{
	RwV3d normal;
	float32 distance;
};

struct RwRGBAReal
{
	float32 red;
	float32 green;
	float32 blue;
	float32 alpha;
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
	float32 x;
	float32 y;
};

struct tagiRenderInput
{
	uint16* m_index;
	RxObjSpace3DVertex* m_vertex;
	float32* m_vertexTZ;
	uint32 m_mode;
	int32 m_vertexType;
	int32 m_vertexTypeSize;
	int32 m_indexCount;
	int32 m_vertexCount;
	xMat4x3 m_camViewMatrix;
	xVec4 m_camViewR;
	xVec4 m_camViewU;
};

uint32 sMotionBlurEnabled;
_iMotionBlurData sMBD;
RxObjSpace3DVertex* Im3DBuffer;
uint32 Im3DBufferPos;
uint32 dplines;
int32 gNumDistortionParticles;
tagiRenderInput gRenderBuffer;
type_10 gDistortionParticles;
<unknown type (0xa510)>* _rwDMAPktPtr;
long32 skyAlpha_1;
long32 skyClamp_1;

void iScrFxDistortionRender(RwCamera* camera);
int32 iScrFxCameraDestroyed();
int32 iScrFxMotionBlurOpen(RwCamera* camera);
void iCameraOverlayRender(RwRaster* ras, RwRGBA col);
void iScrFxMotionBlurCreateImmediateModeData(RwCamera* camera, RwRect* rect);
void iScrFxCameraEndScene(RwCamera* pCamera);
void iScrFxCameraCreated(RwCamera* pCamera);
void iCameraSetBlurriness(float32 amount);
void iCameraMotionBlurActivate(uint32 activate);
void iScrFxDrawBox(float32 x1, float32 y1, float32 x2, float32 y2, uint8 red, uint8 green, uint8 blue, uint8 alpha);
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
	int32 i;
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
int32 iScrFxCameraDestroyed()
{
}

// iScrFxMotionBlurOpen__FP8RwCamera
// Start address: 0x1b7370
int32 iScrFxMotionBlurOpen(RwCamera* camera)
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
	float32 w;
	float32 h;
	float32 xSize;
	float32 U;
	float32 V;
	float32 u;
	RwSky2DVertex* ver;
	float32 nearz;
	float32 oocameraNearClipPlane;
	float32 wstep;
	float32 hstep;
	float32 ustep;
	float32 vstep;
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
void iCameraSetBlurriness(float32 amount)
{
}

// iCameraMotionBlurActivate__FUi
// Start address: 0x1b7c10
void iCameraMotionBlurActivate(uint32 activate)
{
}

// iScrFxDrawBox__FffffUcUcUcUc
// Start address: 0x1b7c20
void iScrFxDrawBox(float32 x1, float32 y1, float32 x2, float32 y2, uint8 red, uint8 green, uint8 blue, uint8 alpha)
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

