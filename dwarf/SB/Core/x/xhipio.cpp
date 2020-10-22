typedef struct st_HIPLOADDATA;
typedef struct st_HIPSAVEDATA;
typedef struct st_FILESAVEINFO;
typedef struct st_FILELOADINFO;
typedef struct st_HIPLOADFUNCS;
typedef struct st_HIPLOADBLOCK;
typedef enum en_FIOERRCODES;
typedef struct st_HIPSAVEFUNCS;
typedef enum en_BIO_ASYNC_ERRCODES;
typedef enum en_READ_ASYNC_STATUS;
typedef struct st_HIPSAVEBLOCK;

typedef void(*type_0)(st_HIPSAVEDATA*);
typedef int32(*type_1)(st_FILESAVEINFO*, float32*, int32);
typedef int32(*type_2)(st_FILELOADINFO*, float64*, int32);
typedef void(*type_3)(st_HIPSAVEDATA*, int8*, int32);
typedef int32(*type_4)(st_FILELOADINFO*, int16*, int32);
typedef int32(*type_5)(st_FILESAVEINFO*, float64*, int32);
typedef void(*type_6)(st_HIPSAVEDATA*, int16*, int32);
typedef int32(*type_7)(st_FILELOADINFO*, int32*, int32);
typedef int32(*type_8)(st_FILESAVEINFO*, int16*, int32);
typedef void(*type_9)(st_HIPSAVEDATA*, int32*, int32);
typedef int32(*type_10)(st_FILELOADINFO*, float32*, int32);
typedef int32(*type_12)(st_FILESAVEINFO*, int32*, int32);
typedef void(*type_13)(st_HIPSAVEDATA*, float32*, int32);
typedef int32(*type_14)(st_FILELOADINFO*, float64*, int32);
typedef st_HIPLOADDATA*(*type_15)(int8*, int8*, int32);
typedef int32(*type_16)(st_FILESAVEINFO*, float32*, int32);
typedef void(*type_17)(st_HIPSAVEDATA*, int8*);
typedef int32(*type_18)(st_FILELOADINFO*, int32);
typedef void(*type_19)(st_HIPLOADDATA*);
typedef int32(*type_20)(st_FILESAVEINFO*, float64*, int32);
typedef int32(*type_21)(st_HIPSAVEDATA*);
typedef int32(*type_22)(st_FILELOADINFO*, int32);
typedef uint32(*type_23)(st_HIPLOADDATA*);
typedef int32(*type_24)(st_FILESAVEINFO*, int32);
typedef int32(*type_25)(st_HIPSAVEDATA*, int32, uint32);
typedef uint32(*type_26)(st_HIPLOADDATA*);
typedef void(*type_27)(st_FILELOADINFO*, int8*, int32);
typedef void(*type_28)(st_HIPLOADDATA*);
typedef int32(*type_29)(st_HIPLOADDATA*, int8*, int32);
typedef void(*type_30)(st_FILELOADINFO*);
typedef int32(*type_31)(st_FILELOADINFO*, int32, int8*, int32, int32);
typedef int32(*type_32)(st_HIPLOADDATA*, int16*, int32);
typedef int32(*type_33)(st_HIPLOADDATA*, int32*, int32);
typedef int32(*type_34)(st_FILELOADINFO*, int32, int8*, int32, int32);
typedef int32(*type_35)(st_HIPLOADDATA*, float32*, int32);
typedef en_BIO_ASYNC_ERRCODES(*type_36)(st_FILELOADINFO*);
typedef int32(*type_37)(st_HIPLOADDATA*, int8*);
typedef int32(*type_38)(st_HIPLOADDATA*, int32, int32);
typedef void(*type_40)(st_HIPLOADDATA*, int32);
typedef void(*type_41)(st_FILELOADINFO*);
typedef en_READ_ASYNC_STATUS(*type_42)(st_HIPLOADDATA*);
typedef int32(*type_43)(st_FILELOADINFO*, int8*, int32);
typedef void(*type_44)(st_FILESAVEINFO*);
typedef int32(*type_45)(st_FILELOADINFO*, int16*, int32);
typedef int32(*type_46)(st_FILESAVEINFO*, int8*, int32);
typedef int32(*type_47)(st_FILELOADINFO*, int32*, int32);
typedef st_HIPSAVEDATA*(*type_49)(int8*);
typedef int32(*type_50)(st_FILESAVEINFO*, int16*, int32);
typedef void(*type_51)(st_HIPSAVEDATA*);
typedef int32(*type_52)(st_FILELOADINFO*, float32*, int32);
typedef void(*type_53)(st_HIPSAVEDATA*, uint32);
typedef int32(*type_54)(st_FILESAVEINFO*, int32*, int32);

