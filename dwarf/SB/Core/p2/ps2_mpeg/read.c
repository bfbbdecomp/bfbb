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
	type_0 data;
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
	type_1 id;
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
	type_2 id;
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
}

