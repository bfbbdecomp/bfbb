typedef struct RwTexture;
typedef struct RwLinkList;
typedef struct RwRaster;
typedef struct RwTexDictionary;
typedef struct RwObject;
typedef struct RwLLLink;


typedef s32 type_0[11];
typedef s8 type_1[16];
typedef s8 type_2[16];
typedef s8 type_3[32];
typedef s8 type_4[32];

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_3 name;
	type_4 mask;
	u32 filterAddressing;
	s32 refCount;
};

struct RwLinkList
{
	RwLLLink link;
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

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
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

type_1 buffer;
type_2 buffer;
type_0 sBlendTable;

void xRenderStateSetDstBlendMode(s32 xmode);
void xRenderStateSetSrcBlendMode(s32 xmode);
void xRenderStateSetTexture(RwTexture* texture);

// xRenderStateSetDstBlendMode__Fi
// Start address: 0x301890
void xRenderStateSetDstBlendMode(s32 xmode)
{
}

// xRenderStateSetSrcBlendMode__Fi
// Start address: 0x3018b0
void xRenderStateSetSrcBlendMode(s32 xmode)
{
}

// xRenderStateSetTexture__FP9RwTexture
// Start address: 0x3018d0
void xRenderStateSetTexture(RwTexture* texture)
{
	RwRaster* raster;
}

