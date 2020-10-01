typedef struct ztaskbox;
typedef struct xGroupAsset;
typedef struct xTextAsset;
typedef struct _anon0;
typedef struct xBase;
typedef struct callback_0;
typedef union _class_0;
typedef struct asset_type_0;
typedef struct xSerial;
typedef struct ztextbox;
typedef struct talk_callback;
typedef struct _class_1;
typedef struct asset_type_1;
typedef struct zNPCCommon;
typedef struct xLinkAsset;
typedef struct ztalkbox;
typedef struct _class_2;
typedef struct xGroup;
typedef enum answer_enum;
typedef struct xBaseAsset;
typedef struct callback_1;
typedef struct xDynAsset;
typedef enum state_enum;
typedef struct st_SERIAL_CLIENTINFO;
typedef struct _anon1;
typedef struct _class_3;

typedef s32(*type_1)(xBase*, xBase*, u32, f32*, xBase*);
typedef s32(*type_3)(xBase*, xBase*, u32, f32*, xBase*);

typedef f32 type_0[4];
typedef u32 type_2[6];
typedef s8 type_4[16];
typedef s8 type_5[16];

struct ztaskbox : xBase
{
	_class_0 flag;
	asset_type_1* asset;
	state_enum state;
	callback_0* cb;
	ztaskbox* current;
};

struct xGroupAsset : xBaseAsset
{
	u16 itemCount;
	u16 groupFlags;
};

struct xTextAsset
{
	u32 len;
};

struct _anon0
{
};

struct xBase
{
	u32 id;
	u8 baseType;
	u8 linkCount;
	u16 baseFlags;
	xLinkAsset* link;
	type_1 eventFunc;
};

struct callback_0
{
};

union _class_0
{
	u8 enabled;
	u32 dummy;
};

struct asset_type_0
{
};

struct xSerial
{
	u32 idtag;
	s32 baseoff;
	st_SERIAL_CLIENTINFO* ctxtdata;
	s32 warned;
	s32 curele;
	s32 bitidx;
	s32 bittally;
};

struct ztextbox
{
};

struct talk_callback : callback_1
{
	ztaskbox* task;
	answer_enum answer;
};

struct _class_1
{
	s8* skip;
	s8* noskip;
	s8* quit;
	s8* noquit;
	s8* yesno;
};

struct asset_type_1 : xDynAsset
{
	u8 persistent;
	u8 loop;
	u8 enable;
	u8 retry;
	u32 talk_box;
	u32 next_task;
	type_2 stages;
};

struct zNPCCommon
{
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

struct ztalkbox : xBase
{
	_class_3 flag;
	asset_type_0* asset;
	ztextbox* dialog_box;
	ztextbox* prompt_box;
	ztextbox* quit_box;
	_class_1 prompt;
	zNPCCommon* npc;
};

struct _class_2
{
	ztaskbox* active;
};

struct xGroup : xBase
{
	xGroupAsset* asset;
	xBase** item;
	u32 last_index;
	s32 flg_group;
};

enum answer_enum
{
	ANSWER_CONTINUE,
	ANSWER_YES,
	ANSWER_NO
};

struct xBaseAsset
{
	u32 id;
	u8 baseType;
	u8 linkCount;
	u16 baseFlags;
};

struct callback_1
{
};

struct xDynAsset : xBaseAsset
{
	u32 type;
	u16 version;
	u16 handle;
};

enum state_enum
{
	STATE_INVALID = 0xffffffff,
	STATE_BEGIN,
	STATE_DESCRIPTION,
	STATE_REMINDER,
	STATE_SUCCESS,
	STATE_FAILURE,
	STATE_END,
	MAX_STATE
};

struct st_SERIAL_CLIENTINFO
{
};

struct _anon1
{
};

struct _class_3
{
	u8 visible;
};

type_4 buffer;
type_5 buffer;
talk_callback* tcb;
_class_2 shared;
_anon1 __vt__Q28ztaskbox13talk_callback;
_anon0 __vt__Q28ztalkbox8callback;
type_3 cb_dispatch;

s32 cb_dispatch(xBase* to, u32 event);
void on_talk_stop(ztaskbox* this);
void set_state(ztaskbox* this, state_enum state);
void load(xBase& data, xDynAsset& asset);
void init();
void set_callback(ztaskbox* this, callback_0* cb);
void stop_talk(ztaskbox* this);
void start_talk(ztaskbox* this, zNPCCommon* npc);
void write(ztaskbox* this, xSerial& s);
void read(ztaskbox* this, xSerial& s);
void load(ztaskbox* this, asset_type_1& a);
void on_start(talk_callback* this);
void on_stop(talk_callback* this);
void on_answer(talk_callback* this, answer_enum answer);

// cb_dispatch__8ztaskboxFP5xBaseP5xBaseUiPCfP5xBase
// Start address: 0x323a70
s32 cb_dispatch(xBase* to, u32 event)
{
	ztaskbox& e;
}

// on_talk_stop__8ztaskboxFQ28ztalkbox11answer_enum
// Start address: 0x323c10
void on_talk_stop(ztaskbox* this)
{
}

// set_state__8ztaskboxFQ28ztaskbox10state_enum
// Start address: 0x323ce0
void set_state(ztaskbox* this, state_enum state)
{
}

// load__8ztaskboxFR5xBaseR9xDynAssetUi
// Start address: 0x323e70
void load(xBase& data, xDynAsset& asset)
{
}

// init__8ztaskboxFv
// Start address: 0x323e80
void init()
{
	talk_callback tcb;
	s8 @3564;
}

// set_callback__8ztaskboxFPQ28ztaskbox8callback
// Start address: 0x323ec0
void set_callback(ztaskbox* this, callback_0* cb)
{
}

// stop_talk__8ztaskboxFv
// Start address: 0x323ed0
void stop_talk(ztaskbox* this)
{
	ztalkbox* talk;
}

// start_talk__8ztaskboxFP10zNPCCommon
// Start address: 0x323f70
void start_talk(ztaskbox* this, zNPCCommon* npc)
{
	ztalkbox* talk;
}

// write__8ztaskboxFR7xSerial
// Start address: 0x3240f0
void write(ztaskbox* this, xSerial& s)
{
}

// read__8ztaskboxFR7xSerial
// Start address: 0x324100
void read(ztaskbox* this, xSerial& s)
{
	u8 state;
}

// load__8ztaskboxFRCQ28ztaskbox10asset_type
// Start address: 0x324140
void load(ztaskbox* this, asset_type_1& a)
{
}

// on_start__Q28ztaskbox13talk_callbackFv
// Start address: 0x3241f0
void on_start(talk_callback* this)
{
}

// on_stop__Q28ztaskbox13talk_callbackFv
// Start address: 0x324230
void on_stop(talk_callback* this)
{
}

// on_answer__Q28ztaskbox13talk_callbackFQ28ztalkbox11answer_enum
// Start address: 0x324240
void on_answer(talk_callback* this, answer_enum answer)
{
}

