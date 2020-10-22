typedef struct xVec3;
typedef enum sound_category;
typedef struct AudioDec;
typedef struct xMat4x3;
typedef struct xMat3x3;
typedef struct iSndInfo;
typedef struct SpuStreamHeader;
typedef enum sound_listener_game_mode;
typedef struct xSndVoiceInfo;
typedef struct sceSifDmaData;
typedef struct SpuStreamBody;
typedef struct iSndVol;
typedef struct xSndGlobals;


typedef float32 type_0[5];
typedef xSndVoiceInfo type_1[48];
typedef xMat4x3 type_2[2];
typedef int8 type_3[4];
typedef int8 type_4[4];
typedef int8 type_5[2048];

struct xVec3
{
	float32 x;
	float32 y;
	float32 z;
};

enum sound_category
{
	SND_CAT_INVALID = 0xffffffff,
	SND_CAT_GAME,
	SND_CAT_DIALOG,
	SND_CAT_MUSIC,
	SND_CAT_CUTSCENE,
	SND_CAT_UI,
	SND_CAT_NUM_CATEGORIES
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

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	uint32 pad3;
};

struct xMat3x3
{
	xVec3 right;
	int32 flags;
	xVec3 up;
	uint32 pad1;
	xVec3 at;
	uint32 pad2;
};

