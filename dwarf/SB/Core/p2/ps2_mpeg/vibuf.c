typedef struct sceIpuDmaEnv;
typedef struct ViBuf;
typedef struct TimeStamp;
typedef struct SemaParam;
typedef struct QWORD;


typedef ulong32 type_0[2];
typedef uint32 type_1[4];
typedef uint16 type_2[8];
typedef uint8 type_3[16];

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

struct TimeStamp
{
	long32 pts;
	long32 dts;
	int32 pos;
	int32 len;
};

struct SemaParam
{
	int32 currentCount;
	int32 maxCount;
	int32 initCount;
	int32 numWaitThreads;
	uint32 attr;
	uint32 option;
};

struct QWORD
{
	union
	{
		<unknown fundamental type (0xa510)> q;
		ulong32 l[2];
		uint32 i[4];
		uint16 s[8];
		uint8 c[16];
	};
};


int32 viBufGetTs(ViBuf* f, TimeStamp* ts);
int32 viBufPutTs(ViBuf* f, TimeStamp* ts);
int32 viBufModifyPts(ViBuf* f, TimeStamp* new_ts);
void viBufFlush(ViBuf* f);
int32 viBufCount(ViBuf* f);
int32 viBufDelete(ViBuf* f);
int32 viBufRestartDMA(ViBuf* f);
int32 viBufStopDMA(ViBuf* f);
int32 viBufAddDMA(ViBuf* f);
void viBufEndPut(ViBuf* f, int32 size);
void viBufBeginPut(ViBuf* f, uint8** ptr0, int32* len0, uint8** ptr1, int32* len1);
int32 viBufReset(ViBuf* f);
int32 viBufCreate(ViBuf* f, <unknown fundamental type (0xa510)>* data, <unknown fundamental type (0xa510)>* tag, int32 size, TimeStamp* ts, int32 n_ts);

// viBufGetTs__FP5ViBufP9TimeStamp
// Start address: 0x1bdb70
int32 viBufGetTs(ViBuf* f, TimeStamp* ts)
{
	uint32 d4madr;
	uint32 ipubp;
	int32 bp;
	int32 datasize;
	int32 isEnd;
	int32 tscount;
	int32 i;
	int32 rd;
	// Line 618, Address: 0x1bdb70, Func Offset: 0
	// Line 619, Address: 0x1bdb74, Func Offset: 0x4
	// Line 618, Address: 0x1bdb78, Func Offset: 0x8
	// Line 619, Address: 0x1bdb98, Func Offset: 0x28
	// Line 632, Address: 0x1bdb9c, Func Offset: 0x2c
	// Line 620, Address: 0x1bdba0, Func Offset: 0x30
	// Line 632, Address: 0x1bdba8, Func Offset: 0x38
	// Line 635, Address: 0x1bdbb0, Func Offset: 0x40
	// Line 637, Address: 0x1bdbbc, Func Offset: 0x4c
	// Line 648, Address: 0x1bdbc8, Func Offset: 0x58
	// Line 639, Address: 0x1bdbcc, Func Offset: 0x5c
	// Line 648, Address: 0x1bdbd4, Func Offset: 0x64
	// Line 635, Address: 0x1bdbdc, Func Offset: 0x6c
	// Line 639, Address: 0x1bdbe4, Func Offset: 0x74
	// Line 637, Address: 0x1bdbe8, Func Offset: 0x78
	// Line 648, Address: 0x1bdbec, Func Offset: 0x7c
	// Line 640, Address: 0x1bdbf0, Func Offset: 0x80
	// Line 648, Address: 0x1bdbf4, Func Offset: 0x84
	// Line 645, Address: 0x1bdbfc, Func Offset: 0x8c
	// Line 648, Address: 0x1bdc00, Func Offset: 0x90
	// Line 650, Address: 0x1bdc24, Func Offset: 0xb4
	// Line 652, Address: 0x1bdc50, Func Offset: 0xe0
	// Line 655, Address: 0x1bdc78, Func Offset: 0x108
	// Line 656, Address: 0x1bdc80, Func Offset: 0x110
	// Line 657, Address: 0x1bdc90, Func Offset: 0x120
	// Line 658, Address: 0x1bdc9c, Func Offset: 0x12c
	// Line 660, Address: 0x1bdca8, Func Offset: 0x138
	// Line 661, Address: 0x1bdcac, Func Offset: 0x13c
	// Line 663, Address: 0x1bdcd4, Func Offset: 0x164
	// Line 665, Address: 0x1bdcf8, Func Offset: 0x188
	// Line 668, Address: 0x1bdd00, Func Offset: 0x190
	// Line 667, Address: 0x1bdd04, Func Offset: 0x194
	// Line 668, Address: 0x1bdd08, Func Offset: 0x198
	// Func End, Address: 0x1bdd24, Func Offset: 0x1b4
}

