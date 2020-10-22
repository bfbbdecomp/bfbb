typedef struct ztaskbox;
typedef struct xGroupAsset;
typedef struct xTextAsset;
typedef struct _anon0;
typedef struct xBase;
typedef struct callback_0;
typedef struct _class_0;
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

typedef int32(*type_1)(xBase*, xBase*, uint32, float32*, xBase*);
typedef int32(*type_3)(xBase*, xBase*, uint32, float32*, xBase*);

typedef float32 type_0[4];
typedef uint32 type_2[6];
typedef int8 type_4[16];
typedef int8 type_5[16];

struct ztaskbox : xBase
{
	_class_0 flag;
	asset_type_1* asset;
	state_enum state;
	callback_0* cb;
	ztaskbox* current;

	void on_talk_stop();
	void set_state(state_enum state);
	void set_callback(callback_0* cb);
	void stop_talk();
	void start_talk(zNPCCommon* npc);
	void write(xSerial& s);
	void read(xSerial& s);
	void load(asset_type_1& a);
};

struct xGroupAsset : xBaseAsset
{
	uint16 itemCount;
	uint16 groupFlags;
};

struct xTextAsset
{
	uint32 len;
};

struct _anon0
{
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

struct callback_0
{
};

struct _class_0
{
	struct
	{
		uint8 enabled : 8;
		uint32 dummy : 24;
	};
};

struct asset_type_0
{
};

struct xSerial
{
	uint32 idtag;
	int32 baseoff;
	st_SERIAL_CLIENTINFO* ctxtdata;
	int32 warned;
	int32 curele;
	int32 bitidx;
	int32 bittally;
};

struct ztextbox
{
};

struct talk_callback : callback_1
{
	ztaskbox* task;
	answer_enum answer;

	void on_start();
	void on_stop();
	void on_answer(answer_enum answer);
};

struct _class_1
{
	int8* skip;
	int8* noskip;
	int8* quit;
	int8* noquit;
	int8* yesno;
};

struct asset_type_1 : xDynAsset
{
	uint8 persistent : 8;
	uint8 loop : 8;
	uint8 enable : 8;
	uint8 retry : 8;
	uint32 talk_box;
	uint32 next_task;
	uint32 stages[6];
};

struct zNPCCommon
{
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
	uint32 last_index;
	int32 flg_group;
};

enum answer_enum
{
	ANSWER_CONTINUE,
	ANSWER_YES,
	ANSWER_NO
};

struct xBaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
};

struct callback_1
{
};

struct xDynAsset : xBaseAsset
{
	uint32 type;
	uint16 version;
	uint16 handle;
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
	uint8 visible : 1;
};

int8 buffer[16];
int8 buffer[16];
talk_callback* tcb;
_class_2 shared;
_anon1 __vt__Q28ztaskbox13talk_callback;
_anon0 __vt__Q28ztalkbox8callback;
int32(*cb_dispatch)(xBase*, xBase*, uint32, float32*, xBase*);

int32 cb_dispatch(xBase* to, uint32 event);
void on_talk_stop();
void set_state(state_enum state);
void load(xBase& data, xDynAsset& asset);
void init();
void set_callback(callback_0* cb);
void stop_talk();
void start_talk(zNPCCommon* npc);
void write(xSerial& s);
void read(xSerial& s);
void load(asset_type_1& a);
void on_start();
void on_stop();
void on_answer(answer_enum answer);