struct iSndInfo
{
	uint32 flags;
	iSndVol vol;
	uint32 pitch;
	int32 lastStreamBuffer;
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

enum sound_listener_game_mode
{
	SND_LISTENER_MODE_PLAYER,
	SND_LISTENER_MODE_CAMERA
};

struct xSndVoiceInfo
{
	uint32 assetID;
	uint32 sndID;
	uint32 parentID;
	xVec3* parentPos;
	int32 internalID;
	uint32 flags;
	uint16 pad;
	uint16 priority;
	float32 vol;
	float32 pitch;
	uint32 sample_rate;
	uint32 deadct;
	sound_category category;
	xVec3 actualPos;
	xVec3 playPos;
	float32 innerRadius2;
	float32 outerRadius2;
	uint32 lock_owner;
	iSndInfo ps;
};

struct sceSifDmaData
{
	uint32 data;
	uint32 addr;
	uint32 size;
	uint32 mode;
};

struct SpuStreamBody
{
	int8 id[4];
	int32 size;
};

struct iSndVol
{
	int16 volL;
	int16 volR;
};

struct xSndGlobals
{
	uint32 stereo;
	uint32 SndCount;
	float32 categoryVolFader[5];
	xSndVoiceInfo voice[48];
	xMat4x3 listenerMat[2];
	sound_listener_game_mode listenerMode;
	uint32 suspendCD;
	xVec3 right;
	xVec3 up;
	xVec3 at;
	xVec3 pos;
};

int8 _0_buf[2048];
xSndGlobals gSnd;

int32 sendToIOP2area(int32 pd0, int32 d0, int32 pd1, int32 d1, uint8* ps0, int32 s0, uint8* ps1, int32 s1);
int32 audioDecSendToIOP(AudioDec* ad);
int32 audioDecIsPreset(AudioDec* ad);
void audioDecEndPut(AudioDec* ad, int32 size);
void audioDecBeginPut(AudioDec* ad, uint8** ptr0, int32* len0, uint8** ptr1, int32* len1);
void audioDecReset(AudioDec* ad);
void audioDecStart(AudioDec* ad);
int32 audioDecDelete(AudioDec* ad);
int32 audioDecCreate(AudioDec* ad, uint8* buff, int32 buffSize, int32 iopBuffSize);

// sendToIOP2area__FiiiiPUciPUci
// Start address: 0x1bb9e0
int32 sendToIOP2area(int32 pd0, int32 d0, int32 pd1, int32 d1, uint8* ps0, int32 s0, uint8* ps1, int32 s1)
{
	int32 diff;
	// Line 428, Address: 0x1bb9e0, Func Offset: 0
	// Line 429, Address: 0x1bb9f4, Func Offset: 0x14
	// Line 428, Address: 0x1bb9f8, Func Offset: 0x18
	// Line 429, Address: 0x1bba2c, Func Offset: 0x4c
	// Line 430, Address: 0x1bba34, Func Offset: 0x54
	// Line 431, Address: 0x1bba38, Func Offset: 0x58
	// Line 432, Address: 0x1bba44, Func Offset: 0x64
	// Line 434, Address: 0x1bba4c, Func Offset: 0x6c
	// Line 435, Address: 0x1bba58, Func Offset: 0x78
	// Line 437, Address: 0x1bba5c, Func Offset: 0x7c
	// Line 442, Address: 0x1bba60, Func Offset: 0x80
	// Line 443, Address: 0x1bba6c, Func Offset: 0x8c
	// Line 444, Address: 0x1bbab4, Func Offset: 0xd4
	// Line 445, Address: 0x1bbb00, Func Offset: 0x120
	// Line 446, Address: 0x1bbb50, Func Offset: 0x170
	// Line 447, Address: 0x1bbb5c, Func Offset: 0x17c
	// Line 448, Address: 0x1bbb68, Func Offset: 0x188
	// Line 449, Address: 0x1bbbb0, Func Offset: 0x1d0
	// Line 450, Address: 0x1bbbfc, Func Offset: 0x21c
	// Line 451, Address: 0x1bbc48, Func Offset: 0x268
	// Line 452, Address: 0x1bbc50, Func Offset: 0x270
	// Line 453, Address: 0x1bbc98, Func Offset: 0x2b8
	// Line 456, Address: 0x1bbce0, Func Offset: 0x300
	// Line 457, Address: 0x1bbce4, Func Offset: 0x304
	// Func End, Address: 0x1bbd10, Func Offset: 0x330
}

// audioDecSendToIOP__FP8AudioDec
// Start address: 0x1bbd10
int32 audioDecSendToIOP(AudioDec* ad)
{
	int32 pd0;
	int32 pd1;
	int32 d0;
	int32 d1;
	uint8* ps0;
	int32 s1;
	int32 count_sent;
	int32 countAdj;
	int32 pos;
	// Line 344, Address: 0x1bbd10, Func Offset: 0
	// Line 352, Address: 0x1bbd14, Func Offset: 0x4
	// Line 344, Address: 0x1bbd18, Func Offset: 0x8
	// Line 352, Address: 0x1bbd2c, Func Offset: 0x1c
	// Line 353, Address: 0x1bbd5c, Func Offset: 0x4c
	// Line 354, Address: 0x1bbd60, Func Offset: 0x50
	// Line 360, Address: 0x1bbd70, Func Offset: 0x60
	// Line 358, Address: 0x1bbd74, Func Offset: 0x64
	// Line 361, Address: 0x1bbd78, Func Offset: 0x68
	// Line 358, Address: 0x1bbd7c, Func Offset: 0x6c
	// Line 359, Address: 0x1bbd80, Func Offset: 0x70
	// Line 358, Address: 0x1bbd88, Func Offset: 0x78
	// Line 362, Address: 0x1bbd8c, Func Offset: 0x7c
	// Line 364, Address: 0x1bbd94, Func Offset: 0x84
	// Line 362, Address: 0x1bbd98, Func Offset: 0x88
	// Line 365, Address: 0x1bbd9c, Func Offset: 0x8c
	// Line 366, Address: 0x1bbdbc, Func Offset: 0xac
	// Line 367, Address: 0x1bbe18, Func Offset: 0x108
	// Line 370, Address: 0x1bbe20, Func Offset: 0x110
	// Line 374, Address: 0x1bbe2c, Func Offset: 0x11c
	// Line 370, Address: 0x1bbe30, Func Offset: 0x120
	// Line 378, Address: 0x1bbe38, Func Offset: 0x128
	// Line 374, Address: 0x1bbe3c, Func Offset: 0x12c
	// Line 378, Address: 0x1bbe54, Func Offset: 0x144
	// Line 380, Address: 0x1bbe70, Func Offset: 0x160
	// Line 383, Address: 0x1bbe80, Func Offset: 0x170
	// Line 384, Address: 0x1bbea0, Func Offset: 0x190
	// Line 385, Address: 0x1bbeac, Func Offset: 0x19c
	// Line 387, Address: 0x1bbeb0, Func Offset: 0x1a0
	// Line 392, Address: 0x1bbeb4, Func Offset: 0x1a4
	// Line 387, Address: 0x1bbeb8, Func Offset: 0x1a8
	// Line 389, Address: 0x1bbec0, Func Offset: 0x1b0
	// Line 390, Address: 0x1bbecc, Func Offset: 0x1bc
	// Line 392, Address: 0x1bbeec, Func Offset: 0x1dc
	// Line 393, Address: 0x1bbef0, Func Offset: 0x1e0
	// Func End, Address: 0x1bbf08, Func Offset: 0x1f8
}

// audioDecIsPreset__FP8AudioDec
// Start address: 0x1bbf10
int32 audioDecIsPreset(AudioDec* ad)
{
	// Line 336, Address: 0x1bbf10, Func Offset: 0
	// Line 337, Address: 0x1bbf1c, Func Offset: 0xc
	// Func End, Address: 0x1bbf24, Func Offset: 0x14
}

// audioDecEndPut__FP8AudioDeci
// Start address: 0x1bbf30
void audioDecEndPut(AudioDec* ad, int32 size)
{
	int32 hdr_add;
	// Line 268, Address: 0x1bbf30, Func Offset: 0
	// Line 269, Address: 0x1bbf48, Func Offset: 0x18
	// Line 270, Address: 0x1bbf50, Func Offset: 0x20
	// Line 272, Address: 0x1bbf5c, Func Offset: 0x2c
	// Line 273, Address: 0x1bbf6c, Func Offset: 0x3c
	// Line 322, Address: 0x1bbf74, Func Offset: 0x44
	// Line 323, Address: 0x1bbf78, Func Offset: 0x48
	// Line 324, Address: 0x1bbf7c, Func Offset: 0x4c
	// Line 325, Address: 0x1bbf80, Func Offset: 0x50
	// Line 326, Address: 0x1bbfa0, Func Offset: 0x70
	// Line 327, Address: 0x1bbfac, Func Offset: 0x7c
	// Line 328, Address: 0x1bbfb4, Func Offset: 0x84
	// Func End, Address: 0x1bbfbc, Func Offset: 0x8c
}

// audioDecBeginPut__FP8AudioDecPPUcPiPPUcPi
// Start address: 0x1bbfc0
void audioDecBeginPut(AudioDec* ad, uint8** ptr0, int32* len0, uint8** ptr1, int32* len1)
{
	int32 len;
	// Line 234, Address: 0x1bbfc0, Func Offset: 0
	// Line 235, Address: 0x1bbfcc, Func Offset: 0xc
	// Line 236, Address: 0x1bbfd0, Func Offset: 0x10
	// Line 235, Address: 0x1bbfd4, Func Offset: 0x14
	// Line 236, Address: 0x1bbfe0, Func Offset: 0x20
	// Line 237, Address: 0x1bbfec, Func Offset: 0x2c
	// Line 238, Address: 0x1bbff4, Func Offset: 0x34
	// Line 240, Address: 0x1bbff8, Func Offset: 0x38
	// Line 247, Address: 0x1bc004, Func Offset: 0x44
	// Line 249, Address: 0x1bc010, Func Offset: 0x50
	// Line 250, Address: 0x1bc020, Func Offset: 0x60
	// Line 251, Address: 0x1bc02c, Func Offset: 0x6c
	// Line 252, Address: 0x1bc030, Func Offset: 0x70
	// Line 254, Address: 0x1bc034, Func Offset: 0x74
	// Line 255, Address: 0x1bc040, Func Offset: 0x80
	// Line 256, Address: 0x1bc04c, Func Offset: 0x8c
	// Line 257, Address: 0x1bc05c, Func Offset: 0x9c
	// Line 258, Address: 0x1bc064, Func Offset: 0xa4
	// Line 260, Address: 0x1bc078, Func Offset: 0xb8
	// Func End, Address: 0x1bc080, Func Offset: 0xc0
}

// audioDecReset__FP8AudioDec
// Start address: 0x1bc080
void audioDecReset(AudioDec* ad)
{
	// Line 204, Address: 0x1bc080, Func Offset: 0
	// Line 209, Address: 0x1bc084, Func Offset: 0x4
	// Line 204, Address: 0x1bc088, Func Offset: 0x8
	// Line 209, Address: 0x1bc08c, Func Offset: 0xc
	// Line 204, Address: 0x1bc090, Func Offset: 0x10
	// Line 209, Address: 0x1bc098, Func Offset: 0x18
	// Line 211, Address: 0x1bc0f4, Func Offset: 0x74
	// Line 212, Address: 0x1bc0f8, Func Offset: 0x78
	// Line 213, Address: 0x1bc0fc, Func Offset: 0x7c
	// Line 214, Address: 0x1bc100, Func Offset: 0x80
	// Line 215, Address: 0x1bc104, Func Offset: 0x84
	// Line 216, Address: 0x1bc108, Func Offset: 0x88
	// Line 217, Address: 0x1bc10c, Func Offset: 0x8c
	// Line 218, Address: 0x1bc110, Func Offset: 0x90
	// Line 219, Address: 0x1bc114, Func Offset: 0x94
	// Func End, Address: 0x1bc124, Func Offset: 0xa4
}

// audioDecStart__FP8AudioDec
// Start address: 0x1bc130
void audioDecStart(AudioDec* ad)
{
	// Line 194, Address: 0x1bc130, Func Offset: 0
	// Line 196, Address: 0x1bc134, Func Offset: 0x4
	// Line 194, Address: 0x1bc138, Func Offset: 0x8
	// Line 196, Address: 0x1bc144, Func Offset: 0x14
	// Line 197, Address: 0x1bc190, Func Offset: 0x60
	// Func End, Address: 0x1bc1a0, Func Offset: 0x70
}

// audioDecDelete__FP8AudioDec
// Start address: 0x1bc1a0
int32 audioDecDelete(AudioDec* ad)
{
	// Line 124, Address: 0x1bc1a0, Func Offset: 0
	// Line 125, Address: 0x1bc1b0, Func Offset: 0x10
	// Line 126, Address: 0x1bc1b8, Func Offset: 0x18
	// Line 132, Address: 0x1bc1c0, Func Offset: 0x20
	// Line 135, Address: 0x1bc1cc, Func Offset: 0x2c
	// Line 134, Address: 0x1bc1d0, Func Offset: 0x30
	// Line 135, Address: 0x1bc1d4, Func Offset: 0x34
	// Func End, Address: 0x1bc1e0, Func Offset: 0x40
}

// audioDecCreate__FP8AudioDecPUcii
// Start address: 0x1bc1e0
int32 audioDecCreate(AudioDec* ad, uint8* buff, int32 buffSize, int32 iopBuffSize)
{
	// Line 64, Address: 0x1bc1e0, Func Offset: 0
	// Line 65, Address: 0x1bc1f4, Func Offset: 0x14
	// Line 66, Address: 0x1bc1fc, Func Offset: 0x1c
	// Line 67, Address: 0x1bc200, Func Offset: 0x20
	// Line 68, Address: 0x1bc204, Func Offset: 0x24
	// Line 82, Address: 0x1bc208, Func Offset: 0x28
	// Line 69, Address: 0x1bc20c, Func Offset: 0x2c
	// Line 70, Address: 0x1bc210, Func Offset: 0x30
	// Line 71, Address: 0x1bc214, Func Offset: 0x34
	// Line 82, Address: 0x1bc218, Func Offset: 0x38
	// Line 72, Address: 0x1bc21c, Func Offset: 0x3c
	// Line 74, Address: 0x1bc220, Func Offset: 0x40
	// Line 75, Address: 0x1bc224, Func Offset: 0x44
	// Line 76, Address: 0x1bc228, Func Offset: 0x48
	// Line 82, Address: 0x1bc22c, Func Offset: 0x4c
	// Line 83, Address: 0x1bc23c, Func Offset: 0x5c
	// Line 84, Address: 0x1bc244, Func Offset: 0x64
	// Line 85, Address: 0x1bc24c, Func Offset: 0x6c
	// Line 86, Address: 0x1bc254, Func Offset: 0x74
	// Line 87, Address: 0x1bc258, Func Offset: 0x78
	// Line 94, Address: 0x1bc268, Func Offset: 0x88
	// Line 95, Address: 0x1bc280, Func Offset: 0xa0
	// Line 96, Address: 0x1bc288, Func Offset: 0xa8
	// Line 97, Address: 0x1bc290, Func Offset: 0xb0
	// Line 99, Address: 0x1bc298, Func Offset: 0xb8
	// Line 103, Address: 0x1bc2a8, Func Offset: 0xc8
	// Line 104, Address: 0x1bc2bc, Func Offset: 0xdc
	// Line 113, Address: 0x1bc368, Func Offset: 0x188
	// Line 116, Address: 0x1bc374, Func Offset: 0x194
	// Line 117, Address: 0x1bc378, Func Offset: 0x198
	// Func End, Address: 0x1bc38c, Func Offset: 0x1ac
}

