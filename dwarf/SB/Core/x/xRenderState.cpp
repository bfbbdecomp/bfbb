typedef struct RwTexture;
typedef struct RwLinkList;
typedef struct RwRaster;
typedef struct RwTexDictionary;
typedef struct RwObject;
typedef struct RwLLLink;


typedef int32 type_0[11];
typedef int8 type_1[16];
typedef int8 type_2[16];
typedef int8 type_3[32];
typedef int8 type_4[32];

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

struct RwLinkList
{
	RwLLLink link;
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

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
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

int8 buffer[16];
int8 buffer[16];
int32 sBlendTable[11];

void xRenderStateSetDstBlendMode(int32 xmode);
void xRenderStateSetSrcBlendMode(int32 xmode);
void xRenderStateSetTexture(RwTexture* texture);

// xRenderStateSetDstBlendMode__Fi
// Start address: 0x301890
void xRenderStateSetDstBlendMode(int32 xmode)
{
	// Line 73, Address: 0x301890, Func Offset: 0
	// Func End, Address: 0x3018ac, Func Offset: 0x1c
}

// xRenderStateSetSrcBlendMode__Fi
// Start address: 0x3018b0
void xRenderStateSetSrcBlendMode(int32 xmode)
{
	// Line 68, Address: 0x3018b0, Func Offset: 0
	// Func End, Address: 0x3018cc, Func Offset: 0x1c
}

// xRenderStateSetTexture__FP9RwTexture
// Start address: 0x3018d0
void xRenderStateSetTexture(RwTexture* texture)
{
	RwRaster* raster;
	// Line 53, Address: 0x3018d0, Func Offset: 0
	// Line 54, Address: 0x3018d4, Func Offset: 0x4
	// Line 56, Address: 0x3018dc, Func Offset: 0xc
	// Line 57, Address: 0x3018e0, Func Offset: 0x10
	// Line 58, Address: 0x3018e8, Func Offset: 0x18
	// Line 59, Address: 0x3018f0, Func Offset: 0x20
	// Line 62, Address: 0x3018f8, Func Offset: 0x28
	// Line 63, Address: 0x301904, Func Offset: 0x34
	// Line 64, Address: 0x301908, Func Offset: 0x38
	// Func End, Address: 0x301914, Func Offset: 0x44
}

