typedef struct tag_xFile;
typedef struct st_FILELOADINFO;
typedef struct st_BINIO_XTRADATA;
typedef enum en_FIOERRCODES;
typedef enum en_BIO_ASYNC_ERRCODES;
typedef struct tag_iFile;
typedef enum XFILE_READSECTOR_STATUS;

typedef void(*type_0)(st_FILELOADINFO*);
typedef s32(*type_1)(st_FILELOADINFO*, s32, s8*, s32, s32);
typedef s32(*type_2)(st_FILELOADINFO*, f64*, s32);
typedef s32(*type_3)(st_FILELOADINFO*, s32, s8*, s32, s32);
typedef void(*type_4)(st_FILELOADINFO*);
typedef s32(*type_5)(st_FILELOADINFO*, s32, s8*, s32, s32);
typedef en_BIO_ASYNC_ERRCODES(*type_6)(st_FILELOADINFO*);
typedef s32(*type_7)(st_FILELOADINFO*, s32, s8*, s32, s32);
typedef s32(*type_8)(st_FILELOADINFO*, s32);
typedef en_BIO_ASYNC_ERRCODES(*type_10)(st_FILELOADINFO*);
typedef s32(*type_11)(st_FILELOADINFO*, s32);
typedef void(*type_13)(st_FILELOADINFO*);
typedef void(*type_14)(st_FILELOADINFO*, s8*, s32);
typedef s32(*type_15)(st_FILELOADINFO*, s8*, s32);
typedef void(*type_16)(st_FILELOADINFO*);
typedef s32(*type_17)(st_FILELOADINFO*, s16*, s32);
typedef s32(*type_19)(st_FILELOADINFO*, s32*, s32);
typedef s32(*type_20)(st_FILELOADINFO*, s8*, s32);
typedef s32(*type_21)(st_FILELOADINFO*, f32*, s32);
typedef s32(*type_22)(st_FILELOADINFO*, s16*, s32);
typedef s32(*type_23)(st_FILELOADINFO*, f64*, s32);
typedef s32(*type_25)(st_FILELOADINFO*, s16*, s32);
typedef s32(*type_26)(st_FILELOADINFO*, s32*, s32);
typedef s32(*type_27)(st_FILELOADINFO*, s32*, s32);
typedef s32(*type_28)(st_FILELOADINFO*, f32*, s32);
typedef s32(*type_29)(st_FILELOADINFO*, f32*, s32);
typedef s32(*type_31)(st_FILELOADINFO*, f64*, s32);
typedef s32(*type_32)(st_FILELOADINFO*, f64*, s32);
typedef s32(*type_33)(st_FILELOADINFO*, s16*, s32);
typedef s32(*type_34)(st_FILELOADINFO*, s32);
typedef s32(*type_36)(st_FILELOADINFO*, s32);
typedef s32(*type_37)(st_FILELOADINFO*, s32*, s32);
typedef void(*type_38)(tag_xFile*);
typedef void(*type_39)(st_FILELOADINFO*, s8*, s32);
typedef s32(*type_40)(st_FILELOADINFO*, f32*, s32);

typedef st_FILELOADINFO type_9[8];
typedef st_BINIO_XTRADATA type_12[8];
typedef s8 type_18[128];
typedef s8 type_24[32];
typedef u32 type_30[3];
typedef tag_xFile type_35[8];

struct tag_xFile
{
	type_24 relname;
	tag_iFile ps;
	void* user_data;
};

struct st_FILELOADINFO
{
	type_13 destroy;
	type_15 readBytes;
	type_17 readMShorts;
	type_19 readMLongs;
	type_21 readMFloats;
	type_23 readMDoubles;
	type_25 readIShorts;
	type_27 readILongs;
	type_29 readIFloats;
	type_32 readIDoubles;
	type_34 skipBytes;
	type_36 seekSpot;
	type_39 setDoubleBuf;
	type_0 discardDblBuf;
	type_1 asyncIRead;
	type_3 asyncMRead;
	type_6 asyncReadStatus;
	u32 lockid;
	en_FIOERRCODES error;
	u32 basesector;
	void* privdata;
	void* xtradata;
	void* asyndata;
	s32 filesize;
	s32 remain;
	s32 position;
};

struct st_BINIO_XTRADATA
{
	s8* dbl_buf;
	s32 dblbuf_size;
	s32 dbl_beg;
	s32 dbl_end;
	s32 dbl_amt;
	u32 fpos;
	s8* asyn_data;
	s32 asyn_amt;
	s32 asyn_elesize;
	s32 asyn_ismot;
	en_BIO_ASYNC_ERRCODES asyn_status;
	type_30 pad;
	s32 gcaskey;
};

enum en_FIOERRCODES
{
	FIOERR_NONE,
	FIOERR_READFAIL,
	FIOERR_WRITEFAIL,
	FIOERR_SEEKFAIL,
	FIOERR_USERABORT
};