// cb_dispatch__8ztaskboxFP5xBaseP5xBaseUiPCfP5xBase
// Start address: 0x323a70
int32 ztaskbox::cb_dispatch(xBase* to, uint32 event)
{
	ztaskbox& e;
	// Line 325, Address: 0x323a70, Func Offset: 0
	// Line 330, Address: 0x323a74, Func Offset: 0x4
	// Line 325, Address: 0x323a78, Func Offset: 0x8
	// Line 330, Address: 0x323a80, Func Offset: 0x10
	// Line 333, Address: 0x323ae0, Func Offset: 0x70
	// Line 334, Address: 0x323b34, Func Offset: 0xc4
	// Line 335, Address: 0x323b3c, Func Offset: 0xcc
	// Line 336, Address: 0x323b40, Func Offset: 0xd0
	// Line 337, Address: 0x323b4c, Func Offset: 0xdc
	// Line 338, Address: 0x323b54, Func Offset: 0xe4
	// Line 339, Address: 0x323b58, Func Offset: 0xe8
	// Line 340, Address: 0x323b60, Func Offset: 0xf0
	// Line 342, Address: 0x323b68, Func Offset: 0xf8
	// Line 343, Address: 0x323b7c, Func Offset: 0x10c
	// Line 344, Address: 0x323b84, Func Offset: 0x114
	// Line 343, Address: 0x323b88, Func Offset: 0x118
	// Line 345, Address: 0x323b8c, Func Offset: 0x11c
	// Line 346, Address: 0x323bb4, Func Offset: 0x144
	// Line 347, Address: 0x323bbc, Func Offset: 0x14c
	// Line 346, Address: 0x323bc0, Func Offset: 0x150
	// Line 348, Address: 0x323bc4, Func Offset: 0x154
	// Line 357, Address: 0x323bec, Func Offset: 0x17c
	// Line 360, Address: 0x323bf0, Func Offset: 0x180
	// Line 359, Address: 0x323bf8, Func Offset: 0x188
	// Line 360, Address: 0x323bfc, Func Offset: 0x18c
	// Func End, Address: 0x323c04, Func Offset: 0x194
}

// on_talk_stop__8ztaskboxFQ28ztalkbox11answer_enum
// Start address: 0x323c10
void ztaskbox::on_talk_stop()
{
	// Line 280, Address: 0x323c10, Func Offset: 0
	// Line 282, Address: 0x323c1c, Func Offset: 0xc
	// Line 285, Address: 0x323c48, Func Offset: 0x38
	// Line 286, Address: 0x323c50, Func Offset: 0x40
	// Line 288, Address: 0x323c58, Func Offset: 0x48
	// Line 289, Address: 0x323c60, Func Offset: 0x50
	// Line 291, Address: 0x323c68, Func Offset: 0x58
	// Line 292, Address: 0x323c88, Func Offset: 0x78
	// Line 293, Address: 0x323c90, Func Offset: 0x80
	// Line 300, Address: 0x323c98, Func Offset: 0x88
	// Line 304, Address: 0x323cb4, Func Offset: 0xa4
	// Line 305, Address: 0x323cd0, Func Offset: 0xc0
	// Func End, Address: 0x323ce0, Func Offset: 0xd0
}

// set_state__8ztaskboxFQ28ztaskbox10state_enum
// Start address: 0x323ce0
void ztaskbox::set_state(state_enum state)
{
	// Line 244, Address: 0x323ce0, Func Offset: 0
	// Line 248, Address: 0x323ce4, Func Offset: 0x4
	// Line 244, Address: 0x323ce8, Func Offset: 0x8
	// Line 246, Address: 0x323cf0, Func Offset: 0x10
	// Line 248, Address: 0x323cf8, Func Offset: 0x18
	// Line 250, Address: 0x323d1c, Func Offset: 0x3c
	// Line 251, Address: 0x323d20, Func Offset: 0x40
	// Line 252, Address: 0x323d4c, Func Offset: 0x6c
	// Line 253, Address: 0x323d54, Func Offset: 0x74
	// Line 254, Address: 0x323d5c, Func Offset: 0x7c
	// Line 255, Address: 0x323d60, Func Offset: 0x80
	// Line 256, Address: 0x323d8c, Func Offset: 0xac
	// Line 257, Address: 0x323d94, Func Offset: 0xb4
	// Line 260, Address: 0x323d9c, Func Offset: 0xbc
	// Line 261, Address: 0x323da0, Func Offset: 0xc0
	// Line 262, Address: 0x323dcc, Func Offset: 0xec
	// Line 263, Address: 0x323dd4, Func Offset: 0xf4
	// Line 264, Address: 0x323ddc, Func Offset: 0xfc
	// Line 265, Address: 0x323de0, Func Offset: 0x100
	// Line 266, Address: 0x323e0c, Func Offset: 0x12c
	// Line 267, Address: 0x323e14, Func Offset: 0x134
	// Line 268, Address: 0x323e1c, Func Offset: 0x13c
	// Line 269, Address: 0x323e20, Func Offset: 0x140
	// Line 272, Address: 0x323e58, Func Offset: 0x178
	// Func End, Address: 0x323e68, Func Offset: 0x188
}

