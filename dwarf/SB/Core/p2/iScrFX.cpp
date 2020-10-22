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
typedef struct RxColorUnion;
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
typedef struct RwSky2DVertexAlignmentOverlay;
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
typedef <unknown fundamental type (0xa510)> type_9[4];
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
	RwCamera*(*beginUpdate)(RwCamera*);
	RwCamera*(*endUpdate)(RwCamera*);
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
	RwFrustumPlane frustumPlanes[6];
	RwBBox frustumBoundBox;
	RwV3d frustumCorners[8];
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

struct RxColorUnion
{
	union
	{
		RwRGBA preLitColor;
		RwRGBA color;
	};
};

struct _iMotionBlurData
{
	int32 motionBlurAlpha;
	RwRaster* motionBlurFrontBuffer;
	RwSky2DVertex vertex[4];
	uint16 index[6];
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
	RwObjectHasFrame*(*sync)(RwObjectHasFrame*);
};

struct RwSky2DVertexAlignmentOverlay
{
	union
	{
		RwSky2DVertexFields els;
		<unknown fundamental type (0xa510)> qWords[4];
	};
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
DistortionParticle gDistortionParticles[100];
<unknown fundamental type (0xa510)>* _rwDMAPktPtr;
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
	// Line 829, Address: 0x1b69c0, Func Offset: 0
	// Line 832, Address: 0x1b69e0, Func Offset: 0x20
	// Line 829, Address: 0x1b69e4, Func Offset: 0x24
	// Line 837, Address: 0x1b69f8, Func Offset: 0x38
	// Line 841, Address: 0x1b6a08, Func Offset: 0x48
	// Line 842, Address: 0x1b6a5c, Func Offset: 0x9c
	// Line 843, Address: 0x1b6a64, Func Offset: 0xa4
	// Line 845, Address: 0x1b6a70, Func Offset: 0xb0
	// Line 846, Address: 0x1b6ab0, Func Offset: 0xf0
	// Line 849, Address: 0x1b6abc, Func Offset: 0xfc
	// Line 851, Address: 0x1b6ac8, Func Offset: 0x108
	// Line 854, Address: 0x1b6adc, Func Offset: 0x11c
	// Line 855, Address: 0x1b6ae4, Func Offset: 0x124
	// Line 856, Address: 0x1b6aec, Func Offset: 0x12c
	// Line 858, Address: 0x1b6af0, Func Offset: 0x130
	// Line 859, Address: 0x1b6af4, Func Offset: 0x134
	// Line 866, Address: 0x1b6af8, Func Offset: 0x138
	// Line 867, Address: 0x1b6afc, Func Offset: 0x13c
	// Line 861, Address: 0x1b6b00, Func Offset: 0x140
	// Line 866, Address: 0x1b6b04, Func Offset: 0x144
	// Line 867, Address: 0x1b6b08, Func Offset: 0x148
	// Line 866, Address: 0x1b6b0c, Func Offset: 0x14c
	// Line 861, Address: 0x1b6b10, Func Offset: 0x150
	// Line 866, Address: 0x1b6b20, Func Offset: 0x160
	// Line 867, Address: 0x1b6b54, Func Offset: 0x194
	// Line 924, Address: 0x1b6b60, Func Offset: 0x1a0
	// Line 867, Address: 0x1b6b64, Func Offset: 0x1a4
	// Line 924, Address: 0x1b6b68, Func Offset: 0x1a8
	// Line 867, Address: 0x1b6b6c, Func Offset: 0x1ac
	// Line 924, Address: 0x1b6b70, Func Offset: 0x1b0
	// Line 867, Address: 0x1b6b74, Func Offset: 0x1b4
	// Line 869, Address: 0x1b6b78, Func Offset: 0x1b8
	// Line 873, Address: 0x1b6b80, Func Offset: 0x1c0
	// Line 874, Address: 0x1b6b84, Func Offset: 0x1c4
	// Line 867, Address: 0x1b6b8c, Func Offset: 0x1cc
	// Line 869, Address: 0x1b6b94, Func Offset: 0x1d4
	// Line 877, Address: 0x1b6b98, Func Offset: 0x1d8
	// Line 869, Address: 0x1b6b9c, Func Offset: 0x1dc
	// Line 873, Address: 0x1b6bac, Func Offset: 0x1ec
	// Line 869, Address: 0x1b6bb4, Func Offset: 0x1f4
	// Line 875, Address: 0x1b6bb8, Func Offset: 0x1f8
	// Line 873, Address: 0x1b6bbc, Func Offset: 0x1fc
	// Line 875, Address: 0x1b6bc4, Func Offset: 0x204
	// Line 873, Address: 0x1b6bc8, Func Offset: 0x208
	// Line 874, Address: 0x1b6bcc, Func Offset: 0x20c
	// Line 875, Address: 0x1b6bd4, Func Offset: 0x214
	// Line 874, Address: 0x1b6bd8, Func Offset: 0x218
	// Line 875, Address: 0x1b6c0c, Func Offset: 0x24c
	// Line 877, Address: 0x1b6c30, Func Offset: 0x270
	// Line 879, Address: 0x1b6c58, Func Offset: 0x298
	// Line 881, Address: 0x1b6c90, Func Offset: 0x2d0
	// Line 882, Address: 0x1b6cc8, Func Offset: 0x308
	// Line 892, Address: 0x1b6cf4, Func Offset: 0x334
	// Line 893, Address: 0x1b6cf8, Func Offset: 0x338
	// Line 892, Address: 0x1b6cfc, Func Offset: 0x33c
	// Line 893, Address: 0x1b6d10, Func Offset: 0x350
	// Line 894, Address: 0x1b6d24, Func Offset: 0x364
	// Line 893, Address: 0x1b6d28, Func Offset: 0x368
	// Line 894, Address: 0x1b6d30, Func Offset: 0x370
	// Line 895, Address: 0x1b6d44, Func Offset: 0x384
	// Line 894, Address: 0x1b6d48, Func Offset: 0x388
	// Line 895, Address: 0x1b6d50, Func Offset: 0x390
	// Line 896, Address: 0x1b6d64, Func Offset: 0x3a4
	// Line 895, Address: 0x1b6d68, Func Offset: 0x3a8
	// Line 896, Address: 0x1b6d70, Func Offset: 0x3b0
	// Line 897, Address: 0x1b6d84, Func Offset: 0x3c4
	// Line 896, Address: 0x1b6d88, Func Offset: 0x3c8
	// Line 897, Address: 0x1b6d90, Func Offset: 0x3d0
	// Line 923, Address: 0x1b6da4, Func Offset: 0x3e4
	// Line 897, Address: 0x1b6da8, Func Offset: 0x3e8
	// Line 923, Address: 0x1b6db0, Func Offset: 0x3f0
	// Line 924, Address: 0x1b6dcc, Func Offset: 0x40c
	// Line 925, Address: 0x1b6dd4, Func Offset: 0x414
	// Line 926, Address: 0x1b6dd8, Func Offset: 0x418
	// Line 925, Address: 0x1b6ddc, Func Offset: 0x41c
	// Line 926, Address: 0x1b6de0, Func Offset: 0x420
	// Line 925, Address: 0x1b6dec, Func Offset: 0x42c
	// Line 926, Address: 0x1b6e08, Func Offset: 0x448
	// Line 927, Address: 0x1b6e14, Func Offset: 0x454
	// Line 930, Address: 0x1b6e28, Func Offset: 0x468
	// Line 931, Address: 0x1b6e30, Func Offset: 0x470
	// Line 932, Address: 0x1b6e6c, Func Offset: 0x4ac
	// Line 935, Address: 0x1b6ea8, Func Offset: 0x4e8
	// Line 939, Address: 0x1b6eb0, Func Offset: 0x4f0
	// Line 935, Address: 0x1b6eb4, Func Offset: 0x4f4
	// Line 939, Address: 0x1b6eb8, Func Offset: 0x4f8
	// Line 935, Address: 0x1b6ebc, Func Offset: 0x4fc
	// Line 939, Address: 0x1b6ec0, Func Offset: 0x500
	// Line 935, Address: 0x1b6ec4, Func Offset: 0x504
	// Line 936, Address: 0x1b6eec, Func Offset: 0x52c
	// Line 935, Address: 0x1b6ef0, Func Offset: 0x530
	// Line 936, Address: 0x1b6f00, Func Offset: 0x540
	// Line 938, Address: 0x1b6f2c, Func Offset: 0x56c
	// Line 936, Address: 0x1b6f30, Func Offset: 0x570
	// Line 938, Address: 0x1b6f40, Func Offset: 0x580
	// Line 939, Address: 0x1b6f64, Func Offset: 0x5a4
	// Line 940, Address: 0x1b6f6c, Func Offset: 0x5ac
	// Line 941, Address: 0x1b6f70, Func Offset: 0x5b0
	// Line 940, Address: 0x1b6f74, Func Offset: 0x5b4
	// Line 941, Address: 0x1b6f78, Func Offset: 0x5b8
	// Line 940, Address: 0x1b6f84, Func Offset: 0x5c4
	// Line 941, Address: 0x1b6fa0, Func Offset: 0x5e0
	// Line 942, Address: 0x1b6fac, Func Offset: 0x5ec
	// Line 944, Address: 0x1b6fc0, Func Offset: 0x600
	// Line 948, Address: 0x1b6fc4, Func Offset: 0x604
	// Line 944, Address: 0x1b6fc8, Func Offset: 0x608
	// Line 948, Address: 0x1b6fcc, Func Offset: 0x60c
	// Line 944, Address: 0x1b6fd0, Func Offset: 0x610
	// Line 948, Address: 0x1b6fd4, Func Offset: 0x614
	// Line 944, Address: 0x1b6fd8, Func Offset: 0x618
	// Line 945, Address: 0x1b7000, Func Offset: 0x640
	// Line 944, Address: 0x1b7004, Func Offset: 0x644
	// Line 945, Address: 0x1b7014, Func Offset: 0x654
	// Line 947, Address: 0x1b7058, Func Offset: 0x698
	// Line 948, Address: 0x1b7080, Func Offset: 0x6c0
	// Line 949, Address: 0x1b7088, Func Offset: 0x6c8
	// Line 950, Address: 0x1b708c, Func Offset: 0x6cc
	// Line 949, Address: 0x1b7090, Func Offset: 0x6d0
	// Line 950, Address: 0x1b7094, Func Offset: 0x6d4
	// Line 949, Address: 0x1b70a0, Func Offset: 0x6e0
	// Line 950, Address: 0x1b70bc, Func Offset: 0x6fc
	// Line 951, Address: 0x1b70c8, Func Offset: 0x708
	// Line 953, Address: 0x1b70dc, Func Offset: 0x71c
	// Line 957, Address: 0x1b70e0, Func Offset: 0x720
	// Line 953, Address: 0x1b70e4, Func Offset: 0x724
	// Line 957, Address: 0x1b70e8, Func Offset: 0x728
	// Line 953, Address: 0x1b70ec, Func Offset: 0x72c
	// Line 957, Address: 0x1b70f0, Func Offset: 0x730
	// Line 953, Address: 0x1b70f4, Func Offset: 0x734
	// Line 954, Address: 0x1b711c, Func Offset: 0x75c
	// Line 953, Address: 0x1b7120, Func Offset: 0x760
	// Line 954, Address: 0x1b7130, Func Offset: 0x770
	// Line 956, Address: 0x1b7174, Func Offset: 0x7b4
	// Line 957, Address: 0x1b719c, Func Offset: 0x7dc
	// Line 958, Address: 0x1b71a4, Func Offset: 0x7e4
	// Line 959, Address: 0x1b71a8, Func Offset: 0x7e8
	// Line 958, Address: 0x1b71ac, Func Offset: 0x7ec
	// Line 959, Address: 0x1b71b0, Func Offset: 0x7f0
	// Line 958, Address: 0x1b71bc, Func Offset: 0x7fc
	// Line 959, Address: 0x1b71dc, Func Offset: 0x81c
	// Line 960, Address: 0x1b71ec, Func Offset: 0x82c
	// Line 962, Address: 0x1b7200, Func Offset: 0x840
	// Line 963, Address: 0x1b7248, Func Offset: 0x888
	// Line 1005, Address: 0x1b7290, Func Offset: 0x8d0
	// Line 1008, Address: 0x1b72ac, Func Offset: 0x8ec
	// Line 1010, Address: 0x1b72b4, Func Offset: 0x8f4
	// Line 1013, Address: 0x1b72cc, Func Offset: 0x90c
	// Line 1014, Address: 0x1b72d4, Func Offset: 0x914
	// Line 1015, Address: 0x1b72dc, Func Offset: 0x91c
	// Line 1017, Address: 0x1b72e0, Func Offset: 0x920
	// Line 1018, Address: 0x1b72e4, Func Offset: 0x924
	// Line 1019, Address: 0x1b72e8, Func Offset: 0x928
	// Func End, Address: 0x1b731c, Func Offset: 0x95c
}

