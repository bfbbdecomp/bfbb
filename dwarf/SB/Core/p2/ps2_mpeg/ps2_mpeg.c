typedef struct sceIpuDmaEnv;
typedef struct sceGsScissor;
typedef struct ThreadParam;
typedef struct _tagPadAnalog;
typedef struct VoData;
typedef struct _tagiPad;
typedef struct sceGsFrame;
typedef struct tGS_DISPLAY2;
typedef struct sceGsPrim;
typedef enum sceMpegCbType;
typedef struct sceGsZbuf;
typedef struct _tagxPad;
typedef struct VideoDec;
typedef struct ReadBuf;
typedef struct StrFile;
typedef struct _tagxRumble;
typedef struct sceGsClear;
typedef struct tGS_PMODE;
typedef struct VoTag;
typedef struct sceGsDispEnv;
typedef struct sceGsDthe;
typedef enum _tagRumbleType;
typedef struct tGS_BGCOLOR;
typedef struct sceGsTest;
typedef struct xVec2;
typedef struct sceGsDBuff;
typedef struct analog_data;
typedef struct TimeStamp;
typedef struct sceMpegCbDataStr;
typedef struct VoBuf;
typedef struct SpuStreamHeader;
typedef struct sceGsDrawEnv1;
typedef struct sceGsPrmodecont;
typedef struct sceGsColclamp;
typedef struct tGS_SMODE2;
typedef struct sceGsXyoffset;
typedef struct ViBuf;
typedef struct sceMpeg;
typedef struct sceGsRgbaq;
typedef struct tGS_DISPFB2;
typedef struct SpuStreamBody;
typedef struct sceGsXyz;
typedef struct AudioDec;
typedef enum _tagPadState;
typedef struct sceGifTag;

typedef void(*type_0)(void*);
typedef void(*type_5)(void*);
typedef void(*type_14)(VideoDec*);
typedef int32(*type_16)(sceMpeg*, sceMpegCbDataStr*, void*);
typedef int32(*type_18)(sceMpeg*, sceMpegCbDataStr*, void*);
typedef int32(*type_19)(int32);
typedef int32(*type_20)(int32);

typedef uint8 type_1[22];
typedef uint8 type_2[22];
typedef uint8 type_3[1228800];
typedef _tagxPad type_4[4];
typedef uint8 type_6[327680];
typedef int32 type_7[15];
typedef uint32 type_8[29248];
typedef uint32 type_9[29248][2];
typedef float32 type_10[22];
typedef float32 type_11[22];
typedef sceGsDispEnv type_12[2];
typedef int8 type_13[4];
typedef analog_data type_15[2];
typedef int8 type_17[4];

struct sceIpuDmaEnv
{
	uint32 d4madr;
	uint32 d4tadr;
	uint32 d4qwc;
	uint32 d4chcr;
	uint32 d3madr;
	uint32 d3qwc;
	uint32 d3chcr;
	uint32 ipubp;
	uint32 ipuctrl;
};

struct sceGsScissor
{
	struct
	{
		ulong32 SCAX0 : 11;
		ulong32 pad11 : 5;
		ulong32 SCAX1 : 11;
		ulong32 pad27 : 5;
		ulong32 SCAY0 : 11;
		ulong32 pad43 : 5;
		ulong32 SCAY1 : 11;
		ulong32 pad59 : 5;
	};
};

struct ThreadParam
{
	int32 status;
	void(*entry)(void*);
	void* stack;
	int32 stackSize;
	void* gpReg;
	int32 initPriority;
	int32 currentPriority;
	uint32 attr;
	uint32 option;
	int32 waitType;
	int32 waitId;
	int32 wakeupCount;
};

struct _tagPadAnalog
{
	int8 x;
	int8 y;
};

struct VoData
{
	uint8 v[1228800];
};

struct _tagiPad
{
	int32 port;
};

struct sceGsFrame
{
	struct
	{
		ulong32 FBP : 9;
		ulong32 pad09 : 7;
		ulong32 FBW : 6;
		ulong32 pad22 : 2;
		ulong32 PSM : 6;
		ulong32 pad30 : 2;
		ulong32 FBMSK : 32;
	};
};

struct tGS_DISPLAY2
{
	struct
	{
		uint32 DX : 12;
		uint32 DY : 11;
		uint32 MAGH : 4;
		uint32 MAGV : 2;
		uint32 p0 : 3;
	};
	struct
	{
		uint32 DW : 12;
		uint32 DH : 11;
		uint32 p1 : 9;
	};
};