// load__8ztaskboxFR5xBaseR9xDynAssetUi
// Start address: 0x323e70
void ztaskbox::load(xBase& data, xDynAsset& asset)
{
	// Line 234, Address: 0x323e70, Func Offset: 0
	// Func End, Address: 0x323e78, Func Offset: 0x8
}

// init__8ztaskboxFv
// Start address: 0x323e80
void ztaskbox::init()
{
	talk_callback tcb;
	int8 @3564;
	// Line 227, Address: 0x323e80, Func Offset: 0
	// Line 228, Address: 0x323ea8, Func Offset: 0x28
	// Line 229, Address: 0x323eb0, Func Offset: 0x30
	// Func End, Address: 0x323eb8, Func Offset: 0x38
}

// set_callback__8ztaskboxFPQ28ztaskbox8callback
// Start address: 0x323ec0
void ztaskbox::set_callback(callback_0* cb)
{
	// Line 217, Address: 0x323ec0, Func Offset: 0
	// Func End, Address: 0x323ec8, Func Offset: 0x8
}

// stop_talk__8ztaskboxFv
// Start address: 0x323ed0
void ztaskbox::stop_talk()
{
	ztalkbox* talk;
	// Line 136, Address: 0x323ed0, Func Offset: 0
	// Line 137, Address: 0x323edc, Func Offset: 0xc
	// Line 138, Address: 0x323ee4, Func Offset: 0x14
	// Line 139, Address: 0x323f00, Func Offset: 0x30
	// Line 140, Address: 0x323f28, Func Offset: 0x58
	// Line 143, Address: 0x323f34, Func Offset: 0x64
	// Line 144, Address: 0x323f44, Func Offset: 0x74
	// Line 147, Address: 0x323f4c, Func Offset: 0x7c
	// Line 149, Address: 0x323f54, Func Offset: 0x84
	// Line 150, Address: 0x323f58, Func Offset: 0x88
	// Func End, Address: 0x323f64, Func Offset: 0x94
}

// start_talk__8ztaskboxFP10zNPCCommon
// Start address: 0x323f70
void ztaskbox::start_talk(zNPCCommon* npc)
{
	ztalkbox* talk;
	// Line 108, Address: 0x323f70, Func Offset: 0
	// Line 109, Address: 0x323f90, Func Offset: 0x20
	// Line 110, Address: 0x323f98, Func Offset: 0x28
	// Line 112, Address: 0x323fa0, Func Offset: 0x30
	// Line 113, Address: 0x323fa8, Func Offset: 0x38
	// Line 114, Address: 0x323fb4, Func Offset: 0x44
	// Line 115, Address: 0x323fbc, Func Offset: 0x4c
	// Line 116, Address: 0x323fc0, Func Offset: 0x50
	// Line 117, Address: 0x323fec, Func Offset: 0x7c
	// Line 118, Address: 0x323ffc, Func Offset: 0x8c
	// Line 122, Address: 0x324008, Func Offset: 0x98
	// Line 123, Address: 0x324018, Func Offset: 0xa8
	// Line 126, Address: 0x324020, Func Offset: 0xb0
	// Line 127, Address: 0x3240a8, Func Offset: 0x138
	// Line 129, Address: 0x3240b0, Func Offset: 0x140
	// Line 132, Address: 0x3240b4, Func Offset: 0x144
	// Line 129, Address: 0x3240b8, Func Offset: 0x148
	// Line 131, Address: 0x3240bc, Func Offset: 0x14c
	// Line 132, Address: 0x3240c4, Func Offset: 0x154
	// Line 133, Address: 0x3240d0, Func Offset: 0x160
	// Func End, Address: 0x3240ec, Func Offset: 0x17c
}

