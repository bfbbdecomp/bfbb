typedef struct sceIpuDmaEnv;
typedef union sceGsScissor;
typedef struct ThreadParam;
typedef struct _tagPadAnalog;
typedef struct VoData;
typedef struct _tagiPad;
typedef union sceGsFrame;
typedef struct tGS_DISPLAY2;
typedef union sceGsPrim;
typedef enum sceMpegCbType;
typedef union sceGsZbuf;
typedef struct _tagxPad;
typedef struct VideoDec;
typedef struct ReadBuf;
typedef struct StrFile;
typedef struct _tagxRumble;
typedef struct sceGsClear;
typedef struct tGS_PMODE;
typedef struct VoTag;
typedef struct sceGsDispEnv;
typedef union sceGsDthe;
typedef enum _tagRumbleType;
typedef struct tGS_BGCOLOR;
typedef union sceGsTest;
typedef struct xVec2;
typedef struct sceGsDBuff;
typedef struct analog_data;
typedef struct TimeStamp;
typedef struct sceMpegCbDataStr;
typedef struct VoBuf;
typedef struct SpuStreamHeader;
typedef struct sceGsDrawEnv1;
typedef union sceGsPrmodecont;
typedef union sceGsColclamp;
typedef struct tGS_SMODE2;
typedef union sceGsXyoffset;
typedef struct ViBuf;
typedef struct sceMpeg;
typedef struct sceGsRgbaq;
typedef struct tGS_DISPFB2;
typedef struct SpuStreamBody;
typedef union sceGsXyz;
typedef struct AudioDec;
typedef enum _tagPadState;
typedef struct sceGifTag;

typedef void(*type_0)(void*);
typedef void(*type_5)(void*);
typedef void(*type_14)(VideoDec*);
typedef s32(*type_16)(sceMpeg*, sceMpegCbDataStr*, void*);
typedef s32(*type_18)(sceMpeg*, sceMpegCbDataStr*, void*);
typedef s32(*type_19)(s32);
typedef s32(*type_20)(s32);

typedef u8 type_1[22];
typedef u8 type_2[22];
typedef u8 type_3[1228800];
typedef _tagxPad type_4[4];
typedef u8 type_6[327680];
typedef s32 type_7[15];
typedef u32 type_8[29248];
typedef type_8 type_9[2];
typedef f32 type_10[22];
typedef f32 type_11[22];
typedef sceGsDispEnv type_12[2];
typedef s8 type_13[4];
typedef analog_data type_15[2];
typedef s8 type_17[4];

struct sceIpuDmaEnv
{
	u32 d4madr;
	u32 d4tadr;
	u32 d4qwc;
	u32 d4chcr;
	u32 d3madr;
	u32 d3qwc;
	u32 d3chcr;
	u32 ipubp;
	u32 ipuctrl;
};

union sceGsScissor
{
	u32 SCAX0;
	u32 pad11;
	u32 SCAX1;
	u32 pad27;
	u32 SCAY0;
	u32 pad43;
	u32 SCAY1;
	u32 pad59;
};

struct ThreadParam
{
	s32 status;
	type_0 entry;
	void* stack;
	s32 stackSize;
	void* gpReg;
	s32 initPriority;
	s32 currentPriority;
	u32 attr;
	u32 option;
	s32 waitType;
	s32 waitId;
	s32 wakeupCount;
};

struct _tagPadAnalog
{
	s8 x;
	s8 y;
};

struct VoData
{
	type_3 v;
};

struct _tagiPad
{
	s32 port;
};

union sceGsFrame
{
	u32 FBP;
	u32 pad09;
	u32 FBW;
	u32 pad22;
	u32 PSM;
	u32 pad30;
	u32 FBMSK;
};

struct tGS_DISPLAY2
{
	union
	{
		u32 DX;
		u32 DY;
		u32 MAGH;
		u32 MAGV;
		u32 p0;
	};
	union
	{
		u32 DW;
		u32 DH;
		u32 p1;
	};
};