// iScrFxCameraDestroyed__FP8RwCamera
// Start address: 0x1b7320
int32 iScrFxCameraDestroyed()
{
	// Line 413, Address: 0x1b7320, Func Offset: 0
	// Line 414, Address: 0x1b7330, Func Offset: 0x10
	// Line 416, Address: 0x1b7338, Func Offset: 0x18
	// Line 417, Address: 0x1b7340, Func Offset: 0x20
	// Line 418, Address: 0x1b7344, Func Offset: 0x24
	// Line 421, Address: 0x1b7350, Func Offset: 0x30
	// Line 422, Address: 0x1b7358, Func Offset: 0x38
	// Func End, Address: 0x1b7364, Func Offset: 0x44
}

// iScrFxMotionBlurOpen__FP8RwCamera
// Start address: 0x1b7370
int32 iScrFxMotionBlurOpen(RwCamera* camera)
{
	RwRect rect;
	// Line 367, Address: 0x1b7370, Func Offset: 0
	// Line 368, Address: 0x1b7374, Func Offset: 0x4
	// Line 367, Address: 0x1b7378, Func Offset: 0x8
	// Line 368, Address: 0x1b737c, Func Offset: 0xc
	// Line 367, Address: 0x1b7380, Func Offset: 0x10
	// Line 368, Address: 0x1b7384, Func Offset: 0x14
	// Line 372, Address: 0x1b73a4, Func Offset: 0x34
	// Line 368, Address: 0x1b73a8, Func Offset: 0x38
	// Line 372, Address: 0x1b73ac, Func Offset: 0x3c
	// Line 373, Address: 0x1b73b8, Func Offset: 0x48
	// Line 375, Address: 0x1b73c4, Func Offset: 0x54
	// Line 377, Address: 0x1b73e0, Func Offset: 0x70
	// Line 378, Address: 0x1b73e8, Func Offset: 0x78
	// Line 381, Address: 0x1b73f0, Func Offset: 0x80
	// Line 383, Address: 0x1b7414, Func Offset: 0xa4
	// Line 385, Address: 0x1b741c, Func Offset: 0xac
	// Line 388, Address: 0x1b7430, Func Offset: 0xc0
	// Line 390, Address: 0x1b7438, Func Offset: 0xc8
	// Line 392, Address: 0x1b743c, Func Offset: 0xcc
	// Line 397, Address: 0x1b7448, Func Offset: 0xd8
	// Line 399, Address: 0x1b7454, Func Offset: 0xe4
	// Line 400, Address: 0x1b745c, Func Offset: 0xec
	// Line 407, Address: 0x1b7460, Func Offset: 0xf0
	// Line 409, Address: 0x1b746c, Func Offset: 0xfc
	// Line 410, Address: 0x1b7470, Func Offset: 0x100
	// Func End, Address: 0x1b7480, Func Offset: 0x110
}