// write__8ztaskboxFR7xSerial
// Start address: 0x3240f0
void ztaskbox::write(xSerial& s)
{
	// Line 100, Address: 0x3240f0, Func Offset: 0
	// Func End, Address: 0x324100, Func Offset: 0x10
}

// read__8ztaskboxFR7xSerial
// Start address: 0x324100
void ztaskbox::read(xSerial& s)
{
	uint8 state;
	// Line 90, Address: 0x324100, Func Offset: 0
	// Line 92, Address: 0x32410c, Func Offset: 0xc
	// Line 93, Address: 0x324114, Func Offset: 0x14
	// Line 92, Address: 0x324118, Func Offset: 0x18
	// Line 93, Address: 0x32411c, Func Offset: 0x1c
	// Line 94, Address: 0x324124, Func Offset: 0x24
	// Line 95, Address: 0x324130, Func Offset: 0x30
	// Func End, Address: 0x324140, Func Offset: 0x40
}

// load__8ztaskboxFRCQ28ztaskbox10asset_type
// Start address: 0x324140
void ztaskbox::load(asset_type_1& a)
{
	// Line 67, Address: 0x324140, Func Offset: 0
	// Line 68, Address: 0x324154, Func Offset: 0x14
	// Line 69, Address: 0x32415c, Func Offset: 0x1c
	// Line 71, Address: 0x324160, Func Offset: 0x20
	// Line 69, Address: 0x324164, Func Offset: 0x24
	// Line 71, Address: 0x324168, Func Offset: 0x28
	// Line 70, Address: 0x32416c, Func Offset: 0x2c
	// Line 71, Address: 0x324170, Func Offset: 0x30
	// Line 72, Address: 0x324174, Func Offset: 0x34
	// Line 73, Address: 0x324188, Func Offset: 0x48
	// Line 74, Address: 0x324190, Func Offset: 0x50
	// Line 76, Address: 0x32419c, Func Offset: 0x5c
	// Line 77, Address: 0x3241a0, Func Offset: 0x60
	// Line 76, Address: 0x3241a4, Func Offset: 0x64
	// Line 77, Address: 0x3241a8, Func Offset: 0x68
	// Line 79, Address: 0x3241b0, Func Offset: 0x70
	// Line 82, Address: 0x3241b8, Func Offset: 0x78
	// Line 83, Address: 0x3241bc, Func Offset: 0x7c
	// Line 86, Address: 0x3241c0, Func Offset: 0x80
	// Line 87, Address: 0x3241d8, Func Offset: 0x98
	// Func End, Address: 0x3241ec, Func Offset: 0xac
}

// on_start__Q28ztaskbox13talk_callbackFv
// Start address: 0x3241f0
void talk_callback::on_start()
{
	// Line 41, Address: 0x3241f0, Func Offset: 0
	// Line 43, Address: 0x324200, Func Offset: 0x10
	// Line 44, Address: 0x324218, Func Offset: 0x28
	// Func End, Address: 0x324224, Func Offset: 0x34
}

// on_stop__Q28ztaskbox13talk_callbackFv
// Start address: 0x324230
void talk_callback::on_stop()
{
	// Line 48, Address: 0x324230, Func Offset: 0
	// Func End, Address: 0x32423c, Func Offset: 0xc
}

// on_answer__Q28ztaskbox13talk_callbackFQ28ztalkbox11answer_enum
// Start address: 0x324240
void talk_callback::on_answer(answer_enum answer)
{
	// Line 53, Address: 0x324240, Func Offset: 0
	// Func End, Address: 0x324248, Func Offset: 0x8
}