struct sceGsPrim
{
	struct
	{
		ulong32 PRIM : 3;
		ulong32 IIP : 1;
		ulong32 TME : 1;
		ulong32 FGE : 1;
		ulong32 ABE : 1;
		ulong32 AA1 : 1;
		ulong32 FST : 1;
		ulong32 CTXT : 1;
		ulong32 FIX : 1;
		ulong32 pad11 : 53;
	};
};

enum sceMpegCbType
{
	sceMpegCbError,
	sceMpegCbNodata,
	sceMpegCbStopDMA,
	sceMpegCbRestartDMA,
	sceMpegCbBackground,
	sceMpegCbTimeStamp,
	sceMpegCbStr
};

struct sceGsZbuf
{
	struct
	{
		ulong32 ZBP : 9;
		ulong32 pad09 : 15;
		ulong32 PSM : 4;
		ulong32 pad28 : 4;
		ulong32 ZMSK : 1;
		ulong32 pad33 : 31;
	};
};

struct _tagxPad
{
	uint8 value[22];
	uint8 last_value[22];
	uint32 on;
	uint32 pressed;
	uint32 released;
	_tagPadAnalog analog1;
	_tagPadAnalog analog2;
	_tagPadState state;
	uint32 flags;
	_tagxRumble rumble_head;
	int16 port;
	int16 slot;
	_tagiPad context;
	float32 al2d_timer;
	float32 ar2d_timer;
	float32 d_timer;
	float32 up_tmr[22];
	float32 down_tmr[22];
	analog_data analog[2];
};

struct VideoDec
{
	sceMpeg mpeg;
	ViBuf vibuf;
	uint32 state;
	int32 sema;
	int32 hid_endimage;
	int32 hid_vblank;
};

struct ReadBuf
{
	uint8 data[327680];
	int32 put;
	int32 count;
	int32 size;
};

struct StrFile
{
	int32 file;
	int32 size;
	int32 current;
};

struct _tagxRumble
{
	_tagRumbleType type;
	float32 seconds;
	_tagxRumble* next;
	int16 active;
	uint16 fxflags;
};

struct sceGsClear
{
	sceGsTest testa;
	long32 testaaddr;
	sceGsPrim prim;
	long32 primaddr;
	sceGsRgbaq rgbaq;
	long32 rgbaqaddr;
	sceGsXyz xyz2a;
	long32 xyz2aaddr;
	sceGsXyz xyz2b;
	long32 xyz2baddr;
	sceGsTest testb;
	long32 testbaddr;
};

struct tGS_PMODE
{
	struct
	{
		uint32 EN1 : 1;
		uint32 EN2 : 1;
		uint32 CRTMD : 3;
		uint32 MMOD : 1;
		uint32 AMOD : 1;
		uint32 SLBG : 1;
		uint32 ALP : 8;
		uint32 p0 : 16;
	};
	uint32 p1;
};

struct VoTag
{
	int32 status;
	int32 dummy[15];
	uint32 v[29248][2];
};

struct sceGsDispEnv
{
	tGS_PMODE pmode;
	tGS_SMODE2 smode2;
	tGS_DISPFB2 dispfb;
	tGS_DISPLAY2 display;
	tGS_BGCOLOR bgcolor;
};

struct sceGsDthe
{
	struct
	{
		ulong32 DTHE : 1;
		ulong32 pad01 : 63;
	};
};

enum _tagRumbleType
{
	eRumble_Off,
	eRumble_Hi,
	eRumble_VeryLightHi,
	eRumble_VeryLight,
	eRumble_LightHi,
	eRumble_Light,
	eRumble_MediumHi,
	eRumble_Medium,
	eRumble_HeavyHi,
	eRumble_Heavy,
	eRumble_VeryHeavyHi,
	eRumble_VeryHeavy,
	eRumble_Total,
	eRumbleForceU32 = 0x7fffffff
};

struct tGS_BGCOLOR
{
	struct
	{
		uint32 R : 8;
		uint32 G : 8;
		uint32 B : 8;
		uint32 p0 : 8;
	};
	uint32 p1;
};

struct sceGsTest
{
	struct
	{
		ulong32 ATE : 1;
		ulong32 ATST : 3;
		ulong32 AREF : 8;
		ulong32 AFAIL : 2;
		ulong32 DATE : 1;
		ulong32 DATM : 1;
		ulong32 ZTE : 1;
		ulong32 ZTST : 2;
		ulong32 pad19 : 45;
	};
};

