typedef struct _class;
typedef struct xSB;
typedef struct jot;
typedef struct split_tag;
typedef struct xtextbox;
typedef struct callback;
typedef struct tag_type;
typedef struct xfont;
typedef struct basic_rect;
typedef struct iColor_tag;
typedef struct substr;

typedef void(*type_0)(jot&, xtextbox&, f32, f32);
typedef void(*type_1)(jot&, xtextbox&, xtextbox&);
typedef void(*type_4)(jot&, xtextbox&, xtextbox&, split_tag&);

typedef s8 type_2[16];
typedef s8 type_3[16];
typedef s8 type_5[32];
typedef type_5 type_6[35];
typedef u32 type_7[4096];

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

struct xSB
{
	s8* buf;
	u32 max;
	s8* cur;
	s8* disp;
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
	type_0 render;
	type_1 layout_update;
	type_1 render_update;
};

struct tag_type
{
	substr name;
	type_4 parse_tag;
	type_4 reset_tag;
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

struct basic_rect
{
	f32 x;
	f32 y;
	f32 w;
	f32 h;
};

struct iColor_tag
{
	u8 r;
	u8 g;
	u8 b;
	u8 a;
};

struct substr
{
	s8* text;
	u32 size;
};

type_2 buffer;
type_3 buffer;
basic_rect screen_bounds;
basic_rect default_adjust;
type_6 xStatsFieldName;
u32 gFrameCount;
callback text_cb;
iColor_tag g_WHITE;
type_7 ourGlobals;

void xDebugTimestampScreen();
void xDebugExit();
void xDebugUpdate();
void xDebugInit();
s32 xDebugModeAdd();
void xprintf();

// xDebugTimestampScreen__Fv
// Start address: 0x1d0bb0
void xDebugTimestampScreen()
{
}

// xDebugExit__Fv
// Start address: 0x1d0bc0
void xDebugExit()
{
}

// xDebugUpdate__Fv
// Start address: 0x1d0bd0
void xDebugUpdate()
{
}

// xDebugInit__Fv
// Start address: 0x1d0be0
void xDebugInit()
{
}

// xDebugModeAdd__FPCcPFv_v
// Start address: 0x1d0bf0
s32 xDebugModeAdd()
{
}

// xprintf__FPCce
// Start address: 0x1d0c00
void xprintf()
{
}