// viBufPutTs__FP5ViBufP9TimeStamp
// Start address: 0x1bdd30
int32 viBufPutTs(ViBuf* f, TimeStamp* ts)
{
	int32 ret;
	// Line 587, Address: 0x1bdd30, Func Offset: 0
	// Line 588, Address: 0x1bdd40, Func Offset: 0x10
	// Line 587, Address: 0x1bdd44, Func Offset: 0x14
	// Line 590, Address: 0x1bdd4c, Func Offset: 0x1c
	// Line 592, Address: 0x1bdd58, Func Offset: 0x28
	// Line 594, Address: 0x1bdd6c, Func Offset: 0x3c
	// Line 596, Address: 0x1bdd78, Func Offset: 0x48
	// Line 598, Address: 0x1bdd90, Func Offset: 0x60
	// Line 599, Address: 0x1bddac, Func Offset: 0x7c
	// Line 600, Address: 0x1bddcc, Func Offset: 0x9c
	// Line 601, Address: 0x1bddec, Func Offset: 0xbc
	// Line 603, Address: 0x1bde0c, Func Offset: 0xdc
	// Line 604, Address: 0x1bde18, Func Offset: 0xe8
	// Line 606, Address: 0x1bde38, Func Offset: 0x108
	// Line 607, Address: 0x1bde3c, Func Offset: 0x10c
	// Line 609, Address: 0x1bde40, Func Offset: 0x110
	// Line 611, Address: 0x1bde48, Func Offset: 0x118
	// Line 612, Address: 0x1bde4c, Func Offset: 0x11c
	// Func End, Address: 0x1bde64, Func Offset: 0x134
}

// viBufModifyPts__FP5ViBufP9TimeStamp
// Start address: 0x1bde70
int32 viBufModifyPts(ViBuf* f, TimeStamp* new_ts)
{
	TimeStamp* ts;
	int32 rd;
	int32 datasize;
	int32 loop;
	// Line 541, Address: 0x1bde70, Func Offset: 0
	// Line 545, Address: 0x1bde74, Func Offset: 0x4
	// Line 543, Address: 0x1bde78, Func Offset: 0x8
	// Line 541, Address: 0x1bde7c, Func Offset: 0xc
	// Line 544, Address: 0x1bde80, Func Offset: 0x10
	// Line 543, Address: 0x1bde84, Func Offset: 0x14
	// Line 547, Address: 0x1bde9c, Func Offset: 0x2c
	// Line 564, Address: 0x1bdea4, Func Offset: 0x34
	// Line 549, Address: 0x1bdea8, Func Offset: 0x38
	// Line 551, Address: 0x1bdec0, Func Offset: 0x50
	// Line 555, Address: 0x1bdedc, Func Offset: 0x6c
	// Line 556, Address: 0x1bdf04, Func Offset: 0x94
	// Line 558, Address: 0x1bdf20, Func Offset: 0xb0
	// Line 559, Address: 0x1bdf38, Func Offset: 0xc8
	// Line 561, Address: 0x1bdf44, Func Offset: 0xd4
	// Line 562, Address: 0x1bdf50, Func Offset: 0xe0
	// Line 564, Address: 0x1bdf5c, Func Offset: 0xec
	// Line 565, Address: 0x1bdf60, Func Offset: 0xf0
	// Line 566, Address: 0x1bdf64, Func Offset: 0xf4
	// Line 567, Address: 0x1bdf68, Func Offset: 0xf8
	// Line 568, Address: 0x1bdf6c, Func Offset: 0xfc
	// Line 567, Address: 0x1bdf70, Func Offset: 0x100
	// Line 569, Address: 0x1bdf78, Func Offset: 0x108
	// Line 571, Address: 0x1bdf84, Func Offset: 0x114
	// Line 572, Address: 0x1bdf90, Func Offset: 0x120
	// Line 573, Address: 0x1bdf94, Func Offset: 0x124
	// Line 575, Address: 0x1bdf98, Func Offset: 0x128
	// Line 576, Address: 0x1bdfb0, Func Offset: 0x140
	// Line 580, Address: 0x1bdfb8, Func Offset: 0x148
	// Func End, Address: 0x1bdfc0, Func Offset: 0x150
}

