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

typedef void(*type_2)(jot&, xtextbox&, f32, f32);
typedef void(*type_3)(jot&, xtextbox&, xtextbox&);
typedef s32(*type_4)(xBase*, xBase*, u32, f32*, xBase*);
typedef void(*type_6)(jot&, xtextbox&, xtextbox&, split_tag&);

typedef xCMtextbox type_0[2];
typedef f32 type_1[4];
typedef s8* type_5[5];
typedef s8 type_7[32];
typedef s8 type_8[32];
typedef s8 type_9[16];
typedef s8 type_10[16];

struct xCMcredits
{
	u32 credits_size;
	f32 len;
	u32 flags;
	sxy in;
	sxy out;
	f32 scroll_rate;
	f32 lifetime;
	fade fin;
	fade fout;
	u32 num_presets;
};

struct xCMpreset
{
	u16 num;
	u16 align;
	f32 delay;
	f32 innerspace;
	type_0 box;
};

struct xCMhunk
{
	u32 hunk_size;
	u32 preset;
	f32 t0;
	f32 t1;
	s8* text1;
	s8* text2;
};

struct xCMtexture
{
	u32 assetID;
	iColor_tag color;
	f32 x;
	f32 y;
	f32 w;
	f32 h;
	RwTexture* texture;
	u32 pad;
};

struct _class
{
	union
	{
		u8 invisible;
		u8 ethereal;
		u8 merge;
		u8 word_break;
		u8 word_end;
		u8 line_break;
		u8 stop;
		u8 tab;
	};
	union
	{
		u8 insert;
		u8 dynamic;
		u8 page_break;
		u8 stateful;
	};
	u16 dummy;
};

struct xCMheader
{
	u32 magic;
	u32 version;
	u32 crdID;
	u32 state;
	f32 total_time;
	u32 total_size;
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_7 name;
	type_8 mask;
	u32 filterAddressing;
	s32 refCount;
};

struct sxy
{
	f32 x;
	f32 y;
};

struct xLinkAsset
{
	u16 srcEvent;
	u16 dstEvent;
	u32 dstAssetID;
	type_1 param;
	u32 paramWidgetAssetID;
	u32 chkAssetID;
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

struct fade
{
	f32 start;
	f32 end;
};

struct jot
{
	substr s;
	_class flag;
	u16 context_size;
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
	u32 flags;
	f32 line_space;
	f32 tab_stop;
	f32 left_indent;
	f32 right_indent;
	callback* cb;
	void* context;
	s8** texts;
	u32* text_sizes;
	u32 texts_size;
	substr text;
	u32 text_hash;
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
	u32 id;
	u8 baseType;
	u8 linkCount;
	u16 baseFlags;
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
	u32 id;
	f32 width;
	f32 height;
	f32 space;
	iColor_tag color;
	basic_rect clip;
};

struct basic_rect
{
	f32 x;
	f32 y;
	f32 w;
	f32 h;
};

struct xCreditsData
{
	u32 dummy;
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

struct substr
{
	s8* text;
	u32 size;
};

struct xColorUnpack
{
	u8 a;
	u8 b;
	u8 g;
	u8 r;
};

struct iColor_tag
{
	u8 r;
	u8 g;
	u8 b;
	u8 a;
};

struct RwLinkList
{
	RwLLLink link;
};

struct xCMtextbox
{
	u32 font;
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
f32 dtscale;
f32 credits_time;
xCreditsData* credits_data;
u32 credits_parentID;
callback text_cb;

void xCMstop();
void xCMstart(xCreditsData* data, xBase* parent);
void xCMrender();
void xCMupdate(f32 dt);
u32 xCMrender(f32 time, xCreditsData* data);
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
void xCMupdate(f32 dt)
{
}

// xCMrender__FfP12xCreditsData
// Start address: 0x3d5db0
u32 xCMrender(f32 time, xCreditsData* data)
{
	xCMheader* hdr;
	s8* dp;
	xCMcredits* cp;
	xCMpreset* pp;
	xCMhunk* hp;
	f32 a;
	xCMpreset* preset;
	f32 nx;
	f32 ny;
	f32 x0;
	f32 x1;
	f32 y0;
	f32 y1;
	f32 ca;
	xCMtexture* tex;
	basic_rect bounds;
	xtextbox tb;
	u32 alignL;
	u32 alignR;
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
	s8* dp;
	xCMcredits* cp;
	xCMpreset* pp;
	xCMhunk* hp;
}

