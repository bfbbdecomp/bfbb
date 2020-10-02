typedef struct sceMpeg;
typedef struct VideoDec;
typedef union sceMpegCbData;
typedef struct TimeStamp;
typedef struct VoData;
typedef struct sceMpegCbDataTimeStamp;
typedef struct VoTag;
typedef struct sceIpuDmaEnv;
typedef enum sceMpegCbType;
typedef struct VoBuf;
typedef struct sceMpegCbDataError;
typedef struct sceMpegCbDataStr;
typedef struct ViBuf;

typedef int32(*type_0)(sceMpeg*, sceMpegCbData*, void*);
typedef int32(*type_2)(sceMpeg*, sceMpegCbDataTimeStamp*, void*);
typedef int32(*type_6)(sceMpeg*, sceMpegCbData*, void*);
typedef int32(*type_8)(sceMpeg*, sceMpegCbDataError*, void*);
typedef int32(*type_9)(sceMpeg*, sceMpegCbData*, void*);
typedef int32(*type_10)(sceMpeg*, sceMpegCbData*, void*);

typedef uint8 type_1[1228800];
typedef int32 type_3[15];
typedef uint32 type_4[29248];
typedef type_4 type_5[2];
typedef uint8 type_7[4];

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

struct VideoDec
{
	sceMpeg mpeg;
	ViBuf vibuf;
	uint32 state;
	int32 sema;
	int32 hid_endimage;
	int32 hid_vblank;
};

union sceMpegCbData
{
	sceMpegCbType type;
	sceMpegCbDataError error;
	sceMpegCbDataTimeStamp ts;
	sceMpegCbDataStr str;
};

struct TimeStamp
{
	long32 pts;
	long32 dts;
	int32 pos;
	int32 len;
};

struct VoData
{
	type_1 v;
};

struct sceMpegCbDataTimeStamp
{
	sceMpegCbType type;
	long32 pts;
	long32 dts;
};

struct VoTag
{
	int32 status;
	type_3 dummy;
	type_5 v;
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

struct VoBuf
{
	VoData* data;
	VoTag* tag;
	int32 write;
	int32 count;
	int32 size;
};

struct sceMpegCbDataError
{
	sceMpegCbType type;
	int8* errMessage;
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

VideoDec videoDec;
VoBuf voBuf;
type_2 mpegTS;
type_0 mpegRestartDMA;
type_10 mpegStopDMA;
type_9 mpegNodata;
type_8 mpegError;

int32 mpegTS(sceMpegCbDataTimeStamp* cbts);
int32 mpegRestartDMA();
int32 mpegStopDMA();
int32 mpegNodata();
int32 mpegError(sceMpegCbDataError* cberror);
int32 decBs0(VideoDec* vd);
void videoDecMain(VideoDec* vd);
int32 videoDecIsFlushed(VideoDec* vd);
int32 videoDecFlush(VideoDec* vd);
int32 videoDecPutTs(VideoDec* vd, long32 pts_val, long32 dts_val, uint8* start, int32 len);
uint32 videoDecGetState(VideoDec* vd);
void videoDecAbort(VideoDec* vd);
int32 videoDecDelete(VideoDec* vd);
void videoDecEndPut(VideoDec* vd, int32 size);
void videoDecBeginPut(VideoDec* vd, uint8** ptr0, int32* len0, uint8** ptr1, int32* len1);
int32 videoDecSetStream(VideoDec* vd, int32 strType, int32 ch, type_6 cb, void* data);
int32 videoDecCreate(VideoDec* vd, uint8* mpegWork, int32 mpegWorkSize, <unknown type (0xa510)>* data, <unknown type (0xa510)>* tag, int32 tagSize, TimeStamp* pts, int32 n_pts);

// mpegTS__FP7sceMpegP22sceMpegCbDataTimeStampPv
// Start address: 0x1bec60
int32 mpegTS(sceMpegCbDataTimeStamp* cbts)
{
	TimeStamp ts;
}

// mpegRestartDMA__FP7sceMpegP13sceMpegCbDataPv
// Start address: 0x1becb0
int32 mpegRestartDMA()
{
}

// mpegStopDMA__FP7sceMpegP13sceMpegCbDataPv
// Start address: 0x1bece0
int32 mpegStopDMA()
{
}

// mpegNodata__FP7sceMpegP13sceMpegCbDataPv
// Start address: 0x1bed10
int32 mpegNodata()
{
}

// mpegError__FP7sceMpegP18sceMpegCbDataErrorPv
// Start address: 0x1bed40
int32 mpegError(sceMpegCbDataError* cberror)
{
}

// decBs0__FP8VideoDec
// Start address: 0x1bed70
int32 decBs0(VideoDec* vd)
{
	VoData* voData;
	int32 ret;
	int32 status;
	int32 i;
	int32 image_w;
	int32 image_h;
}

// videoDecMain__FP8VideoDec
// Start address: 0x1bef40
void videoDecMain(VideoDec* vd)
{
}

// videoDecIsFlushed__FP8VideoDec
// Start address: 0x1befa0
int32 videoDecIsFlushed(VideoDec* vd)
{
}

// videoDecFlush__FP8VideoDec
// Start address: 0x1bf000
int32 videoDecFlush(VideoDec* vd)
{
	uint8* pd0;
	uint8* pd1;
	uint8* pd0Unc;
	uint8* pd1Unc;
	type_7 seq_end_code;
	int32 d0;
	int32 d1;
}

// videoDecPutTs__FP8VideoDecllPUci
// Start address: 0x1bf1b0
int32 videoDecPutTs(VideoDec* vd, long32 pts_val, long32 dts_val, uint8* start, int32 len)
{
	TimeStamp ts;
}

// videoDecGetState__FP8VideoDec
// Start address: 0x1bf1f0
uint32 videoDecGetState(VideoDec* vd)
{
}

// videoDecAbort__FP8VideoDec
// Start address: 0x1bf200
void videoDecAbort(VideoDec* vd)
{
}

// videoDecDelete__FP8VideoDec
// Start address: 0x1bf210
int32 videoDecDelete(VideoDec* vd)
{
}

// videoDecEndPut__FP8VideoDeci
// Start address: 0x1bf250
void videoDecEndPut(VideoDec* vd, int32 size)
{
}

// videoDecBeginPut__FP8VideoDecPPUcPiPPUcPi
// Start address: 0x1bf260
void videoDecBeginPut(VideoDec* vd, uint8** ptr0, int32* len0, uint8** ptr1, int32* len1)
{
}

// videoDecSetStream__FP8VideoDeciiPFP7sceMpegP13sceMpegCbDataPv_iPv
// Start address: 0x1bf270
int32 videoDecSetStream(VideoDec* vd, int32 strType, int32 ch, type_6 cb, void* data)
{
}

// videoDecCreate__FP8VideoDecPUciP1P1iP9TimeStampi
// Start address: 0x1bf290
int32 videoDecCreate(VideoDec* vd, uint8* mpegWork, int32 mpegWorkSize, <unknown type (0xa510)>* data, <unknown type (0xa510)>* tag, int32 tagSize, TimeStamp* pts, int32 n_pts)
{
}