// viBufFlush__FP5ViBuf
// Start address: 0x1bdfc0
void viBufFlush(ViBuf* f)
{
	// Line 528, Address: 0x1bdfc0, Func Offset: 0
	// Line 529, Address: 0x1bdfd0, Func Offset: 0x10
	// Line 531, Address: 0x1bdfd8, Func Offset: 0x18
	// Line 533, Address: 0x1bdff8, Func Offset: 0x38
	// Line 534, Address: 0x1be000, Func Offset: 0x40
	// Func End, Address: 0x1be010, Func Offset: 0x50
}

// viBufCount__FP5ViBuf
// Start address: 0x1be010
int32 viBufCount(ViBuf* f)
{
	int32 ret;
	// Line 511, Address: 0x1be010, Func Offset: 0
	// Line 514, Address: 0x1be020, Func Offset: 0x10
	// Line 516, Address: 0x1be028, Func Offset: 0x18
	// Line 518, Address: 0x1be030, Func Offset: 0x20
	// Line 516, Address: 0x1be034, Func Offset: 0x24
	// Line 518, Address: 0x1be038, Func Offset: 0x28
	// Line 520, Address: 0x1be040, Func Offset: 0x30
	// Line 521, Address: 0x1be044, Func Offset: 0x34
	// Func End, Address: 0x1be054, Func Offset: 0x44
}

// viBufDelete__FP5ViBuf
// Start address: 0x1be060
int32 viBufDelete(ViBuf* f)
{
	// Line 479, Address: 0x1be060, Func Offset: 0
	// Line 480, Address: 0x1be06c, Func Offset: 0xc
	// Line 481, Address: 0x1be0b8, Func Offset: 0x58
	// Line 482, Address: 0x1be0c0, Func Offset: 0x60
	// Line 483, Address: 0x1be0c8, Func Offset: 0x68
	// Line 485, Address: 0x1be0d0, Func Offset: 0x70
	// Line 487, Address: 0x1be0d8, Func Offset: 0x78
	// Line 486, Address: 0x1be0dc, Func Offset: 0x7c
	// Line 487, Address: 0x1be0e0, Func Offset: 0x80
	// Func End, Address: 0x1be0ec, Func Offset: 0x8c
}