struct xVec2
{
	float32 x;
	float32 y;
};

struct sceGsDBuff
{
	sceGsDispEnv disp[2];
	sceGifTag giftag0;
	sceGsDrawEnv1 draw0;
	sceGsClear clear0;
	sceGifTag giftag1;
	sceGsDrawEnv1 draw1;
	sceGsClear clear1;
};

struct analog_data
{
	xVec2 offset;
	xVec2 dir;
	float32 mag;
	float32 ang;
};

struct TimeStamp
{
	long32 pts;
	long32 dts;
	int32 pos;
	int32 len;
};

struct sceMpegCbDataStr
{
	sceMpegCbType type;
	uint8* header;
	uint8* data;
	uint32 len;
	long32 pts;
	long32 dts;
};

struct VoBuf
{
	VoData* data;
	VoTag* tag;
	int32 write;
	int32 count;
	int32 size;
};

struct SpuStreamHeader
{
	int8 id[4];
	int32 size;
	int32 type;
	int32 rate;
	int32 ch;
	int32 interSize;
	int32 loopStart;
	int32 loopEnd;
};

struct sceGsDrawEnv1
{
	sceGsFrame frame1;
	ulong32 frame1addr;
	sceGsZbuf zbuf1;
	long32 zbuf1addr;
	sceGsXyoffset xyoffset1;
	long32 xyoffset1addr;
	sceGsScissor scissor1;
	long32 scissor1addr;
	sceGsPrmodecont prmodecont;
	long32 prmodecontaddr;
	sceGsColclamp colclamp;
	long32 colclampaddr;
	sceGsDthe dthe;
	long32 dtheaddr;
	sceGsTest test1;
	long32 test1addr;
};

struct sceGsPrmodecont
{
	struct
	{
		ulong32 AC : 1;
		ulong32 pad01 : 63;
	};
};

struct sceGsColclamp
{
	struct
	{
		ulong32 CLAMP : 1;
		ulong32 pad01 : 63;
	};
};

struct tGS_SMODE2
{
	struct
	{
		uint32 INT : 1;
		uint32 FFMD : 1;
		uint32 DPMS : 2;
		uint32 p0 : 28;
	};
	uint32 p1;
};

struct sceGsXyoffset
{
	struct
	{
		ulong32 OFX : 16;
		ulong32 pad16 : 16;
		ulong32 OFY : 16;
		ulong32 pad48 : 16;
	};
};

struct ViBuf
{
	<unknown fundamental type (0xa510)>* data;
	<unknown fundamental type (0xa510)>* tag;
	int32 n;
	int32 dmaStart;
	int32 dmaN;
	int32 readBytes;
	int32 buffSize;
	sceIpuDmaEnv env;
	int32 sema;
	int32 isActive;
	long32 totalBytes;
	TimeStamp* ts;
	int32 n_ts;
	int32 count_ts;
	int32 wt_ts;
};

struct sceMpeg
{
	int32 width;
	int32 height;
	int32 frameCount;
	long32 pts;
	long32 dts;
	ulong32 flags;
	long32 pts2nd;
	long32 dts2nd;
	ulong32 flags2nd;
	void* sys;
};

struct sceGsRgbaq
{
	struct
	{
		uint32 R : 8;
		uint32 G : 8;
		uint32 B : 8;
		uint32 A : 8;
	};
	float32 Q;
};

struct tGS_DISPFB2
{
	struct
	{
		uint32 FBP : 9;
		uint32 FBW : 6;
		uint32 PSM : 5;
		uint32 p0 : 12;
	};
	struct
	{
		uint32 DBX : 11;
		uint32 DBY : 11;
		uint32 p1 : 10;
	};
};

struct SpuStreamBody
{
	int8 id[4];
	int32 size;
};

struct sceGsXyz
{
	struct
	{
		ulong32 X : 16;
		ulong32 Y : 16;
		ulong32 Z : 32;
	};
};

struct AudioDec
{
	int32 state;
	SpuStreamHeader sshd;
	SpuStreamBody ssbd;
	int32 hdrCount;
	uint8* data;
	int32 put;
	int32 count;
	int32 size;
	int32 totalBytes;
	int32 iopBuff;
	int32 iopBuffSize;
	int32 iopLastPos;
	int32 iopPausePos;
	int32 totalBytesSent;
	int32 iopZero;
};

