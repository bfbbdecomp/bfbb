typedef struct xCMcredits;
typedef struct xCMpreset;
typedef struct xCMhunk;
typedef struct xCMtexture;
typedef struct _class;
typedef struct xCMheader;
typedef struct RwTexture;
typedef struct sxy;
typedef struct xLinkAsset;
typedef struct RwRaster;
typedef struct fade;
typedef struct jot;
typedef struct split_tag;
typedef struct xtextbox;
typedef struct callback;
typedef struct tag_type;
typedef struct xBase;
typedef struct RwTexDictionary;
typedef struct xfont;
typedef struct basic_rect;
typedef struct xCreditsData;
typedef struct RwObject;
typedef struct RwLLLink;
typedef struct substr;
typedef struct xColorUnpack;
typedef struct iColor_tag;
typedef struct RwLinkList;
typedef struct xCMtextbox;

typedef void(*type_2)(jot&, xtextbox&, float32, float32);
typedef void(*type_3)(jot&, xtextbox&, xtextbox&);
typedef int32(*type_4)(xBase*, xBase*, uint32, float32*, xBase*);
typedef void(*type_6)(jot&, xtextbox&, xtextbox&, split_tag&);

typedef xCMtextbox type_0[2];
typedef float32 type_1[4];
typedef int8* type_5[5];
typedef int8 type_7[32];
typedef int8 type_8[32];
typedef int8 type_9[16];
typedef int8 type_10[16];

struct xCMcredits
{
	uint32 credits_size;
	float32 len;
	uint32 flags;
	sxy in;
	sxy out;
	float32 scroll_rate;
	float32 lifetime;
	fade fin;
	fade fout;
	uint32 num_presets;
};

struct xCMpreset
{
	uint16 num;
	uint16 align;
	float32 delay;
	float32 innerspace;
	type_0 box;
};

struct xCMhunk
{
	uint32 hunk_size;
	uint32 preset;
	float32 t0;
	float32 t1;
	int8* text1;
	int8* text2;
};

struct xCMtexture
{
	uint32 assetID;
	iColor_tag color;
	float32 x;
	float32 y;
	float32 w;
	float32 h;
	RwTexture* texture;
	uint32 pad;
};

struct _class
{
	union
	{
		uint8 invisible;
		uint8 ethereal;
		uint8 merge;
		uint8 word_break;
		uint8 word_end;
		uint8 line_break;
		uint8 stop;
		uint8 tab;
	};
	union
	{
		uint8 insert;
		uint8 dynamic;
		uint8 page_break;
		uint8 stateful;
	};
	uint16 dummy;
};

struct xCMheader
{
	uint32 magic;
	uint32 version;
	uint32 crdID;
	uint32 state;
	float32 total_time;
	uint32 total_size;
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_7 name;
	type_8 mask;
	uint32 filterAddressing;
	int32 refCount;
};

struct sxy
{
	float32 x;
	float32 y;
};

struct xLinkAsset
{
	uint16 srcEvent;
	uint16 dstEvent;
	uint32 dstAssetID;
	type_1 param;
	uint32 paramWidgetAssetID;
	uint32 chkAssetID;
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

struct fade
{
	float32 start;
	float32 end;
};

struct jot
{
	substr s;
	_class flag;
	uint16 context_size;
	void* context;
	basic_rect bounds;
	basic_rect render_bounds;
	callback* cb;
	tag_type* tag;
};

struct split_tag
{
	substr tag;
	substr name;
	substr action;
	substr value;
};

struct xtextbox
{
	xfont font;
	basic_rect bounds;
	uint32 flags;
	float32 line_space;
	float32 tab_stop;
	float32 left_indent;
	float32 right_indent;
	callback* cb;
	void* context;
	int8** texts;
	uint32* text_sizes;
	uint32 texts_size;
	substr text;
	uint32 text_hash;
};

struct callback
{
	type_2 render;
	type_3 layout_update;
	type_3 render_update;
};

struct tag_type
{
	substr name;
	type_6 parse_tag;
	type_6 reset_tag;
	void* context;
};

struct xBase
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
	xLinkAsset* link;
	type_4 eventFunc;
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

struct xfont
{
	uint32 id;
	float32 width;
	float32 height;
	float32 space;
	iColor_tag color;
	basic_rect clip;
};

struct basic_rect
{
	float32 x;
	float32 y;
	float32 w;
	float32 h;
};

struct xCreditsData
{
	uint32 dummy;
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

struct substr
{
	int8* text;
	uint32 size;
};

struct xColorUnpack
{
	uint8 a;
	uint8 b;
	uint8 g;
	uint8 r;
};

struct iColor_tag
{
	uint8 r;
	uint8 g;
	uint8 b;
	uint8 a;
};

struct RwLinkList
{
	RwLLLink link;
};

struct xCMtextbox
{
	uint32 font;
	iColor_tag color;
	sxy char_size;
	sxy char_spacing;
	sxy box;
};

type_9 buffer;
type_10 buffer;
basic_rect screen_bounds;
basic_rect default_adjust;
type_5 preset_names;
float32 dtscale;
float32 credits_time;
xCreditsData* credits_data;
uint32 credits_parentID;
callback text_cb;

void xCMstop();
void xCMstart(xCreditsData* data, xBase* parent);
void xCMrender();
void xCMupdate(float32 dt);
uint32 xCMrender(float32 time, xCreditsData* data);
void xCMprep(xCreditsData* data);

// xCMstop__Fv
// Start address: 0x3d5cd0
void xCMstop()
{
}

// xCMstart__FP12xCreditsDatafP5xBase
// Start address: 0x3d5d10
void xCMstart(xCreditsData* data, xBase* parent)
{
}

// xCMrender__Fv
// Start address: 0x3d5d30
void xCMrender()
{
}

// xCMupdate__Ff
// Start address: 0x3d5d40
void xCMupdate(float32 dt)
{
}

// xCMrender__FfP12xCreditsData
// Start address: 0x3d5db0
uint32 xCMrender(float32 time, xCreditsData* data)
{
	xCMheader* hdr;
	int8* dp;
	xCMcredits* cp;
	xCMpreset* pp;
	xCMhunk* hp;
	float32 a;
	xCMpreset* preset;
	float32 nx;
	float32 ny;
	float32 x0;
	float32 x1;
	float32 y0;
	float32 y1;
	float32 ca;
	xCMtexture* tex;
	basic_rect bounds;
	xtextbox tb;
	uint32 alignL;
	uint32 alignR;
	basic_rect bounds;
	xtextbox tb;
	basic_rect bounds;
	xtextbox tb;
}

// xCMprep__FP12xCreditsData
// Start address: 0x3d7110
void xCMprep(xCreditsData* data)
{
	xCMheader* hdr;
	int8* dp;
	xCMcredits* cp;
	xCMpreset* pp;
	xCMhunk* hp;
}