typedef st_HIPSAVEBLOCK type_11[8];
typedef st_HIPLOADDATA type_39[8];
typedef st_HIPLOADBLOCK type_48[8];

struct st_HIPLOADDATA
{
	st_FILELOADINFO* fli;
	int32 lockid;
	int32 bypass;
	int32 bypass_recover;
	uint32 base_sector;
	int32 use_async;
	en_READ_ASYNC_STATUS asyn_stat;
	int32 pos;
	int32 top;
	int32 readTop;
	st_HIPLOADBLOCK stk[8];
};

struct st_HIPSAVEDATA
{
	st_FILESAVEINFO* fsi;
	int32 lockid;
	int32 pos;
	int32 top;
	int32 writeTop;
	st_HIPSAVEBLOCK stk[8];
};

struct st_FILESAVEINFO
{
	void(*destroy)(st_FILESAVEINFO*);
	int32(*writeBytes)(st_FILESAVEINFO*, int8*, int32);
	int32(*writeMShorts)(st_FILESAVEINFO*, int16*, int32);
	int32(*writeMLongs)(st_FILESAVEINFO*, int32*, int32);
	int32(*writeMFloats)(st_FILESAVEINFO*, float32*, int32);
	int32(*writeMDoubles)(st_FILESAVEINFO*, float64*, int32);
	int32(*writeIShorts)(st_FILESAVEINFO*, int16*, int32);
	int32(*writeILongs)(st_FILESAVEINFO*, int32*, int32);
	int32(*writeIFloats)(st_FILESAVEINFO*, float32*, int32);
	int32(*writeIDoubles)(st_FILESAVEINFO*, float64*, int32);
	int32(*seekSpot)(st_FILESAVEINFO*, int32);
	int32 length;
	int32 position;
	en_FIOERRCODES error;
	uint32 lockid;
	void* privdata;
	void* xtradata;
};

struct st_FILELOADINFO
{
	void(*destroy)(st_FILELOADINFO*);
	int32(*readBytes)(st_FILELOADINFO*, int8*, int32);
	int32(*readMShorts)(st_FILELOADINFO*, int16*, int32);
	int32(*readMLongs)(st_FILELOADINFO*, int32*, int32);
	int32(*readMFloats)(st_FILELOADINFO*, float32*, int32);
	int32(*readMDoubles)(st_FILELOADINFO*, float64*, int32);
	int32(*readIShorts)(st_FILELOADINFO*, int16*, int32);
	int32(*readILongs)(st_FILELOADINFO*, int32*, int32);
	int32(*readIFloats)(st_FILELOADINFO*, float32*, int32);
	int32(*readIDoubles)(st_FILELOADINFO*, float64*, int32);
	int32(*skipBytes)(st_FILELOADINFO*, int32);
	int32(*seekSpot)(st_FILELOADINFO*, int32);
	void(*setDoubleBuf)(st_FILELOADINFO*, int8*, int32);
	void(*discardDblBuf)(st_FILELOADINFO*);
	int32(*asyncIRead)(st_FILELOADINFO*, int32, int8*, int32, int32);
	int32(*asyncMRead)(st_FILELOADINFO*, int32, int8*, int32, int32);
	en_BIO_ASYNC_ERRCODES(*asyncReadStatus)(st_FILELOADINFO*);
	uint32 lockid;
	en_FIOERRCODES error;
	uint32 basesector;
	void* privdata;
	void* xtradata;
	void* asyndata;
	int32 filesize;
	int32 remain;
	int32 position;
};