enum en_BIO_ASYNC_ERRCODES
{
	BINIO_ASYNC_FAIL = 0xffffffff,
	BINIO_ASYNC_NOOP,
	BINIO_ASYNC_INPROG,
	BINIO_ASYNC_DONE,
	BINIO_ASYNC_FORCEENUMSIZEINT = 0x7fffffff
};

struct tag_iFile
{
	u32 flags;
	type_18 path;
	s32 fd;
	s32 offset;
	s32 length;
};

enum XFILE_READSECTOR_STATUS
{
	XFILE_RDSTAT_NOOP,
	XFILE_RDSTAT_INPROG,
	XFILE_RDSTAT_DONE,
	XFILE_RDSTAT_FAIL,
	XFILE_RDSTAT_QUEUED,
	XFILE_RDSTAT_EXPIRED
};

u32 g_loadlock;
type_9 g_loadinst;
type_35 g_xfload;
type_12 g_xtraload;
st_BINIO_XTRADATA* g_async_context;
type_38 BFD_cb_GCP2_readasync;
type_16 DiscardBuffer;
type_14 SetBuffer;
type_11 ReadSeek;
type_8 SkipBytes;
type_10 AsyncReadStatus;
type_5 AsyncMRead;
type_7 AsyncIRead;
type_2 ReadIDoubles;
type_40 ReadIFloats;
type_37 ReadILongs;
type_33 ReadIShorts;
type_31 ReadMDoubles;
type_28 ReadMFloats;
type_26 ReadMLongs;
type_22 ReadMShorts;
type_20 ReadBytes;
type_4 LoadDestroy;

en_BIO_ASYNC_ERRCODES BFD_AsyncReadStatus(st_FILELOADINFO* fli);
s32 BFD_AsyncRead(st_FILELOADINFO* fli, s32 pos, void* data, s32 size, s32 n);
void BFD_cb_GCP2_readasync();
s32 BFD_read(void* data, s32 elesize, s32 elecnt, tag_xFile* bffp, void* xtradata);
tag_xFile* BFD_open(s8* filename, s8* mode, u32 lockid, void* xtradata);
void Swap8(s8* d, s32 n);
en_BIO_ASYNC_ERRCODES AsyncReadStatus(st_FILELOADINFO* fli);
s32 AsyncIRead(st_FILELOADINFO* fli, s32 offset, s8* data, s32 size, s32 n);
s32 AsyncMRead(st_FILELOADINFO* fli, s32 offset, s8* data, s32 size, s32 n);
s32 ReadIDoubles(st_FILELOADINFO* fli, f64* data, s32 count);
s32 ReadIFloats(st_FILELOADINFO* fli, f32* data, s32 count);
s32 ReadILongs(st_FILELOADINFO* fli, s32* data, s32 count);
s32 ReadIShorts(st_FILELOADINFO* fli, s16* data, s32 count);
s32 ReadMDoubles(st_FILELOADINFO* fli, f64* data, s32 count);
s32 ReadMFloats(st_FILELOADINFO* fli, f32* data, s32 count);
s32 ReadMLongs(st_FILELOADINFO* fli, s32* data, s32 count);
s32 ReadMShorts(st_FILELOADINFO* fli, s16* data, s32 count);
s32 ReadBytes(st_FILELOADINFO* fli, s8* data, s32 count);
s32 ReadRaw(st_FILELOADINFO* fli, void* data, s32 size, s32 count);
void DiscardBuffer(st_FILELOADINFO* fli);
void SetBuffer(st_FILELOADINFO* fli, s8* dblbuffer, s32 bufsize);
s32 ReadSeek(st_FILELOADINFO* fli, s32 pos);
s32 SkipBytes(st_FILELOADINFO* fli, s32 fwd);
void LoadDestroy(st_FILELOADINFO* fli);
st_FILELOADINFO* xBinioLoadCreate(s8* filename);

// BFD_AsyncReadStatus__FP15st_FILELOADINFO
// Start address: 0x1bf7c0
en_BIO_ASYNC_ERRCODES BFD_AsyncReadStatus(st_FILELOADINFO* fli)
{
	en_BIO_ASYNC_ERRCODES status;
	st_BINIO_XTRADATA* xtra;
	XFILE_READSECTOR_STATUS xrdstat;
	s32 amtsofar;
}

// BFD_AsyncRead__FP15st_FILELOADINFOiPviii
// Start address: 0x1bf890
s32 BFD_AsyncRead(st_FILELOADINFO* fli, s32 pos, void* data, s32 size, s32 n)
{
	tag_xFile* file;
	st_BINIO_XTRADATA* xtra;
	s32 result;
	s32 rc;
}

// BFD_cb_GCP2_readasync__FP9tag_xFile
// Start address: 0x1bf990
void BFD_cb_GCP2_readasync()
{
}

