typedef struct tag_xFile;
typedef struct st_FILELOADINFO;
typedef struct st_BINIO_XTRADATA;
typedef enum en_FIOERRCODES;
typedef enum en_BIO_ASYNC_ERRCODES;
typedef struct tag_iFile;
typedef enum XFILE_READSECTOR_STATUS;

typedef void(*type_0)(st_FILELOADINFO*);
typedef int32(*type_1)(st_FILELOADINFO*, int32, int8*, int32, int32);
typedef int32(*type_2)(st_FILELOADINFO*, float64*, int32);
typedef int32(*type_3)(st_FILELOADINFO*, int32, int8*, int32, int32);
typedef void(*type_4)(st_FILELOADINFO*);
typedef int32(*type_5)(st_FILELOADINFO*, int32, int8*, int32, int32);
typedef en_BIO_ASYNC_ERRCODES(*type_6)(st_FILELOADINFO*);
typedef int32(*type_7)(st_FILELOADINFO*, int32, int8*, int32, int32);
typedef int32(*type_8)(st_FILELOADINFO*, int32);
typedef en_BIO_ASYNC_ERRCODES(*type_10)(st_FILELOADINFO*);
typedef int32(*type_11)(st_FILELOADINFO*, int32);
typedef void(*type_13)(st_FILELOADINFO*);
typedef void(*type_14)(st_FILELOADINFO*, int8*, int32);
typedef int32(*type_15)(st_FILELOADINFO*, int8*, int32);
typedef void(*type_16)(st_FILELOADINFO*);
typedef int32(*type_17)(st_FILELOADINFO*, int16*, int32);
typedef int32(*type_19)(st_FILELOADINFO*, int32*, int32);
typedef int32(*type_20)(st_FILELOADINFO*, int8*, int32);
typedef int32(*type_21)(st_FILELOADINFO*, float32*, int32);
typedef int32(*type_22)(st_FILELOADINFO*, int16*, int32);
typedef int32(*type_23)(st_FILELOADINFO*, float64*, int32);
typedef int32(*type_25)(st_FILELOADINFO*, int16*, int32);
typedef int32(*type_26)(st_FILELOADINFO*, int32*, int32);
typedef int32(*type_27)(st_FILELOADINFO*, int32*, int32);
typedef int32(*type_28)(st_FILELOADINFO*, float32*, int32);
typedef int32(*type_29)(st_FILELOADINFO*, float32*, int32);
typedef int32(*type_31)(st_FILELOADINFO*, float64*, int32);
typedef int32(*type_32)(st_FILELOADINFO*, float64*, int32);
typedef int32(*type_33)(st_FILELOADINFO*, int16*, int32);
typedef int32(*type_34)(st_FILELOADINFO*, int32);
typedef int32(*type_36)(st_FILELOADINFO*, int32);
typedef int32(*type_37)(st_FILELOADINFO*, int32*, int32);
typedef void(*type_38)(tag_xFile*);
typedef void(*type_39)(st_FILELOADINFO*, int8*, int32);
typedef int32(*type_40)(st_FILELOADINFO*, float32*, int32);

typedef st_FILELOADINFO type_9[8];
typedef st_BINIO_XTRADATA type_12[8];
typedef int8 type_18[128];
typedef int8 type_24[32];
typedef uint32 type_30[3];
typedef tag_xFile type_35[8];