struct st_HIPLOADFUNCS
{
	st_HIPLOADDATA*(*create)(int8*, int8*, int32);
	void(*destroy)(st_HIPLOADDATA*);
	uint32(*basesector)(st_HIPLOADDATA*);
	uint32(*enter)(st_HIPLOADDATA*);
	void(*exit)(st_HIPLOADDATA*);
	int32(*readBytes)(st_HIPLOADDATA*, int8*, int32);
	int32(*readShorts)(st_HIPLOADDATA*, int16*, int32);
	int32(*readLongs)(st_HIPLOADDATA*, int32*, int32);
	int32(*readFloats)(st_HIPLOADDATA*, float32*, int32);
	int32(*readString)(st_HIPLOADDATA*, int8*);
	int32(*setBypass)(st_HIPLOADDATA*, int32, int32);
	void(*setSpot)(st_HIPLOADDATA*, int32);
	en_READ_ASYNC_STATUS(*pollRead)(st_HIPLOADDATA*);
};

struct st_HIPLOADBLOCK
{
	int32 endpos;
	uint32 blk_id;
	int32 blk_remain;
	int32 flags;
};

enum en_FIOERRCODES
{
	FIOERR_NONE,
	FIOERR_READFAIL,
	FIOERR_WRITEFAIL,
	FIOERR_SEEKFAIL,
	FIOERR_USERABORT
};

struct st_HIPSAVEFUNCS
{
	st_HIPSAVEDATA*(*create)(int8*);
	void(*destroy)(st_HIPSAVEDATA*);
	void(*open)(st_HIPSAVEDATA*, uint32);
	void(*close)(st_HIPSAVEDATA*);
	void(*writeBytes)(st_HIPSAVEDATA*, int8*, int32);
	void(*writeShorts)(st_HIPSAVEDATA*, int16*, int32);
	void(*writeLongs)(st_HIPSAVEDATA*, int32*, int32);
	void(*writeFloats)(st_HIPSAVEDATA*, float32*, int32);
	void(*writeString)(st_HIPSAVEDATA*, int8*);
	int32(*curSpot)(st_HIPSAVEDATA*);
	int32(*spotLong)(st_HIPSAVEDATA*, int32, uint32);
};

enum en_BIO_ASYNC_ERRCODES
{
	BINIO_ASYNC_FAIL = 0xffffffff,
	BINIO_ASYNC_NOOP,
	BINIO_ASYNC_INPROG,
	BINIO_ASYNC_DONE,
	BINIO_ASYNC_FORCEENUMSIZEINT = 0x7fffffff
};

enum en_READ_ASYNC_STATUS
{
	HIP_RDSTAT_NONE = 0xffffffff,
	HIP_RDSTAT_INPROG,
	HIP_RDSTAT_SUCCESS,
	HIP_RDSTAT_FAILED,
	HIP_RDSTAT_NOBYPASS,
	HIP_RDSTAT_NOASYNC
};

struct st_HIPSAVEBLOCK
{
	int32 pos;
	int32 len;
	int32 flags;
};

uint32 g_loadlock;
st_HIPLOADDATA g_hiploadinst[8];
st_HIPLOADFUNCS g_map_HIPL_funcmap;
st_HIPSAVEFUNCS g_map_HIPS_funcmap;

int32 HIPLReadString(st_HIPLOADDATA* lddata, int8* buf);
int32 HIPLReadFloats(st_HIPLOADDATA* lddata, float32* data, int32 cnt);
int32 HIPLReadLongs(st_HIPLOADDATA* lddata, int32* data, int32 cnt);
int32 HIPLReadShorts(st_HIPLOADDATA* lddata, int16* data, int32 cnt);
int32 HIPLReadBytes(st_HIPLOADDATA* lddata, int8* data, int32 cnt);
en_READ_ASYNC_STATUS HIPLPollRead(st_HIPLOADDATA* lddata);
int32 HIPLBypassRead(st_HIPLOADDATA* lddata, void* data, int32 cnt, int32 size);
int32 HIPLBlockRead(st_HIPLOADDATA* lddata, void* data, int32 cnt, int32 size);
void HIPLBlockExit(st_HIPLOADDATA* lddata);
uint32 HIPLBlockEnter(st_HIPLOADDATA* lddata);
void HIPLSetSpot(st_HIPLOADDATA* lddata, int32 spot);
int32 HIPLSetBypass(st_HIPLOADDATA* lddata, int32 enable, int32 use_async);
uint32 HIPLBaseSector(st_HIPLOADDATA* lddata);
void HIPLDestroy(st_HIPLOADDATA* lddata);
st_HIPLOADDATA* HIPLCreate(int8* filename, int8* dblbuf, int32 bufsize);
st_HIPLOADFUNCS* get_HIPLFuncs();

