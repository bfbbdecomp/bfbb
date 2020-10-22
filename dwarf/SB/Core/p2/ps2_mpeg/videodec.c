typedef struct sceMpeg;
typedef struct VideoDec;
typedef struct sceMpegCbData;
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
typedef uint32 type_5[29248][2];
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

struct sceMpegCbData
{
	union
	{
		sceMpegCbType type;
		sceMpegCbDataError error;
		sceMpegCbDataTimeStamp ts;
		sceMpegCbDataStr str;
	};
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
	uint8 v[1228800];
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
	int32 dummy[15];
	uint32 v[29248][2];
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

VideoDec videoDec;
VoBuf voBuf;
int32(*mpegTS)(sceMpeg*, sceMpegCbDataTimeStamp*, void*);
int32(*mpegRestartDMA)(sceMpeg*, sceMpegCbData*, void*);
int32(*mpegStopDMA)(sceMpeg*, sceMpegCbData*, void*);
int32(*mpegNodata)(sceMpeg*, sceMpegCbData*, void*);
int32(*mpegError)(sceMpeg*, sceMpegCbDataError*, void*);

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
int32 videoDecSetStream(VideoDec* vd, int32 strType, int32 ch, int32(*cb)(sceMpeg*, sceMpegCbData*, void*), void* data);
int32 videoDecCreate(VideoDec* vd, uint8* mpegWork, int32 mpegWorkSize, <unknown fundamental type (0xa510)>* data, <unknown fundamental type (0xa510)>* tag, int32 tagSize, TimeStamp* pts, int32 n_pts);

// mpegTS__FP7sceMpegP22sceMpegCbDataTimeStampPv
// Start address: 0x1bec60
int32 mpegTS(sceMpegCbDataTimeStamp* cbts)
{
	TimeStamp ts;
	// Line 405, Address: 0x1bec60, Func Offset: 0
	// Line 408, Address: 0x1bec64, Func Offset: 0x4
	// Line 405, Address: 0x1bec68, Func Offset: 0x8
	// Line 408, Address: 0x1bec6c, Func Offset: 0xc
	// Line 405, Address: 0x1bec70, Func Offset: 0x10
	// Line 408, Address: 0x1bec78, Func Offset: 0x18
	// Line 409, Address: 0x1bec80, Func Offset: 0x20
	// Line 411, Address: 0x1bec84, Func Offset: 0x24
	// Line 409, Address: 0x1bec88, Func Offset: 0x28
	// Line 410, Address: 0x1bec8c, Func Offset: 0x2c
	// Line 412, Address: 0x1bec94, Func Offset: 0x34
	// Func End, Address: 0x1beca4, Func Offset: 0x44
}

// mpegRestartDMA__FP7sceMpegP13sceMpegCbDataPv
// Start address: 0x1becb0
int32 mpegRestartDMA()
{
	// Line 393, Address: 0x1becb0, Func Offset: 0
	// Line 395, Address: 0x1becb4, Func Offset: 0x4
	// Line 393, Address: 0x1becb8, Func Offset: 0x8
	// Line 395, Address: 0x1becbc, Func Offset: 0xc
	// Line 397, Address: 0x1becc4, Func Offset: 0x14
	// Line 396, Address: 0x1becc8, Func Offset: 0x18
	// Line 397, Address: 0x1beccc, Func Offset: 0x1c
	// Func End, Address: 0x1becd4, Func Offset: 0x24
}

// mpegStopDMA__FP7sceMpegP13sceMpegCbDataPv
// Start address: 0x1bece0
int32 mpegStopDMA()
{
	// Line 382, Address: 0x1bece0, Func Offset: 0
	// Line 384, Address: 0x1bece4, Func Offset: 0x4
	// Line 382, Address: 0x1bece8, Func Offset: 0x8
	// Line 384, Address: 0x1becec, Func Offset: 0xc
	// Line 386, Address: 0x1becf4, Func Offset: 0x14
	// Line 385, Address: 0x1becf8, Func Offset: 0x18
	// Line 386, Address: 0x1becfc, Func Offset: 0x1c
	// Func End, Address: 0x1bed04, Func Offset: 0x24
}

// mpegNodata__FP7sceMpegP13sceMpegCbDataPv
// Start address: 0x1bed10
int32 mpegNodata()
{
	// Line 371, Address: 0x1bed10, Func Offset: 0
	// Line 372, Address: 0x1bed18, Func Offset: 0x8
	// Line 373, Address: 0x1bed20, Func Offset: 0x10
	// Line 375, Address: 0x1bed2c, Func Offset: 0x1c
	// Line 374, Address: 0x1bed30, Func Offset: 0x20
	// Line 375, Address: 0x1bed34, Func Offset: 0x24
	// Func End, Address: 0x1bed3c, Func Offset: 0x2c
}

// mpegError__FP7sceMpegP18sceMpegCbDataErrorPv
// Start address: 0x1bed40
int32 mpegError(sceMpegCbDataError* cberror)
{
	// Line 361, Address: 0x1bed40, Func Offset: 0
	// Line 362, Address: 0x1bed44, Func Offset: 0x4
	// Line 361, Address: 0x1bed48, Func Offset: 0x8
	// Line 362, Address: 0x1bed4c, Func Offset: 0xc
	// Line 364, Address: 0x1bed58, Func Offset: 0x18
	// Line 363, Address: 0x1bed5c, Func Offset: 0x1c
	// Line 364, Address: 0x1bed60, Func Offset: 0x20
	// Func End, Address: 0x1bed68, Func Offset: 0x28
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
	// Line 284, Address: 0x1bed70, Func Offset: 0
	// Line 288, Address: 0x1bed88, Func Offset: 0x18
	// Line 284, Address: 0x1bed8c, Func Offset: 0x1c
	// Line 295, Address: 0x1bed98, Func Offset: 0x28
	// Line 297, Address: 0x1bedb0, Func Offset: 0x40
	// Line 298, Address: 0x1bedc0, Func Offset: 0x50
	// Line 299, Address: 0x1bedc4, Func Offset: 0x54
	// Line 300, Address: 0x1bedcc, Func Offset: 0x5c
	// Line 308, Address: 0x1bedd4, Func Offset: 0x64
	// Line 309, Address: 0x1bedd8, Func Offset: 0x68
	// Line 310, Address: 0x1bede0, Func Offset: 0x70
	// Line 317, Address: 0x1bedfc, Func Offset: 0x8c
	// Line 319, Address: 0x1bee08, Func Offset: 0x98
	// Line 320, Address: 0x1bee10, Func Offset: 0xa0
	// Line 323, Address: 0x1bee18, Func Offset: 0xa8
	// Line 327, Address: 0x1bee24, Func Offset: 0xb4
	// Line 330, Address: 0x1bee28, Func Offset: 0xb8
	// Line 328, Address: 0x1bee2c, Func Offset: 0xbc
	// Line 330, Address: 0x1bee30, Func Offset: 0xc0
	// Line 333, Address: 0x1bee48, Func Offset: 0xd8
	// Line 337, Address: 0x1bee74, Func Offset: 0x104
	// Line 339, Address: 0x1beebc, Func Offset: 0x14c
	// Line 340, Address: 0x1beed4, Func Offset: 0x164
	// Line 346, Address: 0x1beed8, Func Offset: 0x168
	// Line 348, Address: 0x1beee4, Func Offset: 0x174
	// Line 349, Address: 0x1beeec, Func Offset: 0x17c
	// Line 351, Address: 0x1bef08, Func Offset: 0x198
	// Line 353, Address: 0x1bef10, Func Offset: 0x1a0
	// Line 354, Address: 0x1bef14, Func Offset: 0x1a4
	// Func End, Address: 0x1bef3c, Func Offset: 0x1cc
}

// videoDecMain__FP8VideoDec
// Start address: 0x1bef40
void videoDecMain(VideoDec* vd)
{
	// Line 263, Address: 0x1bef40, Func Offset: 0
	// Line 264, Address: 0x1bef50, Func Offset: 0x10
	// Line 266, Address: 0x1bef58, Func Offset: 0x18
	// Line 268, Address: 0x1bef64, Func Offset: 0x24
	// Line 270, Address: 0x1bef6c, Func Offset: 0x2c
	// Line 271, Address: 0x1bef70, Func Offset: 0x30
	// Line 273, Address: 0x1bef88, Func Offset: 0x48
	// Line 274, Address: 0x1bef90, Func Offset: 0x50
	// Func End, Address: 0x1befa0, Func Offset: 0x60
}

// videoDecIsFlushed__FP8VideoDec
// Start address: 0x1befa0
int32 videoDecIsFlushed(VideoDec* vd)
{
	// Line 253, Address: 0x1befa0, Func Offset: 0
	// Line 254, Address: 0x1befb4, Func Offset: 0x14
	// Line 256, Address: 0x1befe4, Func Offset: 0x44
	// Func End, Address: 0x1beff8, Func Offset: 0x58
}

// videoDecFlush__FP8VideoDec
// Start address: 0x1bf000
int32 videoDecFlush(VideoDec* vd)
{
	uint8* pd0;
	uint8* pd1;
	uint8* pd0Unc;
	uint8* pd1Unc;
	uint8 seq_end_code[4];
	int32 d0;
	int32 d1;
	// Line 216, Address: 0x1bf000, Func Offset: 0
	// Line 221, Address: 0x1bf008, Func Offset: 0x8
	// Line 216, Address: 0x1bf00c, Func Offset: 0xc
	// Line 225, Address: 0x1bf010, Func Offset: 0x10
	// Line 216, Address: 0x1bf014, Func Offset: 0x14
	// Line 225, Address: 0x1bf020, Func Offset: 0x20
	// Line 216, Address: 0x1bf024, Func Offset: 0x24
	// Line 225, Address: 0x1bf028, Func Offset: 0x28
	// Line 221, Address: 0x1bf02c, Func Offset: 0x2c
	// Line 225, Address: 0x1bf030, Func Offset: 0x30
	// Line 227, Address: 0x1bf04c, Func Offset: 0x4c
	// Line 228, Address: 0x1bf058, Func Offset: 0x58
	// Line 231, Address: 0x1bf060, Func Offset: 0x60
	// Line 232, Address: 0x1bf064, Func Offset: 0x64
	// Line 231, Address: 0x1bf068, Func Offset: 0x68
	// Line 234, Address: 0x1bf06c, Func Offset: 0x6c
	// Line 231, Address: 0x1bf070, Func Offset: 0x70
	// Line 232, Address: 0x1bf074, Func Offset: 0x74
	// Line 231, Address: 0x1bf078, Func Offset: 0x78
	// Line 232, Address: 0x1bf07c, Func Offset: 0x7c
	// Line 231, Address: 0x1bf080, Func Offset: 0x80
	// Line 234, Address: 0x1bf084, Func Offset: 0x84
	// Line 236, Address: 0x1bf160, Func Offset: 0x160
	// Line 238, Address: 0x1bf16c, Func Offset: 0x16c
	// Line 240, Address: 0x1bf174, Func Offset: 0x174
	// Line 241, Address: 0x1bf180, Func Offset: 0x180
	// Line 242, Address: 0x1bf184, Func Offset: 0x184
	// Line 244, Address: 0x1bf188, Func Offset: 0x188
	// Line 245, Address: 0x1bf190, Func Offset: 0x190
	// Func End, Address: 0x1bf1ac, Func Offset: 0x1ac
}

// videoDecPutTs__FP8VideoDecllPUci
// Start address: 0x1bf1b0
int32 videoDecPutTs(VideoDec* vd, long32 pts_val, long32 dts_val, uint8* start, int32 len)
{
	TimeStamp ts;
	// Line 176, Address: 0x1bf1b0, Func Offset: 0
	// Line 180, Address: 0x1bf1b8, Func Offset: 0x8
	// Line 181, Address: 0x1bf1bc, Func Offset: 0xc
	// Line 184, Address: 0x1bf1c0, Func Offset: 0x10
	// Line 182, Address: 0x1bf1c4, Func Offset: 0x14
	// Line 184, Address: 0x1bf1cc, Func Offset: 0x1c
	// Line 183, Address: 0x1bf1d0, Func Offset: 0x20
	// Line 184, Address: 0x1bf1d4, Func Offset: 0x24
	// Line 185, Address: 0x1bf1e0, Func Offset: 0x30
	// Func End, Address: 0x1bf1ec, Func Offset: 0x3c
}

// videoDecGetState__FP8VideoDec
// Start address: 0x1bf1f0
uint32 videoDecGetState(VideoDec* vd)
{
	// Line 155, Address: 0x1bf1f0, Func Offset: 0
	// Func End, Address: 0x1bf1f8, Func Offset: 0x8
}

// videoDecAbort__FP8VideoDec
// Start address: 0x1bf200
void videoDecAbort(VideoDec* vd)
{
	// Line 145, Address: 0x1bf200, Func Offset: 0
	// Line 146, Address: 0x1bf204, Func Offset: 0x4
	// Func End, Address: 0x1bf20c, Func Offset: 0xc
}

// videoDecDelete__FP8VideoDec
// Start address: 0x1bf210
int32 videoDecDelete(VideoDec* vd)
{
	// Line 132, Address: 0x1bf210, Func Offset: 0
	// Line 133, Address: 0x1bf220, Func Offset: 0x10
	// Line 134, Address: 0x1bf228, Func Offset: 0x18
	// Line 137, Address: 0x1bf230, Func Offset: 0x20
	// Line 136, Address: 0x1bf234, Func Offset: 0x24
	// Line 137, Address: 0x1bf238, Func Offset: 0x28
	// Func End, Address: 0x1bf244, Func Offset: 0x34
}

// videoDecEndPut__FP8VideoDeci
// Start address: 0x1bf250
void videoDecEndPut(VideoDec* vd, int32 size)
{
	// Line 115, Address: 0x1bf250, Func Offset: 0
	// Func End, Address: 0x1bf258, Func Offset: 0x8
}

// videoDecBeginPut__FP8VideoDecPPUcPiPPUcPi
// Start address: 0x1bf260
void videoDecBeginPut(VideoDec* vd, uint8** ptr0, int32* len0, uint8** ptr1, int32* len1)
{
	// Line 106, Address: 0x1bf260, Func Offset: 0
	// Func End, Address: 0x1bf268, Func Offset: 0x8
}

// videoDecSetStream__FP8VideoDeciiPFP7sceMpegP13sceMpegCbDataPv_iPv
// Start address: 0x1bf270
int32 videoDecSetStream(VideoDec* vd, int32 strType, int32 ch, int32(*cb)(sceMpeg*, sceMpegCbData*, void*), void* data)
{
	// Line 94, Address: 0x1bf270, Func Offset: 0
	// Line 95, Address: 0x1bf278, Func Offset: 0x8
	// Line 97, Address: 0x1bf280, Func Offset: 0x10
	// Line 96, Address: 0x1bf284, Func Offset: 0x14
	// Line 97, Address: 0x1bf288, Func Offset: 0x18
	// Func End, Address: 0x1bf290, Func Offset: 0x20
}

// videoDecCreate__FP8VideoDecPUciP1P1iP9TimeStampi
// Start address: 0x1bf290
int32 videoDecCreate(VideoDec* vd, uint8* mpegWork, int32 mpegWorkSize, <unknown fundamental type (0xa510)>* data, <unknown fundamental type (0xa510)>* tag, int32 tagSize, TimeStamp* pts, int32 n_pts)
{
	// Line 55, Address: 0x1bf290, Func Offset: 0
	// Line 57, Address: 0x1bf2c4, Func Offset: 0x34
	// Line 60, Address: 0x1bf2cc, Func Offset: 0x3c
	// Line 62, Address: 0x1bf2e4, Func Offset: 0x54
	// Line 64, Address: 0x1bf2fc, Func Offset: 0x6c
	// Line 66, Address: 0x1bf314, Func Offset: 0x84
	// Line 68, Address: 0x1bf32c, Func Offset: 0x9c
	// Line 74, Address: 0x1bf344, Func Offset: 0xb4
	// Line 77, Address: 0x1bf364, Func Offset: 0xd4
	// Line 76, Address: 0x1bf368, Func Offset: 0xd8
	// Line 77, Address: 0x1bf36c, Func Offset: 0xdc
	// Func End, Address: 0x1bf38c, Func Offset: 0xfc
}