enum _tagPadState
{
	ePad_Disabled,
	ePad_DisabledError,
	ePad_Enabled,
	ePad_Missing,
	ePad_Total
};

struct sceGifTag
{
	struct
	{
		ulong32 NLOOP : 15;
		ulong32 EOP : 1;
		ulong32 pad16 : 16;
		ulong32 id : 14;
		ulong32 PRE : 1;
		ulong32 PRIM : 11;
		ulong32 FLG : 2;
		ulong32 NREG : 4;
	};
	struct
	{
		ulong32 REGS0 : 4;
		ulong32 REGS1 : 4;
		ulong32 REGS2 : 4;
		ulong32 REGS3 : 4;
		ulong32 REGS4 : 4;
		ulong32 REGS5 : 4;
		ulong32 REGS6 : 4;
		ulong32 REGS7 : 4;
		ulong32 REGS8 : 4;
		ulong32 REGS9 : 4;
		ulong32 REGS10 : 4;
		ulong32 REGS11 : 4;
		ulong32 REGS12 : 4;
		ulong32 REGS13 : 4;
		ulong32 REGS14 : 4;
		ulong32 REGS15 : 4;
	};
};

VoData* voBufData;
VoTag* voBufTag;
<unknown fundamental type (0xa510)>* viBufTag;
uint8* mpegWork;
int32 mpegWorkSz;
int8* defStack;
ReadBuf* readBufp;
uint8* audioBuff;
<unknown fundamental type (0xa510)>* viBufData;
int8* videoDecStack;
TimeStamp* timeStamp;
int32 videoDecTh;
int32 defaultTh;
StrFile infile;
VideoDec videoDec;
AudioDec audioDec;
VoBuf voBuf;
int32 frd;
uint32 controller_val;
int32 isWithAudio;
sceGsDBuff sony_db;
uint32 skip_buttons;
uint32 skip_time;
int32(*handler_endimage)(int32);
int32(*vblankHandler)(int32);
void* _gp;
void(*videoDecMain)(VideoDec*);
void(*defMain)(void*);
int32(*pcmCallback)(sceMpeg*, sceMpegCbDataStr*, void*);
int32(*videoCallback)(sceMpeg*, sceMpegCbDataStr*, void*);
_tagxPad mPad[4];

void ErrMessage(int8* message);
void defMain();
int32 initAll(int8* bsfilename);
void switchThread();
int32 readMpeg(VideoDec* vd, ReadBuf* rb, StrFile* file);
int32 ps2_mpeg_play(int8* fname, int8* work_area, int32 work_area_size, uint32 buttons, float32 time);

// ErrMessage__FPc
// Start address: 0x1bcb80
void ErrMessage(int8* message)
{
	// Line 578, Address: 0x1bcb84, Func Offset: 0x4
	// Func End, Address: 0x1bcb90, Func Offset: 0x10
}

// defMain__FPv
// Start address: 0x1bcb90
void defMain()
{
	// Line 566, Address: 0x1bcb90, Func Offset: 0
	// Line 568, Address: 0x1bcb98, Func Offset: 0x8
	// Line 569, Address: 0x1bcba0, Func Offset: 0x10
	// Func End, Address: 0x1bcba8, Func Offset: 0x18
}

