typedef struct RwRGBA;
typedef struct RwV3d;
typedef struct _tagActionLine;
typedef struct xVec3;
typedef struct RwRaster;
typedef struct RwTexture;
typedef struct RxColorUnion;
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
	xVec3 pos[4];
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
	int8 name[32];
	int8 mask[32];
	uint32 filterAddressing;
	int32 refCount;
};

struct RxColorUnion
{
	union
	{
		RwRGBA preLitColor;
		RwRGBA color;
	};
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

int8 buffer[16];
int8 buffer[16];
_tagActionLine* sActionLine[8];
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
	// Line 218, Address: 0x1a41d0, Func Offset: 0
	// Line 220, Address: 0x1a41e0, Func Offset: 0x10
	// Line 224, Address: 0x1a41ec, Func Offset: 0x1c
	// Line 226, Address: 0x1a41fc, Func Offset: 0x2c
	// Line 228, Address: 0x1a4214, Func Offset: 0x44
	// Line 229, Address: 0x1a421c, Func Offset: 0x4c
	// Line 230, Address: 0x1a4220, Func Offset: 0x50
	// Line 231, Address: 0x1a4230, Func Offset: 0x60
	// Func End, Address: 0x1a4244, Func Offset: 0x74
}

// RenderActionLine__FP14_tagActionLine
// Start address: 0x1a4250
void RenderActionLine(_tagActionLine* l)
{
	RxObjSpace3DVertex* vert;
	int32 i;
	RwRGBA* _col;
	RxObjSpace3DVertex sStripVert[4];
	// Line 183, Address: 0x1a4250, Func Offset: 0
	// Line 191, Address: 0x1a4254, Func Offset: 0x4
	// Line 183, Address: 0x1a4258, Func Offset: 0x8
	// Line 191, Address: 0x1a425c, Func Offset: 0xc
	// Line 194, Address: 0x1a4260, Func Offset: 0x10
	// Line 199, Address: 0x1a4264, Func Offset: 0x14
	// Line 196, Address: 0x1a426c, Func Offset: 0x1c
	// Line 201, Address: 0x1a4270, Func Offset: 0x20
	// Line 196, Address: 0x1a4274, Func Offset: 0x24
	// Line 201, Address: 0x1a4278, Func Offset: 0x28
	// Line 196, Address: 0x1a427c, Func Offset: 0x2c
	// Line 200, Address: 0x1a4288, Func Offset: 0x38
	// Line 196, Address: 0x1a428c, Func Offset: 0x3c
	// Line 197, Address: 0x1a4294, Func Offset: 0x44
	// Line 198, Address: 0x1a4298, Func Offset: 0x48
	// Line 199, Address: 0x1a429c, Func Offset: 0x4c
	// Line 201, Address: 0x1a42ac, Func Offset: 0x5c
	// Line 203, Address: 0x1a42b4, Func Offset: 0x64
	// Line 208, Address: 0x1a42c0, Func Offset: 0x70
	// Line 204, Address: 0x1a42c4, Func Offset: 0x74
	// Line 208, Address: 0x1a42c8, Func Offset: 0x78
	// Line 204, Address: 0x1a42cc, Func Offset: 0x7c
	// Line 208, Address: 0x1a42d0, Func Offset: 0x80
	// Line 205, Address: 0x1a42d4, Func Offset: 0x84
	// Line 208, Address: 0x1a42d8, Func Offset: 0x88
	// Line 205, Address: 0x1a42dc, Func Offset: 0x8c
	// Line 208, Address: 0x1a42e0, Func Offset: 0x90
	// Line 210, Address: 0x1a42f0, Func Offset: 0xa0
	// Line 211, Address: 0x1a42f8, Func Offset: 0xa8
	// Line 213, Address: 0x1a4300, Func Offset: 0xb0
	// Func End, Address: 0x1a430c, Func Offset: 0xbc
}

// zActionLineUpdate__Ff
// Start address: 0x1a4310
void zActionLineUpdate(float32 seconds)
{
	int32 i;
	_tagActionLine* l;
	// Line 129, Address: 0x1a4310, Func Offset: 0
	// Line 136, Address: 0x1a431c, Func Offset: 0xc
	// Line 138, Address: 0x1a4320, Func Offset: 0x10
	// Line 129, Address: 0x1a4324, Func Offset: 0x14
	// Line 131, Address: 0x1a4328, Func Offset: 0x18
	// Line 132, Address: 0x1a432c, Func Offset: 0x1c
	// Line 135, Address: 0x1a4344, Func Offset: 0x34
	// Line 136, Address: 0x1a434c, Func Offset: 0x3c
	// Line 138, Address: 0x1a4358, Func Offset: 0x48
	// Line 140, Address: 0x1a4364, Func Offset: 0x54
	// Line 142, Address: 0x1a4368, Func Offset: 0x58
	// Line 143, Address: 0x1a4378, Func Offset: 0x68
	// Func End, Address: 0x1a4380, Func Offset: 0x70
}

// zActionLineInit__Fv
// Start address: 0x1a4380
void zActionLineInit()
{
	RwTexture* tex;
	// Line 35, Address: 0x1a4380, Func Offset: 0
	// Line 44, Address: 0x1a4384, Func Offset: 0x4
	// Line 35, Address: 0x1a4388, Func Offset: 0x8
	// Line 38, Address: 0x1a438c, Func Offset: 0xc
	// Line 44, Address: 0x1a4394, Func Offset: 0x14
	// Line 38, Address: 0x1a4398, Func Offset: 0x18
	// Line 43, Address: 0x1a439c, Func Offset: 0x1c
	// Line 38, Address: 0x1a43a0, Func Offset: 0x20
	// Line 44, Address: 0x1a43d0, Func Offset: 0x50
	// Line 45, Address: 0x1a43e4, Func Offset: 0x64
	// Line 47, Address: 0x1a43ec, Func Offset: 0x6c
	// Line 48, Address: 0x1a43f4, Func Offset: 0x74
	// Line 54, Address: 0x1a43f8, Func Offset: 0x78
	// Func End, Address: 0x1a4404, Func Offset: 0x84
}

