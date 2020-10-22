typedef struct xtextbox;
typedef struct _class_0;
typedef struct split_tag;
typedef struct xTextAsset;
typedef struct tag_type;
typedef struct callback;
typedef struct motive_node;
typedef enum _enum_0;
typedef struct widget;
typedef enum _enum_1;
typedef struct ztextbox;
typedef struct xBase;
typedef struct text_widget;
typedef struct xVec3;
typedef struct render_context;
typedef struct _class_1;
typedef struct RwRaster;
typedef struct substr;
typedef struct xBaseAsset;
typedef struct xfont;
typedef struct basic_rect;
typedef struct asset;
typedef struct _class_2;
typedef struct asset_type;
typedef struct _class_3;
typedef struct motive;
typedef struct xLinkAsset;
typedef struct color_type;
typedef struct xDynAsset;
typedef struct text_asset;
typedef struct jot;
typedef struct _class_4;
typedef struct _class_5;
typedef struct _class_6;
typedef struct _anon0;
typedef struct iColor_tag;
typedef struct _anon1;
typedef enum _enum_2;

typedef void(*type_0)(jot&, xtextbox&, xtextbox&);
typedef int32(*type_1)(xBase*, xBase*, uint32, float32*, xBase*);
typedef void(*type_2)(jot&, xtextbox&, xtextbox&, split_tag&);
typedef uint8(*type_4)(widget&, motive&, float32);
typedef void(*type_7)(jot&, xtextbox&, float32, float32);

typedef int8* type_3[16];
typedef float32 type_5[4];
typedef int8 type_6[16];
typedef int8 type_8[128];
typedef int8 type_9[16];

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

struct _class_0
{
	float32 left;
	float32 top;
	float32 right;
	float32 bottom;
};

struct split_tag
{
	substr tag;
	substr name;
	substr action;
	substr value;
};

struct xTextAsset
{
	uint32 len;
};

struct tag_type
{
	substr name;
	void(*parse_tag)(jot&, xtextbox&, xtextbox&, split_tag&);
	void(*reset_tag)(jot&, xtextbox&, xtextbox&, split_tag&);
	void* context;
};

struct callback
{
	void(*render)(jot&, xtextbox&, float32, float32);
	void(*layout_update)(jot&, xtextbox&, xtextbox&);
	void(*render_update)(jot&, xtextbox&, xtextbox&);
};

struct motive_node
{
	motive m;
	motive_node* next;
};

enum _enum_0
{
	XJ_LEFT,
	XJ_CENTER,
	XJ_RIGHT
};

struct widget
{
	_class_5 flag;
	render_context rc;
	render_context start_rc;
	asset* a;
	_enum_2 activity;
	motive_node* _motive_top;
	motive_node* _motive_temp;
	motive_node** _motive_temp_tail;
};

enum _enum_1
{
	EX_UP,
	EX_CENTER,
	EX_DOWN,
	MAX_EX
};

struct ztextbox : xBase
{
	_class_1 flag;
	asset_type* asset;
	xtextbox tb;
	int8* segments[16];
	uint32 segments_size;
	ztextbox* next;
	ztextbox* prev;
	RwRaster* bgtex;
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

struct text_widget : widget
{
	int8 text[128];
	xtextbox tb;