struct tag_xFile
{
	int8 relname[32];
	tag_iFile ps;
	void* user_data;
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

struct st_BINIO_XTRADATA
{
	int8* dbl_buf;
	int32 dblbuf_size;
	int32 dbl_beg;
	int32 dbl_end;
	int32 dbl_amt;
	uint32 fpos;
	int8* asyn_data;
	int32 asyn_amt;
	int32 asyn_elesize;
	int32 asyn_ismot;
	en_BIO_ASYNC_ERRCODES asyn_status;
	uint32 pad[3];
	int32 gcaskey;
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
	uint32 flags;
	int8 path[128];
	int32 fd;
	int32 offset;
	int32 length;
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

uint32 g_loadlock;
st_FILELOADINFO g_loadinst[8];
tag_xFile g_xfload[8];
st_BINIO_XTRADATA g_xtraload[8];
st_BINIO_XTRADATA* g_async_context;
void(*BFD_cb_GCP2_readasync)(tag_xFile*);
void(*DiscardBuffer)(st_FILELOADINFO*);
void(*SetBuffer)(st_FILELOADINFO*, int8*, int32);
int32(*ReadSeek)(st_FILELOADINFO*, int32);
int32(*SkipBytes)(st_FILELOADINFO*, int32);
en_BIO_ASYNC_ERRCODES(*AsyncReadStatus)(st_FILELOADINFO*);
int32(*AsyncMRead)(st_FILELOADINFO*, int32, int8*, int32, int32);
int32(*AsyncIRead)(st_FILELOADINFO*, int32, int8*, int32, int32);
int32(*ReadIDoubles)(st_FILELOADINFO*, float64*, int32);
int32(*ReadIFloats)(st_FILELOADINFO*, float32*, int32);
int32(*ReadILongs)(st_FILELOADINFO*, int32*, int32);
int32(*ReadIShorts)(st_FILELOADINFO*, int16*, int32);
int32(*ReadMDoubles)(st_FILELOADINFO*, float64*, int32);
int32(*ReadMFloats)(st_FILELOADINFO*, float32*, int32);
int32(*ReadMLongs)(st_FILELOADINFO*, int32*, int32);
int32(*ReadMShorts)(st_FILELOADINFO*, int16*, int32);
int32(*ReadBytes)(st_FILELOADINFO*, int8*, int32);
void(*LoadDestroy)(st_FILELOADINFO*);

en_BIO_ASYNC_ERRCODES BFD_AsyncReadStatus(st_FILELOADINFO* fli);
int32 BFD_AsyncRead(st_FILELOADINFO* fli, int32 pos, void* data, int32 size, int32 n);
void BFD_cb_GCP2_readasync();
int32 BFD_read(void* data, int32 elesize, int32 elecnt, tag_xFile* bffp, void* xtradata);
tag_xFile* BFD_open(int8* filename, int8* mode, uint32 lockid, void* xtradata);
void Swap8(int8* d, int32 n);
en_BIO_ASYNC_ERRCODES AsyncReadStatus(st_FILELOADINFO* fli);
int32 AsyncIRead(st_FILELOADINFO* fli, int32 offset, int8* data, int32 size, int32 n);
int32 AsyncMRead(st_FILELOADINFO* fli, int32 offset, int8* data, int32 size, int32 n);
int32 ReadIDoubles(st_FILELOADINFO* fli, float64* data, int32 count);
int32 ReadIFloats(st_FILELOADINFO* fli, float32* data, int32 count);
int32 ReadILongs(st_FILELOADINFO* fli, int32* data, int32 count);
int32 ReadIShorts(st_FILELOADINFO* fli, int16* data, int32 count);
int32 ReadMDoubles(st_FILELOADINFO* fli, float64* data, int32 count);
int32 ReadMFloats(st_FILELOADINFO* fli, float32* data, int32 count);
int32 ReadMLongs(st_FILELOADINFO* fli, int32* data, int32 count);
int32 ReadMShorts(st_FILELOADINFO* fli, int16* data, int32 count);
int32 ReadBytes(st_FILELOADINFO* fli, int8* data, int32 count);
int32 ReadRaw(st_FILELOADINFO* fli, void* data, int32 size, int32 count);
void DiscardBuffer(st_FILELOADINFO* fli);
void SetBuffer(st_FILELOADINFO* fli, int8* dblbuffer, int32 bufsize);
int32 ReadSeek(st_FILELOADINFO* fli, int32 pos);
int32 SkipBytes(st_FILELOADINFO* fli, int32 fwd);
void LoadDestroy(st_FILELOADINFO* fli);
st_FILELOADINFO* xBinioLoadCreate(int8* filename);

// BFD_AsyncReadStatus__FP15st_FILELOADINFO
// Start address: 0x1bf7c0
en_BIO_ASYNC_ERRCODES BFD_AsyncReadStatus(st_FILELOADINFO* fli)
{
	en_BIO_ASYNC_ERRCODES status;
	st_BINIO_XTRADATA* xtra;
	XFILE_READSECTOR_STATUS xrdstat;
	int32 amtsofar;
	// Line 2106, Address: 0x1bf7c0, Func Offset: 0
	// Line 2108, Address: 0x1bf7cc, Func Offset: 0xc
	// Line 2112, Address: 0x1bf7d0, Func Offset: 0x10
	// Line 2115, Address: 0x1bf7e0, Func Offset: 0x20
	// Line 2117, Address: 0x1bf7e8, Func Offset: 0x28
	// Line 2122, Address: 0x1bf7f0, Func Offset: 0x30
	// Line 2124, Address: 0x1bf800, Func Offset: 0x40
	// Line 2125, Address: 0x1bf804, Func Offset: 0x44
	// Line 2127, Address: 0x1bf810, Func Offset: 0x50
	// Line 2129, Address: 0x1bf834, Func Offset: 0x74
	// Line 2131, Address: 0x1bf838, Func Offset: 0x78
	// Line 2132, Address: 0x1bf83c, Func Offset: 0x7c
	// Line 2133, Address: 0x1bf844, Func Offset: 0x84
	// Line 2134, Address: 0x1bf848, Func Offset: 0x88
	// Line 2135, Address: 0x1bf84c, Func Offset: 0x8c
	// Line 2139, Address: 0x1bf854, Func Offset: 0x94
	// Line 2140, Address: 0x1bf858, Func Offset: 0x98
	// Line 2146, Address: 0x1bf860, Func Offset: 0xa0
	// Line 2147, Address: 0x1bf864, Func Offset: 0xa4
	// Line 2149, Address: 0x1bf878, Func Offset: 0xb8
	// Line 2150, Address: 0x1bf87c, Func Offset: 0xbc
	// Line 2154, Address: 0x1bf880, Func Offset: 0xc0
	// Func End, Address: 0x1bf890, Func Offset: 0xd0
}

// BFD_AsyncRead__FP15st_FILELOADINFOiPviii
// Start address: 0x1bf890
int32 BFD_AsyncRead(st_FILELOADINFO* fli, int32 pos, void* data, int32 size, int32 n)
{
	tag_xFile* file;
	st_BINIO_XTRADATA* xtra;
	int32 result;
	int32 rc;
	// Line 1970, Address: 0x1bf890, Func Offset: 0
	// Line 1986, Address: 0x1bf8bc, Func Offset: 0x2c
	// Line 1971, Address: 0x1bf8c0, Func Offset: 0x30
	// Line 1972, Address: 0x1bf8c4, Func Offset: 0x34
	// Line 1986, Address: 0x1bf8c8, Func Offset: 0x38
	// Line 1988, Address: 0x1bf8d8, Func Offset: 0x48
	// Line 1991, Address: 0x1bf8f0, Func Offset: 0x60
	// Line 1993, Address: 0x1bf8f4, Func Offset: 0x64
	// Line 2057, Address: 0x1bf8f8, Func Offset: 0x68
	// Line 1993, Address: 0x1bf8fc, Func Offset: 0x6c
	// Line 2057, Address: 0x1bf900, Func Offset: 0x70
	// Line 1994, Address: 0x1bf904, Func Offset: 0x74
	// Line 1995, Address: 0x1bf908, Func Offset: 0x78
	// Line 1996, Address: 0x1bf90c, Func Offset: 0x7c
	// Line 2057, Address: 0x1bf910, Func Offset: 0x80
	// Line 2063, Address: 0x1bf918, Func Offset: 0x88
	// Line 2065, Address: 0x1bf938, Func Offset: 0xa8
	// Line 2069, Address: 0x1bf948, Func Offset: 0xb8
	// Line 2070, Address: 0x1bf94c, Func Offset: 0xbc
	// Line 2074, Address: 0x1bf950, Func Offset: 0xc0
	// Line 2075, Address: 0x1bf958, Func Offset: 0xc8
	// Line 2076, Address: 0x1bf95c, Func Offset: 0xcc
	// Line 2101, Address: 0x1bf960, Func Offset: 0xd0
	// Line 2102, Address: 0x1bf968, Func Offset: 0xd8
	// Func End, Address: 0x1bf98c, Func Offset: 0xfc
}

// BFD_cb_GCP2_readasync__FP9tag_xFile
// Start address: 0x1bf990
void BFD_cb_GCP2_readasync()
{
	// Line 1964, Address: 0x1bf990, Func Offset: 0
	// Func End, Address: 0x1bf998, Func Offset: 0x8
}

// BFD_read__FPviiP9tag_xFilePv
// Start address: 0x1bf9a0
int32 BFD_read(void* data, int32 elesize, int32 elecnt, tag_xFile* bffp, void* xtradata)
{
	st_BINIO_XTRADATA* xtra;
	int8* dest;
	int32 readbeg;
	int32 refill;
	int32 remain;
	int32 actual;
	uint32 holdpos;
	uint32 safety;
	uint32 numBytes;
	// Line 1688, Address: 0x1bf9a0, Func Offset: 0
	// Line 1705, Address: 0x1bf9b8, Func Offset: 0x18
	// Line 1688, Address: 0x1bf9bc, Func Offset: 0x1c
	// Line 1694, Address: 0x1bf9c0, Func Offset: 0x20
	// Line 1688, Address: 0x1bf9c4, Func Offset: 0x24
	// Line 1690, Address: 0x1bf9d0, Func Offset: 0x30
	// Line 1688, Address: 0x1bf9d4, Func Offset: 0x34
	// Line 1696, Address: 0x1bf9dc, Func Offset: 0x3c
	// Line 1688, Address: 0x1bf9e0, Func Offset: 0x40
	// Line 1703, Address: 0x1bf9e4, Func Offset: 0x44
	// Line 1710, Address: 0x1bf9e8, Func Offset: 0x48
	// Line 1712, Address: 0x1bf9f8, Func Offset: 0x58
	// Line 1726, Address: 0x1bfa18, Func Offset: 0x78
	// Line 1727, Address: 0x1bfa28, Func Offset: 0x88
	// Line 1731, Address: 0x1bfa38, Func Offset: 0x98
	// Line 1727, Address: 0x1bfa3c, Func Offset: 0x9c
	// Line 1731, Address: 0x1bfa40, Func Offset: 0xa0
	// Line 1734, Address: 0x1bfa44, Func Offset: 0xa4
	// Line 1740, Address: 0x1bfa50, Func Offset: 0xb0
	// Line 1745, Address: 0x1bfa54, Func Offset: 0xb4
	// Line 1740, Address: 0x1bfa58, Func Offset: 0xb8
	// Line 1749, Address: 0x1bfa5c, Func Offset: 0xbc
	// Line 1754, Address: 0x1bfa6c, Func Offset: 0xcc
	// Line 1758, Address: 0x1bfa70, Func Offset: 0xd0
	// Line 1754, Address: 0x1bfa74, Func Offset: 0xd4
	// Line 1756, Address: 0x1bfa8c, Func Offset: 0xec
	// Line 1759, Address: 0x1bfa9c, Func Offset: 0xfc
	// Line 1760, Address: 0x1bfaa8, Func Offset: 0x108
	// Line 1763, Address: 0x1bfab8, Func Offset: 0x118
	// Line 1767, Address: 0x1bfabc, Func Offset: 0x11c
	// Line 1763, Address: 0x1bfac0, Func Offset: 0x120
	// Line 1765, Address: 0x1bfad8, Func Offset: 0x138
	// Line 1766, Address: 0x1bfae8, Func Offset: 0x148
	// Line 1768, Address: 0x1bfaec, Func Offset: 0x14c
	// Line 1774, Address: 0x1bfaf0, Func Offset: 0x150
	// Line 1777, Address: 0x1bfaf8, Func Offset: 0x158
	// Line 1776, Address: 0x1bfb00, Func Offset: 0x160
	// Line 1777, Address: 0x1bfb04, Func Offset: 0x164
	// Line 1778, Address: 0x1bfb0c, Func Offset: 0x16c
	// Line 1781, Address: 0x1bfb10, Func Offset: 0x170
	// Line 1783, Address: 0x1bfb24, Func Offset: 0x184
	// Line 1798, Address: 0x1bfb28, Func Offset: 0x188
	// Line 1805, Address: 0x1bfb38, Func Offset: 0x198
	// Line 1806, Address: 0x1bfb44, Func Offset: 0x1a4
	// Line 1811, Address: 0x1bfb58, Func Offset: 0x1b8
	// Line 1814, Address: 0x1bfb70, Func Offset: 0x1d0
	// Line 1813, Address: 0x1bfb74, Func Offset: 0x1d4
	// Line 1815, Address: 0x1bfb78, Func Offset: 0x1d8
	// Line 1814, Address: 0x1bfb7c, Func Offset: 0x1dc
	// Line 1816, Address: 0x1bfb84, Func Offset: 0x1e4
	// Line 1820, Address: 0x1bfb88, Func Offset: 0x1e8
	// Line 1821, Address: 0x1bfb90, Func Offset: 0x1f0
	// Line 1824, Address: 0x1bfb9c, Func Offset: 0x1fc
	// Line 1828, Address: 0x1bfbac, Func Offset: 0x20c
	// Line 1830, Address: 0x1bfbb0, Func Offset: 0x210
	// Line 1831, Address: 0x1bfbc0, Func Offset: 0x220
	// Func End, Address: 0x1bfbf0, Func Offset: 0x250
}

// BFD_open__FPCcPCcUiiPv
// Start address: 0x1bfbf0
tag_xFile* BFD_open(int8* filename, int8* mode, uint32 lockid, void* xtradata)
{
	tag_xFile* bffp;
	uint32 orc;
	st_BINIO_XTRADATA* xtra;
	int32 xfflg;
	// Line 1575, Address: 0x1bfbf0, Func Offset: 0
	// Line 1587, Address: 0x1bfc08, Func Offset: 0x18
	// Line 1575, Address: 0x1bfc0c, Func Offset: 0x1c
	// Line 1579, Address: 0x1bfc1c, Func Offset: 0x2c
	// Line 1587, Address: 0x1bfc20, Func Offset: 0x30
	// Line 1588, Address: 0x1bfc38, Func Offset: 0x48
	// Line 1590, Address: 0x1bfc50, Func Offset: 0x60
	// Line 1591, Address: 0x1bfc58, Func Offset: 0x68
	// Line 1596, Address: 0x1bfc70, Func Offset: 0x80
	// Line 1600, Address: 0x1bfc78, Func Offset: 0x88
	// Line 1601, Address: 0x1bfc7c, Func Offset: 0x8c
	// Line 1609, Address: 0x1bfc80, Func Offset: 0x90
	// Line 1610, Address: 0x1bfc88, Func Offset: 0x98
	// Line 1613, Address: 0x1bfc94, Func Offset: 0xa4
	// Line 1614, Address: 0x1bfca8, Func Offset: 0xb8
	// Line 1618, Address: 0x1bfcb0, Func Offset: 0xc0
	// Line 1621, Address: 0x1bfcb8, Func Offset: 0xc8
	// Line 1622, Address: 0x1bfcbc, Func Offset: 0xcc
	// Line 1623, Address: 0x1bfcc0, Func Offset: 0xd0
	// Line 1624, Address: 0x1bfcc4, Func Offset: 0xd4
	// Line 1625, Address: 0x1bfcc8, Func Offset: 0xd8
	// Line 1626, Address: 0x1bfccc, Func Offset: 0xdc
	// Line 1631, Address: 0x1bfcd0, Func Offset: 0xe0
	// Line 1632, Address: 0x1bfcd4, Func Offset: 0xe4
	// Func End, Address: 0x1bfcf4, Func Offset: 0x104
}

// Swap8__FPci
// Start address: 0x1bfd00
void Swap8(int8* d, int32 n)
{
	int8 t;
	// Line 1274, Address: 0x1bfd00, Func Offset: 0
	// Line 1275, Address: 0x1bfd10, Func Offset: 0x10
	// Line 1276, Address: 0x1bfd14, Func Offset: 0x14
	// Line 1292, Address: 0x1bfd18, Func Offset: 0x18
	// Line 1276, Address: 0x1bfd20, Func Offset: 0x20
	// Line 1277, Address: 0x1bfd24, Func Offset: 0x24
	// Line 1279, Address: 0x1bfd28, Func Offset: 0x28
	// Line 1280, Address: 0x1bfd2c, Func Offset: 0x2c
	// Line 1281, Address: 0x1bfd34, Func Offset: 0x34
	// Line 1283, Address: 0x1bfd38, Func Offset: 0x38
	// Line 1284, Address: 0x1bfd3c, Func Offset: 0x3c
	// Line 1285, Address: 0x1bfd44, Func Offset: 0x44
	// Line 1287, Address: 0x1bfd48, Func Offset: 0x48
	// Line 1288, Address: 0x1bfd4c, Func Offset: 0x4c
	// Line 1289, Address: 0x1bfd54, Func Offset: 0x54
	// Line 1292, Address: 0x1bfd58, Func Offset: 0x58
	// Line 1294, Address: 0x1bfd60, Func Offset: 0x60
	// Func End, Address: 0x1bfd68, Func Offset: 0x68
}

// AsyncReadStatus__FP15st_FILELOADINFO
// Start address: 0x1bfd70
en_BIO_ASYNC_ERRCODES AsyncReadStatus(st_FILELOADINFO* fli)
{
	// Line 844, Address: 0x1bfd70, Func Offset: 0
	// Func End, Address: 0x1bfd78, Func Offset: 0x8
}

// AsyncIRead__FP15st_FILELOADINFOiPcii
// Start address: 0x1bfd80
int32 AsyncIRead(st_FILELOADINFO* fli, int32 offset, int8* data, int32 size, int32 n)
{
	// Line 838, Address: 0x1bfd80, Func Offset: 0
	// Func End, Address: 0x1bfd88, Func Offset: 0x8
}

// AsyncMRead__FP15st_FILELOADINFOiPcii
// Start address: 0x1bfd90
int32 AsyncMRead(st_FILELOADINFO* fli, int32 offset, int8* data, int32 size, int32 n)
{
	// Line 832, Address: 0x1bfd90, Func Offset: 0
	// Func End, Address: 0x1bfd98, Func Offset: 0x8
}

// ReadIDoubles__FP15st_FILELOADINFOPdi
// Start address: 0x1bfda0
int32 ReadIDoubles(st_FILELOADINFO* fli, float64* data, int32 count)
{
	int32 act;
	// Line 822, Address: 0x1bfda4, Func Offset: 0x4
	// Func End, Address: 0x1bfdac, Func Offset: 0xc
}

// ReadIFloats__FP15st_FILELOADINFOPfi
// Start address: 0x1bfdb0
int32 ReadIFloats(st_FILELOADINFO* fli, float32* data, int32 count)
{
	int32 act;
	// Line 809, Address: 0x1bfdb4, Func Offset: 0x4
	// Func End, Address: 0x1bfdbc, Func Offset: 0xc
}

// ReadILongs__FP15st_FILELOADINFOPii
// Start address: 0x1bfdc0
int32 ReadILongs(st_FILELOADINFO* fli, int32* data, int32 count)
{
	int32 act;
	// Line 795, Address: 0x1bfdc4, Func Offset: 0x4
	// Func End, Address: 0x1bfdcc, Func Offset: 0xc
}

// ReadIShorts__FP15st_FILELOADINFOPsi
// Start address: 0x1bfdd0
int32 ReadIShorts(st_FILELOADINFO* fli, int16* data, int32 count)
{
	int32 act;
	// Line 782, Address: 0x1bfdd4, Func Offset: 0x4
	// Func End, Address: 0x1bfddc, Func Offset: 0xc
}

// ReadMDoubles__FP15st_FILELOADINFOPdi
// Start address: 0x1bfde0
int32 ReadMDoubles(st_FILELOADINFO* fli, float64* data, int32 count)
{
	int32 act;
	// Line 765, Address: 0x1bfde0, Func Offset: 0
	// Line 767, Address: 0x1bfdec, Func Offset: 0xc
	// Line 765, Address: 0x1bfdf0, Func Offset: 0x10
	// Line 767, Address: 0x1bfdf4, Func Offset: 0x14
	// Line 768, Address: 0x1bfdfc, Func Offset: 0x1c
	// Line 770, Address: 0x1bfe08, Func Offset: 0x28
	// Func End, Address: 0x1bfe18, Func Offset: 0x38
}

// ReadMFloats__FP15st_FILELOADINFOPfi
// Start address: 0x1bfe20
int32 ReadMFloats(st_FILELOADINFO* fli, float32* data, int32 count)
{
	int32 act;
	// Line 752, Address: 0x1bfe20, Func Offset: 0
	// Line 754, Address: 0x1bfe2c, Func Offset: 0xc
	// Line 752, Address: 0x1bfe30, Func Offset: 0x10
	// Line 754, Address: 0x1bfe34, Func Offset: 0x14
	// Line 755, Address: 0x1bfe3c, Func Offset: 0x1c
	// Line 757, Address: 0x1bfe80, Func Offset: 0x60
	// Func End, Address: 0x1bfe90, Func Offset: 0x70
}

// ReadMLongs__FP15st_FILELOADINFOPii
// Start address: 0x1bfe90
int32 ReadMLongs(st_FILELOADINFO* fli, int32* data, int32 count)
{
	int32 act;
	// Line 737, Address: 0x1bfe90, Func Offset: 0
	// Line 739, Address: 0x1bfe9c, Func Offset: 0xc
	// Line 737, Address: 0x1bfea0, Func Offset: 0x10
	// Line 739, Address: 0x1bfea4, Func Offset: 0x14
	// Line 740, Address: 0x1bfeac, Func Offset: 0x1c
	// Line 742, Address: 0x1bfef0, Func Offset: 0x60
	// Func End, Address: 0x1bff00, Func Offset: 0x70
}

// ReadMShorts__FP15st_FILELOADINFOPsi
// Start address: 0x1bff00
int32 ReadMShorts(st_FILELOADINFO* fli, int16* data, int32 count)
{
	int32 act;
	// Line 723, Address: 0x1bff00, Func Offset: 0
	// Line 725, Address: 0x1bff0c, Func Offset: 0xc
	// Line 723, Address: 0x1bff10, Func Offset: 0x10
	// Line 725, Address: 0x1bff14, Func Offset: 0x14
	// Line 726, Address: 0x1bff1c, Func Offset: 0x1c
	// Line 728, Address: 0x1bff50, Func Offset: 0x50
	// Func End, Address: 0x1bff60, Func Offset: 0x60
}

// ReadBytes__FP15st_FILELOADINFOPci
// Start address: 0x1bff60
int32 ReadBytes(st_FILELOADINFO* fli, int8* data, int32 count)
{
	int32 act;
	// Line 710, Address: 0x1bff64, Func Offset: 0x4
	// Func End, Address: 0x1bff6c, Func Offset: 0xc
}

// ReadRaw__FP15st_FILELOADINFOPvii
// Start address: 0x1bff70
int32 ReadRaw(st_FILELOADINFO* fli, void* data, int32 size, int32 count)
{
	tag_xFile* file;
	int32 amt;
	int32 n;
	// Line 670, Address: 0x1bff70, Func Offset: 0
	// Line 677, Address: 0x1bff88, Func Offset: 0x18
	// Line 672, Address: 0x1bff8c, Func Offset: 0x1c
	// Line 677, Address: 0x1bff90, Func Offset: 0x20
	// Line 681, Address: 0x1bffa4, Func Offset: 0x34
	// Line 683, Address: 0x1bffc8, Func Offset: 0x58
	// Line 685, Address: 0x1bffd0, Func Offset: 0x60
	// Line 688, Address: 0x1bffe8, Func Offset: 0x78
	// Line 692, Address: 0x1bfff8, Func Offset: 0x88
	// Line 693, Address: 0x1c0008, Func Offset: 0x98
	// Line 696, Address: 0x1c0014, Func Offset: 0xa4
	// Line 698, Address: 0x1c0018, Func Offset: 0xa8
	// Line 699, Address: 0x1c0020, Func Offset: 0xb0
	// Func End, Address: 0x1c0038, Func Offset: 0xc8
}

// DiscardBuffer__FP15st_FILELOADINFO
// Start address: 0x1c0040
void DiscardBuffer(st_FILELOADINFO* fli)
{
	// Line 650, Address: 0x1c0040, Func Offset: 0
	// Line 652, Address: 0x1c0060, Func Offset: 0x20
	// Func End, Address: 0x1c0068, Func Offset: 0x28
}

// SetBuffer__FP15st_FILELOADINFOPci
// Start address: 0x1c0070
void SetBuffer(st_FILELOADINFO* fli, int8* dblbuffer, int32 bufsize)
{
	st_BINIO_XTRADATA* xtra;
	// Line 641, Address: 0x1c0070, Func Offset: 0
	// Line 642, Address: 0x1c0074, Func Offset: 0x4
	// Line 643, Address: 0x1c007c, Func Offset: 0xc
	// Line 646, Address: 0x1c0090, Func Offset: 0x20
	// Func End, Address: 0x1c0098, Func Offset: 0x28
}

// ReadSeek__FP15st_FILELOADINFOi
// Start address: 0x1c00a0
int32 ReadSeek(st_FILELOADINFO* fli, int32 pos)
{
	tag_xFile* file;
	// Line 609, Address: 0x1c00a0, Func Offset: 0
	// Line 614, Address: 0x1c00b8, Func Offset: 0x18
	// Line 617, Address: 0x1c00d4, Func Offset: 0x34
	// Line 619, Address: 0x1c00dc, Func Offset: 0x3c
	// Line 617, Address: 0x1c00e0, Func Offset: 0x40
	// Line 619, Address: 0x1c00e4, Func Offset: 0x44
	// Line 621, Address: 0x1c00f4, Func Offset: 0x54
	// Line 623, Address: 0x1c0108, Func Offset: 0x68
	// Line 624, Address: 0x1c010c, Func Offset: 0x6c
	// Line 629, Address: 0x1c0118, Func Offset: 0x78
	// Line 630, Address: 0x1c0130, Func Offset: 0x90
	// Line 631, Address: 0x1c0138, Func Offset: 0x98
	// Func End, Address: 0x1c0150, Func Offset: 0xb0
}

// SkipBytes__FP15st_FILELOADINFOi
// Start address: 0x1c0150
int32 SkipBytes(st_FILELOADINFO* fli, int32 fwd)
{
	tag_xFile* file;
	// Line 576, Address: 0x1c0150, Func Offset: 0
	// Line 582, Address: 0x1c016c, Func Offset: 0x1c
	// Line 578, Address: 0x1c0170, Func Offset: 0x20
	// Line 582, Address: 0x1c0174, Func Offset: 0x24
	// Line 584, Address: 0x1c0188, Func Offset: 0x38
	// Line 585, Address: 0x1c0198, Func Offset: 0x48
	// Line 587, Address: 0x1c01a8, Func Offset: 0x58
	// Line 589, Address: 0x1c01c8, Func Offset: 0x78
	// Line 591, Address: 0x1c01e0, Func Offset: 0x90
	// Line 592, Address: 0x1c01ec, Func Offset: 0x9c
	// Line 598, Address: 0x1c01f8, Func Offset: 0xa8
	// Line 599, Address: 0x1c0210, Func Offset: 0xc0
	// Line 600, Address: 0x1c0218, Func Offset: 0xc8
	// Func End, Address: 0x1c0234, Func Offset: 0xe4
}

// LoadDestroy__FP15st_FILELOADINFO
// Start address: 0x1c0240
void LoadDestroy(st_FILELOADINFO* fli)
{
	tag_xFile* fp;
	uint32 lockid;
	// Line 515, Address: 0x1c0240, Func Offset: 0
	// Line 517, Address: 0x1c0254, Func Offset: 0x14
	// Line 523, Address: 0x1c0258, Func Offset: 0x18
	// Line 526, Address: 0x1c0280, Func Offset: 0x40
	// Line 527, Address: 0x1c0284, Func Offset: 0x44
	// Line 528, Address: 0x1c0294, Func Offset: 0x54
	// Line 531, Address: 0x1c02ac, Func Offset: 0x6c
	// Func End, Address: 0x1c02c0, Func Offset: 0x80
}

// xBinioLoadCreate__FPCc
// Start address: 0x1c02c0
st_FILELOADINFO* xBinioLoadCreate(int8* filename)
{
	st_FILELOADINFO* fli;
	tag_xFile* tmp_fp;
	int32 i;
	int32 uselock;
	// Line 418, Address: 0x1c02c0, Func Offset: 0
	// Line 427, Address: 0x1c02c4, Func Offset: 0x4
	// Line 418, Address: 0x1c02c8, Func Offset: 0x8
	// Line 420, Address: 0x1c02dc, Func Offset: 0x1c
	// Line 427, Address: 0x1c02e0, Func Offset: 0x20
	// Line 423, Address: 0x1c02e4, Func Offset: 0x24
	// Line 427, Address: 0x1c02ec, Func Offset: 0x2c
	// Line 428, Address: 0x1c02f4, Func Offset: 0x34
	// Line 429, Address: 0x1c0300, Func Offset: 0x40
	// Line 430, Address: 0x1c0304, Func Offset: 0x44
	// Line 431, Address: 0x1c0308, Func Offset: 0x48
	// Line 430, Address: 0x1c030c, Func Offset: 0x4c
	// Line 429, Address: 0x1c0324, Func Offset: 0x64
	// Line 432, Address: 0x1c0328, Func Offset: 0x68
	// Line 434, Address: 0x1c0330, Func Offset: 0x70
	// Line 437, Address: 0x1c0340, Func Offset: 0x80
	// Line 438, Address: 0x1c0348, Func Offset: 0x88
	// Line 441, Address: 0x1c0354, Func Offset: 0x94
	// Line 445, Address: 0x1c0364, Func Offset: 0xa4
	// Line 448, Address: 0x1c037c, Func Offset: 0xbc
	// Line 449, Address: 0x1c0380, Func Offset: 0xc0
	// Line 445, Address: 0x1c0384, Func Offset: 0xc4
	// Line 448, Address: 0x1c0388, Func Offset: 0xc8
	// Line 451, Address: 0x1c038c, Func Offset: 0xcc
	// Line 448, Address: 0x1c0390, Func Offset: 0xd0
	// Line 449, Address: 0x1c0394, Func Offset: 0xd4
	// Line 452, Address: 0x1c0398, Func Offset: 0xd8
	// Line 449, Address: 0x1c039c, Func Offset: 0xdc
	// Line 451, Address: 0x1c03a0, Func Offset: 0xe0
	// Line 453, Address: 0x1c03a4, Func Offset: 0xe4
	// Line 451, Address: 0x1c03a8, Func Offset: 0xe8
	// Line 452, Address: 0x1c03ac, Func Offset: 0xec
	// Line 454, Address: 0x1c03b0, Func Offset: 0xf0
	// Line 452, Address: 0x1c03b4, Func Offset: 0xf4
	// Line 453, Address: 0x1c03b8, Func Offset: 0xf8
	// Line 456, Address: 0x1c03bc, Func Offset: 0xfc
	// Line 453, Address: 0x1c03c0, Func Offset: 0x100
	// Line 454, Address: 0x1c03c4, Func Offset: 0x104
	// Line 457, Address: 0x1c03c8, Func Offset: 0x108
	// Line 454, Address: 0x1c03cc, Func Offset: 0x10c
	// Line 456, Address: 0x1c03d0, Func Offset: 0x110
	// Line 458, Address: 0x1c03d4, Func Offset: 0x114
	// Line 456, Address: 0x1c03d8, Func Offset: 0x118
	// Line 457, Address: 0x1c03dc, Func Offset: 0x11c
	// Line 459, Address: 0x1c03e0, Func Offset: 0x120
	// Line 457, Address: 0x1c03e4, Func Offset: 0x124
	// Line 458, Address: 0x1c03e8, Func Offset: 0x128
	// Line 461, Address: 0x1c03ec, Func Offset: 0x12c
	// Line 458, Address: 0x1c03f0, Func Offset: 0x130
	// Line 459, Address: 0x1c03f4, Func Offset: 0x134
	// Line 462, Address: 0x1c03f8, Func Offset: 0x138
	// Line 459, Address: 0x1c03fc, Func Offset: 0x13c
	// Line 461, Address: 0x1c0400, Func Offset: 0x140
	// Line 463, Address: 0x1c0404, Func Offset: 0x144
	// Line 461, Address: 0x1c0408, Func Offset: 0x148
	// Line 462, Address: 0x1c040c, Func Offset: 0x14c
	// Line 465, Address: 0x1c0410, Func Offset: 0x150
	// Line 462, Address: 0x1c0414, Func Offset: 0x154
	// Line 463, Address: 0x1c0418, Func Offset: 0x158
	// Line 467, Address: 0x1c041c, Func Offset: 0x15c
	// Line 463, Address: 0x1c0420, Func Offset: 0x160
	// Line 465, Address: 0x1c0424, Func Offset: 0x164
	// Line 468, Address: 0x1c0428, Func Offset: 0x168
	// Line 465, Address: 0x1c042c, Func Offset: 0x16c
	// Line 467, Address: 0x1c0430, Func Offset: 0x170
	// Line 469, Address: 0x1c0434, Func Offset: 0x174
	// Line 467, Address: 0x1c0438, Func Offset: 0x178
	// Line 468, Address: 0x1c043c, Func Offset: 0x17c
	// Line 469, Address: 0x1c0440, Func Offset: 0x180
	// Line 468, Address: 0x1c0444, Func Offset: 0x184
	// Line 469, Address: 0x1c0448, Func Offset: 0x188
	// Line 485, Address: 0x1c044c, Func Offset: 0x18c
	// Line 471, Address: 0x1c0450, Func Offset: 0x190
	// Line 485, Address: 0x1c0454, Func Offset: 0x194
	// Line 473, Address: 0x1c0458, Func Offset: 0x198
	// Line 485, Address: 0x1c045c, Func Offset: 0x19c
	// Line 474, Address: 0x1c0460, Func Offset: 0x1a0
	// Line 485, Address: 0x1c0464, Func Offset: 0x1a4
	// Line 475, Address: 0x1c0468, Func Offset: 0x1a8
	// Line 476, Address: 0x1c046c, Func Offset: 0x1ac
	// Line 478, Address: 0x1c0470, Func Offset: 0x1b0
	// Line 485, Address: 0x1c0474, Func Offset: 0x1b4
	// Line 487, Address: 0x1c0480, Func Offset: 0x1c0
	// Line 489, Address: 0x1c0488, Func Offset: 0x1c8
	// Line 492, Address: 0x1c048c, Func Offset: 0x1cc
	// Line 493, Address: 0x1c049c, Func Offset: 0x1dc
	// Line 495, Address: 0x1c04a0, Func Offset: 0x1e0
	// Line 499, Address: 0x1c04a8, Func Offset: 0x1e8
	// Line 500, Address: 0x1c04f8, Func Offset: 0x238
	// Line 499, Address: 0x1c04fc, Func Offset: 0x23c
	// Line 505, Address: 0x1c0508, Func Offset: 0x248
	// Line 506, Address: 0x1c050c, Func Offset: 0x24c
	// Func End, Address: 0x1c0524, Func Offset: 0x264
}

