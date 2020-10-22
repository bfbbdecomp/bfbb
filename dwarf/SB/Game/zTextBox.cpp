typedef struct ztextbox;
typedef struct RwTexture;
typedef struct xBase;
typedef struct xDynAsset;
typedef struct asset_type;
typedef struct iColor_tag;
typedef struct RwRGBAReal;
typedef struct RwLinkList;
typedef struct RwSky2DVertexAlignmentOverlay;
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
typedef struct _class_5;

typedef int32(*type_5)(xBase*, xBase*, uint32, float32*, xBase*);
typedef int32(*type_6)(xBase*, xBase*, uint32, float32*, xBase*);
typedef void(*type_7)(ztextbox&);
typedef void(*type_8)(jot&, xtextbox&, float32, float32);
typedef void(*type_10)(jot&, xtextbox&, xtextbox&);
typedef void(*type_11)(jot&, xtextbox&, xtextbox&, split_tag&);

typedef float32 type_0[4];
typedef <unknown fundamental type (0xa510)> type_1[4];
typedef tag_type type_2[1];
typedef int8* type_3[16];
typedef uint32 type_4[3];
typedef void(*type_9)(ztextbox&)[3];
typedef RwSky2DVertex type_12[6];
typedef int8 type_13[16];
typedef int8 type_14[16];
typedef uint32 type_15[4096];
typedef int8 type_16[32];
typedef int8 type_17[32];

struct ztextbox : xBase
{
	_class_5 flag;
	asset_type* asset;
	xtextbox tb;
	int8* segments[16];
	uint32 segments_size;
	ztextbox* next;
	ztextbox* prev;
	RwRaster* bgtex;

	void get_text(int8* buffer, uint32 buffer_size);
	void refresh();
	void clear_text();
	void add_text(int8* s);
	void set_text(uint32 id);
	void set_text(int8* s);
	void deactivate();
	void activate();
	void render_backdrop();
	void reset();
	void load(asset_type& a);
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

struct xBase
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
	xLinkAsset* link;
	int32(*eventFunc)(xBase*, xBase*, uint32, float32*, xBase*);
};

struct xDynAsset : xBaseAsset
{
	uint32 type;
	uint16 version;
	uint16 handle;
};

struct asset_type : xDynAsset
{
	uint32 text;
	basic_rect bounds;
	uint32 font;
	_class_1 size;
	_class_2 space;
	color_type color;
	_class_3 inset;
	_enum_0 xjustify;
	_enum_1 expand;
	float32 max_height;
	_class_0 backdrop;
};

struct iColor_tag
{
	uint8 r;
	uint8 g;
	uint8 b;
	uint8 a;
};

struct RwRGBAReal
{
	float32 red;
	float32 green;
	float32 blue;
	float32 alpha;
};

struct RwLinkList
{
	RwLLLink link;
};

struct RwSky2DVertexAlignmentOverlay
{
	union
	{
		RwSky2DVertexFields els;
		<unknown fundamental type (0xa510)> qWords[4];
	};
};

struct _class_0
{
	uint32 type;
	color_type color;
	uint32 texture;
};

struct jot
{
	substr s;
	_class_4 flag;
	uint16 context_size;
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
	float32 x;
	float32 y;
	float32 z;
};

