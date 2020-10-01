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


typedef u8 type_0[327680];
typedef s8 type_1[4];
typedef s8 type_2[4];

struct sceMpegCbDataStr
{
	sceMpegCbType type;
	u8* header;
	u8* data;
	u32 len;
	s32 pts;
	s32 dts;
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

struct ReadBuf
{
	type_0 data;
	s32 put;
	s32 count;
	s32 size;
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
	s32 pts;
	s32 dts;
	s32 pos;
	s32 len;
};

struct SpuStreamHeader
{
	type_1 id;
	s32 size;
	s32 type;
	s32 rate;
	s32 ch;
	s32 interSize;
	s32 loopStart;
	s32 loopEnd;
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

struct VideoDec
{
	sceMpeg mpeg;
	ViBuf vibuf;
	u32 state;
	s32 sema;
	s32 hid_endimage;
	s32 hid_vblank;
};

struct SpuStreamBody
{
	type_2 id;
	s32 size;
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

AudioDec audioDec;
VideoDec videoDec;

s32 pcmCallback(sceMpegCbDataStr* str, void* data);
s32 videoCallback(sceMpegCbDataStr* str, void* data);

// pcmCallback__FP7sceMpegP16sceMpegCbDataStrPv
// Start address: 0x1bd470
s32 pcmCallback(sceMpegCbDataStr* str, void* data)
{
	ReadBuf* rb;
	u8* ps0;
	s32 s1;
	u8* pd0;
	u8* pd1;
	s32 d0;
	s32 d1;
	s32 len;
}

// videoCallback__FP7sceMpegP16sceMpegCbDataStrPv
// Start address: 0x1bd630
s32 videoCallback(sceMpegCbDataStr* str, void* data)
{
	ReadBuf* rb;
	s32 s0;
	s32 s1;
	u8* pd0;
	u8* pd1;
	u8* pd0Unc;
	u8* pd1Unc;
	s32 d0;
	s32 d1;
}

