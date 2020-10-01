typedef struct RwRGBA;
typedef struct RwV3d;
typedef struct _tagActionLine;
typedef struct xVec3;
typedef struct RwRaster;
typedef struct RwTexture;
typedef union RxColorUnion;
typedef struct RxObjSpace3DVertex;
typedef struct RwTexDictionary;
typedef struct xMat3x3;
typedef struct RwObject;
typedef struct RwLLLink;
typedef struct RwLinkList;


typedef xVec3 type_0[4];
typedef _tagActionLine* type_1[8];
typedef int8 type_2[16];
typedef RxObjSpace3DVertex type_3[4];
typedef int8 type_4[16];
typedef int8 type_5[32];
typedef int8 type_6[32];

struct RwRGBA
{
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
};

struct RwV3d
{
	float32 x;
	float32 y;
	float32 z;
};

struct _tagActionLine
{
	uint32 flags;
	type_0 pos;
	float32 time_left;
};

struct xVec3
{
	float32 x;
	float32 y;
	float32 z;
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

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_5 name;
	type_6 mask;
	uint32 filterAddressing;
	int32 refCount;
};

union RxColorUnion
{
	RwRGBA preLitColor;
	RwRGBA color;
};

struct RxObjSpace3DVertex
{
	RwV3d objVertex;
	RxColorUnion c;
	RwV3d objNormal;
	float32 u;
	float32 v;
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
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

struct RwLinkList
{
	RwLLLink link;
};

type_2 buffer;
type_4 buffer;
type_1 sActionLine;
RwRaster* sActionLineRaster;
uint32 gActiveHeap;

void zActionLineRender();
void RenderActionLine(_tagActionLine* l);
void zActionLineUpdate(float32 seconds);
void zActionLineInit();

// zActionLineRender__Fv
// Start address: 0x1a41d0
void zActionLineRender()
{
	int32 i;
}

// RenderActionLine__FP14_tagActionLine
// Start address: 0x1a4250
void RenderActionLine(_tagActionLine* l)
{
	RxObjSpace3DVertex* vert;
	int32 i;
	RwRGBA* _col;
	type_3 sStripVert;
}

// zActionLineUpdate__Ff
// Start address: 0x1a4310
void zActionLineUpdate(float32 seconds)
{
	int32 i;
	_tagActionLine* l;
}

// zActionLineInit__Fv
// Start address: 0x1a4380
void zActionLineInit()
{
	RwTexture* tex;
}