// viBufRestartDMA__FP5ViBuf
// Start address: 0x1be0f0
int32 viBufRestartDMA(ViBuf* f)
{
	int32 bp;
	uint32 d4madr_next;
	uint32 d4qwc_next;
	uint32 d4tadr_next;
	uint32 d4chcr_next;
	// Line 383, Address: 0x1be0f0, Func Offset: 0
	// Line 395, Address: 0x1be118, Func Offset: 0x28
	// Line 403, Address: 0x1be124, Func Offset: 0x34
	// Line 402, Address: 0x1be128, Func Offset: 0x38
	// Line 398, Address: 0x1be12c, Func Offset: 0x3c
	// Line 404, Address: 0x1be130, Func Offset: 0x40
	// Line 403, Address: 0x1be134, Func Offset: 0x44
	// Line 398, Address: 0x1be13c, Func Offset: 0x4c
	// Line 402, Address: 0x1be150, Func Offset: 0x60
	// Line 401, Address: 0x1be154, Func Offset: 0x64
	// Line 409, Address: 0x1be15c, Func Offset: 0x6c
	// Line 410, Address: 0x1be168, Func Offset: 0x78
	// Line 412, Address: 0x1be174, Func Offset: 0x84
	// Line 411, Address: 0x1be17c, Func Offset: 0x8c
	// Line 412, Address: 0x1be180, Func Offset: 0x90
	// Line 417, Address: 0x1be184, Func Offset: 0x94
	// Line 420, Address: 0x1be1d0, Func Offset: 0xe0
	// Line 421, Address: 0x1be1f0, Func Offset: 0x100
	// Line 422, Address: 0x1be1f8, Func Offset: 0x108
	// Line 424, Address: 0x1be200, Func Offset: 0x110
	// Line 426, Address: 0x1be254, Func Offset: 0x164
	// Line 427, Address: 0x1be25c, Func Offset: 0x16c
	// Line 426, Address: 0x1be260, Func Offset: 0x170
	// Line 427, Address: 0x1be264, Func Offset: 0x174
	// Line 432, Address: 0x1be278, Func Offset: 0x188
	// Line 435, Address: 0x1be2e4, Func Offset: 0x1f4
	// Line 436, Address: 0x1be300, Func Offset: 0x210
	// Line 437, Address: 0x1be304, Func Offset: 0x214
	// Line 442, Address: 0x1be310, Func Offset: 0x220
	// Line 443, Address: 0x1be328, Func Offset: 0x238
	// Line 444, Address: 0x1be334, Func Offset: 0x244
	// Line 445, Address: 0x1be340, Func Offset: 0x250
	// Line 446, Address: 0x1be38c, Func Offset: 0x29c
	// Line 448, Address: 0x1be390, Func Offset: 0x2a0
	// Line 450, Address: 0x1be39c, Func Offset: 0x2ac
	// Line 452, Address: 0x1be3b8, Func Offset: 0x2c8
	// Line 454, Address: 0x1be3c0, Func Offset: 0x2d0
	// Line 458, Address: 0x1be3d8, Func Offset: 0x2e8
	// Line 459, Address: 0x1be3e0, Func Offset: 0x2f0
	// Line 460, Address: 0x1be3e8, Func Offset: 0x2f8
	// Line 461, Address: 0x1be3f0, Func Offset: 0x300
	// Line 462, Address: 0x1be3fc, Func Offset: 0x30c
	// Line 463, Address: 0x1be444, Func Offset: 0x354
	// Line 465, Address: 0x1be448, Func Offset: 0x358
	// Line 467, Address: 0x1be450, Func Offset: 0x360
	// Line 465, Address: 0x1be454, Func Offset: 0x364
	// Line 467, Address: 0x1be458, Func Offset: 0x368
	// Line 469, Address: 0x1be45c, Func Offset: 0x36c
	// Line 472, Address: 0x1be464, Func Offset: 0x374
	// Line 471, Address: 0x1be468, Func Offset: 0x378
	// Line 472, Address: 0x1be46c, Func Offset: 0x37c
	// Func End, Address: 0x1be490, Func Offset: 0x3a0
}

