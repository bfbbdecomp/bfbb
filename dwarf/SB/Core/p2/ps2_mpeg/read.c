typedef struct sceMpegCbDataStr;
typedef struct sceMpeg;
typedef struct sceIpuDmaEnv;
typedef struct ReadBuf;
typedef enum sceMpegCbType;
typedef struct TimeStamp;
typedef struct SpuStreamHeader;
typedef struct ViBuf;
typedef struct VideoDec;
typedef struct SpuStreamBody;
typedef struct AudioDec;


typedef uint8 type_0[327680];
typedef int8 type_1[4];
typedef int8 type_2[4];

struct sceMpegCbDataStr
{
	sceMpegCbType type;
	uint8* header;
	uint8* data;
	uint32 len;
	long32 pts;
	long32 dts;
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

struct ReadBuf
{
	uint8 data[327680];
	int32 put;
	int32 count;
	int32 size;
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

struct TimeStamp
{
	long32 pts;
	long32 dts;
	int32 pos;
	int32 len;
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

struct VideoDec
{
	sceMpeg mpeg;
	ViBuf vibuf;
	uint32 state;
	int32 sema;
	int32 hid_endimage;
	int32 hid_vblank;
};

struct SpuStreamBody
{
	int8 id[4];
	int32 size;
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

AudioDec audioDec;
VideoDec videoDec;

int32 pcmCallback(sceMpegCbDataStr* str, void* data);
int32 videoCallback(sceMpegCbDataStr* str, void* data);

// pcmCallback__FP7sceMpegP16sceMpegCbDataStrPv
// Start address: 0x1bd470
int32 pcmCallback(sceMpegCbDataStr* str, void* data)
{
	ReadBuf* rb;
	uint8* ps0;
	int32 s1;
	uint8* pd0;
	uint8* pd1;
	int32 d0;
	int32 d1;
	int32 len;
	// Line 83, Address: 0x1bd470, Func Offset: 0
	// Line 97, Address: 0x1bd474, Func Offset: 0x4
	// Line 83, Address: 0x1bd478, Func Offset: 0x8
	// Line 97, Address: 0x1bd47c, Func Offset: 0xc
	// Line 83, Address: 0x1bd480, Func Offset: 0x10
	// Line 97, Address: 0x1bd4a4, Func Offset: 0x34
	// Line 98, Address: 0x1bd4b4, Func Offset: 0x44
	// Line 99, Address: 0x1bd4c0, Func Offset: 0x50
	// Line 100, Address: 0x1bd4c4, Func Offset: 0x54
	// Line 101, Address: 0x1bd4c8, Func Offset: 0x58
	// Line 104, Address: 0x1bd4d4, Func Offset: 0x64
	// Line 107, Address: 0x1bd4e4, Func Offset: 0x74
	// Line 105, Address: 0x1bd4e8, Func Offset: 0x78
	// Line 107, Address: 0x1bd4ec, Func Offset: 0x7c
	// Line 108, Address: 0x1bd504, Func Offset: 0x94
	// Line 110, Address: 0x1bd5e0, Func Offset: 0x170
	// Line 116, Address: 0x1bd5f0, Func Offset: 0x180
	// Line 117, Address: 0x1bd5f4, Func Offset: 0x184
	// Func End, Address: 0x1bd624, Func Offset: 0x1b4
}

// videoCallback__FP7sceMpegP16sceMpegCbDataStrPv
// Start address: 0x1bd630
int32 videoCallback(sceMpegCbDataStr* str, void* data)
{
	ReadBuf* rb;
	int32 s0;
	int32 s1;
	uint8* pd0;
	uint8* pd1;
	uint8* pd0Unc;
	uint8* pd1Unc;
	int32 d0;
	int32 d1;
	// Line 43, Address: 0x1bd630, Func Offset: 0
	// Line 44, Address: 0x1bd634, Func Offset: 0x4
	// Line 43, Address: 0x1bd638, Func Offset: 0x8
	// Line 44, Address: 0x1bd63c, Func Offset: 0xc
	// Line 43, Address: 0x1bd640, Func Offset: 0x10
	// Line 44, Address: 0x1bd668, Func Offset: 0x38
	// Line 47, Address: 0x1bd67c, Func Offset: 0x4c
	// Line 56, Address: 0x1bd68c, Func Offset: 0x5c
	// Line 48, Address: 0x1bd690, Func Offset: 0x60
	// Line 56, Address: 0x1bd694, Func Offset: 0x64
	// Line 57, Address: 0x1bd6ac, Func Offset: 0x7c
	// Line 58, Address: 0x1bd6b0, Func Offset: 0x80
	// Line 57, Address: 0x1bd6b8, Func Offset: 0x88
	// Line 58, Address: 0x1bd6bc, Func Offset: 0x8c
	// Line 60, Address: 0x1bd6c0, Func Offset: 0x90
	// Line 57, Address: 0x1bd6c4, Func Offset: 0x94
	// Line 58, Address: 0x1bd6c8, Func Offset: 0x98
	// Line 57, Address: 0x1bd6cc, Func Offset: 0x9c
	// Line 58, Address: 0x1bd6d0, Func Offset: 0xa0
	// Line 57, Address: 0x1bd6d4, Func Offset: 0xa4
	// Line 60, Address: 0x1bd6d8, Func Offset: 0xa8
	// Line 63, Address: 0x1bd7a0, Func Offset: 0x170
	// Line 64, Address: 0x1bd7a8, Func Offset: 0x178
	// Line 65, Address: 0x1bd7d0, Func Offset: 0x1a0
	// Line 69, Address: 0x1bd7d8, Func Offset: 0x1a8
	// Line 75, Address: 0x1bd7e8, Func Offset: 0x1b8
	// Line 76, Address: 0x1bd7ec, Func Offset: 0x1bc
	// Func End, Address: 0x1bd81c, Func Offset: 0x1ec
}