// initAll__FPCc
// Start address: 0x1bcbb0
int32 initAll(int8* bsfilename)
{
	ThreadParam th_param;
	// Line 436, Address: 0x1bcbb0, Func Offset: 0
	// Line 439, Address: 0x1bcbb4, Func Offset: 0x4
	// Line 436, Address: 0x1bcbb8, Func Offset: 0x8
	// Line 440, Address: 0x1bcbbc, Func Offset: 0xc
	// Line 436, Address: 0x1bcbc0, Func Offset: 0x10
	// Line 439, Address: 0x1bcbe0, Func Offset: 0x30
	// Line 440, Address: 0x1bcbf0, Func Offset: 0x40
	// Line 446, Address: 0x1bcbf8, Func Offset: 0x48
	// Line 452, Address: 0x1bcc00, Func Offset: 0x50
	// Line 453, Address: 0x1bcc08, Func Offset: 0x58
	// Line 462, Address: 0x1bcc30, Func Offset: 0x80
	// Line 468, Address: 0x1bcc48, Func Offset: 0x98
	// Line 470, Address: 0x1bcc68, Func Offset: 0xb8
	// Line 471, Address: 0x1bcc74, Func Offset: 0xc4
	// Line 473, Address: 0x1bcc94, Func Offset: 0xe4
	// Line 479, Address: 0x1bcc98, Func Offset: 0xe8
	// Line 485, Address: 0x1bccc0, Func Offset: 0x110
	// Line 479, Address: 0x1bccc4, Func Offset: 0x114
	// Line 485, Address: 0x1bccc8, Func Offset: 0x118
	// Line 486, Address: 0x1bccd4, Func Offset: 0x124
	// Line 487, Address: 0x1bccdc, Func Offset: 0x12c
	// Line 488, Address: 0x1bcce4, Func Offset: 0x134
	// Line 489, Address: 0x1bccec, Func Offset: 0x13c
	// Line 491, Address: 0x1bccf4, Func Offset: 0x144
	// Line 486, Address: 0x1bccf8, Func Offset: 0x148
	// Line 487, Address: 0x1bccfc, Func Offset: 0x14c
	// Line 488, Address: 0x1bcd00, Func Offset: 0x150
	// Line 489, Address: 0x1bcd04, Func Offset: 0x154
	// Line 491, Address: 0x1bcd08, Func Offset: 0x158
	// Line 492, Address: 0x1bcd14, Func Offset: 0x164
	// Line 500, Address: 0x1bcd20, Func Offset: 0x170
	// Line 502, Address: 0x1bcd24, Func Offset: 0x174
	// Line 500, Address: 0x1bcd28, Func Offset: 0x178
	// Line 503, Address: 0x1bcd2c, Func Offset: 0x17c
	// Line 500, Address: 0x1bcd30, Func Offset: 0x180
	// Line 506, Address: 0x1bcd34, Func Offset: 0x184
	// Line 501, Address: 0x1bcd38, Func Offset: 0x188
	// Line 504, Address: 0x1bcd3c, Func Offset: 0x18c
	// Line 501, Address: 0x1bcd40, Func Offset: 0x190
	// Line 502, Address: 0x1bcd44, Func Offset: 0x194
	// Line 503, Address: 0x1bcd48, Func Offset: 0x198
	// Line 504, Address: 0x1bcd4c, Func Offset: 0x19c
	// Line 506, Address: 0x1bcd50, Func Offset: 0x1a0
	// Line 507, Address: 0x1bcd5c, Func Offset: 0x1ac
	// Line 513, Address: 0x1bcd6c, Func Offset: 0x1bc
	// Line 514, Address: 0x1bcd84, Func Offset: 0x1d4
	// Line 515, Address: 0x1bcd90, Func Offset: 0x1e0
	// Line 522, Address: 0x1bcd98, Func Offset: 0x1e8
	// Line 523, Address: 0x1bcdb0, Func Offset: 0x200
	// Line 525, Address: 0x1bcdbc, Func Offset: 0x20c
	// Line 526, Address: 0x1bcdd4, Func Offset: 0x224
	// Line 528, Address: 0x1bcde0, Func Offset: 0x230
	// Line 529, Address: 0x1bcde8, Func Offset: 0x238
	// Func End, Address: 0x1bce10, Func Offset: 0x260
}

// switchThread__Fv
// Start address: 0x1bce10
void switchThread()
{
	// Line 419, Address: 0x1bce10, Func Offset: 0
	// Func End, Address: 0x1bce18, Func Offset: 0x8
}