// BFD_read__FPviiP9tag_xFilePv
// Start address: 0x1bf9a0
s32 BFD_read(void* data, s32 elesize, s32 elecnt, tag_xFile* bffp, void* xtradata)
{
	st_BINIO_XTRADATA* xtra;
	s8* dest;
	s32 readbeg;
	s32 refill;
	s32 remain;
	s32 actual;
	u32 holdpos;
	u32 safety;
	u32 numBytes;
}

// BFD_open__FPCcPCcUiiPv
// Start address: 0x1bfbf0
tag_xFile* BFD_open(s8* filename, s8* mode, u32 lockid, void* xtradata)
{
	tag_xFile* bffp;
	u32 orc;
	st_BINIO_XTRADATA* xtra;
	s32 xfflg;
}

// Swap8__FPci
// Start address: 0x1bfd00
void Swap8(s8* d, s32 n)
{
	s8 t;
}

// AsyncReadStatus__FP15st_FILELOADINFO
// Start address: 0x1bfd70
en_BIO_ASYNC_ERRCODES AsyncReadStatus(st_FILELOADINFO* fli)
{
}

// AsyncIRead__FP15st_FILELOADINFOiPcii
// Start address: 0x1bfd80
s32 AsyncIRead(st_FILELOADINFO* fli, s32 offset, s8* data, s32 size, s32 n)
{
}

// AsyncMRead__FP15st_FILELOADINFOiPcii
// Start address: 0x1bfd90
s32 AsyncMRead(st_FILELOADINFO* fli, s32 offset, s8* data, s32 size, s32 n)
{
}

// ReadIDoubles__FP15st_FILELOADINFOPdi
// Start address: 0x1bfda0
s32 ReadIDoubles(st_FILELOADINFO* fli, f64* data, s32 count)
{
	s32 act;
}

// ReadIFloats__FP15st_FILELOADINFOPfi
// Start address: 0x1bfdb0
s32 ReadIFloats(st_FILELOADINFO* fli, f32* data, s32 count)
{
	s32 act;
}

// ReadILongs__FP15st_FILELOADINFOPii
// Start address: 0x1bfdc0
s32 ReadILongs(st_FILELOADINFO* fli, s32* data, s32 count)
{
	s32 act;
}

// ReadIShorts__FP15st_FILELOADINFOPsi
// Start address: 0x1bfdd0
s32 ReadIShorts(st_FILELOADINFO* fli, s16* data, s32 count)
{
	s32 act;
}

// ReadMDoubles__FP15st_FILELOADINFOPdi
// Start address: 0x1bfde0
s32 ReadMDoubles(st_FILELOADINFO* fli, f64* data, s32 count)
{
	s32 act;
}

// ReadMFloats__FP15st_FILELOADINFOPfi
// Start address: 0x1bfe20
s32 ReadMFloats(st_FILELOADINFO* fli, f32* data, s32 count)
{
	s32 act;
}

// ReadMLongs__FP15st_FILELOADINFOPii
// Start address: 0x1bfe90
s32 ReadMLongs(st_FILELOADINFO* fli, s32* data, s32 count)
{
	s32 act;
}

// ReadMShorts__FP15st_FILELOADINFOPsi
// Start address: 0x1bff00
s32 ReadMShorts(st_FILELOADINFO* fli, s16* data, s32 count)
{
	s32 act;
}

// ReadBytes__FP15st_FILELOADINFOPci
// Start address: 0x1bff60
s32 ReadBytes(st_FILELOADINFO* fli, s8* data, s32 count)
{
	s32 act;
}

// ReadRaw__FP15st_FILELOADINFOPvii
// Start address: 0x1bff70
s32 ReadRaw(st_FILELOADINFO* fli, void* data, s32 size, s32 count)
{
	tag_xFile* file;
	s32 amt;
	s32 n;
}

// DiscardBuffer__FP15st_FILELOADINFO
// Start address: 0x1c0040
void DiscardBuffer(st_FILELOADINFO* fli)
{
}

// SetBuffer__FP15st_FILELOADINFOPci
// Start address: 0x1c0070
void SetBuffer(st_FILELOADINFO* fli, s8* dblbuffer, s32 bufsize)
{
	st_BINIO_XTRADATA* xtra;
}

// ReadSeek__FP15st_FILELOADINFOi
// Start address: 0x1c00a0
s32 ReadSeek(st_FILELOADINFO* fli, s32 pos)
{
	tag_xFile* file;
}

// SkipBytes__FP15st_FILELOADINFOi
// Start address: 0x1c0150
s32 SkipBytes(st_FILELOADINFO* fli, s32 fwd)
{
	tag_xFile* file;
}

// LoadDestroy__FP15st_FILELOADINFO
// Start address: 0x1c0240
void LoadDestroy(st_FILELOADINFO* fli)
{
	tag_xFile* fp;
	u32 lockid;
}

// xBinioLoadCreate__FPCc
// Start address: 0x1c02c0
st_FILELOADINFO* xBinioLoadCreate(s8* filename)
{
	st_FILELOADINFO* fli;
	tag_xFile* tmp_fp;
	s32 i;
	s32 uselock;
}