// HIPLReadString__FP14st_HIPLOADDATAPc
// Start address: 0x1ebde0
int32 HIPLReadString(st_HIPLOADDATA* lddata, int8* buf)
{
	int32 n;
	int8 pad;
	// Line 759, Address: 0x1ebde0, Func Offset: 0
	// Line 762, Address: 0x1ebe00, Func Offset: 0x20
	// Line 767, Address: 0x1ebe04, Func Offset: 0x24
	// Line 769, Address: 0x1ebe10, Func Offset: 0x30
	// Line 770, Address: 0x1ebe28, Func Offset: 0x48
	// Line 773, Address: 0x1ebe38, Func Offset: 0x58
	// Line 774, Address: 0x1ebe50, Func Offset: 0x70
	// Line 776, Address: 0x1ebe58, Func Offset: 0x78
	// Line 777, Address: 0x1ebe5c, Func Offset: 0x7c
	// Line 778, Address: 0x1ebe78, Func Offset: 0x98
	// Line 782, Address: 0x1ebe80, Func Offset: 0xa0
	// Line 785, Address: 0x1ebe8c, Func Offset: 0xac
	// Line 786, Address: 0x1ebea4, Func Offset: 0xc4
	// Line 787, Address: 0x1ebeac, Func Offset: 0xcc
	// Line 788, Address: 0x1ebeb0, Func Offset: 0xd0
	// Line 789, Address: 0x1ebeb4, Func Offset: 0xd4
	// Line 788, Address: 0x1ebeb8, Func Offset: 0xd8
	// Line 789, Address: 0x1ebebc, Func Offset: 0xdc
	// Line 792, Address: 0x1ebed8, Func Offset: 0xf8
	// Line 793, Address: 0x1ebedc, Func Offset: 0xfc
	// Func End, Address: 0x1ebef8, Func Offset: 0x118
}

// HIPLReadFloats__FP14st_HIPLOADDATAPfi
// Start address: 0x1ebf00
int32 HIPLReadFloats(st_HIPLOADDATA* lddata, float32* data, int32 cnt)
{
	int32 got;
	// Line 744, Address: 0x1ebf00, Func Offset: 0
	// Line 749, Address: 0x1ebf08, Func Offset: 0x8
	// Line 750, Address: 0x1ebf2c, Func Offset: 0x2c
	// Line 751, Address: 0x1ebf40, Func Offset: 0x40
	// Line 750, Address: 0x1ebf44, Func Offset: 0x44
	// Line 751, Address: 0x1ebf48, Func Offset: 0x48
	// Func End, Address: 0x1ebf50, Func Offset: 0x50
}

// HIPLReadLongs__FP14st_HIPLOADDATAPii
// Start address: 0x1ebf50
int32 HIPLReadLongs(st_HIPLOADDATA* lddata, int32* data, int32 cnt)
{
	int32 got;
	// Line 735, Address: 0x1ebf50, Func Offset: 0
	// Line 740, Address: 0x1ebf58, Func Offset: 0x8
	// Line 741, Address: 0x1ebf7c, Func Offset: 0x2c
	// Line 742, Address: 0x1ebf90, Func Offset: 0x40
	// Line 741, Address: 0x1ebf94, Func Offset: 0x44
	// Line 742, Address: 0x1ebf98, Func Offset: 0x48
	// Func End, Address: 0x1ebfa0, Func Offset: 0x50
}

// HIPLReadShorts__FP14st_HIPLOADDATAPsi
// Start address: 0x1ebfa0
int32 HIPLReadShorts(st_HIPLOADDATA* lddata, int16* data, int32 cnt)
{
	int32 got;
	// Line 726, Address: 0x1ebfa0, Func Offset: 0
	// Line 731, Address: 0x1ebfa8, Func Offset: 0x8
	// Line 732, Address: 0x1ebfcc, Func Offset: 0x2c
	// Line 733, Address: 0x1ebfe0, Func Offset: 0x40
	// Line 732, Address: 0x1ebfe4, Func Offset: 0x44
	// Line 733, Address: 0x1ebfe8, Func Offset: 0x48
	// Func End, Address: 0x1ebff0, Func Offset: 0x50
}