struct xTextAsset
{
	uint32 len;
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

struct xLinkAsset
{
	uint16 srcEvent;
	uint16 dstEvent;
	uint32 dstAssetID;
	float32 param[4];
	uint32 paramWidgetAssetID;
	uint32 chkAssetID;
};

struct callback
{
	void(*render)(jot&, xtextbox&, float32, float32);
	void(*layout_update)(jot&, xtextbox&, xtextbox&);
	void(*render_update)(jot&, xtextbox&, xtextbox&);
};

struct color_type
{
	uint8 r;
	uint8 g;
	uint8 b;
	uint8 a;
};

struct tag_type
{
	substr name;
	void(*parse_tag)(jot&, xtextbox&, xtextbox&, split_tag&);
	void(*reset_tag)(jot&, xtextbox&, xtextbox&, split_tag&);
	void* context;
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

struct xBaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
};

struct _class_1
{
	float32 width;
	float32 height;
};

struct _class_2
{
	float32 x;
	float32 y;
};

struct _class_3
{
	float32 left;
	float32 top;
	float32 right;
	float32 bottom;
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

struct substr
{
	int8* text;
	uint32 size;
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

enum _enum_0
{
	XJ_LEFT,
	XJ_CENTER,
	XJ_RIGHT
};

struct basic_rect
{
	float32 x;
	float32 y;
	float32 w;
	float32 h;
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

enum _enum_1
{
	EX_UP,
	EX_CENTER,
	EX_DOWN,
	MAX_EX
};

struct _class_4
{
	struct
	{
		uint8 invisible : 1;
		uint8 ethereal : 1;
		uint8 merge : 1;
		uint8 word_break : 1;
		uint8 word_end : 1;
		uint8 line_break : 1;
		uint8 stop : 1;
		uint8 tab : 1;
	};
	struct
	{
		uint8 insert : 1;
		uint8 dynamic : 1;
		uint8 page_break : 1;
		uint8 stateful : 1;
	};
	uint16 dummy : 4;
};

struct _class_5
{
	struct
	{
		uint8 active : 1;
		uint8 dirty : 1;
		uint8 show_backdrop : 1;
		uint8 visible : 1;
		uint8 hack_invisible : 1;
	};
};

basic_rect screen_bounds;
basic_rect default_adjust;
int8 buffer[16];
int8 buffer[16];
ztextbox* head_active;
void(*render_bk_table)(ztextbox&)[3];
tag_type new_tags[1];
uint32 new_tags_size;
int32(*cb_dispatch)(xBase*, xBase*, uint32, float32*, xBase*);
uint32 ourGlobals[4096];

void render_all();
void update_all();
void load(xBase& data, xDynAsset& asset);
void init();
void get_text(int8* buffer, uint32 buffer_size);
void refresh();
void clear_text();
void add_text(int8* s);
void set_text(uint32 id);
void set_text(int8* s);
void deactivate();
void activate();
void render_backdrop();
void reset();
void load(asset_type& a);
int32 cb_dispatch(xBase* to, uint32 event, float32* argf);
void parse_tag_blahblah();
void init_textbox(ztextbox& e);
void render_bk_tex_wrap();
void render_bk_tex_scale(ztextbox& e);
void render_bk_fill(ztextbox& e);

// render_all__8ztextboxFv
// Start address: 0x3226a0
void ztextbox::render_all()
{
	ztextbox* it;
	// Line 455, Address: 0x3226a0, Func Offset: 0
	// Line 457, Address: 0x3226b0, Func Offset: 0x10
	// Line 458, Address: 0x3226b8, Func Offset: 0x18
	// Line 459, Address: 0x322760, Func Offset: 0xc0
	// Func End, Address: 0x322770, Func Offset: 0xd0
}

// update_all__8ztextboxFR6xScenef
// Start address: 0x322770
void ztextbox::update_all()
{
	ztextbox* it;
	// Line 439, Address: 0x322770, Func Offset: 0
	// Line 440, Address: 0x322774, Func Offset: 0x4
	// Line 441, Address: 0x32277c, Func Offset: 0xc
	// Line 442, Address: 0x322798, Func Offset: 0x28
	// Func End, Address: 0x3227a0, Func Offset: 0x30
}

// load__8ztextboxFR5xBaseR9xDynAssetUi
// Start address: 0x3227a0
void ztextbox::load(xBase& data, xDynAsset& asset)
{
	// Line 435, Address: 0x3227a0, Func Offset: 0
	// Func End, Address: 0x3227a8, Func Offset: 0x8
}

// init__8ztextboxFv
// Start address: 0x3227b0
void ztextbox::init()
{
	// Line 427, Address: 0x3227b0, Func Offset: 0
	// Line 428, Address: 0x3227b4, Func Offset: 0x4
	// Line 427, Address: 0x3227b8, Func Offset: 0x8
	// Line 428, Address: 0x3227bc, Func Offset: 0xc
	// Line 429, Address: 0x3227c8, Func Offset: 0x18
	// Line 430, Address: 0x3227cc, Func Offset: 0x1c
	// Func End, Address: 0x3227d8, Func Offset: 0x28
}

// get_text__8ztextboxCFPcUi
// Start address: 0x3227e0
void ztextbox::get_text(int8* buffer, uint32 buffer_size)
{
	int8** it;
	int8** end;
	int8* s;
	uint32 len;
	// Line 365, Address: 0x3227e0, Func Offset: 0
	// Line 366, Address: 0x322804, Func Offset: 0x24
	// Line 367, Address: 0x322814, Func Offset: 0x34
	// Line 369, Address: 0x322820, Func Offset: 0x40
	// Line 370, Address: 0x322824, Func Offset: 0x44
	// Line 371, Address: 0x322830, Func Offset: 0x50
	// Line 373, Address: 0x32283c, Func Offset: 0x5c
	// Line 374, Address: 0x322848, Func Offset: 0x68
	// Line 375, Address: 0x32284c, Func Offset: 0x6c
	// Line 376, Address: 0x322854, Func Offset: 0x74
	// Line 377, Address: 0x322858, Func Offset: 0x78
	// Line 379, Address: 0x322868, Func Offset: 0x88
	// Line 380, Address: 0x322878, Func Offset: 0x98
	// Line 381, Address: 0x32287c, Func Offset: 0x9c
	// Func End, Address: 0x3228a0, Func Offset: 0xc0
}

// refresh__8ztextboxFv
// Start address: 0x3228a0
void ztextbox::refresh()
{
	// Line 356, Address: 0x3228a0, Func Offset: 0
	// Line 357, Address: 0x3228ac, Func Offset: 0xc
	// Line 359, Address: 0x3228c0, Func Offset: 0x20
	// Line 360, Address: 0x3228c8, Func Offset: 0x28
	// Line 361, Address: 0x3228e4, Func Offset: 0x44
	// Line 362, Address: 0x3228e8, Func Offset: 0x48
	// Func End, Address: 0x3228f8, Func Offset: 0x58
}

// clear_text__8ztextboxFv
// Start address: 0x322900
void ztextbox::clear_text()
{
	// Line 351, Address: 0x322900, Func Offset: 0
	// Line 352, Address: 0x322904, Func Offset: 0x4
	// Line 353, Address: 0x322918, Func Offset: 0x18
	// Func End, Address: 0x322920, Func Offset: 0x20
}

// add_text__8ztextboxFPCc
// Start address: 0x322920
void ztextbox::add_text(int8* s)
{
	// Line 333, Address: 0x322920, Func Offset: 0
	// Line 335, Address: 0x322928, Func Offset: 0x8
	// Line 337, Address: 0x32292c, Func Offset: 0xc
	// Line 335, Address: 0x322934, Func Offset: 0x14
	// Line 336, Address: 0x322940, Func Offset: 0x20
	// Line 337, Address: 0x32294c, Func Offset: 0x2c
	// Line 338, Address: 0x32295c, Func Offset: 0x3c
	// Func End, Address: 0x322968, Func Offset: 0x48
}

// set_text__8ztextboxFUi
// Start address: 0x322970
void ztextbox::set_text(uint32 id)
{
	xTextAsset* ta;
	// Line 323, Address: 0x322970, Func Offset: 0
	// Line 324, Address: 0x32297c, Func Offset: 0xc
	// Line 325, Address: 0x322984, Func Offset: 0x14
	// Line 326, Address: 0x322990, Func Offset: 0x20
	// Line 328, Address: 0x3229b8, Func Offset: 0x48
	// Line 329, Address: 0x322a08, Func Offset: 0x98
	// Func End, Address: 0x322a18, Func Offset: 0xa8
}

// set_text__8ztextboxFPCc
// Start address: 0x322a20
void ztextbox::set_text(int8* s)
{
	// Line 318, Address: 0x322a20, Func Offset: 0
	// Line 319, Address: 0x322a38, Func Offset: 0x18
	// Line 320, Address: 0x322a70, Func Offset: 0x50
	// Func End, Address: 0x322a78, Func Offset: 0x58
}

// deactivate__8ztextboxFv
// Start address: 0x322a80
void ztextbox::deactivate()
{
	// Line 308, Address: 0x322a80, Func Offset: 0
	// Line 309, Address: 0x322a90, Func Offset: 0x10
	// Line 310, Address: 0x322a98, Func Offset: 0x18
	// Line 309, Address: 0x322a9c, Func Offset: 0x1c
	// Line 310, Address: 0x322aa4, Func Offset: 0x24
	// Line 311, Address: 0x322abc, Func Offset: 0x3c
	// Line 312, Address: 0x322ad4, Func Offset: 0x54
	// Line 313, Address: 0x322ae8, Func Offset: 0x68
	// Line 314, Address: 0x322b00, Func Offset: 0x80
	// Func End, Address: 0x322b08, Func Offset: 0x88
}

// activate__8ztextboxFv
// Start address: 0x322b10
void ztextbox::activate()
{
	// Line 297, Address: 0x322b10, Func Offset: 0
	// Line 298, Address: 0x322b20, Func Offset: 0x10
	// Line 299, Address: 0x322b2c, Func Offset: 0x1c
	// Line 298, Address: 0x322b30, Func Offset: 0x20
	// Line 299, Address: 0x322b34, Func Offset: 0x24
	// Line 300, Address: 0x322b48, Func Offset: 0x38
	// Line 301, Address: 0x322b4c, Func Offset: 0x3c
	// Line 302, Address: 0x322b58, Func Offset: 0x48
	// Line 303, Address: 0x322b68, Func Offset: 0x58
	// Line 304, Address: 0x322b6c, Func Offset: 0x5c
	// Func End, Address: 0x322b78, Func Offset: 0x68
}

// render_backdrop__8ztextboxFv
// Start address: 0x322b80
void ztextbox::render_backdrop()
{
	// Line 288, Address: 0x322b80, Func Offset: 0
	// Line 291, Address: 0x322b90, Func Offset: 0x10
	// Line 292, Address: 0x322b9c, Func Offset: 0x1c
	// Line 293, Address: 0x322bb8, Func Offset: 0x38
	// Func End, Address: 0x322bc4, Func Offset: 0x44
}

// reset__8ztextboxFv
// Start address: 0x322bd0
void ztextbox::reset()
{
	// Line 249, Address: 0x322bd0, Func Offset: 0
	// Line 251, Address: 0x322be0, Func Offset: 0x10
	// Line 252, Address: 0x322c60, Func Offset: 0x90
	// Line 253, Address: 0x322c64, Func Offset: 0x94
	// Line 254, Address: 0x322c70, Func Offset: 0xa0
	// Line 253, Address: 0x322c78, Func Offset: 0xa8
	// Line 254, Address: 0x322c84, Func Offset: 0xb4
	// Line 255, Address: 0x322c94, Func Offset: 0xc4
	// Line 256, Address: 0x322d28, Func Offset: 0x158
	// Func End, Address: 0x322d38, Func Offset: 0x168
}

// load__8ztextboxFRCQ28ztextbox10asset_type
// Start address: 0x322d40
void ztextbox::load(asset_type& a)
{
	RwTexture* tex;
	// Line 217, Address: 0x322d40, Func Offset: 0
	// Line 218, Address: 0x322d54, Func Offset: 0x14
	// Line 219, Address: 0x322d5c, Func Offset: 0x1c
	// Line 221, Address: 0x322d60, Func Offset: 0x20
	// Line 219, Address: 0x322d64, Func Offset: 0x24
	// Line 221, Address: 0x322d68, Func Offset: 0x28
	// Line 220, Address: 0x322d6c, Func Offset: 0x2c
	// Line 221, Address: 0x322d70, Func Offset: 0x30
	// Line 222, Address: 0x322d74, Func Offset: 0x34
	// Line 223, Address: 0x322d88, Func Offset: 0x48
	// Line 224, Address: 0x322d8c, Func Offset: 0x4c
	// Line 225, Address: 0x322d90, Func Offset: 0x50
	// Line 227, Address: 0x322da4, Func Offset: 0x64
	// Line 228, Address: 0x322dac, Func Offset: 0x6c
	// Line 230, Address: 0x322db4, Func Offset: 0x74
	// Line 234, Address: 0x322dbc, Func Offset: 0x7c
	// Line 236, Address: 0x322dc4, Func Offset: 0x84
	// Line 238, Address: 0x322dc8, Func Offset: 0x88
	// Line 239, Address: 0x322dd0, Func Offset: 0x90
	// Func End, Address: 0x322de4, Func Offset: 0xa4
}

// cb_dispatch__22@unnamed@zTextBox_cpp@FP5xBaseP5xBaseUiPCfP5xBase
// Start address: 0x322df0
int32 cb_dispatch(xBase* to, uint32 event, float32* argf)
{
	ztextbox& e;
	// Line 169, Address: 0x322df0, Func Offset: 0
	// Line 174, Address: 0x322df4, Func Offset: 0x4
	// Line 169, Address: 0x322df8, Func Offset: 0x8
	// Line 174, Address: 0x322e00, Func Offset: 0x10
	// Line 178, Address: 0x322e60, Func Offset: 0x70
	// Line 179, Address: 0x322e68, Func Offset: 0x78
	// Line 181, Address: 0x322e70, Func Offset: 0x80
	// Line 182, Address: 0x322e84, Func Offset: 0x94
	// Line 183, Address: 0x322e8c, Func Offset: 0x9c
	// Line 184, Address: 0x322e90, Func Offset: 0xa0
	// Line 185, Address: 0x322ea8, Func Offset: 0xb8
	// Line 189, Address: 0x322eb0, Func Offset: 0xc0
	// Line 190, Address: 0x322f50, Func Offset: 0x160
	// Line 191, Address: 0x322fa8, Func Offset: 0x1b8
	// Line 193, Address: 0x322fb0, Func Offset: 0x1c0
	// Line 194, Address: 0x323028, Func Offset: 0x238
	// Line 196, Address: 0x323030, Func Offset: 0x240
	// Line 197, Address: 0x3230c4, Func Offset: 0x2d4
	// Line 198, Address: 0x3230cc, Func Offset: 0x2dc
	// Line 199, Address: 0x3230d0, Func Offset: 0x2e0
	// Line 200, Address: 0x32312c, Func Offset: 0x33c
	// Line 201, Address: 0x323134, Func Offset: 0x344
	// Line 202, Address: 0x323138, Func Offset: 0x348
	// Line 207, Address: 0x323154, Func Offset: 0x364
	// Line 210, Address: 0x323158, Func Offset: 0x368
	// Line 209, Address: 0x323160, Func Offset: 0x370
	// Line 210, Address: 0x323164, Func Offset: 0x374
	// Func End, Address: 0x32316c, Func Offset: 0x37c
}

// parse_tag_blahblah__22@unnamed@zTextBox_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x323170
void parse_tag_blahblah()
{
	// Line 152, Address: 0x323170, Func Offset: 0
	// Func End, Address: 0x323178, Func Offset: 0x8
}

// init_textbox__22@unnamed@zTextBox_cpp@FR8ztextbox
// Start address: 0x323180
void init_textbox(ztextbox& e)
{
	asset_type& a;
	int32 lines;
	float32 minh;
	float32 maxh;
	float32 hmore;
	uint32 xjlookup[3];
	// Line 98, Address: 0x323180, Func Offset: 0
	// Line 107, Address: 0x323188, Func Offset: 0x8
	// Line 98, Address: 0x32318c, Func Offset: 0xc
	// Line 107, Address: 0x323190, Func Offset: 0x10
	// Line 98, Address: 0x323194, Func Offset: 0x14
	// Line 100, Address: 0x3231a0, Func Offset: 0x20
	// Line 101, Address: 0x3231a4, Func Offset: 0x24
	// Line 102, Address: 0x3231a8, Func Offset: 0x28
	// Line 103, Address: 0x3231b0, Func Offset: 0x30
	// Line 104, Address: 0x3231b8, Func Offset: 0x38
	// Line 105, Address: 0x3231c0, Func Offset: 0x40
	// Line 106, Address: 0x3231c8, Func Offset: 0x48
	// Line 107, Address: 0x3231d0, Func Offset: 0x50
	// Line 109, Address: 0x323218, Func Offset: 0x98
	// Line 110, Address: 0x323228, Func Offset: 0xa8
	// Line 111, Address: 0x323238, Func Offset: 0xb8
	// Line 112, Address: 0x323250, Func Offset: 0xd0
	// Line 118, Address: 0x32326c, Func Offset: 0xec
	// Line 120, Address: 0x3232a4, Func Offset: 0x124
	// Line 118, Address: 0x3232a8, Func Offset: 0x128
	// Line 120, Address: 0x3232b0, Func Offset: 0x130
	// Line 122, Address: 0x3232bc, Func Offset: 0x13c
	// Line 125, Address: 0x3232e0, Func Offset: 0x160
	// Line 127, Address: 0x3232e4, Func Offset: 0x164
	// Line 125, Address: 0x3232e8, Func Offset: 0x168
	// Line 127, Address: 0x3232ec, Func Offset: 0x16c
	// Line 125, Address: 0x3232f0, Func Offset: 0x170
	// Line 127, Address: 0x3232fc, Func Offset: 0x17c
	// Line 128, Address: 0x323320, Func Offset: 0x1a0
	// Line 130, Address: 0x32332c, Func Offset: 0x1ac
	// Line 131, Address: 0x323330, Func Offset: 0x1b0
	// Line 132, Address: 0x32333c, Func Offset: 0x1bc
	// Line 133, Address: 0x323358, Func Offset: 0x1d8
	// Line 134, Address: 0x323360, Func Offset: 0x1e0
	// Line 135, Address: 0x323368, Func Offset: 0x1e8
	// Line 136, Address: 0x323370, Func Offset: 0x1f0
	// Line 137, Address: 0x323374, Func Offset: 0x1f4
	// Line 139, Address: 0x323378, Func Offset: 0x1f8
	// Line 140, Address: 0x323388, Func Offset: 0x208
	// Line 141, Address: 0x323398, Func Offset: 0x218
	// Line 142, Address: 0x3233b0, Func Offset: 0x230
	// Line 143, Address: 0x3233c8, Func Offset: 0x248
	// Func End, Address: 0x3233e4, Func Offset: 0x264
}

// render_bk_tex_wrap__22@unnamed@zTextBox_cpp@FRC8ztextbox
// Start address: 0x3233f0
void render_bk_tex_wrap()
{
	// Line 82, Address: 0x3233f0, Func Offset: 0
	// Func End, Address: 0x3233f8, Func Offset: 0x8
}

// render_bk_tex_scale__22@unnamed@zTextBox_cpp@FRC8ztextbox
// Start address: 0x323400
void render_bk_tex_scale(ztextbox& e)
{
	float32 rcz;
	float32 nsz;
	basic_rect r;
	RwSky2DVertex vert[6];
	// Line 62, Address: 0x323400, Func Offset: 0
	// Line 64, Address: 0x323404, Func Offset: 0x4
	// Line 62, Address: 0x323408, Func Offset: 0x8
	// Line 64, Address: 0x32340c, Func Offset: 0xc
	// Line 62, Address: 0x323410, Func Offset: 0x10
	// Line 64, Address: 0x323414, Func Offset: 0x14
	// Line 62, Address: 0x323418, Func Offset: 0x18
	// Line 63, Address: 0x323424, Func Offset: 0x24
	// Line 64, Address: 0x323428, Func Offset: 0x28
	// Line 63, Address: 0x32342c, Func Offset: 0x2c
	// Line 64, Address: 0x32344c, Func Offset: 0x4c
	// Line 65, Address: 0x32345c, Func Offset: 0x5c
	// Line 66, Address: 0x323464, Func Offset: 0x64
	// Line 68, Address: 0x323470, Func Offset: 0x70
	// Line 69, Address: 0x323474, Func Offset: 0x74
	// Line 68, Address: 0x323478, Func Offset: 0x78
	// Line 69, Address: 0x32347c, Func Offset: 0x7c
	// Line 68, Address: 0x323480, Func Offset: 0x80
	// Line 69, Address: 0x32348c, Func Offset: 0x8c
	// Line 70, Address: 0x32349c, Func Offset: 0x9c
	// Line 69, Address: 0x3234a0, Func Offset: 0xa0
	// Line 70, Address: 0x3234a4, Func Offset: 0xa4
	// Line 68, Address: 0x3234ac, Func Offset: 0xac
	// Line 69, Address: 0x3234bc, Func Offset: 0xbc
	// Line 70, Address: 0x3234ec, Func Offset: 0xec
	// Line 71, Address: 0x323604, Func Offset: 0x204
	// Line 70, Address: 0x323608, Func Offset: 0x208
	// Line 71, Address: 0x32360c, Func Offset: 0x20c
	// Line 72, Address: 0x323730, Func Offset: 0x330
	// Line 71, Address: 0x323734, Func Offset: 0x334
	// Line 72, Address: 0x323738, Func Offset: 0x338
	// Line 73, Address: 0x32385c, Func Offset: 0x45c
	// Line 72, Address: 0x323860, Func Offset: 0x460
	// Line 73, Address: 0x323864, Func Offset: 0x464
	// Line 74, Address: 0x323874, Func Offset: 0x474
	// Line 73, Address: 0x323878, Func Offset: 0x478
	// Line 74, Address: 0x32387c, Func Offset: 0x47c
	// Line 73, Address: 0x323880, Func Offset: 0x480
	// Line 74, Address: 0x323888, Func Offset: 0x488
	// Line 75, Address: 0x323890, Func Offset: 0x490
	// Line 73, Address: 0x32389c, Func Offset: 0x49c
	// Line 75, Address: 0x3238a0, Func Offset: 0x4a0
	// Line 73, Address: 0x3238a4, Func Offset: 0x4a4
	// Line 74, Address: 0x3238b0, Func Offset: 0x4b0
	// Line 75, Address: 0x3238d0, Func Offset: 0x4d0
	// Line 76, Address: 0x3239e0, Func Offset: 0x5e0
	// Line 75, Address: 0x3239e4, Func Offset: 0x5e4
	// Line 76, Address: 0x3239e8, Func Offset: 0x5e8
	// Line 77, Address: 0x3239f8, Func Offset: 0x5f8
	// Line 78, Address: 0x323a00, Func Offset: 0x600
	// Func End, Address: 0x323a18, Func Offset: 0x618
}

// render_bk_fill__22@unnamed@zTextBox_cpp@FRC8ztextbox
// Start address: 0x323a20
void render_bk_fill(ztextbox& e)
{
	asset_type& a;
	// Line 42, Address: 0x323a20, Func Offset: 0
	// Line 44, Address: 0x323a28, Func Offset: 0x8
	// Line 45, Address: 0x323a2c, Func Offset: 0xc
	// Line 46, Address: 0x323a58, Func Offset: 0x38
	// Func End, Address: 0x323a64, Func Offset: 0x44
}