	void render();
	void update(float32 dt);
	uint8 is(uint32 id);
	void destroy();
	void setup();
};

struct xVec3
{
	float32 x;
	float32 y;
	float32 z;
};

struct render_context
{
	xVec3 loc;
	xVec3 size;
	xVec3 rot;
	float32 r;
	float32 g;
	float32 b;
	float32 a;
};

struct _class_1
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

struct substr
{
	int8* text;
	uint32 size;
};

struct xBaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
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

struct asset : xDynAsset
{
	xVec3 loc;
	xVec3 size;
};

struct _class_2
{
	uint32 type;
	color_type color;
	uint32 texture;
};

struct asset_type : xDynAsset
{
	uint32 text;
	basic_rect bounds;
	uint32 font;
	_class_4 size;
	_class_6 space;
	color_type color;
	_class_0 inset;
	_enum_0 xjustify;
	_enum_1 expand;
	float32 max_height;
	_class_2 backdrop;
};

struct _class_3
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

struct motive
{
	float32* value;
	float32 delta;
	float32 start_delta;
	float32 max_offset;
	float32 offset;
	float32 accel;
	uint8(*fp_update)(widget&, motive&, float32);
	void* context;
	uint8 inverse;
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

struct color_type
{
	uint8 r;
	uint8 g;
	uint8 b;
	uint8 a;
};

struct xDynAsset : xBaseAsset
{
	uint32 type;
	uint16 version;
	uint16 handle;
};

struct text_asset : asset
{
	uint32 text_box;
	uint32 text;
};

struct jot
{
	substr s;
	_class_3 flag;
	uint16 context_size;
	void* context;
	basic_rect bounds;
	basic_rect render_bounds;
	callback* cb;
	tag_type* tag;
};

struct _class_4
{
	float32 width;
	float32 height;
};

struct _class_5
{
	uint8 visible;
	uint8 enabled;
};

struct _class_6
{
	float32 x;
	float32 y;
};

struct _anon0
{
};

struct iColor_tag
{
	uint8 r;
	uint8 g;
	uint8 b;
	uint8 a;
};

struct _anon1
{
};

enum _enum_2
{
	ACT_NONE,
	ACT_SHOW,
	ACT_HIDE,
	MAX_ACT
};

basic_rect screen_bounds;
basic_rect default_adjust;
int8 buffer[16];
int8 buffer[16];
_anon0 __vt__Q24xhud11text_widget;
callback text_cb;
iColor_tag g_WHITE;
_anon1 __vt__Q24xhud6widget;

void render();
void update(float32 dt);
uint8 is(uint32 id);
uint32 type();
void destroy();
void setup();
void load(xBase& data, xDynAsset& asset);

// render__Q24xhud11text_widgetFv
// Start address: 0x3d5490
void text_widget::render()
{
	float32 x;
	float32 y;
	uint8 r;
	uint8 g;
	uint8 b;
	uint8 a;
	float32 floatA;
	uint8 newA;
	// Line 96, Address: 0x3d5490, Func Offset: 0
	// Line 107, Address: 0x3d5494, Func Offset: 0x4
	// Line 96, Address: 0x3d5498, Func Offset: 0x8
	// Line 107, Address: 0x3d549c, Func Offset: 0xc
	// Line 96, Address: 0x3d54a0, Func Offset: 0x10
	// Line 106, Address: 0x3d54bc, Func Offset: 0x2c
	// Line 101, Address: 0x3d54c0, Func Offset: 0x30
	// Line 102, Address: 0x3d54c4, Func Offset: 0x34
	// Line 103, Address: 0x3d54c8, Func Offset: 0x38
	// Line 104, Address: 0x3d54cc, Func Offset: 0x3c
	// Line 105, Address: 0x3d54d0, Func Offset: 0x40
	// Line 107, Address: 0x3d54d4, Func Offset: 0x44
	// Line 109, Address: 0x3d5520, Func Offset: 0x90
	// Line 110, Address: 0x3d5538, Func Offset: 0xa8
	// Line 111, Address: 0x3d5558, Func Offset: 0xc8
	// Line 113, Address: 0x3d55a0, Func Offset: 0x110
	// Line 116, Address: 0x3d55b0, Func Offset: 0x120
	// Line 117, Address: 0x3d55b4, Func Offset: 0x124
	// Line 121, Address: 0x3d55b8, Func Offset: 0x128
	// Line 113, Address: 0x3d55c0, Func Offset: 0x130
	// Line 114, Address: 0x3d55c8, Func Offset: 0x138
	// Line 115, Address: 0x3d55d4, Func Offset: 0x144
	// Line 116, Address: 0x3d55d8, Func Offset: 0x148
	// Line 117, Address: 0x3d55dc, Func Offset: 0x14c
	// Line 121, Address: 0x3d55e0, Func Offset: 0x150
	// Line 123, Address: 0x3d55fc, Func Offset: 0x16c
	// Line 131, Address: 0x3d5600, Func Offset: 0x170
	// Line 124, Address: 0x3d5604, Func Offset: 0x174
	// Line 131, Address: 0x3d5608, Func Offset: 0x178
	// Line 125, Address: 0x3d560c, Func Offset: 0x17c
	// Line 126, Address: 0x3d5610, Func Offset: 0x180
	// Line 127, Address: 0x3d5614, Func Offset: 0x184
	// Line 131, Address: 0x3d5618, Func Offset: 0x188
	// Line 132, Address: 0x3d5634, Func Offset: 0x1a4
	// Func End, Address: 0x3d565c, Func Offset: 0x1cc
}

// update__Q24xhud11text_widgetFf
// Start address: 0x3d5660
void text_widget::update(float32 dt)
{
	// Line 80, Address: 0x3d5660, Func Offset: 0
	// Line 81, Address: 0x3d566c, Func Offset: 0xc
	// Line 83, Address: 0x3d5674, Func Offset: 0x14
	// Line 84, Address: 0x3d5680, Func Offset: 0x20
	// Line 89, Address: 0x3d5684, Func Offset: 0x24
	// Line 84, Address: 0x3d5694, Func Offset: 0x34
	// Line 89, Address: 0x3d5698, Func Offset: 0x38
	// Line 85, Address: 0x3d569c, Func Offset: 0x3c
	// Line 89, Address: 0x3d56a0, Func Offset: 0x40
	// Line 85, Address: 0x3d56a4, Func Offset: 0x44
	// Line 86, Address: 0x3d56a8, Func Offset: 0x48
	// Line 87, Address: 0x3d56b0, Func Offset: 0x50
	// Line 88, Address: 0x3d56b8, Func Offset: 0x58
	// Line 89, Address: 0x3d56d8, Func Offset: 0x78
	// Line 90, Address: 0x3d571c, Func Offset: 0xbc
	// Line 91, Address: 0x3d5778, Func Offset: 0x118
	// Line 92, Address: 0x3d57d4, Func Offset: 0x174
	// Line 93, Address: 0x3d5830, Func Offset: 0x1d0
	// Func End, Address: 0x3d5840, Func Offset: 0x1e0
}

// is__Q24xhud11text_widgetCFUi
// Start address: 0x3d5840
uint8 text_widget::is(uint32 id)
{
	uint32 myid;
	int8 @3835;
	// Line 75, Address: 0x3d5840, Func Offset: 0
	// Line 76, Address: 0x3d5854, Func Offset: 0x14
	// Line 77, Address: 0x3d5898, Func Offset: 0x58
	// Func End, Address: 0x3d58ac, Func Offset: 0x6c
}

// type__Q24xhud11text_widgetCFv
// Start address: 0x3d58b0
uint32 type()
{
	// Line 69, Address: 0x3d58b0, Func Offset: 0
	// Line 70, Address: 0x3d58b8, Func Offset: 0x8
	// Line 72, Address: 0x3d58d8, Func Offset: 0x28
	// Line 71, Address: 0x3d58dc, Func Offset: 0x2c
	// Line 72, Address: 0x3d58e0, Func Offset: 0x30
	// Func End, Address: 0x3d58e8, Func Offset: 0x38
}

// destroy__Q24xhud11text_widgetFv
// Start address: 0x3d58f0
void text_widget::destroy()
{
	// Line 65, Address: 0x3d58f0, Func Offset: 0
	// Func End, Address: 0x3d58f8, Func Offset: 0x8
}

// setup__Q24xhud11text_widgetFv
// Start address: 0x3d5900
void text_widget::setup()
{
	text_asset& ta;
	ztextbox* ztb;
	xTextAsset* t;
	int8* s;
	uint32 len;
	// Line 27, Address: 0x3d5900, Func Offset: 0
	// Line 28, Address: 0x3d5914, Func Offset: 0x14
	// Line 30, Address: 0x3d591c, Func Offset: 0x1c
	// Line 31, Address: 0x3d5920, Func Offset: 0x20
	// Line 34, Address: 0x3d592c, Func Offset: 0x2c
	// Line 36, Address: 0x3d5934, Func Offset: 0x34
	// Line 37, Address: 0x3d5a3c, Func Offset: 0x13c
	// Line 38, Address: 0x3d5a44, Func Offset: 0x144
	// Line 39, Address: 0x3d5a48, Func Offset: 0x148
	// Line 40, Address: 0x3d5a50, Func Offset: 0x150
	// Line 42, Address: 0x3d5a54, Func Offset: 0x154
	// Line 40, Address: 0x3d5a58, Func Offset: 0x158
	// Line 42, Address: 0x3d5a5c, Func Offset: 0x15c
	// Line 40, Address: 0x3d5a60, Func Offset: 0x160
	// Line 42, Address: 0x3d5a64, Func Offset: 0x164
	// Line 40, Address: 0x3d5a68, Func Offset: 0x168
	// Line 42, Address: 0x3d5b28, Func Offset: 0x228
	// Line 43, Address: 0x3d5b34, Func Offset: 0x234
	// Line 45, Address: 0x3d5b3c, Func Offset: 0x23c
	// Line 48, Address: 0x3d5b44, Func Offset: 0x244
	// Line 51, Address: 0x3d5b4c, Func Offset: 0x24c
	// Line 52, Address: 0x3d5b58, Func Offset: 0x258
	// Line 53, Address: 0x3d5b68, Func Offset: 0x268
	// Line 54, Address: 0x3d5b78, Func Offset: 0x278
	// Line 58, Address: 0x3d5b80, Func Offset: 0x280
	// Line 59, Address: 0x3d5bc8, Func Offset: 0x2c8
	// Line 60, Address: 0x3d5c10, Func Offset: 0x310
	// Line 61, Address: 0x3d5c54, Func Offset: 0x354
	// Func End, Address: 0x3d5c70, Func Offset: 0x370
}

// load__Q24xhud11text_widgetFR5xBaseR9xDynAssetUi
// Start address: 0x3d5c70
void load(xBase& data, xDynAsset& asset)
{
	// Line 12, Address: 0x3d5c70, Func Offset: 0
	// Line 14, Address: 0x3d5c74, Func Offset: 0x4
	// Line 12, Address: 0x3d5c78, Func Offset: 0x8
	// Line 14, Address: 0x3d5c88, Func Offset: 0x18
	// Line 16, Address: 0x3d5c90, Func Offset: 0x20
	// Line 17, Address: 0x3d5cb8, Func Offset: 0x48
	// Func End, Address: 0x3d5ccc, Func Offset: 0x5c
}