// iCameraOverlayRender__FP8RwCameraP8RwRaster6RwRGBA
// Start address: 0x1b7480
void iCameraOverlayRender(RwRaster* ras, RwRGBA col)
{
	RwRect rect;
	// Line 327, Address: 0x1b7480, Func Offset: 0
	// Line 331, Address: 0x1b7494, Func Offset: 0x14
	// Line 327, Address: 0x1b7498, Func Offset: 0x18
	// Line 331, Address: 0x1b74a0, Func Offset: 0x20
	// Line 333, Address: 0x1b77ec, Func Offset: 0x36c
	// Line 331, Address: 0x1b77f0, Func Offset: 0x370
	// Line 333, Address: 0x1b77f4, Func Offset: 0x374
	// Line 342, Address: 0x1b7814, Func Offset: 0x394
	// Line 343, Address: 0x1b7820, Func Offset: 0x3a0
	// Line 344, Address: 0x1b782c, Func Offset: 0x3ac
	// Line 345, Address: 0x1b7838, Func Offset: 0x3b8
	// Line 346, Address: 0x1b7844, Func Offset: 0x3c4
	// Line 347, Address: 0x1b7850, Func Offset: 0x3d0
	// Line 348, Address: 0x1b785c, Func Offset: 0x3dc
	// Line 349, Address: 0x1b7868, Func Offset: 0x3e8
	// Line 351, Address: 0x1b7874, Func Offset: 0x3f4
	// Line 353, Address: 0x1b7894, Func Offset: 0x414
	// Line 354, Address: 0x1b78a0, Func Offset: 0x420
	// Line 355, Address: 0x1b78ac, Func Offset: 0x42c
	// Line 356, Address: 0x1b78b8, Func Offset: 0x438
	// Line 357, Address: 0x1b78c4, Func Offset: 0x444
	// Line 358, Address: 0x1b78d0, Func Offset: 0x450
	// Line 359, Address: 0x1b78dc, Func Offset: 0x45c
	// Line 362, Address: 0x1b78e8, Func Offset: 0x468
	// Func End, Address: 0x1b78f8, Func Offset: 0x478
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
	// Line 212, Address: 0x1b7900, Func Offset: 0
	// Line 228, Address: 0x1b7904, Func Offset: 0x4
	// Line 212, Address: 0x1b7908, Func Offset: 0x8
	// Line 228, Address: 0x1b790c, Func Offset: 0xc
	// Line 212, Address: 0x1b7910, Func Offset: 0x10
	// Line 213, Address: 0x1b7930, Func Offset: 0x30
	// Line 214, Address: 0x1b7934, Func Offset: 0x34
	// Line 213, Address: 0x1b7938, Func Offset: 0x38
	// Line 228, Address: 0x1b793c, Func Offset: 0x3c
	// Line 232, Address: 0x1b7950, Func Offset: 0x50
	// Line 233, Address: 0x1b7954, Func Offset: 0x54
	// Line 232, Address: 0x1b7958, Func Offset: 0x58
	// Line 242, Address: 0x1b795c, Func Offset: 0x5c
	// Line 232, Address: 0x1b7964, Func Offset: 0x64
	// Line 233, Address: 0x1b796c, Func Offset: 0x6c
	// Line 234, Address: 0x1b7970, Func Offset: 0x70
	// Line 233, Address: 0x1b7978, Func Offset: 0x78
	// Line 243, Address: 0x1b7988, Func Offset: 0x88
	// Line 245, Address: 0x1b7994, Func Offset: 0x94
	// Line 262, Address: 0x1b799c, Func Offset: 0x9c
	// Line 261, Address: 0x1b79a0, Func Offset: 0xa0
	// Line 252, Address: 0x1b79a4, Func Offset: 0xa4
	// Line 268, Address: 0x1b79a8, Func Offset: 0xa8
	// Line 245, Address: 0x1b79ac, Func Offset: 0xac
	// Line 249, Address: 0x1b79b0, Func Offset: 0xb0
	// Line 250, Address: 0x1b79b4, Func Offset: 0xb4
	// Line 251, Address: 0x1b79b8, Func Offset: 0xb8
	// Line 252, Address: 0x1b79bc, Func Offset: 0xbc
	// Line 262, Address: 0x1b79c0, Func Offset: 0xc0
	// Line 252, Address: 0x1b79c4, Func Offset: 0xc4
	// Line 262, Address: 0x1b79e4, Func Offset: 0xe4
	// Line 252, Address: 0x1b79e8, Func Offset: 0xe8
	// Line 274, Address: 0x1b7a5c, Func Offset: 0x15c
	// Line 275, Address: 0x1b7a60, Func Offset: 0x160
	// Line 276, Address: 0x1b7a64, Func Offset: 0x164
	// Line 277, Address: 0x1b7a68, Func Offset: 0x168
	// Line 285, Address: 0x1b7a6c, Func Offset: 0x16c
	// Line 286, Address: 0x1b7a70, Func Offset: 0x170
	// Line 287, Address: 0x1b7a74, Func Offset: 0x174
	// Line 288, Address: 0x1b7a78, Func Offset: 0x178
	// Line 296, Address: 0x1b7a7c, Func Offset: 0x17c
	// Line 297, Address: 0x1b7a80, Func Offset: 0x180
	// Line 298, Address: 0x1b7a84, Func Offset: 0x184
	// Line 299, Address: 0x1b7a88, Func Offset: 0x188
	// Line 307, Address: 0x1b7a8c, Func Offset: 0x18c
	// Line 308, Address: 0x1b7a90, Func Offset: 0x190
	// Line 309, Address: 0x1b7a94, Func Offset: 0x194
	// Line 310, Address: 0x1b7a98, Func Offset: 0x198
	// Line 321, Address: 0x1b7a9c, Func Offset: 0x19c
	// Func End, Address: 0x1b7ac4, Func Offset: 0x1c4
}

