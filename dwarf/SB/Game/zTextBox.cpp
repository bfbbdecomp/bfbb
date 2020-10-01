typedef struct ztextbox;
typedef struct RwTexture;
typedef struct xBase;
typedef struct xDynAsset;
typedef struct asset_type;
typedef struct iColor_tag;
typedef struct RwRGBAReal;
typedef struct RwLinkList;
typedef union RwSky2DVertexAlignmentOverlay;
typedef struct _class_0;
typedef struct jot;
typedef struct RwSky2DVertex;
typedef struct RwV3d;
typedef struct xTextAsset;
typedef struct split_tag;
typedef struct RwRaster;
typedef struct xtextbox;
typedef struct xLinkAsset;
typedef struct callback;
typedef struct color_type;
typedef struct tag_type;
typedef struct xfont;
typedef struct xBaseAsset;
typedef struct _class_1;
typedef struct _class_2;
typedef struct _class_3;
typedef struct RwTexDictionary;
typedef struct substr;
typedef struct RwObject;
typedef struct RwLLLink;
typedef enum _enum_0;
typedef struct basic_rect;
typedef struct RwSky2DVertexFields;
typedef enum _enum_1;
typedef struct _class_4;
typedef union _class_5;

typedef s32(*type_5)(xBase*, xBase*, u32, f32*, xBase*);
typedef s32(*type_6)(xBase*, xBase*, u32, f32*, xBase*);
typedef void(*type_7)(ztextbox&);
typedef void(*type_8)(jot&, xtextbox&, f32, f32);
typedef void(*type_10)(jot&, xtextbox&, xtextbox&);
typedef void(*type_11)(jot&, xtextbox&, xtextbox&, split_tag&);

typedef f32 type_0[4];
typedef <unknown type (0xa510)> type_1[4];
typedef tag_type type_2[1];
typedef s8* type_3[16];
typedef u32 type_4[3];
typedef type_7 type_9[3];
typedef RwSky2DVertex type_12[6];
typedef s8 type_13[16];
typedef s8 type_14[16];
typedef u32 type_15[4096];
typedef s8 type_16[32];
typedef s8 type_17[32];

struct ztextbox : xBase
{
	_class_5 flag;
	asset_type* asset;
	xtextbox tb;
	type_3 segments;
	u32 segments_size;
	ztextbox* next;
	ztextbox* prev;
	RwRaster* bgtex;
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_16 name;
	type_17 mask;
	u32 filterAddressing;
	s32 refCount;
};

struct xBase
{
	u32 id;
	u8 baseType;
	u8 linkCount;
	u16 baseFlags;
	xLinkAsset* link;
	type_5 eventFunc;
};

struct xDynAsset : xBaseAsset
{
	u32 type;
	u16 version;
	u16 handle;
};

struct asset_type : xDynAsset
{
	u32 text;
	basic_rect bounds;
	u32 font;
	_class_1 size;
	_class_2 space;
	color_type color;
	_class_3 inset;
	_enum_0 xjustify;
	_enum_1 expand;
	f32 max_height;
	_class_0 backdrop;
};

struct iColor_tag
{
	u8 r;
	u8 g;
	u8 b;
	u8 a;
};

struct RwRGBAReal
{
	f32 red;
	f32 green;
	f32 blue;
	f32 alpha;
};

struct RwLinkList
{
	RwLLLink link;
};

union RwSky2DVertexAlignmentOverlay
{
	RwSky2DVertexFields els;
	type_1 qWords;
};

struct _class_0
{
	u32 type;
	color_type color;
	u32 texture;
};

struct jot
{
	substr s;
	_class_4 flag;
	u16 context_size;
	void* context;
	basic_rect bounds;
	basic_rect render_bounds;
	callback* cb;
	tag_type* tag;
};

struct RwSky2DVertex
{
	RwSky2DVertexAlignmentOverlay u;
};

struct RwV3d
{
	f32 x;
	f32 y;
	f32 z;
};

struct xTextAsset
{
	u32 len;
};