// readMpeg__FP8VideoDecP7ReadBufP7StrFile
// Start address: 0x1bce20
int32 readMpeg(VideoDec* vd, ReadBuf* rb, StrFile* file)
{
	uint8* put_ptr;
	uint8* get_ptr;
	int32 putsize;
	int32 getsize;
	int32 readrest;
	int32 writerest;
	int32 count;
	int32 proceed;
	int32 isStarted;
	long32 t0;
	long32 t1;
	// Line 298, Address: 0x1bce20, Func Offset: 0
	// Line 309, Address: 0x1bce3c, Func Offset: 0x1c
	// Line 298, Address: 0x1bce40, Func Offset: 0x20
	// Line 316, Address: 0x1bce5c, Func Offset: 0x3c
	// Line 319, Address: 0x1bce64, Func Offset: 0x44
	// Line 323, Address: 0x1bce74, Func Offset: 0x54
	// Line 329, Address: 0x1bce7c, Func Offset: 0x5c
	// Line 335, Address: 0x1bcea0, Func Offset: 0x80
	// Line 343, Address: 0x1bcea8, Func Offset: 0x88
	// Line 344, Address: 0x1bceb4, Func Offset: 0x94
	// Line 345, Address: 0x1bcec8, Func Offset: 0xa8
	// Line 346, Address: 0x1bced8, Func Offset: 0xb8
	// Line 347, Address: 0x1bcee4, Func Offset: 0xc4
	// Line 350, Address: 0x1bcee8, Func Offset: 0xc8
	// Line 356, Address: 0x1bcef0, Func Offset: 0xd0
	// Line 357, Address: 0x1bcefc, Func Offset: 0xdc
	// Line 359, Address: 0x1bcf04, Func Offset: 0xe4
	// Line 362, Address: 0x1bcf24, Func Offset: 0x104
	// Line 363, Address: 0x1bcf30, Func Offset: 0x110
	// Line 365, Address: 0x1bcf34, Func Offset: 0x114
	// Line 371, Address: 0x1bcf38, Func Offset: 0x118
	// Line 373, Address: 0x1bcf44, Func Offset: 0x124
	// Line 374, Address: 0x1bcf50, Func Offset: 0x130
	// Line 375, Address: 0x1bcf78, Func Offset: 0x158
	// Line 376, Address: 0x1bcf80, Func Offset: 0x160
	// Line 377, Address: 0x1bcf84, Func Offset: 0x164
	// Line 383, Address: 0x1bcf88, Func Offset: 0x168
	// Line 385, Address: 0x1bcfc0, Func Offset: 0x1a0
	// Line 386, Address: 0x1bcfc8, Func Offset: 0x1a8
	// Line 387, Address: 0x1bcfd4, Func Offset: 0x1b4
	// Line 388, Address: 0x1bcfdc, Func Offset: 0x1bc
	// Line 389, Address: 0x1bcfe0, Func Offset: 0x1c0
	// Line 391, Address: 0x1bcfe4, Func Offset: 0x1c4
	// Line 394, Address: 0x1bd008, Func Offset: 0x1e8
	// Line 395, Address: 0x1bd010, Func Offset: 0x1f0
	// Line 396, Address: 0x1bd018, Func Offset: 0x1f8
	// Line 399, Address: 0x1bd030, Func Offset: 0x210
	// Line 402, Address: 0x1bd038, Func Offset: 0x218
	// Line 403, Address: 0x1bd040, Func Offset: 0x220
	// Line 405, Address: 0x1bd068, Func Offset: 0x248
	// Line 406, Address: 0x1bd070, Func Offset: 0x250
	// Line 407, Address: 0x1bd07c, Func Offset: 0x25c
	// Line 408, Address: 0x1bd084, Func Offset: 0x264
	// Line 411, Address: 0x1bd088, Func Offset: 0x268
	// Line 410, Address: 0x1bd090, Func Offset: 0x270
	// Line 411, Address: 0x1bd094, Func Offset: 0x274
	// Func End, Address: 0x1bd0b8, Func Offset: 0x298
}