// iScrFxCameraEndScene__FP8RwCamera
// Start address: 0x1b7ad0
void iScrFxCameraEndScene(RwCamera* pCamera)
{
	// Line 170, Address: 0x1b7ad0, Func Offset: 0
	// Line 176, Address: 0x1b7ad8, Func Offset: 0x8
	// Line 178, Address: 0x1b7af0, Func Offset: 0x20
	// Line 180, Address: 0x1b7b18, Func Offset: 0x48
	// Func End, Address: 0x1b7b24, Func Offset: 0x54
}

// iScrFxCameraCreated__FP8RwCamera
// Start address: 0x1b7b30
void iScrFxCameraCreated(RwCamera* pCamera)
{
	// Line 150, Address: 0x1b7b30, Func Offset: 0
	// Line 149, Address: 0x1b7b34, Func Offset: 0x4
	// Line 150, Address: 0x1b7b38, Func Offset: 0x8
	// Line 157, Address: 0x1b7b3c, Func Offset: 0xc
	// Line 155, Address: 0x1b7b40, Func Offset: 0x10
	// Line 149, Address: 0x1b7b48, Func Offset: 0x18
	// Line 156, Address: 0x1b7b50, Func Offset: 0x20
	// Line 157, Address: 0x1b7b5c, Func Offset: 0x2c
	// Line 160, Address: 0x1b7b60, Func Offset: 0x30
	// Line 157, Address: 0x1b7b64, Func Offset: 0x34
	// Line 159, Address: 0x1b7b68, Func Offset: 0x38
	// Line 160, Address: 0x1b7b70, Func Offset: 0x40
	// Line 158, Address: 0x1b7b78, Func Offset: 0x48
	// Line 163, Address: 0x1b7b7c, Func Offset: 0x4c
	// Func End, Address: 0x1b7b84, Func Offset: 0x54
}