// HIPLReadBytes__FP14st_HIPLOADDATAPci
// Start address: 0x1ebff0
int32 HIPLReadBytes(st_HIPLOADDATA* lddata, int8* data, int32 cnt)
{
	// Line 719, Address: 0x1ebff0, Func Offset: 0
	// Line 722, Address: 0x1ebff8, Func Offset: 0x8
	// Line 724, Address: 0x1ec01c, Func Offset: 0x2c
	// Func End, Address: 0x1ec028, Func Offset: 0x38
}

// HIPLPollRead__FP14st_HIPLOADDATA
// Start address: 0x1ec030
en_READ_ASYNC_STATUS HIPLPollRead(st_HIPLOADDATA* lddata)
{
	en_READ_ASYNC_STATUS rdstat;
	en_BIO_ASYNC_ERRCODES pollstat;
	// Line 657, Address: 0x1ec030, Func Offset: 0
	// Line 658, Address: 0x1ec040, Func Offset: 0x10
	// Line 664, Address: 0x1ec044, Func Offset: 0x14
	// Line 666, Address: 0x1ec050, Func Offset: 0x20
	// Line 669, Address: 0x1ec058, Func Offset: 0x28
	// Line 671, Address: 0x1ec064, Func Offset: 0x34
	// Line 672, Address: 0x1ec06c, Func Offset: 0x3c
	// Line 671, Address: 0x1ec070, Func Offset: 0x40
	// Line 677, Address: 0x1ec074, Func Offset: 0x44
	// Line 681, Address: 0x1ec080, Func Offset: 0x50
	// Line 684, Address: 0x1ec0a8, Func Offset: 0x78
	// Line 687, Address: 0x1ec0b0, Func Offset: 0x80
	// Line 688, Address: 0x1ec0b4, Func Offset: 0x84
	// Line 689, Address: 0x1ec0bc, Func Offset: 0x8c
	// Line 691, Address: 0x1ec0c0, Func Offset: 0x90
	// Line 692, Address: 0x1ec0c4, Func Offset: 0x94
	// Line 693, Address: 0x1ec0cc, Func Offset: 0x9c
	// Line 697, Address: 0x1ec0d0, Func Offset: 0xa0
	// Line 699, Address: 0x1ec0d4, Func Offset: 0xa4
	// Line 701, Address: 0x1ec0d8, Func Offset: 0xa8
	// Line 702, Address: 0x1ec0e0, Func Offset: 0xb0
	// Func End, Address: 0x1ec0f4, Func Offset: 0xc4
}

// HIPLBypassRead__FP14st_HIPLOADDATAPvii
// Start address: 0x1ec100
int32 HIPLBypassRead(st_HIPLOADDATA* lddata, void* data, int32 cnt, int32 size)
{
	int32 got;
	// Line 590, Address: 0x1ec100, Func Offset: 0
	// Line 592, Address: 0x1ec104, Func Offset: 0x4
	// Line 590, Address: 0x1ec108, Func Offset: 0x8
	// Line 601, Address: 0x1ec118, Func Offset: 0x18
	// Line 603, Address: 0x1ec130, Func Offset: 0x30
	// Line 605, Address: 0x1ec13c, Func Offset: 0x3c
	// Line 606, Address: 0x1ec15c, Func Offset: 0x5c
	// Line 607, Address: 0x1ec164, Func Offset: 0x64
	// Line 609, Address: 0x1ec168, Func Offset: 0x68
	// Line 615, Address: 0x1ec178, Func Offset: 0x78
	// Line 616, Address: 0x1ec188, Func Offset: 0x88
	// Line 617, Address: 0x1ec198, Func Offset: 0x98
	// Line 618, Address: 0x1ec1a4, Func Offset: 0xa4
	// Line 619, Address: 0x1ec1b0, Func Offset: 0xb0
	// Line 620, Address: 0x1ec1c0, Func Offset: 0xc0
	// Line 621, Address: 0x1ec1cc, Func Offset: 0xcc
	// Line 622, Address: 0x1ec1d8, Func Offset: 0xd8
	// Line 623, Address: 0x1ec1e8, Func Offset: 0xe8
	// Line 624, Address: 0x1ec1f4, Func Offset: 0xf4
	// Line 628, Address: 0x1ec1f8, Func Offset: 0xf8
	// Line 629, Address: 0x1ec200, Func Offset: 0x100
	// Func End, Address: 0x1ec214, Func Offset: 0x114
}