union sceGsPrim
{
	u32 PRIM;
	u32 IIP;
	u32 TME;
	u32 FGE;
	u32 ABE;
	u32 AA1;
	u32 FST;
	u32 CTXT;
	u32 FIX;
	u32 pad11;
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

union sceGsZbuf
{
	u32 ZBP;
	u32 pad09;
	u32 PSM;
	u32 pad28;
	u32 ZMSK;
	u32 pad33;
};

struct _tagxPad
{
	type_1 value;
	type_2 last_value;
	u32 on;
	u32 pressed;
	u32 released;
	_tagPadAnalog analog1;
	_tagPadAnalog analog2;
	_tagPadState state;
	u32 flags;
	_tagxRumble rumble_head;
	s16 port;
	s16 slot;
	_tagiPad context;
	f32 al2d_timer;
	f32 ar2d_timer;
	f32 d_timer;
	type_10 up_tmr;
	type_11 down_tmr;
	type_15 analog;
};

struct VideoDec
{
	sceMpeg mpeg;
	ViBuf vibuf;
	u32 state;
	s32 sema;
	s32 hid_endimage;
	s32 hid_vblank;
};

struct ReadBuf
{
	type_6 data;
	s32 put;
	s32 count;
	s32 size;
};

struct StrFile
{
	s32 file;
	s32 size;
	s32 current;
};

struct _tagxRumble
{
	_tagRumbleType type;
	f32 seconds;
	_tagxRumble* next;
	s16 active;
	u16 fxflags;
};

struct sceGsClear
{
	sceGsTest testa;
	s32 testaaddr;
	sceGsPrim prim;
	s32 primaddr;
	sceGsRgbaq rgbaq;
	s32 rgbaqaddr;
	sceGsXyz xyz2a;
	s32 xyz2aaddr;
	sceGsXyz xyz2b;
	s32 xyz2baddr;
	sceGsTest testb;
	s32 testbaddr;
};

struct tGS_PMODE
{
	union
	{
		u32 EN1;
		u32 EN2;
		u32 CRTMD;
		u32 MMOD;
		u32 AMOD;
		u32 SLBG;
		u32 ALP;
		u32 p0;
	};
	u32 p1;
};

struct VoTag
{
	s32 status;
	type_7 dummy;
	type_9 v;
};

struct sceGsDispEnv
{
	tGS_PMODE pmode;
	tGS_SMODE2 smode2;
	tGS_DISPFB2 dispfb;
	tGS_DISPLAY2 display;
	tGS_BGCOLOR bgcolor;
};

union sceGsDthe
{
	u32 DTHE;
	u32 pad01;
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
	union
	{
		u32 R;
		u32 G;
		u32 B;
		u32 p0;
	};
	u32 p1;
};

union sceGsTest
{
	u32 ATE;
	u32 ATST;
	u32 AREF;
	u32 AFAIL;
	u32 DATE;
	u32 DATM;
	u32 ZTE;
	u32 ZTST;
	u32 pad19;
};

struct xVec2
{
	f32 x;
	f32 y;
};

struct sceGsDBuff
{
	type_12 disp;
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
	f32 mag;
	f32 ang;
};

struct TimeStamp
{
	s32 pts;
	s32 dts;
	s32 pos;
	s32 len;
};

struct sceMpegCbDataStr
{
	sceMpegCbType type;
	u8* header;
	u8* data;
	u32 len;
	s32 pts;
	s32 dts;
};

struct VoBuf
{
	VoData* data;
	VoTag* tag;
	s32 write;
	s32 count;
	s32 size;
};

struct SpuStreamHeader
{
	type_13 id;
	s32 size;
	s32 type;
	s32 rate;
	s32 ch;
	s32 interSize;
	s32 loopStart;
	s32 loopEnd;
};

struct sceGsDrawEnv1
{
	sceGsFrame frame1;
	u32 frame1addr;
	sceGsZbuf zbuf1;
	s32 zbuf1addr;
	sceGsXyoffset xyoffset1;
	s32 xyoffset1addr;
	sceGsScissor scissor1;
	s32 scissor1addr;
	sceGsPrmodecont prmodecont;
	s32 prmodecontaddr;
	sceGsColclamp colclamp;
	s32 colclampaddr;
	sceGsDthe dthe;
	s32 dtheaddr;
	sceGsTest test1;
	s32 test1addr;
};

union sceGsPrmodecont
{
	u32 AC;
	u32 pad01;
};

union sceGsColclamp
{
	u32 CLAMP;
	u32 pad01;
};

struct tGS_SMODE2
{
	union
	{
		u32 INT;
		u32 FFMD;
		u32 DPMS;
		u32 p0;
	};
	u32 p1;
};

union sceGsXyoffset
{
	u32 OFX;
	u32 pad16;
	u32 OFY;
	u32 pad48;
};

struct ViBuf
{
	<unknown type (0xa510)>* data;
	<unknown type (0xa510)>* tag;
	s32 n;
	s32 dmaStart;
	s32 dmaN;
	s32 readBytes;
	s32 buffSize;
	sceIpuDmaEnv env;
	s32 sema;
	s32 isActive;
	s32 totalBytes;
	TimeStamp* ts;
	s32 n_ts;
	s32 count_ts;
	s32 wt_ts;
};

struct sceMpeg
{
	s32 width;
	s32 height;
	s32 frameCount;
	s32 pts;
	s32 dts;
	u32 flags;
	s32 pts2nd;
	s32 dts2nd;
	u32 flags2nd;
	void* sys;
};

struct sceGsRgbaq
{
	union
	{
		u32 R;
		u32 G;
		u32 B;
		u32 A;
	};
	f32 Q;
};

struct tGS_DISPFB2
{
	union
	{
		u32 FBP;
		u32 FBW;
		u32 PSM;
		u32 p0;
	};
	union
	{
		u32 DBX;
		u32 DBY;
		u32 p1;
	};
};

struct SpuStreamBody
{
	type_17 id;
	s32 size;
};

union sceGsXyz
{
	u32 X;
	u32 Y;
	u32 Z;
};

struct AudioDec
{
	s32 state;
	SpuStreamHeader sshd;
	SpuStreamBody ssbd;
	s32 hdrCount;
	u8* data;
	s32 put;
	s32 count;
	s32 size;
	s32 totalBytes;
	s32 iopBuff;
	s32 iopBuffSize;
	s32 iopLastPos;
	s32 iopPausePos;
	s32 totalBytesSent;
	s32 iopZero;
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
	union
	{
		u32 NLOOP;
		u32 EOP;
		u32 pad16;
		u32 id;
		u32 PRE;
		u32 PRIM;
		u32 FLG;
		u32 NREG;
	};
	union
	{
		u32 REGS0;
		u32 REGS1;
		u32 REGS2;
		u32 REGS3;
		u32 REGS4;
		u32 REGS5;
		u32 REGS6;
		u32 REGS7;
		u32 REGS8;
		u32 REGS9;
		u32 REGS10;
		u32 REGS11;
		u32 REGS12;
		u32 REGS13;
		u32 REGS14;
		u32 REGS15;
	};
};

VoData* voBufData;
VoTag* voBufTag;
<unknown type (0xa510)>* viBufTag;
u8* mpegWork;
s32 mpegWorkSz;
s8* defStack;
ReadBuf* readBufp;
u8* audioBuff;
<unknown type (0xa510)>* viBufData;
s8* videoDecStack;
TimeStamp* timeStamp;
s32 videoDecTh;
s32 defaultTh;
StrFile infile;
VideoDec videoDec;
AudioDec audioDec;
VoBuf voBuf;
s32 frd;
u32 controller_val;
s32 isWithAudio;
sceGsDBuff sony_db;
u32 skip_buttons;
u32 skip_time;
type_20 handler_endimage;
type_19 vblankHandler;
void* _gp;
type_14 videoDecMain;
type_5 defMain;
type_18 pcmCallback;
type_16 videoCallback;
type_4 mPad;

void ErrMessage(s8* message);
void defMain();
s32 initAll(s8* bsfilename);
void switchThread();
s32 readMpeg(VideoDec* vd, ReadBuf* rb, StrFile* file);
s32 ps2_mpeg_play(s8* fname, s8* work_area, s32 work_area_size, u32 buttons, f32 time);

// ErrMessage__FPc
// Start address: 0x1bcb80
void ErrMessage(s8* message)
{
}

// defMain__FPv
// Start address: 0x1bcb90
void defMain()
{
}

// initAll__FPCc
// Start address: 0x1bcbb0
s32 initAll(s8* bsfilename)
{
	ThreadParam th_param;
}

// switchThread__Fv
// Start address: 0x1bce10
void switchThread()
{
}

// readMpeg__FP8VideoDecP7ReadBufP7StrFile
// Start address: 0x1bce20
s32 readMpeg(VideoDec* vd, ReadBuf* rb, StrFile* file)
{
	u8* put_ptr;
	u8* get_ptr;
	s32 putsize;
	s32 getsize;
	s32 readrest;
	s32 writerest;
	s32 count;
	s32 proceed;
	s32 isStarted;
	s32 t0;
	s32 t1;
}

// ps2_mpeg_play__FPCcPciUif
// Start address: 0x1bd0c0
s32 ps2_mpeg_play(s8* fname, s8* work_area, s32 work_area_size, u32 buttons, f32 time)
{
	u32 i;
	s8* ptr;
	s8* extra_buf;
	s8* bp;
}