// iCameraSetBlurriness__Ff
// Start address: 0x1b7b90
void iCameraSetBlurriness(float32 amount)
{
	// Line 136, Address: 0x1b7b90, Func Offset: 0
	// Line 139, Address: 0x1b7bb0, Func Offset: 0x20
	// Line 140, Address: 0x1b7bd0, Func Offset: 0x40
	// Line 141, Address: 0x1b7bd8, Func Offset: 0x48
	// Line 143, Address: 0x1b7c08, Func Offset: 0x78
	// Func End, Address: 0x1b7c10, Func Offset: 0x80
}

// iCameraMotionBlurActivate__FUi
// Start address: 0x1b7c10
void iCameraMotionBlurActivate(uint32 activate)
{
	// Line 132, Address: 0x1b7c10, Func Offset: 0
	// Func End, Address: 0x1b7c18, Func Offset: 0x8
}

// iScrFxDrawBox__FffffUcUcUcUc
// Start address: 0x1b7c20
void iScrFxDrawBox(float32 x1, float32 y1, float32 x2, float32 y2, uint8 red, uint8 green, uint8 blue, uint8 alpha)
{
	uint16 indices[4];
	RwSky2DVertex v[4];
	// Line 65, Address: 0x1b7c20, Func Offset: 0
	// Line 69, Address: 0x1b7c28, Func Offset: 0x8
	// Line 66, Address: 0x1b7c30, Func Offset: 0x10
	// Line 68, Address: 0x1b7c38, Func Offset: 0x18
	// Line 67, Address: 0x1b7c40, Func Offset: 0x20
	// Line 71, Address: 0x1b7c48, Func Offset: 0x28
	// Line 70, Address: 0x1b7c50, Func Offset: 0x30
	// Line 72, Address: 0x1b7c58, Func Offset: 0x38
	// Line 74, Address: 0x1b7c5c, Func Offset: 0x3c
	// Line 75, Address: 0x1b7d2c, Func Offset: 0x10c
	// Line 76, Address: 0x1b7dfc, Func Offset: 0x1dc
	// Line 77, Address: 0x1b7ecc, Func Offset: 0x2ac
	// Line 80, Address: 0x1b7f98, Func Offset: 0x378
	// Line 77, Address: 0x1b7f9c, Func Offset: 0x37c
	// Line 80, Address: 0x1b7fa0, Func Offset: 0x380
	// Line 77, Address: 0x1b7fa8, Func Offset: 0x388
	// Line 80, Address: 0x1b7fac, Func Offset: 0x38c
	// Func End, Address: 0x1b7fbc, Func Offset: 0x39c
}