// HIPLBlockRead__FP14st_HIPLOADDATAPvii
// Start address: 0x1ec220
int32 HIPLBlockRead(st_HIPLOADDATA* lddata, void* data, int32 cnt, int32 size)
{
	st_HIPLOADBLOCK* top;
	int32 got;
	int32 left;
	int32 head;
	// Line 516, Address: 0x1ec220, Func Offset: 0
	// Line 519, Address: 0x1ec224, Func Offset: 0x4
	// Line 516, Address: 0x1ec228, Func Offset: 0x8
	// Line 528, Address: 0x1ec240, Func Offset: 0x20
	// Line 520, Address: 0x1ec244, Func Offset: 0x24
	// Line 528, Address: 0x1ec248, Func Offset: 0x28
	// Line 530, Address: 0x1ec258, Func Offset: 0x38
	// Line 532, Address: 0x1ec26c, Func Offset: 0x4c
	// Line 534, Address: 0x1ec280, Func Offset: 0x60
	// Line 535, Address: 0x1ec28c, Func Offset: 0x6c
	// Line 538, Address: 0x1ec2a0, Func Offset: 0x80
	// Line 539, Address: 0x1ec2a8, Func Offset: 0x88
	// Line 541, Address: 0x1ec2ac, Func Offset: 0x8c
	// Line 547, Address: 0x1ec2c4, Func Offset: 0xa4
	// Line 549, Address: 0x1ec2c8, Func Offset: 0xa8
	// Line 553, Address: 0x1ec2e0, Func Offset: 0xc0
	// Line 554, Address: 0x1ec2f0, Func Offset: 0xd0
	// Line 555, Address: 0x1ec300, Func Offset: 0xe0
	// Line 556, Address: 0x1ec30c, Func Offset: 0xec
	// Line 557, Address: 0x1ec318, Func Offset: 0xf8
	// Line 558, Address: 0x1ec328, Func Offset: 0x108
	// Line 559, Address: 0x1ec334, Func Offset: 0x114
	// Line 560, Address: 0x1ec340, Func Offset: 0x120
	// Line 561, Address: 0x1ec350, Func Offset: 0x130
	// Line 562, Address: 0x1ec35c, Func Offset: 0x13c
	// Line 566, Address: 0x1ec360, Func Offset: 0x140
	// Line 567, Address: 0x1ec36c, Func Offset: 0x14c
	// Line 570, Address: 0x1ec380, Func Offset: 0x160
	// Func End, Address: 0x1ec398, Func Offset: 0x178
}

// HIPLBlockExit__FP14st_HIPLOADDATA
// Start address: 0x1ec3a0
void HIPLBlockExit(st_HIPLOADDATA* lddata)
{
	st_HIPLOADBLOCK* top;
	// Line 479, Address: 0x1ec3a0, Func Offset: 0
	// Line 486, Address: 0x1ec3b0, Func Offset: 0x10
	// Line 493, Address: 0x1ec3bc, Func Offset: 0x1c
	// Line 496, Address: 0x1ec3d4, Func Offset: 0x34
	// Line 493, Address: 0x1ec3d8, Func Offset: 0x38
	// Line 496, Address: 0x1ec3dc, Func Offset: 0x3c
	// Line 499, Address: 0x1ec3ec, Func Offset: 0x4c
	// Line 501, Address: 0x1ec3f4, Func Offset: 0x54
	// Line 502, Address: 0x1ec3f8, Func Offset: 0x58
	// Func End, Address: 0x1ec40c, Func Offset: 0x6c
}