// viBufStopDMA__FP5ViBuf
// Start address: 0x1be490
int32 viBufStopDMA(ViBuf* f)
{
	// Line 348, Address: 0x1be490, Func Offset: 0
	// Line 349, Address: 0x1be4a0, Func Offset: 0x10
	// Line 353, Address: 0x1be4a8, Func Offset: 0x18
	// Line 355, Address: 0x1be4f4, Func Offset: 0x64
	// Line 356, Address: 0x1be500, Func Offset: 0x70
	// Line 357, Address: 0x1be50c, Func Offset: 0x7c
	// Line 358, Address: 0x1be518, Func Offset: 0x88
	// Line 362, Address: 0x1be524, Func Offset: 0x94
	// Line 365, Address: 0x1be540, Func Offset: 0xb0
	// Line 366, Address: 0x1be588, Func Offset: 0xf8
	// Line 367, Address: 0x1be594, Func Offset: 0x104
	// Line 368, Address: 0x1be5a0, Func Offset: 0x110
	// Line 370, Address: 0x1be5ac, Func Offset: 0x11c
	// Line 371, Address: 0x1be5b8, Func Offset: 0x128
	// Line 373, Address: 0x1be5c4, Func Offset: 0x134
	// Line 376, Address: 0x1be5cc, Func Offset: 0x13c
	// Line 375, Address: 0x1be5d0, Func Offset: 0x140
	// Line 376, Address: 0x1be5d4, Func Offset: 0x144
	// Func End, Address: 0x1be5e0, Func Offset: 0x150
}

// viBufAddDMA__FP5ViBuf
// Start address: 0x1be5e0
int32 viBufAddDMA(ViBuf* f)
{
	int32 i;
	int32 index;
	int32 last;
	uint32 d4chcr;
	int32 isNewData;
	int32 consume;
	int32 read_start;
	int32 read_n;
	// Line 250, Address: 0x1be5e0, Func Offset: 0
	// Line 260, Address: 0x1be5f8, Func Offset: 0x18
	// Line 262, Address: 0x1be604, Func Offset: 0x24
	// Line 263, Address: 0x1be610, Func Offset: 0x30
	// Line 264, Address: 0x1be618, Func Offset: 0x38
	// Line 265, Address: 0x1be620, Func Offset: 0x40
	// Line 277, Address: 0x1be628, Func Offset: 0x48
	// Line 278, Address: 0x1be674, Func Offset: 0x94
	// Line 284, Address: 0x1be678, Func Offset: 0x98
	// Line 278, Address: 0x1be67c, Func Offset: 0x9c
	// Line 284, Address: 0x1be680, Func Offset: 0xa0
	// Line 285, Address: 0x1be6c0, Func Offset: 0xe0
	// Line 286, Address: 0x1be6d8, Func Offset: 0xf8
	// Line 287, Address: 0x1be6f0, Func Offset: 0x110
	// Line 293, Address: 0x1be6fc, Func Offset: 0x11c
	// Line 294, Address: 0x1be708, Func Offset: 0x128
	// Line 293, Address: 0x1be70c, Func Offset: 0x12c
	// Line 294, Address: 0x1be720, Func Offset: 0x140
	// Line 295, Address: 0x1be730, Func Offset: 0x150
	// Line 301, Address: 0x1be748, Func Offset: 0x168
	// Line 302, Address: 0x1be750, Func Offset: 0x170
	// Line 303, Address: 0x1be754, Func Offset: 0x174
	// Line 302, Address: 0x1be758, Func Offset: 0x178
	// Line 303, Address: 0x1be75c, Func Offset: 0x17c
	// Line 301, Address: 0x1be760, Func Offset: 0x180
	// Line 309, Address: 0x1be764, Func Offset: 0x184
	// Line 303, Address: 0x1be768, Func Offset: 0x188
	// Line 302, Address: 0x1be770, Func Offset: 0x190
	// Line 303, Address: 0x1be78c, Func Offset: 0x1ac
	// Line 313, Address: 0x1be7b0, Func Offset: 0x1d0
	// Line 315, Address: 0x1be7bc, Func Offset: 0x1dc
	// Line 322, Address: 0x1be7fc, Func Offset: 0x21c
	// Line 315, Address: 0x1be800, Func Offset: 0x220
	// Line 321, Address: 0x1be804, Func Offset: 0x224
	// Line 315, Address: 0x1be808, Func Offset: 0x228
	// Line 322, Address: 0x1be80c, Func Offset: 0x22c
	// Line 315, Address: 0x1be810, Func Offset: 0x230
	// Line 321, Address: 0x1be818, Func Offset: 0x238
	// Line 322, Address: 0x1be82c, Func Offset: 0x24c
	// Line 324, Address: 0x1be838, Func Offset: 0x258
	// Line 330, Address: 0x1be844, Func Offset: 0x264
	// Line 331, Address: 0x1be850, Func Offset: 0x270
	// Line 333, Address: 0x1be858, Func Offset: 0x278
	// Line 334, Address: 0x1be864, Func Offset: 0x284
	// Line 335, Address: 0x1be868, Func Offset: 0x288
	// Line 336, Address: 0x1be8b4, Func Offset: 0x2d4
	// Line 338, Address: 0x1be8b8, Func Offset: 0x2d8
	// Line 340, Address: 0x1be8c0, Func Offset: 0x2e0
	// Line 341, Address: 0x1be8c8, Func Offset: 0x2e8
	// Func End, Address: 0x1be8e0, Func Offset: 0x300
}

