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
	type_3 name;
	type_4 mask;
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

type_1 buffer;
type_2 buffer;
type_0 sBlendTable;

void xRenderStateSetDstBlendMode(int32 xmode);
void xRenderStateSetSrcBlendMode(int32 xmode);
void xRenderStateSetTexture(RwTexture* texture);

// xRenderStateSetDstBlendMode__Fi
// Start address: 0x301890
void xRenderStateSetDstBlendMode(int32 xmode)
{
}

// xRenderStateSetSrcBlendMode__Fi
// Start address: 0x3018b0
void xRenderStateSetSrcBlendMode(int32 xmode)
{
}

// xRenderStateSetTexture__FP9RwTexture
// Start address: 0x3018d0
void xRenderStateSetTexture(RwTexture* texture)
{
	RwRaster* raster;
}