// HIPLBlockEnter__FP14st_HIPLOADDATA
// Start address: 0x1ec410
uint32 HIPLBlockEnter(st_HIPLOADDATA* lddata)
{
	st_HIPLOADBLOCK* top;
	uint32 cid;
	int32 size;
	// Line 416, Address: 0x1ec410, Func Offset: 0
	// Line 419, Address: 0x1ec41c, Func Offset: 0xc
	// Line 420, Address: 0x1ec420, Func Offset: 0x10
	// Line 426, Address: 0x1ec428, Func Offset: 0x18
	// Line 428, Address: 0x1ec430, Func Offset: 0x20
	// Line 435, Address: 0x1ec43c, Func Offset: 0x2c
	// Line 437, Address: 0x1ec444, Func Offset: 0x34
	// Line 438, Address: 0x1ec458, Func Offset: 0x48
	// Line 442, Address: 0x1ec460, Func Offset: 0x50
	// Line 443, Address: 0x1ec494, Func Offset: 0x84
	// Line 447, Address: 0x1ec4b8, Func Offset: 0xa8
	// Line 456, Address: 0x1ec4fc, Func Offset: 0xec
	// Line 457, Address: 0x1ec504, Func Offset: 0xf4
	// Line 461, Address: 0x1ec518, Func Offset: 0x108
	// Line 464, Address: 0x1ec52c, Func Offset: 0x11c
	// Line 465, Address: 0x1ec534, Func Offset: 0x124
	// Line 469, Address: 0x1ec53c, Func Offset: 0x12c
	// Line 465, Address: 0x1ec540, Func Offset: 0x130
	// Line 469, Address: 0x1ec544, Func Offset: 0x134
	// Line 470, Address: 0x1ec554, Func Offset: 0x144
	// Line 473, Address: 0x1ec558, Func Offset: 0x148
	// Line 474, Address: 0x1ec560, Func Offset: 0x150
	// Func End, Address: 0x1ec570, Func Offset: 0x160
}

// HIPLSetSpot__FP14st_HIPLOADDATAi
// Start address: 0x1ec570
void HIPLSetSpot(st_HIPLOADDATA* lddata, int32 spot)
{
	// Line 371, Address: 0x1ec570, Func Offset: 0
	// Line 376, Address: 0x1ec578, Func Offset: 0x8
	// Line 394, Address: 0x1ec584, Func Offset: 0x14
	// Line 396, Address: 0x1ec58c, Func Offset: 0x1c
	// Line 400, Address: 0x1ec598, Func Offset: 0x28
	// Func End, Address: 0x1ec5a4, Func Offset: 0x34
}

// HIPLSetBypass__FP14st_HIPLOADDATAii
// Start address: 0x1ec5b0
int32 HIPLSetBypass(st_HIPLOADDATA* lddata, int32 enable, int32 use_async)
{
	// Line 331, Address: 0x1ec5b0, Func Offset: 0
	// Line 336, Address: 0x1ec5d0, Func Offset: 0x20
	// Line 339, Address: 0x1ec5dc, Func Offset: 0x2c
	// Line 341, Address: 0x1ec5f0, Func Offset: 0x40
	// Line 343, Address: 0x1ec5f8, Func Offset: 0x48
	// Line 345, Address: 0x1ec60c, Func Offset: 0x5c
	// Line 346, Address: 0x1ec614, Func Offset: 0x64
	// Line 349, Address: 0x1ec618, Func Offset: 0x68
	// Line 351, Address: 0x1ec620, Func Offset: 0x70
	// Line 352, Address: 0x1ec624, Func Offset: 0x74
	// Line 353, Address: 0x1ec628, Func Offset: 0x78
	// Line 354, Address: 0x1ec630, Func Offset: 0x80
	// Line 356, Address: 0x1ec63c, Func Offset: 0x8c
	// Line 357, Address: 0x1ec648, Func Offset: 0x98
	// Line 359, Address: 0x1ec64c, Func Offset: 0x9c
	// Line 358, Address: 0x1ec650, Func Offset: 0xa0
	// Line 359, Address: 0x1ec654, Func Offset: 0xa4
	// Line 362, Address: 0x1ec658, Func Offset: 0xa8
	// Line 363, Address: 0x1ec660, Func Offset: 0xb0
	// Func End, Address: 0x1ec678, Func Offset: 0xc8
}

// HIPLBaseSector__FP14st_HIPLOADDATA
// Start address: 0x1ec680
uint32 HIPLBaseSector(st_HIPLOADDATA* lddata)
{
	// Line 316, Address: 0x1ec680, Func Offset: 0
	// Func End, Address: 0x1ec688, Func Offset: 0x8
}

// HIPLDestroy__FP14st_HIPLOADDATA
// Start address: 0x1ec690
void HIPLDestroy(st_HIPLOADDATA* lddata)
{
	int32 lockid;
	// Line 294, Address: 0x1ec690, Func Offset: 0
	// Line 298, Address: 0x1ec6a0, Func Offset: 0x10
	// Line 301, Address: 0x1ec6ac, Func Offset: 0x1c
	// Line 304, Address: 0x1ec6c0, Func Offset: 0x30
	// Line 305, Address: 0x1ec6c4, Func Offset: 0x34
	// Line 306, Address: 0x1ec6d4, Func Offset: 0x44
	// Line 308, Address: 0x1ec6ec, Func Offset: 0x5c
	// Line 309, Address: 0x1ec6f0, Func Offset: 0x60
	// Func End, Address: 0x1ec704, Func Offset: 0x74
}