struct split_tag
{
	substr tag;
	substr name;
	substr action;
	substr value;
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

struct xLinkAsset
{
	u16 srcEvent;
	u16 dstEvent;
	u32 dstAssetID;
	type_0 param;
	u32 paramWidgetAssetID;
	u32 chkAssetID;
};

struct callback
{
	type_8 render;
	type_10 layout_update;
	type_10 render_update;
};

struct color_type
{
	u8 r;
	u8 g;
	u8 b;
	u8 a;
};

struct tag_type
{
	substr name;
	type_11 parse_tag;
	type_11 reset_tag;
	void* context;
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

struct xBaseAsset
{
	u32 id;
	u8 baseType;
	u8 linkCount;
	u16 baseFlags;
};

struct _class_1
{
	f32 width;
	f32 height;
};

struct _class_2
{
	f32 x;
	f32 y;
};

struct _class_3
{
	f32 left;
	f32 top;
	f32 right;
	f32 bottom;
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

struct substr
{
	s8* text;
	u32 size;
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

enum _enum_0
{
	XJ_LEFT,
	XJ_CENTER,
	XJ_RIGHT
};

struct basic_rect
{
	f32 x;
	f32 y;
	f32 w;
	f32 h;
};

struct RwSky2DVertexFields
{
	RwV3d scrVertex;
	f32 camVertex_z;
	f32 u;
	f32 v;
	f32 recipZ;
	f32 pad1;
	RwRGBAReal color;
	RwV3d objNormal;
	f32 pad2;
};

enum _enum_1
{
	EX_UP,
	EX_CENTER,
	EX_DOWN,
	MAX_EX
};

struct _class_4
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

union _class_5
{
	u8 active;
	u8 dirty;
	u8 show_backdrop;
	u8 visible;
	u8 hack_invisible;
};

basic_rect screen_bounds;
basic_rect default_adjust;
type_13 buffer;
type_14 buffer;
ztextbox* head_active;
type_9 render_bk_table;
type_2 new_tags;
u32 new_tags_size;
type_6 cb_dispatch;
type_15 ourGlobals;

void render_all();
void update_all();
void load(xBase& data, xDynAsset& asset);
void init();
void get_text(ztextbox* this, s8* buffer, u32 buffer_size);
void refresh(ztextbox* this);
void clear_text(ztextbox* this);
void add_text(ztextbox* this, s8* s);
void set_text(ztextbox* this, u32 id);
void set_text(ztextbox* this, s8* s);
void deactivate(ztextbox* this);
void activate(ztextbox* this);
void render_backdrop(ztextbox* this);
void reset(ztextbox* this);
void load(ztextbox* this, asset_type& a);
s32 cb_dispatch(xBase* to, u32 event, f32* argf);
void parse_tag_blahblah();
void init_textbox(ztextbox& e);
void render_bk_tex_wrap();
void render_bk_tex_scale(ztextbox& e);
void render_bk_fill(ztextbox& e);

// render_all__8ztextboxFv
// Start address: 0x3226a0
void render_all()
{
	ztextbox* it;
}

// update_all__8ztextboxFR6xScenef
// Start address: 0x322770
void update_all()
{
	ztextbox* it;
}

// load__8ztextboxFR5xBaseR9xDynAssetUi
// Start address: 0x3227a0
void load(xBase& data, xDynAsset& asset)
{
}

// init__8ztextboxFv
// Start address: 0x3227b0
void init()
{
}

// get_text__8ztextboxCFPcUi
// Start address: 0x3227e0
void get_text(ztextbox* this, s8* buffer, u32 buffer_size)
{
	s8** it;
	s8** end;
	s8* s;
	u32 len;
}

// refresh__8ztextboxFv
// Start address: 0x3228a0
void refresh(ztextbox* this)
{
}

// clear_text__8ztextboxFv
// Start address: 0x322900
void clear_text(ztextbox* this)
{
}

// add_text__8ztextboxFPCc
// Start address: 0x322920
void add_text(ztextbox* this, s8* s)
{
}

// set_text__8ztextboxFUi
// Start address: 0x322970
void set_text(ztextbox* this, u32 id)
{
	xTextAsset* ta;
}

// set_text__8ztextboxFPCc
// Start address: 0x322a20
void set_text(ztextbox* this, s8* s)
{
}

// deactivate__8ztextboxFv
// Start address: 0x322a80
void deactivate(ztextbox* this)
{
}

// activate__8ztextboxFv
// Start address: 0x322b10
void activate(ztextbox* this)
{
}

// render_backdrop__8ztextboxFv
// Start address: 0x322b80
void render_backdrop(ztextbox* this)
{
}

// reset__8ztextboxFv
// Start address: 0x322bd0
void reset(ztextbox* this)
{
}

// load__8ztextboxFRCQ28ztextbox10asset_type
// Start address: 0x322d40
void load(ztextbox* this, asset_type& a)
{
	RwTexture* tex;
}

// cb_dispatch__22@unnamed@zTextBox_cpp@FP5xBaseP5xBaseUiPCfP5xBase
// Start address: 0x322df0
s32 cb_dispatch(xBase* to, u32 event, f32* argf)
{
	ztextbox& e;
}

// parse_tag_blahblah__22@unnamed@zTextBox_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x323170
void parse_tag_blahblah()
{
}

// init_textbox__22@unnamed@zTextBox_cpp@FR8ztextbox
// Start address: 0x323180
void init_textbox(ztextbox& e)
{
	asset_type& a;
	s32 lines;
	f32 minh;
	f32 maxh;
	f32 hmore;
	type_4 xjlookup;
}

// render_bk_tex_wrap__22@unnamed@zTextBox_cpp@FRC8ztextbox
// Start address: 0x3233f0
void render_bk_tex_wrap()
{
}

// render_bk_tex_scale__22@unnamed@zTextBox_cpp@FRC8ztextbox
// Start address: 0x323400
void render_bk_tex_scale(ztextbox& e)
{
	f32 rcz;
	f32 nsz;
	basic_rect r;
	type_12 vert;
}

// render_bk_fill__22@unnamed@zTextBox_cpp@FRC8ztextbox
// Start address: 0x323a20
void render_bk_fill(ztextbox& e)
{
	asset_type& a;
}

