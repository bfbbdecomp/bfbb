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

typedef void(*type_0)(jot&, xtextbox&, float32, float32);
typedef void(*type_1)(jot&, xtextbox&, xtextbox&);
typedef void(*type_4)(jot&, xtextbox&, xtextbox&, split_tag&);

typedef int8 type_2[16];
typedef int8 type_3[16];
typedef int8 type_5[32];
typedef type_5 type_6[35];
typedef uint32 type_7[4096];

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

struct xSB
{
	int8* buf;
	uint32 max;
	int8* cur;
	int8* disp;
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

struct iColor_tag
{
	uint8 r;
	uint8 g;
	uint8 b;
	uint8 a;
};

struct substr
{
	int8* text;
	uint32 size;
};

type_2 buffer;
type_3 buffer;
basic_rect screen_bounds;
basic_rect default_adjust;
type_6 xStatsFieldName;
uint32 gFrameCount;
callback text_cb;
iColor_tag g_WHITE;
type_7 ourGlobals;

void xDebugTimestampScreen();
void xDebugExit();
void xDebugUpdate();
void xDebugInit();
int32 xDebugModeAdd();
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
int32 xDebugModeAdd()
{
}

// xprintf__FPCce
// Start address: 0x1d0c00
void xprintf()
{
}