// viBufEndPut__FP5ViBufi
// Start address: 0x1be8e0
void viBufEndPut(ViBuf* f, int32 size)
{
	// Line 236, Address: 0x1be8e0, Func Offset: 0
	// Line 237, Address: 0x1be8f4, Func Offset: 0x14
	// Line 239, Address: 0x1be900, Func Offset: 0x20
	// Line 240, Address: 0x1be904, Func Offset: 0x24
	// Line 239, Address: 0x1be90c, Func Offset: 0x2c
	// Line 240, Address: 0x1be914, Func Offset: 0x34
	// Line 242, Address: 0x1be920, Func Offset: 0x40
	// Line 243, Address: 0x1be928, Func Offset: 0x48
	// Func End, Address: 0x1be93c, Func Offset: 0x5c
}

// viBufBeginPut__FP5ViBufPPUcPiPPUcPi
// Start address: 0x1be940
void viBufBeginPut(ViBuf* f, uint8** ptr0, int32* len0, uint8** ptr1, int32* len1)
{
	int32 es;
	int32 en;
	// Line 202, Address: 0x1be940, Func Offset: 0
	// Line 208, Address: 0x1be96c, Func Offset: 0x2c
	// Line 213, Address: 0x1be97c, Func Offset: 0x3c
	// Line 208, Address: 0x1be980, Func Offset: 0x40
	// Line 214, Address: 0x1be988, Func Offset: 0x48
	// Line 213, Address: 0x1be98c, Func Offset: 0x4c
	// Line 214, Address: 0x1be99c, Func Offset: 0x5c
	// Line 213, Address: 0x1be9a8, Func Offset: 0x68
	// Line 214, Address: 0x1be9ac, Func Offset: 0x6c
	// Line 216, Address: 0x1be9b0, Func Offset: 0x70
	// Line 217, Address: 0x1be9c0, Func Offset: 0x80
	// Line 218, Address: 0x1be9cc, Func Offset: 0x8c
	// Line 219, Address: 0x1be9d0, Func Offset: 0x90
	// Line 221, Address: 0x1be9d4, Func Offset: 0x94
	// Line 222, Address: 0x1be9e0, Func Offset: 0xa0
	// Line 223, Address: 0x1be9ec, Func Offset: 0xac
	// Line 224, Address: 0x1be9f8, Func Offset: 0xb8
	// Line 225, Address: 0x1bea00, Func Offset: 0xc0
	// Line 228, Address: 0x1bea10, Func Offset: 0xd0
	// Line 229, Address: 0x1bea18, Func Offset: 0xd8
	// Func End, Address: 0x1bea38, Func Offset: 0xf8
}

