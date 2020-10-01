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
typedef type_8 type_9[2];
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

union sceGsScissor
{
	ulong32 SCAX0;
	ulong32 pad11;
	ulong32 SCAX1;
	ulong32 pad27;
	ulong32 SCAY0;
	ulong32 pad43;
	ulong32 SCAY1;
	ulong32 pad59;
};

struct ThreadParam
{
	int32 status;
	type_0 entry;
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
	type_3 v;
};

struct _tagiPad
{
	int32 port;
};

union sceGsFrame
{
	ulong32 FBP;
	ulong32 pad09;
	ulong32 FBW;
	ulong32 pad22;
	ulong32 PSM;
	ulong32 pad30;
	ulong32 FBMSK;
};

struct tGS_DISPLAY2
{
	union
	{
		uint32 DX;
		uint32 DY;
		uint32 MAGH;
		uint32 MAGV;
		uint32 p0;
	};
	union
	{
		uint32 DW;
		uint32 DH;
		uint32 p1;
	};
};

union sceGsPrim
{
	ulong32 PRIM;
	ulong32 IIP;
	ulong32 TME;
	ulong32 FGE;
	ulong32 ABE;
	ulong32 AA1;
	ulong32 FST;
	ulong32 CTXT;
	ulong32 FIX;
	ulong32 pad11;
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
	ulong32 ZBP;
	ulong32 pad09;
	ulong32 PSM;
	ulong32 pad28;
	ulong32 ZMSK;
	ulong32 pad33;
};

struct _tagxPad
{
	type_1 value;
	type_2 last_value;
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
	type_10 up_tmr;
	type_11 down_tmr;
	type_15 analog;
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
	type_6 data;
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
	union
	{
		uint32 EN1;
		uint32 EN2;
		uint32 CRTMD;
		uint32 MMOD;
		uint32 AMOD;
		uint32 SLBG;
		uint32 ALP;
		uint32 p0;
	};
	uint32 p1;
};

struct VoTag
{
	int32 status;
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
	ulong32 DTHE;
	ulong32 pad01;
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
		uint32 R;
		uint32 G;
		uint32 B;
		uint32 p0;
	};
	uint32 p1;
};

union sceGsTest
{
	ulong32 ATE;
	ulong32 ATST;
	ulong32 AREF;
	ulong32 AFAIL;
	ulong32 DATE;
	ulong32 DATM;
	ulong32 ZTE;
	ulong32 ZTST;
	ulong32 pad19;
};

struct xVec2
{
	float32 x;
	float32 y;
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
	type_13 id;
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

union sceGsPrmodecont
{
	ulong32 AC;
	ulong32 pad01;
};

union sceGsColclamp
{
	ulong32 CLAMP;
	ulong32 pad01;
};

struct tGS_SMODE2
{
	union
	{
		uint32 INT;
		uint32 FFMD;
		uint32 DPMS;
		uint32 p0;
	};
	uint32 p1;
};

union sceGsXyoffset
{
	ulong32 OFX;
	ulong32 pad16;
	ulong32 OFY;
	ulong32 pad48;
};

struct ViBuf
{
	<unknown type (0xa510)>* data;
	<unknown type (0xa510)>* tag;
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
	union
	{
		uint32 R;
		uint32 G;
		uint32 B;
		uint32 A;
	};
	float32 Q;
};

struct tGS_DISPFB2
{
	union
	{
		uint32 FBP;
		uint32 FBW;
		uint32 PSM;
		uint32 p0;
	};
	union
	{
		uint32 DBX;
		uint32 DBY;
		uint32 p1;
	};
};

struct SpuStreamBody
{
	type_17 id;
	int32 size;
};

union sceGsXyz
{
	ulong32 X;
	ulong32 Y;
	ulong32 Z;
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
	union
	{
		ulong32 NLOOP;
		ulong32 EOP;
		ulong32 pad16;
		ulong32 id;
		ulong32 PRE;
		ulong32 PRIM;
		ulong32 FLG;
		ulong32 NREG;
	};
	union
	{
		ulong32 REGS0;
		ulong32 REGS1;
		ulong32 REGS2;
		ulong32 REGS3;
		ulong32 REGS4;
		ulong32 REGS5;
		ulong32 REGS6;
		ulong32 REGS7;
		ulong32 REGS8;
		ulong32 REGS9;
		ulong32 REGS10;
		ulong32 REGS11;
		ulong32 REGS12;
		ulong32 REGS13;
		ulong32 REGS14;
		ulong32 REGS15;
	};
};

VoData* voBufData;
VoTag* voBufTag;
<unknown type (0xa510)>* viBufTag;
uint8* mpegWork;
int32 mpegWorkSz;
int8* defStack;
ReadBuf* readBufp;
uint8* audioBuff;
<unknown type (0xa510)>* viBufData;
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
type_20 handler_endimage;
type_19 vblankHandler;
void* _gp;
type_14 videoDecMain;
type_5 defMain;
type_18 pcmCallback;
type_16 videoCallback;
type_4 mPad;

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
}

// defMain__FPv
// Start address: 0x1bcb90
void defMain()
{
}

// initAll__FPCc
// Start address: 0x1bcbb0
int32 initAll(int8* bsfilename)
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
}

// ps2_mpeg_play__FPCcPciUif
// Start address: 0x1bd0c0
int32 ps2_mpeg_play(int8* fname, int8* work_area, int32 work_area_size, uint32 buttons, float32 time)
{
	uint32 i;
	int8* ptr;
	int8* extra_buf;
	int8* bp;
}