// iScrFxEnd__Fv
// Start address: 0x1b7fc0
void iScrFxEnd()
{
	// Line 46, Address: 0x1b7fc0, Func Offset: 0
	// Line 47, Address: 0x1b7fc4, Func Offset: 0x4
	// Line 46, Address: 0x1b7fc8, Func Offset: 0x8
	// Line 47, Address: 0x1b7fcc, Func Offset: 0xc
	// Line 48, Address: 0x1b7fd4, Func Offset: 0x14
	// Line 49, Address: 0x1b7fe0, Func Offset: 0x20
	// Line 50, Address: 0x1b7fec, Func Offset: 0x2c
	// Line 51, Address: 0x1b7ff8, Func Offset: 0x38
	// Line 52, Address: 0x1b8004, Func Offset: 0x44
	// Line 53, Address: 0x1b8010, Func Offset: 0x50
	// Line 54, Address: 0x1b801c, Func Offset: 0x5c
	// Func End, Address: 0x1b8028, Func Offset: 0x68
}

// iScrFxBegin__Fv
// Start address: 0x1b8030
void iScrFxBegin()
{
	// Line 31, Address: 0x1b8030, Func Offset: 0
	// Line 32, Address: 0x1b8034, Func Offset: 0x4
	// Line 31, Address: 0x1b8038, Func Offset: 0x8
	// Line 32, Address: 0x1b803c, Func Offset: 0xc
	// Line 33, Address: 0x1b8044, Func Offset: 0x14
	// Line 34, Address: 0x1b8050, Func Offset: 0x20
	// Line 35, Address: 0x1b805c, Func Offset: 0x2c
	// Line 36, Address: 0x1b8068, Func Offset: 0x38
	// Line 37, Address: 0x1b8074, Func Offset: 0x44
	// Line 38, Address: 0x1b8080, Func Offset: 0x50
	// Line 39, Address: 0x1b808c, Func Offset: 0x5c
	// Line 40, Address: 0x1b8098, Func Offset: 0x68
	// Func End, Address: 0x1b80a4, Func Offset: 0x74
}

// iScrFxInit__Fv
// Start address: 0x1b80b0
void iScrFxInit()
{
	// Line 25, Address: 0x1b80b0, Func Offset: 0
	// Func End, Address: 0x1b80b8, Func Offset: 0x8
}