// viBufReset__FP5ViBuf
// Start address: 0x1bea40
int32 viBufReset(ViBuf* f)
{
	int32 i;
	// Line 152, Address: 0x1bea40, Func Offset: 0
	// Line 158, Address: 0x1bea44, Func Offset: 0x4
	// Line 152, Address: 0x1bea48, Func Offset: 0x8
	// Line 155, Address: 0x1bea4c, Func Offset: 0xc
	// Line 156, Address: 0x1bea50, Func Offset: 0x10
	// Line 157, Address: 0x1bea54, Func Offset: 0x14
	// Line 158, Address: 0x1bea58, Func Offset: 0x18
	// Line 160, Address: 0x1bea5c, Func Offset: 0x1c
	// Line 161, Address: 0x1bea60, Func Offset: 0x20
	// Line 162, Address: 0x1bea64, Func Offset: 0x24
	// Line 163, Address: 0x1bea78, Func Offset: 0x38
	// Line 162, Address: 0x1bea7c, Func Offset: 0x3c
	// Line 163, Address: 0x1bea80, Func Offset: 0x40
	// Line 167, Address: 0x1bea84, Func Offset: 0x44
	// Line 163, Address: 0x1bea88, Func Offset: 0x48
	// Line 164, Address: 0x1bea90, Func Offset: 0x50
	// Line 165, Address: 0x1bea9c, Func Offset: 0x5c
	// Line 166, Address: 0x1beaa8, Func Offset: 0x68
	// Line 167, Address: 0x1beab4, Func Offset: 0x74
	// Line 173, Address: 0x1beac8, Func Offset: 0x88
	// Line 174, Address: 0x1beae0, Func Offset: 0xa0
	// Line 180, Address: 0x1beaf0, Func Offset: 0xb0
	// Line 174, Address: 0x1beaf4, Func Offset: 0xb4
	// Line 180, Address: 0x1beb14, Func Offset: 0xd4
	// Line 181, Address: 0x1beb2c, Func Offset: 0xec
	// Line 188, Address: 0x1beb34, Func Offset: 0xf4
	// Line 181, Address: 0x1beb38, Func Offset: 0xf8
	// Line 188, Address: 0x1beb50, Func Offset: 0x110
	// Line 189, Address: 0x1beb54, Func Offset: 0x114
	// Line 190, Address: 0x1beb68, Func Offset: 0x128
	// Line 191, Address: 0x1beb78, Func Offset: 0x138
	// Line 194, Address: 0x1bebc4, Func Offset: 0x184
	// Line 193, Address: 0x1bebc8, Func Offset: 0x188
	// Line 194, Address: 0x1bebcc, Func Offset: 0x18c
	// Func End, Address: 0x1bebd4, Func Offset: 0x194
}

// viBufCreate__FP5ViBufP1P1iP9TimeStampi
// Start address: 0x1bebe0
int32 viBufCreate(ViBuf* f, <unknown fundamental type (0xa510)>* data, <unknown fundamental type (0xa510)>* tag, int32 size, TimeStamp* ts, int32 n_ts)
{
	SemaParam param;
	// Line 117, Address: 0x1bebe0, Func Offset: 0
	// Line 121, Address: 0x1bebe4, Func Offset: 0x4
	// Line 117, Address: 0x1bebe8, Func Offset: 0x8
	// Line 123, Address: 0x1bebec, Func Offset: 0xc
	// Line 117, Address: 0x1bebf0, Func Offset: 0x10
	// Line 120, Address: 0x1bebf4, Func Offset: 0x14
	// Line 121, Address: 0x1bebfc, Func Offset: 0x1c
	// Line 132, Address: 0x1bec0c, Func Offset: 0x2c
	// Line 122, Address: 0x1bec10, Func Offset: 0x30
	// Line 123, Address: 0x1bec14, Func Offset: 0x34
	// Line 125, Address: 0x1bec18, Func Offset: 0x38
	// Line 126, Address: 0x1bec1c, Func Offset: 0x3c
	// Line 132, Address: 0x1bec20, Func Offset: 0x40
	// Line 134, Address: 0x1bec24, Func Offset: 0x44
	// Line 140, Address: 0x1bec34, Func Offset: 0x54
	// Line 142, Address: 0x1bec3c, Func Offset: 0x5c
	// Line 144, Address: 0x1bec40, Func Offset: 0x60
	// Line 145, Address: 0x1bec44, Func Offset: 0x64
	// Func End, Address: 0x1bec54, Func Offset: 0x74
}