// ps2_mpeg_play__FPCcPciUif
// Start address: 0x1bd0c0
int32 ps2_mpeg_play(int8* fname, int8* work_area, int32 work_area_size, uint32 buttons, float32 time)
{
	uint32 i;
	int8* ptr;
	int8* extra_buf;
	int8* bp;
	// Line 160, Address: 0x1bd0c0, Func Offset: 0
	// Line 175, Address: 0x1bd0c4, Func Offset: 0x4
	// Line 160, Address: 0x1bd0c8, Func Offset: 0x8
	// Line 175, Address: 0x1bd0f4, Func Offset: 0x34
	// Line 176, Address: 0x1bd104, Func Offset: 0x44
	// Line 177, Address: 0x1bd10c, Func Offset: 0x4c
	// Line 179, Address: 0x1bd118, Func Offset: 0x58
	// Line 180, Address: 0x1bd124, Func Offset: 0x64
	// Line 182, Address: 0x1bd13c, Func Offset: 0x7c
	// Line 185, Address: 0x1bd158, Func Offset: 0x98
	// Line 187, Address: 0x1bd164, Func Offset: 0xa4
	// Line 195, Address: 0x1bd16c, Func Offset: 0xac
	// Line 187, Address: 0x1bd170, Func Offset: 0xb0
	// Line 195, Address: 0x1bd174, Func Offset: 0xb4
	// Line 188, Address: 0x1bd178, Func Offset: 0xb8
	// Line 187, Address: 0x1bd17c, Func Offset: 0xbc
	// Line 188, Address: 0x1bd180, Func Offset: 0xc0
	// Line 195, Address: 0x1bd184, Func Offset: 0xc4
	// Line 188, Address: 0x1bd188, Func Offset: 0xc8
	// Line 189, Address: 0x1bd18c, Func Offset: 0xcc
	// Line 186, Address: 0x1bd190, Func Offset: 0xd0
	// Line 189, Address: 0x1bd194, Func Offset: 0xd4
	// Line 190, Address: 0x1bd198, Func Offset: 0xd8
	// Line 189, Address: 0x1bd19c, Func Offset: 0xdc
	// Line 190, Address: 0x1bd1a0, Func Offset: 0xe0
	// Line 191, Address: 0x1bd1a4, Func Offset: 0xe4
	// Line 190, Address: 0x1bd1a8, Func Offset: 0xe8
	// Line 191, Address: 0x1bd1ac, Func Offset: 0xec
	// Line 190, Address: 0x1bd1b0, Func Offset: 0xf0
	// Line 191, Address: 0x1bd1b4, Func Offset: 0xf4
	// Line 192, Address: 0x1bd1b8, Func Offset: 0xf8
	// Line 193, Address: 0x1bd1c0, Func Offset: 0x100
	// Line 192, Address: 0x1bd1c4, Func Offset: 0x104
	// Line 193, Address: 0x1bd1c8, Func Offset: 0x108
	// Line 192, Address: 0x1bd1cc, Func Offset: 0x10c
	// Line 193, Address: 0x1bd1d0, Func Offset: 0x110
	// Line 195, Address: 0x1bd1d4, Func Offset: 0x114
	// Line 197, Address: 0x1bd1dc, Func Offset: 0x11c
	// Line 198, Address: 0x1bd1e4, Func Offset: 0x124
	// Line 201, Address: 0x1bd1f0, Func Offset: 0x130
	// Line 204, Address: 0x1bd254, Func Offset: 0x194
	// Line 203, Address: 0x1bd258, Func Offset: 0x198
	// Line 206, Address: 0x1bd25c, Func Offset: 0x19c
	// Line 204, Address: 0x1bd264, Func Offset: 0x1a4
	// Line 206, Address: 0x1bd268, Func Offset: 0x1a8
	// Line 204, Address: 0x1bd26c, Func Offset: 0x1ac
	// Line 209, Address: 0x1bd270, Func Offset: 0x1b0
	// Line 212, Address: 0x1bd274, Func Offset: 0x1b4
	// Line 206, Address: 0x1bd278, Func Offset: 0x1b8
	// Line 209, Address: 0x1bd27c, Func Offset: 0x1bc
	// Line 210, Address: 0x1bd284, Func Offset: 0x1c4
	// Line 214, Address: 0x1bd288, Func Offset: 0x1c8
	// Line 215, Address: 0x1bd290, Func Offset: 0x1d0
	// Line 217, Address: 0x1bd2a0, Func Offset: 0x1e0
	// Line 218, Address: 0x1bd2a8, Func Offset: 0x1e8
	// Line 220, Address: 0x1bd2b0, Func Offset: 0x1f0
	// Line 223, Address: 0x1bd2c4, Func Offset: 0x204
	// Line 225, Address: 0x1bd2dc, Func Offset: 0x21c
	// Line 227, Address: 0x1bd300, Func Offset: 0x240
	// Line 229, Address: 0x1bd308, Func Offset: 0x248
	// Line 231, Address: 0x1bd3f4, Func Offset: 0x334
	// Line 233, Address: 0x1bd3f8, Func Offset: 0x338
	// Line 234, Address: 0x1bd400, Func Offset: 0x340
	// Line 236, Address: 0x1bd410, Func Offset: 0x350
	// Line 238, Address: 0x1bd428, Func Offset: 0x368
	// Line 239, Address: 0x1bd430, Func Offset: 0x370
	// Line 241, Address: 0x1bd438, Func Offset: 0x378
	// Line 242, Address: 0x1bd440, Func Offset: 0x380
	// Func End, Address: 0x1bd464, Func Offset: 0x3a4
}

