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
typedef s8 type_2[16];
typedef RxObjSpace3DVertex type_3[4];
typedef s8 type_4[16];
typedef s8 type_5[32];
typedef s8 type_6[32];

struct RwRGBA
{
	u8 red;
	u8 green;
	u8 blue;
	u8 alpha;
};

struct RwV3d
{
	f32 x;
	f32 y;
	f32 z;
};

struct _tagActionLine
{
	u32 flags;
	type_0 pos;
	f32 time_left;
};

struct xVec3
{
	f32 x;
	f32 y;
	f32 z;
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

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_5 name;
	type_6 mask;
	u32 filterAddressing;
	s32 refCount;
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
	f32 u;
	f32 v;
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

struct RwLinkList
{
	RwLLLink link;
};

type_2 buffer;
type_4 buffer;
type_1 sActionLine;
RwRaster* sActionLineRaster;
u32 gActiveHeap;

void zActionLineRender();
void RenderActionLine(_tagActionLine* l);
void zActionLineUpdate(f32 seconds);
void zActionLineInit();

// zActionLineRender__Fv
// Start address: 0x1a41d0
void zActionLineRender()
{
	s32 i;
}

// RenderActionLine__FP14_tagActionLine
// Start address: 0x1a4250
void RenderActionLine(_tagActionLine* l)
{
	RxObjSpace3DVertex* vert;
	s32 i;
	RwRGBA* _col;
	type_3 sStripVert;
}

// zActionLineUpdate__Ff
// Start address: 0x1a4310
void zActionLineUpdate(f32 seconds)
{
	s32 i;
	_tagActionLine* l;
}

// zActionLineInit__Fv
// Start address: 0x1a4380
void zActionLineInit()
{
	RwTexture* tex;
}

