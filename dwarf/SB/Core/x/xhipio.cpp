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
	type_48 stk;
};

struct st_HIPSAVEDATA
{
	st_FILESAVEINFO* fsi;
	int32 lockid;
	int32 pos;
	int32 top;
	int32 writeTop;
	type_11 stk;
};

struct st_FILESAVEINFO
{
	type_44 destroy;
	type_46 writeBytes;
	type_50 writeMShorts;
	type_54 writeMLongs;
	type_1 writeMFloats;
	type_5 writeMDoubles;
	type_8 writeIShorts;
	type_12 writeILongs;
	type_16 writeIFloats;
	type_20 writeIDoubles;
	type_24 seekSpot;
	int32 length;
	int32 position;
	en_FIOERRCODES error;
	uint32 lockid;
	void* privdata;
	void* xtradata;
};

struct st_FILELOADINFO
{
	type_41 destroy;
	type_43 readBytes;
	type_45 readMShorts;
	type_47 readMLongs;
	type_52 readMFloats;
	type_2 readMDoubles;
	type_4 readIShorts;
	type_7 readILongs;
	type_10 readIFloats;
	type_14 readIDoubles;
	type_18 skipBytes;
	type_22 seekSpot;
	type_27 setDoubleBuf;
	type_30 discardDblBuf;
	type_31 asyncIRead;
	type_34 asyncMRead;
	type_36 asyncReadStatus;
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
	type_15 create;
	type_19 destroy;
	type_23 basesector;
	type_26 enter;
	type_28 exit;
	type_29 readBytes;
	type_32 readShorts;
	type_33 readLongs;
	type_35 readFloats;
	type_37 readString;
	type_38 setBypass;
	type_40 setSpot;
	type_42 pollRead;
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
	type_49 create;
	type_51 destroy;
	type_53 open;
	type_0 close;
	type_3 writeBytes;
	type_6 writeShorts;
	type_9 writeLongs;
	type_13 writeFloats;
	type_17 writeString;
	type_21 curSpot;
	type_25 spotLong;
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
type_39 g_hiploadinst;
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
}

// HIPLReadFloats__FP14st_HIPLOADDATAPfi
// Start address: 0x1ebf00
int32 HIPLReadFloats(st_HIPLOADDATA* lddata, float32* data, int32 cnt)
{
	int32 got;
}

// HIPLReadLongs__FP14st_HIPLOADDATAPii
// Start address: 0x1ebf50
int32 HIPLReadLongs(st_HIPLOADDATA* lddata, int32* data, int32 cnt)
{
	int32 got;
}

// HIPLReadShorts__FP14st_HIPLOADDATAPsi
// Start address: 0x1ebfa0
int32 HIPLReadShorts(st_HIPLOADDATA* lddata, int16* data, int32 cnt)
{
	int32 got;
}

// HIPLReadBytes__FP14st_HIPLOADDATAPci
// Start address: 0x1ebff0
int32 HIPLReadBytes(st_HIPLOADDATA* lddata, int8* data, int32 cnt)
{
}

// HIPLPollRead__FP14st_HIPLOADDATA
// Start address: 0x1ec030
en_READ_ASYNC_STATUS HIPLPollRead(st_HIPLOADDATA* lddata)
{
	en_READ_ASYNC_STATUS rdstat;
	en_BIO_ASYNC_ERRCODES pollstat;
}

// HIPLBypassRead__FP14st_HIPLOADDATAPvii
// Start address: 0x1ec100
int32 HIPLBypassRead(st_HIPLOADDATA* lddata, void* data, int32 cnt, int32 size)
{
	int32 got;
}

// HIPLBlockRead__FP14st_HIPLOADDATAPvii
// Start address: 0x1ec220
int32 HIPLBlockRead(st_HIPLOADDATA* lddata, void* data, int32 cnt, int32 size)
{
	st_HIPLOADBLOCK* top;
	int32 got;
	int32 left;
	int32 head;
}

// HIPLBlockExit__FP14st_HIPLOADDATA
// Start address: 0x1ec3a0
void HIPLBlockExit(st_HIPLOADDATA* lddata)
{
	st_HIPLOADBLOCK* top;
}

// HIPLBlockEnter__FP14st_HIPLOADDATA
// Start address: 0x1ec410
uint32 HIPLBlockEnter(st_HIPLOADDATA* lddata)
{
	st_HIPLOADBLOCK* top;
	uint32 cid;
	int32 size;
}

// HIPLSetSpot__FP14st_HIPLOADDATAi
// Start address: 0x1ec570
void HIPLSetSpot(st_HIPLOADDATA* lddata, int32 spot)
{
}

// HIPLSetBypass__FP14st_HIPLOADDATAii
// Start address: 0x1ec5b0
int32 HIPLSetBypass(st_HIPLOADDATA* lddata, int32 enable, int32 use_async)
{
}

// HIPLBaseSector__FP14st_HIPLOADDATA
// Start address: 0x1ec680
uint32 HIPLBaseSector(st_HIPLOADDATA* lddata)
{
}

// HIPLDestroy__FP14st_HIPLOADDATA
// Start address: 0x1ec690
void HIPLDestroy(st_HIPLOADDATA* lddata)
{
	int32 lockid;
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
}

// get_HIPLFuncs__Fv
// Start address: 0x1ec920
st_HIPLOADFUNCS* get_HIPLFuncs()
{
}