// HIPLCreate__FPCcPci
// Start address: 0x1ec710
st_HIPLOADDATA* HIPLCreate(int8* filename, int8* dblbuf, int32 bufsize)
{
	st_HIPLOADDATA* lddata;
	st_FILELOADINFO* fli;
	st_HIPLOADBLOCK* tmp_blk;
	int32 i;
	int32 uselock;
	// Line 220, Address: 0x1ec710, Func Offset: 0
	// Line 231, Address: 0x1ec714, Func Offset: 0x4
	// Line 220, Address: 0x1ec718, Func Offset: 0x8
	// Line 222, Address: 0x1ec73c, Func Offset: 0x2c
	// Line 231, Address: 0x1ec740, Func Offset: 0x30
	// Line 226, Address: 0x1ec744, Func Offset: 0x34
	// Line 231, Address: 0x1ec74c, Func Offset: 0x3c
	// Line 232, Address: 0x1ec754, Func Offset: 0x44
	// Line 233, Address: 0x1ec760, Func Offset: 0x50
	// Line 234, Address: 0x1ec764, Func Offset: 0x54
	// Line 235, Address: 0x1ec768, Func Offset: 0x58
	// Line 234, Address: 0x1ec76c, Func Offset: 0x5c
	// Line 233, Address: 0x1ec784, Func Offset: 0x74
	// Line 236, Address: 0x1ec788, Func Offset: 0x78
	// Line 238, Address: 0x1ec790, Func Offset: 0x80
	// Line 241, Address: 0x1ec7a0, Func Offset: 0x90
	// Line 242, Address: 0x1ec7a8, Func Offset: 0x98
	// Line 245, Address: 0x1ec7b4, Func Offset: 0xa4
	// Line 247, Address: 0x1ec7b8, Func Offset: 0xa8
	// Line 265, Address: 0x1ec7c0, Func Offset: 0xb0
	// Line 249, Address: 0x1ec7c4, Func Offset: 0xb4
	// Line 250, Address: 0x1ec7c8, Func Offset: 0xb8
	// Line 251, Address: 0x1ec7cc, Func Offset: 0xbc
	// Line 252, Address: 0x1ec7d0, Func Offset: 0xc0
	// Line 253, Address: 0x1ec7d4, Func Offset: 0xc4
	// Line 255, Address: 0x1ec7d8, Func Offset: 0xc8
	// Line 256, Address: 0x1ec7dc, Func Offset: 0xcc
	// Line 259, Address: 0x1ec7e0, Func Offset: 0xd0
	// Line 260, Address: 0x1ec7e4, Func Offset: 0xd4
	// Line 261, Address: 0x1ec7e8, Func Offset: 0xd8
	// Line 262, Address: 0x1ec7ec, Func Offset: 0xdc
	// Line 265, Address: 0x1ec85c, Func Offset: 0x14c
	// Line 266, Address: 0x1ec864, Func Offset: 0x154
	// Line 267, Address: 0x1ec86c, Func Offset: 0x15c
	// Line 268, Address: 0x1ec870, Func Offset: 0x160
	// Line 272, Address: 0x1ec874, Func Offset: 0x164
	// Line 273, Address: 0x1ec884, Func Offset: 0x174
	// Line 275, Address: 0x1ec894, Func Offset: 0x184
	// Line 278, Address: 0x1ec8a0, Func Offset: 0x190
	// Line 279, Address: 0x1ec8f0, Func Offset: 0x1e0
	// Line 282, Address: 0x1ec8f4, Func Offset: 0x1e4
	// Line 284, Address: 0x1ec8f8, Func Offset: 0x1e8
	// Line 285, Address: 0x1ec8fc, Func Offset: 0x1ec
	// Func End, Address: 0x1ec91c, Func Offset: 0x20c
}

// get_HIPLFuncs__Fv
// Start address: 0x1ec920
st_HIPLOADFUNCS* get_HIPLFuncs()
{
	// Line 195, Address: 0x1ec920, Func Offset: 0
	// Line 196, Address: 0x1ec924, Func Offset: 0x4
	// Func End, Address: 0x1ec92c, Func Offset: 0xc
}

